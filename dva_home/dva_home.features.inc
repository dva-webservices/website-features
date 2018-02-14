<?php
/**
 * @file
 * dva_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dva_home_ctools_plugin_api($module = NULL, $api = NULL) {
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
function dva_home_node_info() {
  $items = array(
    'homepage' => array(
      'name' => t('Homepage'),
      'base' => 'node_content',
      'description' => t('Add a homepage'),
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
function dva_home_paragraphs_info() {
  $items = array(
    'feature_link' => array(
      'name' => 'Feature Link',
      'bundle' => 'feature_link',
      'locked' => '1',
    ),
  );
  return $items;
}
