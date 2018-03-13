<?php
/**
 * @file
 * dva_form.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dva_form_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dva_forms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'DVA Forms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'DVA Forms';
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'rich_text';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_form_number' => 'field_form_number',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="page-overview full-width"><div class="container">Type in any filter and click on Apply to see results. Leave blank and click apply to view all.</div></div>
<div class="section-divider full-width"><div class="arrow-down"></div></div>';
  $handler->display->display_options['header']['area']['format'] = 'rich_text';
  /* Field: Content: Form Number */
  $handler->display->display_options['fields']['field_form_number']['id'] = 'field_form_number';
  $handler->display->display_options['fields']['field_form_number']['table'] = 'field_data_field_form_number';
  $handler->display->display_options['fields']['field_form_number']['field'] = 'field_form_number';
  $handler->display->display_options['fields']['field_form_number']['label'] = '';
  $handler->display->display_options['fields']['field_form_number']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Keyword */
  $handler->display->display_options['fields']['field_keyword']['id'] = 'field_keyword';
  $handler->display->display_options['fields']['field_keyword']['table'] = 'field_data_field_keyword';
  $handler->display->display_options['fields']['field_keyword']['field'] = 'field_keyword';
  $handler->display->display_options['fields']['field_keyword']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_keyword']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_keyword']['delta_offset'] = '0';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
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
    'form' => 'form',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'form' => 'form',
  );
  /* Filter criterion: Content: Form Number (field_form_number) */
  $handler->display->display_options['filters']['field_form_number_value']['id'] = 'field_form_number_value';
  $handler->display->display_options['filters']['field_form_number_value']['table'] = 'field_data_field_form_number';
  $handler->display->display_options['filters']['field_form_number_value']['field'] = 'field_form_number_value';
  $handler->display->display_options['filters']['field_form_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_form_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_form_number_value']['expose']['operator_id'] = 'field_form_number_value_op';
  $handler->display->display_options['filters']['field_form_number_value']['expose']['label'] = 'Form Number';
  $handler->display->display_options['filters']['field_form_number_value']['expose']['operator'] = 'field_form_number_value_op';
  $handler->display->display_options['filters']['field_form_number_value']['expose']['identifier'] = 'field_form_number_value';
  $handler->display->display_options['filters']['field_form_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_form_number_value']['group_info']['label'] = 'Form Number (field_form_number)';
  $handler->display->display_options['filters']['field_form_number_value']['group_info']['identifier'] = 'field_form_number_value';
  $handler->display->display_options['filters']['field_form_number_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_form_number_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Keyword (field_keyword) */
  $handler->display->display_options['filters']['field_keyword_tid']['id'] = 'field_keyword_tid';
  $handler->display->display_options['filters']['field_keyword_tid']['table'] = 'field_data_field_keyword';
  $handler->display->display_options['filters']['field_keyword_tid']['field'] = 'field_keyword_tid';
  $handler->display->display_options['filters']['field_keyword_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_keyword_tid']['value'] = '';
  $handler->display->display_options['filters']['field_keyword_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_keyword_tid']['expose']['operator_id'] = 'field_keyword_tid_op';
  $handler->display->display_options['filters']['field_keyword_tid']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['field_keyword_tid']['expose']['operator'] = 'field_keyword_tid_op';
  $handler->display->display_options['filters']['field_keyword_tid']['expose']['identifier'] = 'field_keyword_tid';
  $handler->display->display_options['filters']['field_keyword_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_keyword_tid']['vocabulary'] = 'dva_forms_by_keyword_';
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = '';
  $handler->display->display_options['filters']['field_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator_id'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['identifier'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'dva_forms_by_topic';
  $handler->display->display_options['path'] = 'forms';
  $export['dva_forms'] = $view;

  return $export;
}
