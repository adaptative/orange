/**
 * @file
 * The file for ajax control & show/hide fields based on conditions.
 *
 */
(function ($) {
  $(document).ready(function() {
    $('#edit-field-your-orange-contact-und .form-item:nth-child(1)').hide();
    var emailValue = $('#user-register-form #edit-mail').val();
    if(emailValue != '') {
      $.ajax({
        type: 'POST',
        url: '/ajax/orange_email',
        data: {mail:emailValue},
        success: function(result) { 
          if(result == 'Not Found') {
            $('#edit-field-your-orange-contact').slideDown();
          }
          else{
            $('#edit-field-your-orange-contact').slideUp();  
          }
        }
      });
    }
    $('#edit-field-your-orange-contact').slideUp();
    $('#user-register-form #edit-mail').blur(function(){
    var emailValue = $(this).val();
    $.ajax({
        type: 'POST',
        url: '/ajax/orange_email',
        data: {mail:emailValue},
        success: function(result) { 
          if(result == 'Not Found'){
            $('#edit-field-your-orange-contact').slideDown();
          }
          else{
            $('#edit-field-your-orange-contact').slideUp();  
          }
        }
      });
    });
  });
})(jQuery);