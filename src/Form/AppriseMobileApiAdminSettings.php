<?php

/**
 * @file
 * Contains \Drupal\apprise_mobile_api\Form\AppriseMobileApiAdminSettings.
 */

namespace Drupal\apprise_mobile_api\Form;

use Drupal\Core\Entity\EntityTypeBundleInfo;
use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;
use Drupal\Core\Render\Element;

class AppriseMobileApiAdminSettings extends ConfigFormBase {

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'apprise_mobile_api_admin_settings';
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
    $config = $this->config('apprise_mobile_api.settings');
    $form['#tree'] = FALSE;
    foreach (Element::children($form['apprise_mobile_api_settings']) as $variable) {
      $config->set($variable, $form_state->getValue($variable));
    }
    $config->save();

    if (method_exists($this, '_submitForm')) {
      $this->_submitForm($form, $form_state);
    }

    parent::submitForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  protected function getEditableConfigNames() {
    return ['apprise_mobile_api.settings'];
  }

  public function buildForm(array $form, FormStateInterface $form_state) {

    // Get content types options.
    $content_types = [];
    $bundles = \Drupal::service('entity_type.bundle.info')->getBundleInfo('node');
    foreach ($bundles as $bundle => $info) {
      $content_types[$bundle] = $info['label'];
    }

    // Get config.
    $config = \Drupal::config('apprise_mobile_api.settings');

    $form = [];

    $form['apprise_mobile_api_settings'] = [
      '#type' => 'fieldset',
      '#title' => t('APPrise Mobile API settings'),
      '#collapsible' => FALSE,
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_host'] = [
      '#type' => 'textfield',
      '#title' => t('API host'),
      '#default_value' => $config->get('apprise_mobile_api_host'),
      '#description' => t('The host to access the API for APPrise Mobile Clients.<br />Include the leading http(s)://.  Trailing slash is not necessary.'),
      '#required' => TRUE,
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_mode'] = [
      '#type' => 'radios',
      '#title' => t('Mode'),
      '#options' => [
        0 => t('Sandbox'),
        1 => t('Production'),
      ],
      '#default_value' => $config->get('apprise_mobile_api_mode'),
    ];
    /*
    $form['apprise_mobile_api_settings']['production'] = [
      '#type' => 'fieldset',
      '#title' => t('Production settings'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    ];
     */
    $form['apprise_mobile_api_settings']['apprise_mobile_api_prod_key'] = [
      '#type' => 'textfield',
      '#title' => t('Production API key'),
      '#default_value' => $config->get('apprise_mobile_api_prod_key'),
      '#description' => t('The key to access the API for APPrise Mobile Clients on the production site.'),
      '#required' => TRUE,
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_prod_prefix'] = [
      '#type' => 'textfield',
      '#title' => t('Production prefix'),
      '#default_value' => $config->get('apprise_mobile_api_prod_prefix'),
      '#description' => t('The API key prefix, if necessary.'),
    ];
    /*
    $form['apprise_mobile_api_settings']['sandbox'] = [
      '#type' => 'fieldset',
      '#title' => t('Sandbox settings'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    ];
     */
    $form['apprise_mobile_api_settings']['apprise_mobile_api_test_key'] = [
      '#type' => 'textfield',
      '#title' => t('Sandbox API key'),
      '#default_value' => $config->get('apprise_mobile_api_test_key'),
      '#description' => t('The key to access the API for APPrise Mobile Clients on the sandbox site.'),
      '#required' => TRUE,
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_test_prefix'] = [
      '#type' => 'textfield',
      '#title' => t('Sandbox prefix'),
      '#default_value' => $config->get('apprise_mobile_api_test_prefix'),
      '#description' => t('The API key prefix, if necessary.'),
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_types'] = [
      '#type' => 'checkboxes',
      '#title' => t('Content types'),
      '#description' => t('Check which content types should include the API fields.'),
      '#options' => $content_types,
      '#default_value' => $config->get('apprise_mobile_api_types'),
      '#required' => FALSE,
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_image_field'] = [
      '#type' => 'textfield',
      '#title' => t('Thumbnail Image Field'),
      '#default_value' => $config->get('apprise_mobile_api_image_field'),
      '#description' => t('The machine name of the thumbnail image field.<br />This field should be included in the Content type(s) selected above.'),
      '#size' => 16,
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_image_style'] = [
      '#type' => 'textfield',
      '#title' => t('Thumbnail Image Style'),
      '#default_value' => $config->get('apprise_mobile_api_image_style'),
      '#description' => t('The machine name of the image style used to generate thumbnails.'),
      '#size' => 16,
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_limit'] = [
      '#type' => 'textfield',
      '#title' => t('Limit'),
      '#default_value' => $config->get('apprise_mobile_api_limit'),
      '#description' => t('Limit of how many items to fetch.'),
      '#size' => 5,
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_offset'] = [
      '#type' => 'textfield',
      '#title' => t('Offset'),
      '#default_value' => $config->get('apprise_mobile_api_offset'),
      '#description' => t('How many items to offset from 0.'),
      '#size' => 5,
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_days'] = [
      '#type' => 'textfield',
      '#title' => t('Days'),
      '#default_value' => $config->get('apprise_mobile_api_days'),
      '#description' => t('How many days back to check for published content.<br />(1 means yesterday, 7 means a week ago, etc.)'),
      '#size' => 5,
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_cron'] = [
      '#type' => 'select',
      '#title' => t('Cron'),
      '#options' => [
        0 => t('Never'),
        1 => t('Every time cron runs'),
        2 => t('Daily'),
      ],
      '#default_value' => $config->get('apprise_mobile_api_cron'),
      '#description' => t('How often items should be fetched.'),
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_execute'] = [
      '#type' => 'checkbox',
      '#title' => t('Push immediately after the :save button is pressed.', [
        ':save' => 'Save configuration'
      ]),
      '#default_value' => $config->get('apprise_mobile_api_execute'),
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_debug'] = [
      '#type' => 'checkbox',
      '#title' => t('Enable debugging.'),
      '#default_value' => $config->get('apprise_mobile_api_debug'),
    ];
    $form['apprise_mobile_api_settings']['apprise_mobile_api_previous_types'] = [
      '#type' => 'hidden',
      '#value' => $config->get('apprise_mobile_api_types'),
    ];
    $form = parent::buildForm($form, $form_state);
    $form['#submit'][] = 'apprise_mobile_api_settings_form_submit';

    return $form;
  }

}
