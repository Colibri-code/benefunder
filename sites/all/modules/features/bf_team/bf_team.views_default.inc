<?php
/**
 * @file
 * bf_team.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bf_team_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'team';
  $view->description = 'Listing of team bios';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Team';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Team';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_teambio_photo']['id'] = 'field_teambio_photo';
  $handler->display->display_options['fields']['field_teambio_photo']['table'] = 'field_data_field_teambio_photo';
  $handler->display->display_options['fields']['field_teambio_photo']['field'] = 'field_teambio_photo';
  $handler->display->display_options['fields']['field_teambio_photo']['label'] = '';
  $handler->display->display_options['fields']['field_teambio_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teambio_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teambio_photo']['settings'] = array(
    'image_style' => 'team_300x300',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_teambio_title']['id'] = 'field_teambio_title';
  $handler->display->display_options['fields']['field_teambio_title']['table'] = 'field_data_field_teambio_title';
  $handler->display->display_options['fields']['field_teambio_title']['field'] = 'field_teambio_title';
  $handler->display->display_options['fields']['field_teambio_title']['label'] = '';
  $handler->display->display_options['fields']['field_teambio_title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
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
    'team_bio' => 'team_bio',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'team';
  $export['team'] = $view;

  return $export;
}
