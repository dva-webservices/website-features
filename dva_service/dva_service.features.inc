<?php
/**
 * @file
 * dva_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dva_service_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dva_service_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dva_service_node_info() {
  $items = array(
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => t('A service that DVA provides to clients'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function dva_service_paragraphs_info() {
  $items = array(
    'entitlements' => array(
      'name' => 'Entitlements',
      'bundle' => 'entitlements',
      'locked' => '1',
    ),
  );
  return $items;
}
