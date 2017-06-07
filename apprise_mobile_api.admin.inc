<?php

/**
 * @file
 * Administrative page callbacks for the APPrise Mobile API module.
 */

/**
 * General configuration form for controlling the API behaviour.
 */
function apprise_mobile_api_admin_settings() {

  // Get content types options.
  $bundles = field_info_bundles('node');
  $content_types = array();
  foreach ($bundles as $bundle => $info) {
    $content_types[$bundle] = $info['label'];
  }

  $form = array();

  $form['apprise_mobile_api_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('APPrise Mobile API settings'),
    '#collapsible' => FALSE,
  );
  $form['apprise_mobile_api_settings']['apprise_mobile_api_host'] = array(
    '#type' => 'textfield',
    '#title' => t('API host'),
    '#default_value' => variable_get('apprise_mobile_api_host', 'https://api.theemployeeapp.com'),
    '#description' => t('The host to access the API for APPrise Mobile Clients.<br />Include the leading http(s)://.  Trailing slash is not necessary.'),
    '#required' => TRUE,
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
    '#collapsed' => FALSE,
  );
  $form['apprise_mobile_api_settings']['production']['apprise_mobile_api_prod_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Production API key'),
    '#default_value' => variable_get('apprise_mobile_api_prod_key', ''),
    '#description' => t('The key to access the API for APPrise Mobile Clients on the production site.'),
    '#required' => TRUE,
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
    '#collapsed' => FALSE,
  );
  $form['apprise_mobile_api_settings']['sandbox']['apprise_mobile_api_test_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Sandbox API key'),
    '#default_value' => variable_get('apprise_mobile_api_test_key', ''),
    '#description' => t('The key to access the API for APPrise Mobile Clients on the sandbox site.'),
    '#required' => TRUE,
  );
  $form['apprise_mobile_api_settings']['sandbox']['apprise_mobile_api_test_prefix'] = array(
    '#type' => 'textfield',
    '#title' => t('Sandbox prefix'),
    '#default_value' => variable_get('apprise_mobile_api_test_prefix', ''),
    '#description' => t('The API key prefix, if necessary.'),
  );
  $form['apprise_mobile_api_settings']['apprise_mobile_api_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Content types'),
    '#description' => t('Check which content types should include the API fields.'),
    '#options' => $content_types,
    '#default_value' => variable_get('apprise_mobile_api_types', array()),
    '#required' => TRUE,
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
  $form['apprise_mobile_api_settings']['apprise_mobile_api_execute'] = array(
    '#type' => 'checkbox',
    '#title' => t('Post immediately after the :save button is pressed.', array (':save' => 'Save configuration')),
    '#default_value' => variable_get('apprise_mobile_api_execute', 0),
  );
  $form['apprise_mobile_api_settings']['apprise_mobile_api_previous_types'] = array(
    '#type' => 'hidden',
    '#value' => variable_get('apprise_mobile_api_types', array()),
  );
  $form = system_settings_form($form);
  $form['#submit'][] = 'apprise_mobile_api_settings_form_submit';

  return $form;
}

/**
 * Submit callback for the API settings form.
 */
function apprise_mobile_api_settings_form_submit($form, $form_state) {

  // Field definitions.
  $fields = array(
    'Post to API' => array(
      'field_name' => 'field_apprise_mobile_api_post',
      'type' => 'list_boolean',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
      ),
    ),
    'Destination folder' => array(
      'field_name' => 'field_apprise_mobile_api_folder',
      'type' => 'list_text',
      'settings' => array(
        'allowed_values' => apprise_mobile_api_get_folders(),
      ),
    ),
  );

  // Bundles to include fields.
  $types = $form_state['values']['apprise_mobile_api_types'];
  $bundles = array();
  foreach ($types as $type => $value) {
    if ($value) {
      $bundles[] = $type;
    }
  }

  // Add fields to bundles.
  if (!empty($bundles)) {
    foreach ($fields as $label => $field) {
      // Check if our field is not already created.
      if (!field_info_field($field['field_name'])) {
        // Create the field base.
        field_create_field($field);
      }
      foreach ($bundles as $bundle) {
        // Check if our field is not already attached to the content type.
        if (!field_info_instance('node', $field['field_name'], $bundle)) {
          // Create the field instance on the bundle.
          $instance = array(
            'field_name' => $field['field_name'],
            'entity_type' => 'node',
            'label' => $label,
            'bundle' => $bundle,
            'settings' => array(
              $bundle . '_node_form' => 1,
            ),
            'widget' => array(
              'type' => $field['type'],
            ),
          );
          if ($field['type'] == 'list_boolean') {
            $instance['widget']['type'] = 'options_onoff';
          }
          $instance['widget']['settings']['display_label'] = 1;
          field_create_instance($instance);
        }
      }
    }
  }

  // Bundles to remove fields.
  $previous_types = $form_state['values']['apprise_mobile_api_previous_types'];
  $bundles_to_remove = array();
  foreach ($previous_types as $type => $value) {
    if ($value and !in_array($type, $bundles)) {
      $bundles_to_remove[] = $type;
    }
  }

  // Remove fields from bundles.
  if (!empty($bundles_to_remove)) {
    foreach ($fields as $label => $field) {
      foreach ($bundles_to_remove as $bundle) {
        if ($instance = field_info_instance('node', $field['field_name'], $bundle)) {
          field_delete_instance($instance);
        }
      }
    }
  }

  // Run to execute a request.
  apprise_mobile_api_cron();
}
