<?php
/**
 * @file
 * orange_feature.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function orange_feature_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['global']['default'] = array(
  'admin_theme' => 'seven',
  'anonymous' => 'Anonymous',
  'backup_migrate_copy_destination_id' => '',
  'backup_migrate_destination_id' => 'download',
  'backup_migrate_profile_id' => 'default',
  'backup_migrate_source_id' => 'db',
  'clean_url' => 1,
  'comment_page' => 0,
  'cron_key' => '1y9twXAEsAtHFLsY-aVFpL5cpA7P-c-mgkQNNkyFGyI',
  'cron_last' => 1424948682,
  'css_js_query_string' => 'nkdpt3',
  'date_default_timezone' => 'Asia/Kolkata',
  'default_field_group' => array(
    'group_orange_contact|user|user|form' => TRUE,
  ),
  'default_nodes_main' => 10,
  'drupal_http_request_fails' => FALSE,
  'drupal_private_key' => 'P0UUddNuUqYHQNwx_dLo1kosiNJXGbYHQrTwFcikzzc',
  'email__active_tab' => 'edit-email-decline-orange-user',
  'entity_cache_tables_created' => NULL,
  'features_ignored_orphans' => array(),
  'field_bundle_settings_user__user' => array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'account' => array(
          'weight' => 2,
        ),
        'timezone' => array(
          'weight' => -1,
        ),
        'picture' => array(
          'weight' => 6,
        ),
        'overlay_control' => array(
          'weight' => 7,
        ),
        'locale' => array(
          'weight' => 5,
        ),
      ),
      'display' => array(),
    ),
  ),
  'file_default_scheme' => 'public',
  'file_private_path' => 'sites/default/files/private',
  'file_public_path' => 'sites/default/files',
  'file_temporary_path' => 'tmp',
  'filter_fallback_format' => 'plain_text',
  'forgot_username_mail_recover_username_body' => 'Hello,

A request to username for your account has been made at [site:name].

username: [user:name]

--  [site:name] team',
  'forgot_username_mail_recover_username_subject' => 'Username request at [site:name]',
  'install_profile' => 'standard',
  'install_task' => 'done',
  'install_time' => 1424068037,
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'misc/jquery.js',
    2 => 'misc/jquery.once.js',
    'refresh:fr' => 'waiting',
    3 => 'sites/all/modules/admin_menu/admin_devel/admin_devel.js',
    4 => 'sites/all/modules/orange_registration/orange_registration.js',
    5 => 'modules/contextual/contextual.js',
    6 => 'sites/all/modules/admin_menu/admin_menu.js',
    7 => 'sites/all/modules/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js',
    8 => 'misc/tableheader.js',
    9 => 'misc/form.js',
    10 => 'misc/collapse.js',
    11 => 'misc/states.js',
    12 => 'sites/all/modules/features/features.js',
    13 => 'misc/machine-name.js',
    14 => 'misc/autocomplete.js',
    15 => 'misc/jquery.cookie.js',
    16 => 'misc/jquery.form.js',
    17 => 'misc/progress.js',
    18 => 'misc/ajax.js',
    19 => 'misc/ui/jquery.ui.core.min.js',
    20 => 'misc/ui/jquery.ui.widget.min.js',
    21 => 'misc/ui/jquery.ui.button.min.js',
    22 => 'misc/ui/jquery.ui.mouse.min.js',
    23 => 'misc/ui/jquery.ui.draggable.min.js',
    24 => 'misc/ui/jquery.ui.position.min.js',
    25 => 'misc/ui/jquery.ui.resizable.min.js',
    26 => 'misc/ui/jquery.ui.dialog.min.js',
  ),
  'language_count' => 2,
  'language_default' => array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => 0,
    'javascript' => '',
  ),
  'language_negotiation_language' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  ),
  'language_negotiation_language_content' => array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_negotiation_language_url' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_types' => array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  ),
  'locale_language_negotiation_url_part' => 0,
  'locale_language_providers_weight_language' => array(
    'locale-url' => -8,
    'locale-session' => -6,
    'locale-user' => -4,
    'locale-browser' => -2,
    'language-default' => 10,
  ),
  'maintenance_mode' => 0,
  'menu_expanded' => array(),
  'menu_masks' => array(
    0 => 501,
    1 => 493,
    2 => 255,
    3 => 250,
    4 => 247,
    5 => 246,
    6 => 245,
    7 => 127,
    8 => 125,
    9 => 123,
    10 => 122,
    11 => 121,
    12 => 117,
    13 => 63,
    14 => 62,
    15 => 61,
    16 => 60,
    17 => 59,
    18 => 58,
    19 => 44,
    20 => 31,
    21 => 30,
    22 => 29,
    23 => 28,
    24 => 24,
    25 => 21,
    26 => 15,
    27 => 14,
    28 => 13,
    29 => 11,
    30 => 7,
    31 => 6,
    32 => 5,
    33 => 4,
    34 => 3,
    35 => 2,
    36 => 1,
  ),
  'node_admin_theme' => 1,
  'node_options_page' => array(
    0 => 'status',
  ),
  'node_submitted_page' => FALSE,
  'path_alias_whitelist' => array(),
  'site_403' => '',
  'site_404' => '',
  'site_default_country' => '',
  'site_frontpage' => 'node',
  'site_mail' => 'deepali.agarwal@addwebsolution.com',
  'site_name' => 'Orange',
  'site_slogan' => '',
  'terms_of_use_checkbox_label' => 'Terms & Conditions',
  'terms_of_use_fieldset_name' => '',
  'terms_of_use_node_id' => '',
  'theme_bartik_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'scheme' => 'default',
    'palette' => array(
      'top' => '#0779bf',
      'bottom' => '#48a9e4',
      'bg' => '#ffffff',
      'sidebar' => '#f6f6f2',
      'sidebarborders' => '#f9f9f9',
      'footer' => '#292929',
      'titleslogan' => '#fffeff',
      'text' => '#3b3b3b',
      'link' => '#0071B3',
    ),
    'theme' => 'bartik',
    'info' => array(
      'fields' => array(
        'top' => 'Header top',
        'bottom' => 'Header bottom',
        'bg' => 'Main background',
        'sidebar' => 'Sidebar background',
        'sidebarborders' => 'Sidebar borders',
        'footer' => 'Footer background',
        'titleslogan' => 'Title and slogan',
        'text' => 'Text color',
        'link' => 'Link color',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Blue Lagoon (default)',
          'colors' => array(
            'top' => '#0779bf',
            'bottom' => '#48a9e4',
            'bg' => '#ffffff',
            'sidebar' => '#f6f6f2',
            'sidebarborders' => '#f9f9f9',
            'footer' => '#292929',
            'titleslogan' => '#fffeff',
            'text' => '#3b3b3b',
            'link' => '#0071B3',
          ),
        ),
        'firehouse' => array(
          'title' => 'Firehouse',
          'colors' => array(
            'top' => '#cd2d2d',
            'bottom' => '#cf3535',
            'bg' => '#ffffff',
            'sidebar' => '#f1f4f0',
            'sidebarborders' => '#ededed',
            'footer' => '#1f1d1c',
            'titleslogan' => '#fffeff',
            'text' => '#3b3b3b',
            'link' => '#d6121f',
          ),
        ),
        'ice' => array(
          'title' => 'Ice',
          'colors' => array(
            'top' => '#d0d0d0',
            'bottom' => '#c2c4c5',
            'bg' => '#ffffff',
            'sidebar' => '#ffffff',
            'sidebarborders' => '#cccccc',
            'footer' => '#24272c',
            'titleslogan' => '#000000',
            'text' => '#4a4a4a',
            'link' => '#019dbf',
          ),
        ),
        'plum' => array(
          'title' => 'Plum',
          'colors' => array(
            'top' => '#4c1c58',
            'bottom' => '#593662',
            'bg' => '#fffdf7',
            'sidebar' => '#edede7',
            'sidebarborders' => '#e7e7e7',
            'footer' => '#2c2c28',
            'titleslogan' => '#ffffff',
            'text' => '#301313',
            'link' => '#9d408d',
          ),
        ),
        'slate' => array(
          'title' => 'Slate',
          'colors' => array(
            'top' => '#4a4a4a',
            'bottom' => '#4e4e4e',
            'bg' => '#ffffff',
            'sidebar' => '#ffffff',
            'sidebarborders' => '#d0d0d0',
            'footer' => '#161617',
            'titleslogan' => '#ffffff',
            'text' => '#3b3b3b',
            'link' => '#0073b6',
          ),
        ),
        '' => array(
          'title' => 'Custom',
          'colors' => array(),
        ),
      ),
      'css' => array(
        0 => 'css/colors.css',
      ),
      'copy' => array(
        0 => 'logo.png',
      ),
      'gradients' => array(
        0 => array(
          'dimension' => array(
            0 => 0,
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'direction' => 'vertical',
          'colors' => array(
            0 => 'top',
            1 => 'bottom',
          ),
        ),
      ),
      'fill' => array(),
      'slices' => array(),
      'blend_target' => '#ffffff',
      'preview_css' => 'color/preview.css',
      'preview_js' => 'color/preview.js',
      'preview_html' => 'color/preview.html',
      'base_image' => 'color/base.png',
    ),
  ),
  'theme_default' => 'bartik',
  'update_last_check' => 1424948686,
  'user_admin_role' => 3,
  'user_cancel_method' => 'user_cancel_block',
  'user_email_verification' => 1,
  'user_mail_cancel_confirm_body' => '[user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:

[user:cancel-url]

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it is not used.

--  [site:name] team',
  'user_mail_cancel_confirm_subject' => 'Account cancellation request for [user:name] at [site:name]',
  'user_mail_decline_orange_user_body' => '[user:name],

Your application for an account is declined by orange user.

--  [site:name] team',
  'user_mail_decline_orange_user_subject' => 'Declined [user:name] at [site:name]',
  'user_mail_password_reset_body' => '[user:name],

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
  'user_mail_password_reset_subject' => 'Replacement login information for [user:name] at [site:name]',
  'user_mail_recover_username_body' => 'Hello,

A request to username for your account has been made at [site:name].

username: [user:name]

--  [site:name] team',
  'user_mail_recover_username_subject' => 'Username request at [site:name]',
  'user_mail_register_admin_created_body' => '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_admin_created_subject' => 'An administrator created an account for you at [site:name]',
  'user_mail_register_no_approval_required_body' => '[user:name],

Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_no_approval_required_subject' => 'Account details for [user:name] at [site:name]',
  'user_mail_register_pending_approval_body' => '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team',
  'user_mail_register_pending_approval_subject' => 'Account details for [user:name] at [site:name] (pending admin approval)',
  'user_mail_status_activated_body' => '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_status_activated_notify' => 1,
  'user_mail_status_activated_subject' => 'Account details for [user:name] at [site:name] (approved)',
  'user_mail_status_blocked_body' => '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team',
  'user_mail_status_blocked_notify' => 0,
  'user_mail_status_blocked_subject' => 'Account details for [user:name] at [site:name] (blocked)',
  'user_mail_status_canceled_body' => '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team',
  'user_mail_status_canceled_notify' => 0,
  'user_mail_status_canceled_subject' => 'Account details for [user:name] at [site:name] (canceled)',
  'user_mail_verify_orange_user_body' => '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending verification by orange user. Once it has been verified, mail will be sent to admin for further processing.

--  [site:name] team',
  'user_mail_verify_orange_user_subject' => 'Account details for [user:name] at [site:name] (pending orange verification)',
  'user_pictures' => 1,
  'user_picture_default' => '',
  'user_picture_dimensions' => '1024x1024',
  'user_picture_file_size' => 800,
  'user_picture_guidelines' => '',
  'user_picture_path' => 'pictures',
  'user_picture_style' => 'thumbnail',
  'user_register' => 1,
  'user_signatures' => 0,
  'variable_module_list' => array(
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'variable_realm' => array(
      0 => 'variable_realm_list_global',
      1 => 'variable_realm_list_language',
      2 => 'variable_realm_weight_global',
      3 => 'variable_realm_weight_language',
    ),
    'i18n_variable' => array(
      0 => 'i18n_variable_conf',
      1 => 'i18n_variable_list',
    ),
    'registration' => array(
      0 => 'user_mail_verify_orange_user_subject',
      1 => 'user_mail_verify_orange_user_body',
      2 => 'user_mail_decline_orange_user_subject',
      3 => 'user_mail_decline_orange_user_body',
    ),
    'orange_registration' => array(
      0 => 'user_mail_verify_orange_user_subject',
      1 => 'user_mail_verify_orange_user_body',
      2 => 'user_mail_decline_orange_user_subject',
      3 => 'user_mail_decline_orange_user_body',
    ),
  ),
  'variable_realm_list_language' => array(
    0 => 'user_mail_recover_username_[mail_part]',
    1 => 'user_mail_verify_orange_user_[mail_part]',
    2 => 'user_mail_decline_orange_user_[mail_part]',
    3 => 'user_mail_register_admin_created_[mail_part]',
    4 => 'user_mail_register_no_approval_required_[mail_part]',
    5 => 'user_mail_register_pending_approval_[mail_part]',
    6 => 'user_mail_password_reset_[mail_part]',
    7 => 'user_mail_status_activated_[mail_part]',
    8 => 'user_mail_status_blocked_[mail_part]',
    9 => 'user_mail_cancel_confirm_[mail_part]',
    10 => 'user_mail_status_canceled_[mail_part]',
    11 => 'site_name',
    12 => 'site_slogan',
    13 => 'forgot_username_mail_recover_username_[mail_part]',
  ),
  '404_fast_paths_exclude' => '/\\/(?:styles)\\//',
  '404_fast_paths' => '/\\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i',
  '404_fast_html' => '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>',
);
  $realm_variables['language']['en'] = array(
  'forgot_username_mail_recover_username_body' => 'Hello,

A request to username for your account has been made at [site:name].

username: [user:name]

--  [site:name] team',
  'forgot_username_mail_recover_username_subject' => 'Username request at [site:name]',
  'site_name' => 'Orange',
  'site_slogan' => '',
  'user_mail_cancel_confirm_body' => '[user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:

[user:cancel-url]

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it is not used.

--  [site:name] team',
  'user_mail_cancel_confirm_subject' => 'Account cancellation request for [user:name] at [site:name]',
  'user_mail_password_reset_body' => '[user:name],

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
  'user_mail_password_reset_subject' => 'Replacement login information for [user:name] at [site:name]',
  'user_mail_recover_username_body' => 'Hello,

A request to username for your account has been made at [site:name].

username: [user:name]

--  [site:name] team',
  'user_mail_recover_username_subject' => 'Username request at [site:name]',
  'user_mail_register_admin_created_body' => '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_admin_created_subject' => 'An administrator created an account for you at [site:name]',
  'user_mail_register_no_approval_required_body' => '[user:name],

Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_no_approval_required_subject' => 'Account details for [user:name] at [site:name]',
  'user_mail_register_pending_approval_body' => '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team',
  'user_mail_register_pending_approval_subject' => 'Account details for [user:name] at [site:name] (pending admin approval)',
  'user_mail_status_activated_body' => '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_status_activated_subject' => 'Account details for [user:name] at [site:name] (approved)',
  'user_mail_status_blocked_body' => '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team',
  'user_mail_status_blocked_subject' => 'Account details for [user:name] at [site:name] (blocked)',
  'user_mail_status_canceled_body' => '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team',
  'user_mail_status_canceled_subject' => 'Account details for [user:name] at [site:name] (canceled)',
);
  $realm_variables['language']['fr'] = array(
  'forgot_username_mail_recover_username_body' => 'H30110 ello,

A request to username for your account has been made at [site:name]. Fr
 
username: [user:name]

--  [site:name] team',
  'forgot_username_mail_recover_username_subject' => 'Username fr request at [site:name]',
  'user_mail_cancel_confirm_body' => '[user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:

[user:cancel-url]

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it is not used.

--  [site:name] team',
  'user_mail_cancel_confirm_subject' => 'Account cancellation request for [user:name] at [site:name]',
  'user_mail_password_reset_body' => '[user:name],

A request to reset the password for your account has been made at [site:name]. 
 
You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]fr

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
  'user_mail_password_reset_subject' => 'Replacement Fr login information for [user:name] at [site:name]',
  'user_mail_recover_username_body' => 'Hello,

A request to username for your account has been made at [site:name].
french
username: [user:name]

--  [site:name] team',
  'user_mail_recover_username_subject' => 'Username request at [site:name]',
  'user_mail_register_admin_created_body' => '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_admin_created_subject' => 'An administrator created an account for you at [site:name]',
  'user_mail_register_no_approval_required_body' => '[user:name],

Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_no_approval_required_subject' => 'Account details for [user:name] at [site:name]',
  'user_mail_register_pending_approval_body' => '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team',
  'user_mail_register_pending_approval_subject' => 'Account details for [user:name] at [site:name] (pending admin approval)',
  'user_mail_status_activated_body' => '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_status_activated_subject' => 'Account details for [user:name] at [site:name] (approved)',
  'user_mail_status_blocked_body' => '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team',
  'user_mail_status_blocked_subject' => 'Account details for [user:name] at [site:name] (blocked)',
  'user_mail_status_canceled_body' => '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team',
  'user_mail_status_canceled_subject' => 'Account details for [user:name] at [site:name] (canceled)',
);

return $realm_variables;
}
