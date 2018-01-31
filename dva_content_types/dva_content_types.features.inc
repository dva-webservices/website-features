<?php
/**
 * @file
 * dva_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dva_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
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
function dva_content_types_node_info() {
  $items = array(
    'factsheet' => array(
      'name' => t('Factsheet'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'form' => array(
      'name' => t('Form'),
      'base' => 'node_content',
      'description' => t('PDF Forms for clients to apply for/claim DVA services'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'key_message' => array(
      'name' => t('Key Message'),
      'base' => 'node_content',
      'description' => t('A \'Key Message\' is a statement, roughly a tweet in length, that encapsulates something that is important for a client to know at a particular time.  Key Messages can be targeted to user groups, journey stages and terms in other taxonomies.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('A location of a public DVA office - eg. VAN, VRB etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => t('A service that DVA provides to clients'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'user_story' => array(
      'name' => t('User Story'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
