<?php
/**
 * @file
 * bf_cause_chooser_fulltext.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bf_cause_chooser_fulltext_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cause_chooser_fulltext';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_cause_index_solr';
  $view->human_name = 'Cause Chooser Fulltext';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entity Reference View Widget Checkbox: Indexed Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = '';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 1;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cause';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  /* Field: Indexed Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  /* Field: Indexed Content: Research Area */
  $handler->display->display_options['fields']['field_research_area']['id'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_research_area']['field'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_research_area']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_research_area']['bypass_access'] = 0;
  /* Field: Indexed Content: University or Institution */
  $handler->display->display_options['fields']['field_university_or_institution']['id'] = 'field_university_or_institution';
  $handler->display->display_options['fields']['field_university_or_institution']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_university_or_institution']['field'] = 'field_university_or_institution';
  /* Field: Indexed Content: Jumbotron Video */
  $handler->display->display_options['fields']['field_jumbotron_video']['id'] = 'field_jumbotron_video';
  $handler->display->display_options['fields']['field_jumbotron_video']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_jumbotron_video']['field'] = 'field_jumbotron_video';
  $handler->display->display_options['fields']['field_jumbotron_video']['label'] = 'Video';
  $handler->display->display_options['fields']['field_jumbotron_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_jumbotron_video']['settings'] = array(
    'gallery_style' => 'all_items',
    'thumbnail_field' => 'field_jumbotron_video',
    'thumbnail_style' => 'magnific_popup_thumbnail',
  );
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Sort criterion: Global: PHP */
  $handler->display->display_options['sorts']['php']['id'] = 'php';
  $handler->display->display_options['sorts']['php']['table'] = 'views';
  $handler->display->display_options['sorts']['php']['field'] = 'php';
  $handler->display->display_options['sorts']['php']['use_php_setup'] = 1;
  $handler->display->display_options['sorts']['php']['php_setup'] = 'global $user;
$static = db_query(\'SELECT entity_id FROM flagging WHERE fid = 1 AND uid = :uid\', array(\':uid\' => $user->uid))->fetchCol();
';
  $handler->display->display_options['sorts']['php']['php_sort'] = '$row1_flagged = in_array($row1->nid, $static);
$row2_flagged = in_array($row2->nid, $static);

//die(print_r($row1));

if ($row1_flagged && !$row2_flagged) {
  return -1;
}
elseif ($row2_flagged && !$row1_flagged) {
  return 1;
}

if ($row1->field_jumbotron_video && !$row2->field_jumbotron_video) {
  return -1;
}
elseif ($row2->field_jumbotron_video && !$row1->field_jumbotron_video) {
  return 1;
}

return 0;';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  /* Filter criterion: Indexed Content: Research Area */
  $handler->display->display_options['filters']['field_research_area']['id'] = 'field_research_area';
  $handler->display->display_options['filters']['field_research_area']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['filters']['field_research_area']['field'] = 'field_research_area';
  $handler->display->display_options['filters']['field_research_area']['value'] = array();
  $handler->display->display_options['filters']['field_research_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_research_area']['expose']['operator_id'] = 'field_research_area_op';
  $handler->display->display_options['filters']['field_research_area']['expose']['label'] = 'Research Area';
  $handler->display->display_options['filters']['field_research_area']['expose']['operator'] = 'field_research_area_op';
  $handler->display->display_options['filters']['field_research_area']['expose']['identifier'] = 'field_research_area';
  $handler->display->display_options['filters']['field_research_area']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_research_area']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: University or Institution */
  $handler->display->display_options['filters']['field_university_or_institution']['id'] = 'field_university_or_institution';
  $handler->display->display_options['filters']['field_university_or_institution']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['filters']['field_university_or_institution']['field'] = 'field_university_or_institution';
  $handler->display->display_options['filters']['field_university_or_institution']['value'] = array();
  $handler->display->display_options['filters']['field_university_or_institution']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['operator_id'] = 'field_university_or_institution_op';
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['label'] = 'University or Institution';
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['operator'] = 'field_university_or_institution_op';
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['identifier'] = 'field_university_or_institution';
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Aging, Wellness &amp; Disease */
  $handler->display->display_options['filters']['field_aging_wellness_disease']['id'] = 'field_aging_wellness_disease';
  $handler->display->display_options['filters']['field_aging_wellness_disease']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['filters']['field_aging_wellness_disease']['field'] = 'field_aging_wellness_disease';
  $handler->display->display_options['filters']['field_aging_wellness_disease']['value'] = array();
  $handler->display->display_options['filters']['field_aging_wellness_disease']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aging_wellness_disease']['expose']['operator_id'] = 'field_aging_wellness_disease_op';
  $handler->display->display_options['filters']['field_aging_wellness_disease']['expose']['label'] = 'Aging, Wellness &amp; Disease';
  $handler->display->display_options['filters']['field_aging_wellness_disease']['expose']['operator'] = 'field_aging_wellness_disease_op';
  $handler->display->display_options['filters']['field_aging_wellness_disease']['expose']['identifier'] = 'field_aging_wellness_disease';
  $handler->display->display_options['filters']['field_aging_wellness_disease']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_aging_wellness_disease']['expose']['reduce'] = 0;

  /* Display: Main Cause Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Main Cause Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Choose Cause';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'title' => 'title',
    'field_subtitle' => 'title',
    'field_last_name' => 'field_last_name',
    'field_research_area' => 'field_research_area',
    'field_university_or_institution' => 'field_university_or_institution',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'field_subtitle' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
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
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Preliminary Cause Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Preliminary Cause Widget', 'entityreference_view_widget_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Choose Cause';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'title' => 'title',
    'field_subtitle' => 'title',
    'field_last_name' => 'field_last_name',
    'field_research_area' => 'field_research_area',
    'field_university_or_institution' => 'field_university_or_institution',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'field_subtitle' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
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
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entity Reference View Widget Checkbox: Indexed Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = '';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cause';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  /* Field: Indexed Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  /* Field: Indexed Content: Research Area */
  $handler->display->display_options['fields']['field_research_area']['id'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_research_area']['field'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_research_area']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_research_area']['bypass_access'] = 0;
  /* Field: Indexed Content: University or Institution */
  $handler->display->display_options['fields']['field_university_or_institution']['id'] = 'field_university_or_institution';
  $handler->display->display_options['fields']['field_university_or_institution']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_university_or_institution']['field'] = 'field_university_or_institution';
  /* Field: Indexed Content: Jumbotron Video */
  $handler->display->display_options['fields']['field_jumbotron_video']['id'] = 'field_jumbotron_video';
  $handler->display->display_options['fields']['field_jumbotron_video']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_jumbotron_video']['field'] = 'field_jumbotron_video';
  $handler->display->display_options['fields']['field_jumbotron_video']['label'] = 'Video';
  $handler->display->display_options['fields']['field_jumbotron_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_jumbotron_video']['settings'] = array(
    'gallery_style' => 'all_items',
    'thumbnail_field' => 'field_jumbotron_video',
    'thumbnail_style' => 'magnific_popup_thumbnail',
  );
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  $export['cause_chooser_fulltext'] = $view;

  return $export;
}
