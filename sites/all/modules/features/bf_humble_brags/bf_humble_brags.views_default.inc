<?php
/**
 * @file
 * bf_humble_brags.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bf_humble_brags_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'humble_brags';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Humble Brags';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '        <div class="brag-highlight">
          <div class="inner"></div>
        </div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Content: Humble Brags (field_humble_brags) */
  $handler->display->display_options['relationships']['field_humble_brags_nid']['id'] = 'field_humble_brags_nid';
  $handler->display->display_options['relationships']['field_humble_brags_nid']['table'] = 'field_data_field_humble_brags';
  $handler->display->display_options['relationships']['field_humble_brags_nid']['field'] = 'field_humble_brags_nid';
  $handler->display->display_options['relationships']['field_humble_brags_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_humble_brags_nid']['delta'] = '-1';
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_humble_brags_nid';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_humble_brags_nid';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '          [field_logo]
          <div class="triangle-clip"></div>
          <p class="brag-copy">[body-value]</p>
';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'homepage' => 'homepage',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['humble_brags'] = $view;

  return $export;
}
