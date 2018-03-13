<?php
/**
 * @file
 * dva_form.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dva_form_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container1|node|form|default';
  $field_group->group_name = 'group_container1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'form';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_page_intro';
  $field_group->data = array(
    'label' => 'Container1',
    'weight' => '8',
    'children' => array(
      0 => 'field_keyword',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Container1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'container',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_container1|node|form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container2|node|form|default';
  $field_group->group_name = 'group_container2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container2',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_form_number',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Container2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'container',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_container2|node|form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container3|node|form|default';
  $field_group->group_name = 'group_container3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'form';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_document_link';
  $field_group->data = array(
    'label' => 'Container3',
    'weight' => '5',
    'children' => array(
      0 => 'field_dva_form',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Container3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'container',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_container3|node|form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document_link|node|form|default';
  $field_group->group_name = 'group_document_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Document links',
    'weight' => '4',
    'children' => array(
      0 => 'group_container3',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Document links',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'document-links-section full-width',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_document_link|node|form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_intro|node|form|default';
  $field_group->group_name = 'group_page_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page intro',
    'weight' => '0',
    'children' => array(
      0 => 'group_container1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Page intro',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'page-overview full-width',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_page_intro|node|form|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Container1');
  t('Container2');
  t('Container3');
  t('Document links');
  t('Page intro');

  return $field_groups;
}
