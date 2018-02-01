<?php
/**
 * @file
 * dva_service.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dva_service_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|node|service|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_service_tabs';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '52',
    'children' => array(
      0 => 'field_business_contact',
      1 => 'field_author_notes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-admin field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_admin|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_after_applying|node|service|default';
  $field_group->group_name = 'group_after_applying';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left_column';
  $field_group->data = array(
    'label' => 'After you have applied',
    'weight' => '14',
    'children' => array(
      0 => 'field_after_you_have_applied',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'After you have applied',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-after-applying field-group-html-element',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_after_applying|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_change_circumstances|node|service|default';
  $field_group->group_name = 'group_change_circumstances';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left_column';
  $field_group->data = array(
    'label' => 'Change in circumstances',
    'weight' => '15',
    'children' => array(
      0 => 'field_change_in_circumstances',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Change in circumstances',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_change_circumstances|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eligibility|node|service|default';
  $field_group->group_name = 'group_eligibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_right_column';
  $field_group->data = array(
    'label' => 'Eligibility',
    'weight' => '22',
    'children' => array(
      0 => 'field_eligibility',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Eligibility',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_eligibility|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|service|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header field-group-htab col-md-12',
        'wrapper' => 'section',
      ),
    ),
  );
  $field_groups['group_header|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|service|form';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_service_tabs';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '48',
    'children' => array(
      0 => 'body',
      1 => 'field_service_type',
      2 => 'field_page_overview',
      3 => 'field_category',
      4 => 'field_factsheet_references',
      5 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-header field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_header|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hta_wrapper|node|service|default';
  $field_group->group_name = 'group_hta_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left_column';
  $field_group->data = array(
    'label' => 'How to apply',
    'weight' => '12',
    'children' => array(
      0 => 'field_how_to_apply',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'How to apply',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-hta-wrapper field-group-html-element',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_hta_wrapper|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|service|default';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'group_hta_wrapper',
      1 => 'group_start_application',
      2 => 'group_after_applying',
      3 => 'group_change_circumstances',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left-column field-group-htab col-md-8',
        'wrapper' => 'section',
      ),
    ),
  );
  $field_groups['group_left_column|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|service|form';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_service_tabs';
  $field_group->data = array(
    'label' => 'Left Column',
    'weight' => '49',
    'children' => array(
      0 => 'field_how_to_apply',
      1 => 'field_after_you_have_applied',
      2 => 'field_change_in_circumstances',
      3 => 'field_application_links',
      4 => 'field_start_application',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-left-column field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_left_column|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|service|default';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'group_eligibility',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right-column field-group-htab col-md-4',
        'wrapper' => 'article',
      ),
    ),
  );
  $field_groups['group_right_column|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|service|form';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_service_tabs';
  $field_group->data = array(
    'label' => 'Right Column',
    'weight' => '51',
    'children' => array(
      0 => 'field_eligibility',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-right-column field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_right_column|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_tabs|node|service|form';
  $field_group->group_name = 'group_service_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service Tabs',
    'weight' => '43',
    'children' => array(
      0 => 'group_header',
      1 => 'group_left_column',
      2 => 'group_right_column',
      3 => 'group_admin',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-service-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_service_tabs|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_start_application|node|service|default';
  $field_group->group_name = 'group_start_application';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left_column';
  $field_group->data = array(
    'label' => 'Start application',
    'weight' => '13',
    'children' => array(
      0 => 'field_application_links',
      1 => 'field_start_application',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Start application',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'span',
        'show_label' => '1',
        'label_element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_start_application|node|service|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin');
  t('After you have applied');
  t('Change in circumstances');
  t('Eligibility');
  t('Header');
  t('How to apply');
  t('Left Column');
  t('Right Column');
  t('Service Tabs');
  t('Start application');

  return $field_groups;
}
