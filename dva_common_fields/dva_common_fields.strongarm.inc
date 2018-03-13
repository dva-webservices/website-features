<?php
/**
 * @file
 * dva_common_fields.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dva_common_fields_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_page_categories_pattern';
  $strongarm->value = '[term:parent:root]/[term:parent]/[term:name]';
  $export['pathauto_taxonomy_term_page_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_menu-aided-navigation';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_menu_link_menu-aided-navigation'] = $strongarm;

  return $export;
}
