<?php
/**
 * The subscribe extra form.
 */
function osha_newsletter_subscribe_extra_form() {
  $form['intro'] = array(
    '#markup' => t(variable_get('subscribe_extra_block_intro_text', 'Once a month, OSHmail keeps you updated on ocupational safety and health.<br/> You can sign up below:')),
  );

  $form['subscribe_details'] = array(
    '#type' => 'container',
  );

  $form['subscribe_details']['email'] = array(
    '#prefix' => '<div style="subscribe_block">',
    '#type' => 'textfield',
    '#size' => 30,
    '#attributes' => array(
      'placeholder' => t('E-mail address'),
      'title' => t('E-mail address'),
      'onclick' => "jQuery('.captcha-content-block').show();jQuery(this).closest('form').find('div.captcha').show();",
    ),
  );

  if (user_is_anonymous()) {
    $form['subscribe_details']['captcha_osh'] = array(
      '#type' => 'captcha',
      '#prefix' => '<div class="col-md-6 col-sm-12 captcha-content-block" style="display: none;">',
      '#suffix' => '</div>',
      '#captcha_type' => 'default',
    );
  }

  $form['subscribe_details']['agree_processing_personal_data'] = array(
    '#suffix' => '</div>',
    '#type' => 'checkbox',
    '#title' => t('I agree to the processing of my personal data'),
    '#default_value' => 0,
  );

  $form['subscribe_details']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Subscribe'),
    '#submit' => array('osha_newsletter_subscribe_extra_form_submit'),
  );

  $link_label = t(variable_get('subscribe_extra_block_details_link_label', 'How will EU-OSHA use my details?'));
  $link_url = variable_get('subscribe_extra_block_details_link_url', OSHA_PRIVACY_PAGE_URL);
  $form['unsubscribe_details'] = array(
    '#type' => 'container',
  );
  $form['unsubscribe_details']['unsubscribe_text'] = array(
    '#markup' => '<span>' . t('Not interested any more?') . '</span>',
  );
  $form['unsubscribe_details']['unsubscribe'] = array(
    '#type' => 'submit',
    '#value' => t('Unsubscribe'),
    '#submit' => array('osha_newsletter_unsubscribe_form_submit'),
  );

  $form['details_link'] = array(
    '#markup' => '<a class="privacy-policy-oshmail" title="Subscribe to newsletter" href=' . url($link_url) . '>' . $link_label . '</a><br/>',
  );

  $form['#validate'] = array('osha_newsletter_subscribe_extra_form_validate');

  return $form;
}

/**
 * Newsletter subscribe EXTRA form validate.
 */
function osha_newsletter_subscribe_extra_form_validate($form, &$form_state) {
  $agree = trim($form_state['values']['agree_processing_personal_data']);
  if (!$agree) {
    form_set_error('agree_processing_personal_data', t('Please, tick the box to agree in order to submit your email.'));
  }

  $email = trim($form_state['values']['email']);
  if (strlen($email) != 0) {
    if (!valid_email_address($form_state['values']['email'])) {
      form_set_error('email', t('E-mail address not valid.'));
    }
  }
  else {
    form_set_error('email', t('Please enter the e-mail address.'));
  }
  osha_newsletter_reorder_error_messages();
}

/**
 * Newsletter subscribe EXTRA form submit.
 */
function osha_newsletter_subscribe_extra_form_submit($form, &$form_state) {
  $email = $form_state['values']['email'];
  $to = variable_get('osha_newsletter_listserv', 'listserv@list.osha.europa.eu');

  osha_newsletter_send_email(
    'campaigns_subscribe_email',
    $to,
    $email,
    $form_state,
    t('Your subscription has been submitted succesfully.')
  );
  /* Remove comment for subscription on OSHA Newsletter - HCW-1005
  if (isset($form_state['values']['subscribe-to-OSHMail-newsletter'])) {
    osha_newsletter_send_email(
      'subscribe_email',
      $to,
      $email,
      $form_state,
      t('Your subscription has been submitted succesfully.')
    );
  }
  */
}