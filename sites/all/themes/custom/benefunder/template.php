<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_form_alter().
 */
function benefunder_form_alter(array &$form, array &$form_state = array(), $form_id = NULL) {
    switch ($form_id) {
      case 'search_block_form':
        unset($form['search_block_form']['#theme_wrappers']);
        unset($form['actions']['submit']['#attributes']['class']);
        $form['#attributes']['class'][] = 'hidden-xs hidden-sm';
        
        break;
    }
}

/**
 * Implements template_preprocess_page().
 */
function benefunder_preprocess_page(&$vars, $hook) {
  if (isset($vars['node'])) {
    // If the node type is "blog_madness" the template suggestion will be "page--blog-madness.tpl.php".
    $vars['theme_hook_suggestions'][] = 'page__'. $vars['node']->type;
  }
}

/**
 * Implements template_preprocess_html().
 */
function benefunder_preprocess_html(&$variables) {
  drupal_add_css('//maxcdn.bootstrapcdn.com/font-awesome/4.2.0/css/font-awesome.min.css', array('type' => 'external'));
}

/**
 * Implements template_preprocess_node().
 */
function benefunder_preprocess_node(&$variables) {
  // Adding regions to node templates so that sidebars can be printed there
  foreach (system_region_list($GLOBALS['theme']) as $region_key => $region_name) {
    if ($blocks = block_get_blocks_by_region($region_key)) {
      $variables['region'][$region_key] = $blocks;
    }
    else {
      $variables['region'][$region_key] = array();
    }
  }

  switch ($variables['type']) {
    case 'cause':
      $wrapper = entity_metadata_wrapper('node', $variables['nid']);

      /* Cause image */
      $jumbotron_image = $wrapper->field_jumbotron_image->value();
      $variables['hero_image'] = file_create_url($jumbotron_image['uri']);

      /* Researcher image */
      $researcher_image = $wrapper->field_picture->value();
      $variables['researcher_image'] = file_create_url($researcher_image['uri']);

      /* Researcher name */
      $variables['researcher_first_name'] = $wrapper->field_first_name->value();
      $variables['researcher_last_name'] = $wrapper->field_last_name->value();

      /* Affiliation */
      $university_or_institution = $wrapper->field_university_or_institution->value();
      $variables['affiliation'] = $university_or_institution[0]->name;

      /* Affiliation logo */
      if (!empty($university_or_institution[0]->field_logo)) {
        $affiliation = entity_metadata_wrapper('taxonomy_term', $university_or_institution[0]->tid);
        $logo = $affiliation->field_logo->value();
        $variables['affiliation_logo'] = file_create_url($logo['uri']);
      }

      /* Academic Position */
      $academic_positions = $wrapper->field_academic_position->value();
      $variables['academic_positions'] = $academic_positions;

      /* Education */
      $education_items = $wrapper->field_education->value();
      $variables['education_items'] = $education_items;

      /* How to contribute */
      $call_to_action = $wrapper->field_call_to_action->value->value();
      $variables['call_to_action'] = $call_to_action;

      /* Subtitle */
      $variables['subtitle'] = $wrapper->field_subtitle->value();

      /* Jumbotron copy */
      $jumbotron_copy = $wrapper->field_jumbotron_copy->value();
      $variables['jumbotron_copy'] = $jumbotron_copy;

      /* Jumbotron video */
      $jumbotron_video = $wrapper->field_jumbotron_video->value();
      if (!empty($jumbotron_video)) {
        $variables['jumbotron_video'] = file_create_url($jumbotron_video['uri']);
      }

      /* Body text */
      $body = $wrapper->body->value->value();
      $variables['body'] = $body;

      /* In the news */
      $in_the_news_items = $wrapper->field_in_the_news->value();
      $in_the_news = array();
      foreach ($in_the_news_items as $item) {
        $in_the_news[] = l(t($item['title']), $item['url'], array(
            'query' => $item['query'],
            'attributes' => $item['attributes'],
          ));
      }
      $variables['in_the_news'] = $in_the_news;

      /* Publications */
      $publications_items = $wrapper->field_publications->value();
      $publications = array();
      foreach ($publications_items as $item) {
        $item['attributes']['class'][] = 'publications-link';
        $publications[] = array(
          'title' => $item['title'],
          'link' => l('PDF', $item['url'], array(
              'query' => $item['query'],
              'attributes' => $item['attributes'],
            )),
        );
      }
      $variables['publications'] = $publications;

      /* Videos */
      $additional_videos_items = $wrapper->field_additional_videos->value();
      $additional_videos = array();
      foreach ($additional_videos_items as $item) {
        $item['attributes']['class'][] = 'teaser-video';
        $additional_videos[] = l(t($item['title']), $item['url'], array(
            'query' => $item['query'],
            'attributes' => $item['attributes'],
          ));
      }
      $variables['additional_videos'] = $additional_videos;


      $research_areas = $wrapper->field_research_area->value();

      $top_level_research_area = NULL;
      foreach ($research_areas as $research_area) {
        $parent = taxonomy_get_parents($research_area->tid);
        if (empty($parent)) {
          $top_level_research_area = $research_area;
        }
      }

      $research_area_css_class = '';
      if($top_level_research_area){
        switch ($top_level_research_area->tid) {
          case 10:
            $research_area_css_class = 'environment';
            break;
          case 7:
            $research_area_css_class = 'humanities';
            break;
          case 66:
            $research_area_css_class = 'life';
            break;
          case 91:
            $research_area_css_class = 'technology';
            break;
        }
      }

      $variables['title'] = $wrapper->title->value();

      $variables['research_area_name'] = $top_level_research_area->name;

      /* Research area icon (color) */
      $variables['research_area_icon_color'] = file_create_url($top_level_research_area->field_term_icon_with_color_['und'][0]['uri']);

      $variables['research_area_css_class'] = $research_area_css_class;

      break;
  }
}