<?php
/**
 * @file
 * bf_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bf_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = 'Upcoming events';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_causes_target_id']['id'] = 'field_related_causes_target_id';
  $handler->display->display_options['relationships']['field_related_causes_target_id']['table'] = 'field_data_field_related_causes';
  $handler->display->display_options['relationships']['field_related_causes_target_id']['field'] = 'field_related_causes_target_id';
  $handler->display->display_options['relationships']['field_related_causes_target_id']['label'] = 'Related Cause';
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_event_type]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'H:ia M j Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Venue Name */
  $handler->display->display_options['fields']['field_venue_name']['id'] = 'field_venue_name';
  $handler->display->display_options['fields']['field_venue_name']['table'] = 'field_data_field_venue_name';
  $handler->display->display_options['fields']['field_venue_name']['field'] = 'field_venue_name';
  $handler->display->display_options['fields']['field_venue_name']['label'] = '';
  $handler->display->display_options['fields']['field_venue_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_name']['element_label_colon'] = FALSE;
  /* Field: Content: Venue Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_venue_address_locality']['id'] = 'field_venue_address_locality';
  $handler->display->display_options['fields']['field_venue_address_locality']['table'] = 'field_data_field_venue_address';
  $handler->display->display_options['fields']['field_venue_address_locality']['field'] = 'field_venue_address_locality';
  $handler->display->display_options['fields']['field_venue_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_venue_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_address_locality']['element_label_colon'] = FALSE;
  /* Field: Content: Venue Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_venue_address_administrative_area']['id'] = 'field_venue_address_administrative_area';
  $handler->display->display_options['fields']['field_venue_address_administrative_area']['table'] = 'field_data_field_venue_address';
  $handler->display->display_options['fields']['field_venue_address_administrative_area']['field'] = 'field_venue_address_administrative_area';
  $handler->display->display_options['fields']['field_venue_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_venue_address_administrative_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_venue_address_administrative_area']['alter']['text'] = '[field_venue_name], [field_venue_address_locality] [field_venue_address_administrative_area]';
  $handler->display->display_options['fields']['field_venue_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_address_administrative_area']['display_name'] = 1;
  /* Field: Content: Sponsor Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Co-host Name(s) */
  $handler->display->display_options['fields']['field_co_host_name']['id'] = 'field_co_host_name';
  $handler->display->display_options['fields']['field_co_host_name']['table'] = 'field_data_field_co_host_name';
  $handler->display->display_options['fields']['field_co_host_name']['field'] = 'field_co_host_name';
  $handler->display->display_options['fields']['field_co_host_name']['label'] = 'Co-host(s)';
  $handler->display->display_options['fields']['field_co_host_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_co_host_name']['delta_offset'] = '0';
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['relationship'] = 'field_related_causes_target_id';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title / Academic Position */
  $handler->display->display_options['fields']['field_academic_position']['id'] = 'field_academic_position';
  $handler->display->display_options['fields']['field_academic_position']['table'] = 'field_data_field_academic_position';
  $handler->display->display_options['fields']['field_academic_position']['field'] = 'field_academic_position';
  $handler->display->display_options['fields']['field_academic_position']['relationship'] = 'field_related_causes_target_id';
  $handler->display->display_options['fields']['field_academic_position']['label'] = '';
  $handler->display->display_options['fields']['field_academic_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academic_position']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_academic_position']['delta_offset'] = '0';
  /* Field: Content: Registration URL */
  $handler->display->display_options['fields']['field_registration_url']['id'] = 'field_registration_url';
  $handler->display->display_options['fields']['field_registration_url']['table'] = 'field_data_field_registration_url';
  $handler->display->display_options['fields']['field_registration_url']['field'] = 'field_registration_url';
  $handler->display->display_options['fields']['field_registration_url']['label'] = '';
  $handler->display->display_options['fields']['field_registration_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registration_url']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
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
    'event' => 'event',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'events';
  $export['events'] = $view;

  return $export;
}
