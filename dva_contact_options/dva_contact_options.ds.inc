<?php
/**
 * @file
 * dva_contact_options.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function dva_contact_options_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'action_item';
  $ds_view_mode->label = 'Action Item';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['action_item'] = $ds_view_mode;

  return $export;
}
