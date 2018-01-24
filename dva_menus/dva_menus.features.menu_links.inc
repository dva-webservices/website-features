<?php
/**
 * @file
 * dva_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dva_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_claims:<front>.
  $menu_links['main-menu_claims:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Claims',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_claims:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_health--wellbeing:<front>.
  $menu_links['main-menu_health--wellbeing:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Health & Wellbeing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_health--wellbeing:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_services:<front>.
  $menu_links['main-menu_services:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_services:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Claims');
  t('Health & Wellbeing');
  t('Services');

  return $menu_links;
}
