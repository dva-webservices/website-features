<?php
/**
 * @file
 * dva_service.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dva_service_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'services';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service landing page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'landing-page';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'rich_text',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_circumstances_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select option',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_cause_of_death_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select option',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_date_served_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select option',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_served_overseas_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select option',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_medical_conditions_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select option',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_service_type',
      'rendered' => 0,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="uikit-page-alerts uikit-page-alerts--info">
<p>Based on the information you have provided the system was not able to determine benefits and its rates to which you may be entitled.</p>
<p>For further assistance please contact the Veterans\' Access Network (VAN) on 133 254 (local) 1800 555 254 (regional). </p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'raw';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'dva_services' => 'dva_services',
    'aided_navigation' => 0,
    'dva_forms_by_keyword_' => 0,
    'dva_forms_by_topic' => 0,
    'location_type' => 0,
    'news_article_type' => 0,
    'page_categories' => 0,
    'state' => 0,
    'tags' => 0,
    'user_groups' => 0,
  );
  /* Relationship: Content: Eligibility criteria (field_eligibility_criteria) */
  $handler->display->display_options['relationships']['field_eligibility_criteria_value']['id'] = 'field_eligibility_criteria_value';
  $handler->display->display_options['relationships']['field_eligibility_criteria_value']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['relationships']['field_eligibility_criteria_value']['field'] = 'field_eligibility_criteria_value';
  $handler->display->display_options['relationships']['field_eligibility_criteria_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Page overview */
  $handler->display->display_options['fields']['field_page_overview']['id'] = 'field_page_overview';
  $handler->display->display_options['fields']['field_page_overview']['table'] = 'field_data_field_page_overview';
  $handler->display->display_options['fields']['field_page_overview']['field'] = 'field_page_overview';
  $handler->display->display_options['fields']['field_page_overview']['label'] = '';
  $handler->display->display_options['fields']['field_page_overview']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_overview']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_page_overview']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_overview']['empty'] = '[body]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<p>[field_page_overview]<p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Service Type */
  $handler->display->display_options['fields']['field_service_type']['id'] = 'field_service_type';
  $handler->display->display_options['fields']['field_service_type']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['fields']['field_service_type']['field'] = 'field_service_type';
  $handler->display->display_options['fields']['field_service_type']['label'] = '';
  $handler->display->display_options['fields']['field_service_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_type']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Page priority (field_page_priority) */
  $handler->display->display_options['sorts']['field_page_priority_value']['id'] = 'field_page_priority_value';
  $handler->display->display_options['sorts']['field_page_priority_value']['table'] = 'field_data_field_page_priority';
  $handler->display->display_options['sorts']['field_page_priority_value']['field'] = 'field_page_priority_value';
  $handler->display->display_options['sorts']['field_page_priority_value']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['relationship'] = 'field_eligibility_criteria_value';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Paragraphs item: Circumstances (field_circumstances) */
  $handler->display->display_options['filters']['field_circumstances_value']['id'] = 'field_circumstances_value';
  $handler->display->display_options['filters']['field_circumstances_value']['table'] = 'field_data_field_circumstances';
  $handler->display->display_options['filters']['field_circumstances_value']['field'] = 'field_circumstances_value';
  $handler->display->display_options['filters']['field_circumstances_value']['relationship'] = 'field_eligibility_criteria_value';
  $handler->display->display_options['filters']['field_circumstances_value']['group'] = 1;
  $handler->display->display_options['filters']['field_circumstances_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_circumstances_value']['expose']['operator_id'] = 'field_circumstances_value_op';
  $handler->display->display_options['filters']['field_circumstances_value']['expose']['label'] = 'Which of these best describes you?';
  $handler->display->display_options['filters']['field_circumstances_value']['expose']['operator'] = 'field_circumstances_value_op';
  $handler->display->display_options['filters']['field_circumstances_value']['expose']['identifier'] = 'field_circumstances_value';
  $handler->display->display_options['filters']['field_circumstances_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Paragraphs item: Medical Conditions (field_medical_conditions) */
  $handler->display->display_options['filters']['field_medical_conditions_value']['id'] = 'field_medical_conditions_value';
  $handler->display->display_options['filters']['field_medical_conditions_value']['table'] = 'field_data_field_medical_conditions';
  $handler->display->display_options['filters']['field_medical_conditions_value']['field'] = 'field_medical_conditions_value';
  $handler->display->display_options['filters']['field_medical_conditions_value']['relationship'] = 'field_eligibility_criteria_value';
  $handler->display->display_options['filters']['field_medical_conditions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_medical_conditions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_medical_conditions_value']['expose']['operator_id'] = 'field_medical_conditions_value_op';
  $handler->display->display_options['filters']['field_medical_conditions_value']['expose']['label'] = 'Do you have medical conditions related to your service? ';
  $handler->display->display_options['filters']['field_medical_conditions_value']['expose']['operator'] = 'field_medical_conditions_value_op';
  $handler->display->display_options['filters']['field_medical_conditions_value']['expose']['identifier'] = 'field_medical_conditions_value';
  $handler->display->display_options['filters']['field_medical_conditions_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Paragraphs item: Date Served (field_date_served) */
  $handler->display->display_options['filters']['field_date_served_value']['id'] = 'field_date_served_value';
  $handler->display->display_options['filters']['field_date_served_value']['table'] = 'field_data_field_date_served';
  $handler->display->display_options['filters']['field_date_served_value']['field'] = 'field_date_served_value';
  $handler->display->display_options['filters']['field_date_served_value']['relationship'] = 'field_eligibility_criteria_value';
  $handler->display->display_options['filters']['field_date_served_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_served_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_served_value']['expose']['operator_id'] = 'field_date_served_value_op';
  $handler->display->display_options['filters']['field_date_served_value']['expose']['label'] = 'When did you or your family member serve? ';
  $handler->display->display_options['filters']['field_date_served_value']['expose']['operator'] = 'field_date_served_value_op';
  $handler->display->display_options['filters']['field_date_served_value']['expose']['identifier'] = 'field_date_served_value';
  $handler->display->display_options['filters']['field_date_served_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Paragraphs item: Served Overseas (field_served_overseas) */
  $handler->display->display_options['filters']['field_served_overseas_value']['id'] = 'field_served_overseas_value';
  $handler->display->display_options['filters']['field_served_overseas_value']['table'] = 'field_data_field_served_overseas';
  $handler->display->display_options['filters']['field_served_overseas_value']['field'] = 'field_served_overseas_value';
  $handler->display->display_options['filters']['field_served_overseas_value']['relationship'] = 'field_eligibility_criteria_value';
  $handler->display->display_options['filters']['field_served_overseas_value']['group'] = 1;
  $handler->display->display_options['filters']['field_served_overseas_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_served_overseas_value']['expose']['operator_id'] = 'field_served_overseas_value_op';
  $handler->display->display_options['filters']['field_served_overseas_value']['expose']['label'] = 'Did you or your family member serve overseas? ';
  $handler->display->display_options['filters']['field_served_overseas_value']['expose']['operator'] = 'field_served_overseas_value_op';
  $handler->display->display_options['filters']['field_served_overseas_value']['expose']['identifier'] = 'field_served_overseas_value';
  $handler->display->display_options['filters']['field_served_overseas_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );

  /* Display: Services Block */
  $handler = $view->new_display('block', 'Services Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Services block';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'rich_text',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_circumstances_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select option',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_cause_of_death_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select option',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_date_served_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select option',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_served_overseas_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select option',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_medical_conditions_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select option',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="page-overview full-width">
<div class="container">
   <p>DVA provides a range of services to support your physical, financial and emotional wellbeing.  These services are available for current and ex-serving members as well as their families.
  <p>Depending on when and where you (or your family member) served, you will be entitled to different types of support.  Use this form to find out the types of services DVA can provide for you.
</div>
</div>
<div class="section-divider full-width"><div class="arrow-down"></div></div>';
  $handler->display->display_options['header']['area']['format'] = 'rich_text';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['path'] = 'services';
  $export['services'] = $view;

  return $export;
}
