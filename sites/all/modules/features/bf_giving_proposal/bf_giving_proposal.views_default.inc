<?php
/**
 * @file
 * bf_giving_proposal.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bf_giving_proposal_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cause_chooser';
  $view->description = 'Shown in a modal on giving plans and proposals when picking causes.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cause Chooser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = '';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cause';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['type'] = 'text_plain';
  /* Field: Content: Research Area */
  $handler->display->display_options['fields']['field_research_area']['id'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['table'] = 'field_data_field_research_area';
  $handler->display->display_options['fields']['field_research_area']['field'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_research_area']['delta_offset'] = '0';
  /* Field: Content: University or Institution */
  $handler->display->display_options['fields']['field_university_or_institution']['id'] = 'field_university_or_institution';
  $handler->display->display_options['fields']['field_university_or_institution']['table'] = 'field_data_field_university_or_institution';
  $handler->display->display_options['fields']['field_university_or_institution']['field'] = 'field_university_or_institution';
  $handler->display->display_options['fields']['field_university_or_institution']['label'] = 'University / Institution';
  $handler->display->display_options['fields']['field_university_or_institution']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_university_or_institution']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'cause' => 'cause',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Cause Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Research Area (field_research_area) */
  $handler->display->display_options['filters']['field_research_area_tid']['id'] = 'field_research_area_tid';
  $handler->display->display_options['filters']['field_research_area_tid']['table'] = 'field_data_field_research_area';
  $handler->display->display_options['filters']['field_research_area_tid']['field'] = 'field_research_area_tid';
  $handler->display->display_options['filters']['field_research_area_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_research_area_tid']['value'] = '';
  $handler->display->display_options['filters']['field_research_area_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_research_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_research_area_tid']['expose']['operator_id'] = 'field_research_area_tid_op';
  $handler->display->display_options['filters']['field_research_area_tid']['expose']['label'] = 'Research Area';
  $handler->display->display_options['filters']['field_research_area_tid']['expose']['operator'] = 'field_research_area_tid_op';
  $handler->display->display_options['filters']['field_research_area_tid']['expose']['identifier'] = 'field_research_area_tid';
  $handler->display->display_options['filters']['field_research_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_research_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_research_area_tid']['vocabulary'] = 'research_area';
  $handler->display->display_options['filters']['field_research_area_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: University or Institution (field_university_or_institution) */
  $handler->display->display_options['filters']['field_university_or_institution_tid']['id'] = 'field_university_or_institution_tid';
  $handler->display->display_options['filters']['field_university_or_institution_tid']['table'] = 'field_data_field_university_or_institution';
  $handler->display->display_options['filters']['field_university_or_institution_tid']['field'] = 'field_university_or_institution_tid';
  $handler->display->display_options['filters']['field_university_or_institution_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_university_or_institution_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_university_or_institution_tid']['expose']['operator_id'] = 'field_university_or_institution_tid_op';
  $handler->display->display_options['filters']['field_university_or_institution_tid']['expose']['label'] = 'University or Institution';
  $handler->display->display_options['filters']['field_university_or_institution_tid']['expose']['operator'] = 'field_university_or_institution_tid_op';
  $handler->display->display_options['filters']['field_university_or_institution_tid']['expose']['identifier'] = 'field_university_or_institution_tid';
  $handler->display->display_options['filters']['field_university_or_institution_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_university_or_institution_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_university_or_institution_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_university_or_institution_tid']['vocabulary'] = 'university_or_institution';

  /* Display: Cause Chooser */
  $handler = $view->new_display('entityreference_view_widget', 'Cause Chooser', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Choose Cause';
  $handler->display->display_options['display_description'] = 'Entity Reference View Widget for picking causes';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'field_subtitle' => 'title',
    'title' => 'title',
    'field_last_name' => 'field_last_name',
    'field_research_area' => 'field_research_area',
    'field_university_or_institution' => 'field_university_or_institution',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subtitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_research_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_university_or_institution' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['cause_chooser'] = $view;

  return $export;
}
