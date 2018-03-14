<?php
/**
 * @file
 * dva_contact_options.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dva_contact_options_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dva_contact_options_node_info() {
  $items = array(
    'email_address' => array(
      'name' => t('Email Address'),
      'base' => 'node_content',
      'description' => t('A DVA email address'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'phone_number' => array(
      'name' => t('Phone number'),
      'base' => 'node_content',
      'description' => t('A DVA phone number'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
