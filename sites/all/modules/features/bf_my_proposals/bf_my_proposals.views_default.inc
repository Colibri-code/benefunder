<?php
/**
 * @file
 * bf_my_proposals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bf_my_proposals_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_clients';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Clients';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => '',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_proposal_status_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'See All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => 'Needs Assessment|See Assessments
Giving Proposal|See Proposals
Giving Plan|See Giving Plans
- All -|See All',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Proposal Name';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit?destination=user';
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Edit [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_proposal_status']['id'] = 'field_proposal_status';
  $handler->display->display_options['fields']['field_proposal_status']['table'] = 'field_data_field_proposal_status';
  $handler->display->display_options['fields']['field_proposal_status']['field'] = 'field_proposal_status';
  $handler->display->display_options['fields']['field_proposal_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Giving Proposal */
  $handler->display->display_options['fields']['field_giving_proposal']['id'] = 'field_giving_proposal';
  $handler->display->display_options['fields']['field_giving_proposal']['table'] = 'field_data_field_giving_proposal';
  $handler->display->display_options['fields']['field_giving_proposal']['field'] = 'field_giving_proposal';
  $handler->display->display_options['fields']['field_giving_proposal']['label'] = 'Download';
  $handler->display->display_options['fields']['field_giving_proposal']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_giving_proposal']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_giving_proposal']['settings'] = array(
    'file_view_mode' => 'media_small',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'giving_proposal' => 'giving_proposal',
  );
  /* Filter criterion: Content: Status (field_proposal_status) */
  $handler->display->display_options['filters']['field_proposal_status_tid']['id'] = 'field_proposal_status_tid';
  $handler->display->display_options['filters']['field_proposal_status_tid']['table'] = 'field_data_field_proposal_status';
  $handler->display->display_options['filters']['field_proposal_status_tid']['field'] = 'field_proposal_status_tid';
  $handler->display->display_options['filters']['field_proposal_status_tid']['value'] = array(
    297 => '297',
    278 => '278',
    279 => '279',
  );
  $handler->display->display_options['filters']['field_proposal_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proposal_status_tid']['expose']['operator_id'] = 'field_proposal_status_tid_op';
  $handler->display->display_options['filters']['field_proposal_status_tid']['expose']['operator'] = 'field_proposal_status_tid_op';
  $handler->display->display_options['filters']['field_proposal_status_tid']['expose']['identifier'] = 'field_proposal_status_tid';
  $handler->display->display_options['filters']['field_proposal_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_proposal_status_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_proposal_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proposal_status_tid']['vocabulary'] = 'plan_status';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['my_clients'] = $view;

  return $export;
}
