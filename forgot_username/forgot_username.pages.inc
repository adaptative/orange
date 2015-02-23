<?php

/**
 * Form builder; Forgot username.
 *
 * @ingroup forms
 * @see user_username()
 * @see user_username_validate()
 * @see user_username_submit()
 */
 

/*
 * This function builds a form of "Forgotten username".
 */
function user_username() {
  global $user;
  $form['forgot_name_markup'] = array(
    '#markup' => t('<div class="forgot_name_markup"><p>Please enter your email address below and we\'ll email you a remider of your username</p><p>note: all @orange-ftgroup.com email addresses have been changed to @orange.com</p></div>'),
    '#weight' => 0,
  );
  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('e-mail address'),
    '#size' => 60,
    '#maxlength' => EMAIL_MAX_LENGTH,
    '#required' => TRUE,
    '#default_value' => '',
    '#attributes' => array('placeholder' => t('Email Address')),
  );
  // Allow logged in users to request this also.
  if ($user->uid > 0) {
    $form['name']['#type'] = 'value';
    $form['name']['#value'] = $user->mail;
    $form['mail'] = array(
      '#prefix' => '<p>',
      '#markup' =>  t('Username will be mailed to %email.', array('%email' => $user->mail)),
      '#suffix' => '</p>',
    );
  }
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array('#type' => 'submit', '#value' => t('Submit'));

  return $form;
}


/**
 * Form validation handler for user_username().
 *
 * @see user_username_submit()
 */
function user_username_validate($form, &$form_state) {
  $email = "/[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+/"; 
  $name = trim($form_state['values']['name']);
  
  if(!preg_match( $email, $name )){
    form_set_error('name', t('Please enter an e-mail address.'));
  }
  // Try to load by email.
  $users = user_load_multiple(array(), array('mail' => $name, 'status' => '1'));
  $account = reset($users);

  if (isset($account->uid)) {
    form_set_value(array('#parents' => array('account')), $account, $form_state);
  }
  else {
    form_set_error('name', t('Sorry, %name is not recognized as an e-mail address.', array('%name' => $name)));
  }
}


/**
 * Form submission handler for user_username().
 *
 * @see user_username_validate()
 */
function user_username_submit($form, &$form_state) {
  global $language;

  $account = $form_state['values']['account'];

  $mail = _user_mail_notify('recover_username', $account, $language);
	
  if (!empty($mail)) {
    watchdog('user', 'Username mailed to %email.', array('%email' => $account->mail));
    drupal_set_message(t('Username is sent to your e-mail address.'));
  }

  $form_state['redirect'] = 'user';
  return;
}