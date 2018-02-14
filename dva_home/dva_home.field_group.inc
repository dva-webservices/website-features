<?php
/**
 * @file
 * dva_home.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dva_home_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_link_album|node|homepage|default';
  $field_group->group_name = 'group_feature_link_album';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature links album',
    'weight' => '1',
    'children' => array(
      0 => 'field_feature_links',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Feature links album',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'album row row-eq-height',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_feature_link_album|node|homepage|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_link|paragraphs_item|feature_link|default';
  $field_group->group_name = 'group_feature_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'feature_link';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature link',
    'weight' => '5',
    'children' => array(
      0 => 'field_link_to',
      1 => 'group_feature_title',
      2 => 'group_feature_text',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Feature link',
      'instance_settings' => array(
        'id' => '',
        'classes' => ' col-md-3 fl-card',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_feature_link|paragraphs_item|feature_link|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_text|paragraphs_item|feature_link|default';
  $field_group->group_name = 'group_feature_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'feature_link';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_feature_link';
  $field_group->data = array(
    'label' => 'Feature text',
    'weight' => '9',
    'children' => array(
      0 => 'field_feature_summary',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Feature text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card-text',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_feature_text|paragraphs_item|feature_link|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_title|paragraphs_item|feature_link|default';
  $field_group->group_name = 'group_feature_title';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'feature_link';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_feature_link';
  $field_group->data = array(
    'label' => 'Feature title',
    'weight' => '8',
    'children' => array(
      0 => 'field_feature_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Feature title',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card-title',
        'element' => 'h3',
        'show_label' => '0',
        'label_element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_feature_title|paragraphs_item|feature_link|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature link');
  t('Feature links album');
  t('Feature text');
  t('Feature title');

  return $field_groups;
}
