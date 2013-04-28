<?php
/**
 * @file
 * item_keys.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function item_keys_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'item_keys';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Item Keys';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Item Keys';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'GUID';
  $handler->display->display_options['fields']['guid']['element_label_colon'] = FALSE;
  /* Field: Content: Affected Areas */
  $handler->display->display_options['fields']['field_ik_affected_areas']['id'] = 'field_ik_affected_areas';
  $handler->display->display_options['fields']['field_ik_affected_areas']['table'] = 'field_data_field_ik_affected_areas';
  $handler->display->display_options['fields']['field_ik_affected_areas']['field'] = 'field_ik_affected_areas';
  $handler->display->display_options['fields']['field_ik_affected_areas']['element_label_colon'] = FALSE;
  /* Field: Content: Client Specific */
  $handler->display->display_options['fields']['field_ik_client_specific']['id'] = 'field_ik_client_specific';
  $handler->display->display_options['fields']['field_ik_client_specific']['table'] = 'field_data_field_ik_client_specific';
  $handler->display->display_options['fields']['field_ik_client_specific']['field'] = 'field_ik_client_specific';
  $handler->display->display_options['fields']['field_ik_client_specific']['element_label_colon'] = FALSE;
  /* Field: Content: Developer */
  $handler->display->display_options['fields']['field_ik_developer']['id'] = 'field_ik_developer';
  $handler->display->display_options['fields']['field_ik_developer']['table'] = 'field_data_field_ik_developer';
  $handler->display->display_options['fields']['field_ik_developer']['field'] = 'field_ik_developer';
  /* Field: Content: Display Name */
  $handler->display->display_options['fields']['field_ik_display_name']['id'] = 'field_ik_display_name';
  $handler->display->display_options['fields']['field_ik_display_name']['table'] = 'field_data_field_ik_display_name';
  $handler->display->display_options['fields']['field_ik_display_name']['field'] = 'field_ik_display_name';
  /* Field: Content: Group ID */
  $handler->display->display_options['fields']['field_ik_group_id']['id'] = 'field_ik_group_id';
  $handler->display->display_options['fields']['field_ik_group_id']['table'] = 'field_data_field_ik_group_id';
  $handler->display->display_options['fields']['field_ik_group_id']['field'] = 'field_ik_group_id';
  /* Field: Content: Item ID */
  $handler->display->display_options['fields']['field_ik_item_id']['id'] = 'field_ik_item_id';
  $handler->display->display_options['fields']['field_ik_item_id']['table'] = 'field_data_field_ik_item_id';
  $handler->display->display_options['fields']['field_ik_item_id']['field'] = 'field_ik_item_id';
  $handler->display->display_options['fields']['field_ik_item_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Item Key Number */
  $handler->display->display_options['fields']['field_ik_number']['id'] = 'field_ik_number';
  $handler->display->display_options['fields']['field_ik_number']['table'] = 'field_data_field_ik_number';
  $handler->display->display_options['fields']['field_ik_number']['field'] = 'field_ik_number';
  $handler->display->display_options['fields']['field_ik_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_ik_section']['id'] = 'field_ik_section';
  $handler->display->display_options['fields']['field_ik_section']['table'] = 'field_data_field_ik_section';
  $handler->display->display_options['fields']['field_ik_section']['field'] = 'field_ik_section';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_ik_status']['id'] = 'field_ik_status';
  $handler->display->display_options['fields']['field_ik_status']['table'] = 'field_data_field_ik_status';
  $handler->display->display_options['fields']['field_ik_status']['field'] = 'field_ik_status';
  /* Field: Content: Support Remarks */
  $handler->display->display_options['fields']['field_ik_support_remarks']['id'] = 'field_ik_support_remarks';
  $handler->display->display_options['fields']['field_ik_support_remarks']['table'] = 'field_data_field_ik_support_remarks';
  $handler->display->display_options['fields']['field_ik_support_remarks']['field'] = 'field_ik_support_remarks';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_ik_type']['id'] = 'field_ik_type';
  $handler->display->display_options['fields']['field_ik_type']['table'] = 'field_data_field_ik_type';
  $handler->display->display_options['fields']['field_ik_type']['field'] = 'field_ik_type';
  /* Field: Content: UI Controlled */
  $handler->display->display_options['fields']['field_ik_ui_controlled']['id'] = 'field_ik_ui_controlled';
  $handler->display->display_options['fields']['field_ik_ui_controlled']['table'] = 'field_data_field_ik_ui_controlled';
  $handler->display->display_options['fields']['field_ik_ui_controlled']['field'] = 'field_ik_ui_controlled';
  /* Field: Content: Value */
  $handler->display->display_options['fields']['field_ik_value']['id'] = 'field_ik_value';
  $handler->display->display_options['fields']['field_ik_value']['table'] = 'field_data_field_ik_value';
  $handler->display->display_options['fields']['field_ik_value']['field'] = 'field_ik_value';
  /* Field: Content: Version Code */
  $handler->display->display_options['fields']['field_ik_version_code']['id'] = 'field_ik_version_code';
  $handler->display->display_options['fields']['field_ik_version_code']['table'] = 'field_data_field_ik_version_code';
  $handler->display->display_options['fields']['field_ik_version_code']['field'] = 'field_ik_version_code';
  /* Field: Content: Version/Build */
  $handler->display->display_options['fields']['field_ik_version_build']['id'] = 'field_ik_version_build';
  $handler->display->display_options['fields']['field_ik_version_build']['table'] = 'field_data_field_ik_version_build';
  $handler->display->display_options['fields']['field_ik_version_build']['field'] = 'field_ik_version_build';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'item_key' => 'item_key',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'item-keys';
  $export['item_keys'] = $view;

  return $export;
}
