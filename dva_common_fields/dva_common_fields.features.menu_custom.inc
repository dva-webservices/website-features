<?php
/**
 * @file
 * dva_common_fields.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function dva_common_fields_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-aided-navigation.
  $menus['menu-aided-navigation'] = array(
    'menu_name' => 'menu-aided-navigation',
    'title' => 'Aided Navigation',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Aided Navigation');

  return $menus;
}
