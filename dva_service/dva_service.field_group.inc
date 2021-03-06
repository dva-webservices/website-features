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
  $field_group->identifier = 'group_action_links|node|service|default';
  $field_group->group_name = 'group_action_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_right_column';
  $field_group->data = array(
    'label' => 'Action Links',
    'weight' => '2',
    'children' => array(
      0 => 'field_application_links',
      1 => 'field_form_link',
      2 => 'field_main_number',
      3 => 'field_email_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-action-links field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_action_links|node|service|default'] = $field_group;

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
    'weight' => '53',
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
    'weight' => '5',
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
    'weight' => '6',
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
  $field_group->identifier = 'group_criteria|node|service|form';
  $field_group->group_name = 'group_criteria';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_service_tabs';
  $field_group->data = array(
    'label' => 'Criteria',
    'weight' => '52',
    'children' => array(
      0 => 'field_eligibility_criteria',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-criteria field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_criteria|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eligibility|node|service|default';
  $field_group->group_name = 'group_eligibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left_column';
  $field_group->data = array(
    'label' => 'Eligibility',
    'weight' => '3',
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
    'label' => 'Header',
    'weight' => '0',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header field-group-htab col-md-12',
        'element' => 'section',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
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
    'label' => 'Content',
    'weight' => '48',
    'children' => array(
      0 => 'body',
      1 => 'field_page_overview',
      2 => 'field_further_information',
      3 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-header field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'weight' => '4',
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
    'label' => 'Left Column',
    'weight' => '1',
    'children' => array(
      0 => 'group_hta_wrapper',
      1 => 'group_after_applying',
      2 => 'group_change_circumstances',
      3 => 'group_eligibility',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Left Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left-column field-group-htab col-md-8',
        'element' => 'section',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
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
    'label' => 'Application process',
    'weight' => '50',
    'children' => array(
      0 => 'field_how_to_apply',
      1 => 'field_eligibility',
      2 => 'field_after_you_have_applied',
      3 => 'field_change_in_circumstances',
      4 => 'field_application_links',
      5 => 'field_start_application',
      6 => 'field_form_link',
      7 => 'field_main_number',
      8 => 'field_email_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Application process',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-left-column field-group-htab container',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_left_column|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|service|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_service_tabs';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '49',
    'children' => array(
      0 => 'field_service_type',
      1 => 'field_category',
      2 => 'field_page_priority',
      3 => 'field_factsheet_numbers',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Categories',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-metadata field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_metadata|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_question_1|paragraphs_item|entitlements|form';
  $field_group->group_name = 'group_question_1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'entitlements';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Initial Questions',
    'weight' => '33',
    'children' => array(
      0 => 'field_date_served',
      1 => 'field_medical_conditions',
      2 => 'field_served_overseas',
      3 => 'field_circumstances',
      4 => 'field_cause_of_death',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Initial Questions',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-question-1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_question_1|paragraphs_item|entitlements|form'] = $field_group;

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
    'label' => 'Right Column',
    'weight' => '2',
    'children' => array(
      0 => 'group_action_links',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Right Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right-column field-group-htab col-md-4',
        'element' => 'article',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_right_column|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|service|form';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Column',
    'weight' => '6',
    'children' => array(),
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
    'weight' => '5',
    'children' => array(
      0 => 'group_header',
      1 => 'group_left_column',
      2 => 'group_admin',
      3 => 'group_criteria',
      4 => 'group_metadata',
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
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
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
  t('Action Links');
  t('Admin');
  t('After you have applied');
  t('Application process');
  t('Categories');
  t('Change in circumstances');
  t('Content');
  t('Criteria');
  t('Eligibility');
  t('Header');
  t('How to apply');
  t('Initial Questions');
  t('Left Column');
  t('Right Column');
  t('Service Tabs');
  t('Start application');

  return $field_groups;
}
