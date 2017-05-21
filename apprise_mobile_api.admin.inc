<?php

/**
 * @file
 * Administrative page callbacks for the APPrise Mobile API module.
 */

/**
 * General configuration form for controlling the API behaviour.
 */
function apprise_mobile_api_admin_settings() {

  $form = array();

  $form['apprise_mobile_api_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('APPrise Mobile API settings'),
    '#collapsible' => FALSE,
  );
  $form['apprise_mobile_api_settings']['apprise_mobile_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('API key'),
    '#default_value' => variable_get('apprise_mobile_api_key', ''),
    '#description' => t('The key to access the API for APPrise Mobile Clients.'),
  );
  $form['apprise_mobile_api_settings']['apprise_mobile_api_prefix'] = array(
    '#type' => 'textfield',
    '#title' => t('Prefix'),
    '#default_value' => variable_get('apprise_mobile_api_prefix', ''),
    '#description' => t('The API key prefix, if necessary.'),
  );
  $form['apprise_mobile_api_settings']['apprise_mobile_api_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Limit'),
    '#default_value' => variable_get('apprise_mobile_api_limit', 10),
    '#description' => t('Limit of how many items to fetch.'),
  );
  $form['apprise_mobile_api_settings']['apprise_mobile_api_offset'] = array(
    '#type' => 'textfield',
    '#title' => t('Offset'),
    '#default_value' => variable_get('apprise_mobile_api_offset', 0),
    '#description' => t('How many items to offset from 0.'),
  );
  $form['apprise_mobile_api_settings']['apprise_mobile_api_cron'] = array(
    '#type' => 'select',
    '#title' => t('Cron'),
    '#options' => array(
      0 => t('Never'),
      1 => t('Every time cron runs'),
      2 => t('Daily'),
    ),
    '#default_value' => variable_get('apprise_mobile_api_cron', 0),
    '#description' => t('How often items should be fetched.'),
  );

  return system_settings_form($form);
}
