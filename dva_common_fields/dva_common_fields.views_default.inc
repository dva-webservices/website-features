<?php
/**
 * @file
 * dva_common_fields.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dva_common_fields_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'page_overview';
  $view->description = 'Display the page overview content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Page overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="section-divider full-width"><div class="arrow-down"></div></div>';
  $handler->display->display_options['footer']['area']['format'] = 'raw';
  /* Field: Content: Page overview */
  $handler->display->display_options['fields']['field_page_overview']['id'] = 'field_page_overview';
  $handler->display->display_options['fields']['field_page_overview']['table'] = 'field_data_field_page_overview';
  $handler->display->display_options['fields']['field_page_overview']['field'] = 'field_page_overview';
  $handler->display->display_options['fields']['field_page_overview']['label'] = '';
  $handler->display->display_options['fields']['field_page_overview']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_page_overview']['alter']['text'] = '<div class="container">
<div class="row">
<div class="col-md-12">
[field_page_overview]
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_page_overview']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_overview']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_page_overview']['element_wrapper_class'] = 'page-overview full-width';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['page_overview'] = $view;

  return $export;
}
