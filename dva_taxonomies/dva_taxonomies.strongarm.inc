<?php
/**
 * @file
 * dva_taxonomies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dva_taxonomies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_aided_navigation_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_aided_navigation_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_dva_services_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_dva_services_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_news_article_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_news_article_type_pattern'] = $strongarm;

  return $export;
}
