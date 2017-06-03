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
  $form['apprise_mobile_api_settings']['apprise_mobile_api_mode'] = array(
    '#type' => 'radios',
    '#title' => t('Mode'),
    '#options' => array(
      0 => t('Sandbox'),
      1 => t('Production'),
    ),
    '#default_value' => variable_get('apprise_mobile_api_mode', 0),
  );
  $form['apprise_mobile_api_settings']['production'] = array(
    '#type' => 'fieldset',
    '#title' => t('Production settings'),
    '#collapsible' => TRUE,
    '#collapsed' => !variable_get('apprise_mobile_api_mode', 0),
  );
  $form['apprise_mobile_api_settings']['production']['apprise_mobile_api_prod_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Production API key'),
    '#default_value' => variable_get('apprise_mobile_api_prod_key', ''),
    '#description' => t('The key to access the API for APPrise Mobile Clients on the production site.'),
  );
  $form['apprise_mobile_api_settings']['production']['apprise_mobile_api_prod_prefix'] = array(
    '#type' => 'textfield',
    '#title' => t('Production prefix'),
    '#default_value' => variable_get('apprise_mobile_api_prod_prefix', ''),
    '#description' => t('The API key prefix, if necessary.'),
  );
  $form['apprise_mobile_api_settings']['sandbox'] = array(
    '#type' => 'fieldset',
    '#title' => t('Sandbox settings'),
    '#collapsible' => TRUE,
    '#collapsed' => variable_get('apprise_mobile_api_mode', 0),
  );
  $form['apprise_mobile_api_settings']['sandbox']['apprise_mobile_api_test_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Sandbox API key'),
    '#default_value' => variable_get('apprise_mobile_api_test_key', ''),
    '#description' => t('The key to access the API for APPrise Mobile Clients on the sandbox site.'),
  );
  $form['apprise_mobile_api_settings']['sandbox']['apprise_mobile_api_test_prefix'] = array(
    '#type' => 'textfield',
    '#title' => t('Sandbox prefix'),
    '#default_value' => variable_get('apprise_mobile_api_test_prefix', ''),
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
