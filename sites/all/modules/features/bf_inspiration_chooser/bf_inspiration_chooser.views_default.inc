<?php
/**
 * @file
 * bf_inspiration_chooser.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bf_inspiration_chooser_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'inspiration_chooser';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_cause_index_solr';
  $view->human_name = 'Inspiration Chooser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inspiration';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_subtitle' => 'field_subtitle',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  /* Field: Indexed Content: Jumbotron Video */
  $handler->display->display_options['fields']['field_jumbotron_video']['id'] = 'field_jumbotron_video';
  $handler->display->display_options['fields']['field_jumbotron_video']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_jumbotron_video']['field'] = 'field_jumbotron_video';
  $handler->display->display_options['fields']['field_jumbotron_video']['label'] = '';
  $handler->display->display_options['fields']['field_jumbotron_video']['alter']['text'] = '<a href="[field_jumbotron_video_1]" target="_blank">[field_jumbotron_video]</a>';
  $handler->display->display_options['fields']['field_jumbotron_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jumbotron_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_jumbotron_video']['type'] = 'magnific_popup_file_field_formatter';
  $handler->display->display_options['fields']['field_jumbotron_video']['settings'] = array(
    'gallery_style' => 'all_items',
    'thumbnail_field' => 'field_jumbotron_video',
    'thumbnail_style' => 'magnific_popup_thumbnail',
  );
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: University or Institution */
  $handler->display->display_options['fields']['field_university_or_institution']['id'] = 'field_university_or_institution';
  $handler->display->display_options['fields']['field_university_or_institution']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_university_or_institution']['field'] = 'field_university_or_institution';
  $handler->display->display_options['fields']['field_university_or_institution']['label'] = '';
  $handler->display->display_options['fields']['field_university_or_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_university_or_institution']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_university_or_institution']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_university_or_institution']['bypass_access'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Jumbotron Video: The file. (indexed) */
  $handler->display->display_options['filters']['field_jumbotron_video_file']['id'] = 'field_jumbotron_video_file';
  $handler->display->display_options['filters']['field_jumbotron_video_file']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['filters']['field_jumbotron_video_file']['field'] = 'field_jumbotron_video_file';
  $handler->display->display_options['filters']['field_jumbotron_video_file']['operator'] = 'not empty';
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
  );
  $handler->display->display_options['filters']['field_research_area']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: University or Institution */
  $handler->display->display_options['filters']['field_university_or_institution']['id'] = 'field_university_or_institution';
  $handler->display->display_options['filters']['field_university_or_institution']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['filters']['field_university_or_institution']['field'] = 'field_university_or_institution';
  $handler->display->display_options['filters']['field_university_or_institution']['value'] = array();
  $handler->display->display_options['filters']['field_university_or_institution']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['operator_id'] = 'field_university_or_institution_op';
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['label'] = 'University / Institution';
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['operator'] = 'field_university_or_institution_op';
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['identifier'] = 'field_university_or_institution';
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_university_or_institution']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Video Inspiration';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['title'] = 'Research Videos';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_subtitle' => 'field_subtitle',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Jumbotron Video */
  $handler->display->display_options['fields']['field_jumbotron_video']['id'] = 'field_jumbotron_video';
  $handler->display->display_options['fields']['field_jumbotron_video']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_jumbotron_video']['field'] = 'field_jumbotron_video';
  $handler->display->display_options['fields']['field_jumbotron_video']['label'] = '';
  $handler->display->display_options['fields']['field_jumbotron_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jumbotron_video']['alter']['text'] = '<a href="[field_jumbotron_video_1]" target="_blank">[field_jumbotron_video]</a>';
  $handler->display->display_options['fields']['field_jumbotron_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jumbotron_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_jumbotron_video']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_jumbotron_video']['settings'] = array(
    'gallery_style' => 'all_items',
    'thumbnail_field' => 'field_jumbotron_video',
    'thumbnail_style' => 'magnific_popup_thumbnail',
  );
  /* Field: Indexed Content: Jumbotron Image */
  $handler->display->display_options['fields']['field_jumbotron_image']['id'] = 'field_jumbotron_image';
  $handler->display->display_options['fields']['field_jumbotron_image']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_jumbotron_image']['field'] = 'field_jumbotron_image';
  $handler->display->display_options['fields']['field_jumbotron_image']['label'] = '';
  $handler->display->display_options['fields']['field_jumbotron_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jumbotron_image']['alter']['text'] = '<a href="[field_jumbotron_video]" target="_blank">[field_jumbotron_image]</a>';
  $handler->display->display_options['fields']['field_jumbotron_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jumbotron_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_jumbotron_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: University or Institution */
  $handler->display->display_options['fields']['field_university_or_institution']['id'] = 'field_university_or_institution';
  $handler->display->display_options['fields']['field_university_or_institution']['table'] = 'search_api_index_cause_index_solr';
  $handler->display->display_options['fields']['field_university_or_institution']['field'] = 'field_university_or_institution';
  $handler->display->display_options['fields']['field_university_or_institution']['label'] = '';
  $handler->display->display_options['fields']['field_university_or_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_university_or_institution']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_university_or_institution']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_university_or_institution']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'research-videos';
  $export['inspiration_chooser'] = $view;

  return $export;
}
