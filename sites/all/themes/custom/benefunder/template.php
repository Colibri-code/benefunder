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
  // Add font awesome css file
  drupal_add_css('//maxcdn.bootstrapcdn.com/font-awesome/4.2.0/css/font-awesome.min.css', array('type' => 'external'));

  // Add body classes to nodes in the basic page content type
  $node = menu_get_object();
  if ($node && isset($node->nid)) {
    if ($node->type == 'page') {
      $wrapper = entity_metadata_wrapper('node', $node);
      $jumbotron_fields = $wrapper->field_jumbotron_fields->value();

      switch ($jumbotron_fields) {
        case 'banner':
          $variables['classes_array'][] = 'banner';

          break;

        case 'title':
          $variables['classes_array'][] = 'only-title';

          break;

        case 'title_teaser_link':
          $variables['classes_array'][] = 'title-teaser-link';

          break;
      }
    }
  }
}

/**
 * Implements template_preprocess_node().
 */
function benefunder_preprocess_node(&$variables) {
  // Adding regions to node templates so that sidebars can be printed there
  if ($plugin = context_get_plugin('reaction', 'block')) {
    $variables['sidebar_first'] = $plugin->block_get_blocks_by_region('sidebar_first');
    $variables['sidebar_second'] = $plugin->block_get_blocks_by_region('sidebar_second');
  }

  switch ($variables['type']) {
    case 'cause':
      if ($variables['view_mode'] != 'search_result') {
        $wrapper = entity_metadata_wrapper('node', $variables['nid']);
  
        /* Cause image */
        $jumbotron_image = $wrapper->field_jumbotron_image->value();
        $variables['hero_image'] = !empty($jumbotron_image) ? file_create_url($jumbotron_image['uri']) : '';
  
        /* Researcher image */
        $researcher_image = $wrapper->field_picture->value();
        $variables['researcher_image'] = !empty($researcher_image) ? file_create_url($researcher_image['uri']) : '';
  
        /* Researcher name */
        $variables['researcher_first_name'] = $wrapper->field_first_name->value();
        $variables['researcher_last_name'] = $wrapper->field_last_name->value();
  
        /* Affiliation */
        $university_or_institution = $wrapper->field_university_or_institution->value();
        $variables['affiliation'] = !empty($university_or_institution) ? $university_or_institution[0]->name : '';
  
        /* Affiliation logo */
        if (!empty($university_or_institution[0]->field_logo)) {
          $affiliation = entity_metadata_wrapper('taxonomy_term', $university_or_institution[0]->tid);
          $logo = $affiliation->field_logo->value();
          $variables['affiliation_logo'] = file_create_url($logo['uri']);
        }
  
        /* Academic Position */
        $academic_positions = $wrapper->field_academic_position->value();
        $variables['academic_positions'] = !empty($academic_positions) ? $academic_positions : '';
  
        /* Education */
        $education_items = $wrapper->field_education->value();
        $variables['education_items'] = !empty($education_items) ? $education_items : '';
  
        /* How to contribute */
        $call_to_action = $wrapper->field_call_to_action->value();
        $variables['call_to_action'] = !empty($call_to_action) ? $call_to_action['safe_value'] : '';
  
        /* Subtitle */
        $variables['subtitle'] = $wrapper->field_subtitle->value();
  
        /* Jumbotron copy */
        $jumbotron_copy = $wrapper->field_jumbotron_copy->value();
        $variables['jumbotron_copy'] = !empty($jumbotron_copy) ? $jumbotron_copy : '';
  
        /* Jumbotron video */
        $jumbotron_video = $wrapper->field_jumbotron_video->value();
        if (!empty($jumbotron_video)) {
          $variables['jumbotron_video'] = file_create_url($jumbotron_video['uri']);
        }
  
        /* Body text */
        $body = $wrapper->body->value();
        $variables['body'] = !empty($body) ? $body['safe_value'] : '';
  
        /* In the news */
        $in_the_news_items = $wrapper->field_in_the_news->value();
        $in_the_news = array();
        foreach ($in_the_news_items as $item) {
          $item = entity_metadata_wrapper('field_collection_item', $item->item_id);
          $link = $item->field_in_the_news_link->value();
          $teaser = $item->field_in_the_news_teaser->value();
  
          $in_the_news[] = array(
            'link' => l(t($link['title']), $link['url'], array(
                'query' => $link['query'],
                'attributes' => $link['attributes'],
              )),
            'teaser' => $teaser,
          );
        }
        $variables['in_the_news'] = $in_the_news;
  
        /* Publications */
        $publication_items = $wrapper->field_publications->value();
        $publications = array();
        foreach ($publication_items as $item) {
          $item = entity_metadata_wrapper('field_collection_item', $item->item_id);
          $link = $item->field_publication_link->value();
          $link['attributes']['class'] = 'publications-link';
          $teaser = $item->field_publication_description->value();
  
          $publications[] = array(
            'title' => $link['title'],
            'link' => l('PDF', $link['url'], array(
                'query' => $link['query'],
                'attributes' => $link['attributes'],
              )),
            'teaser' => $teaser,
          );
        }
        $variables['publications'] = $publications;
  
        /* Patents */
        $patent_items = $wrapper->field_patents->value();
        $patents = array();
        foreach ($patent_items as $item) {
          $item = entity_metadata_wrapper('field_collection_item', $item->item_id);
          $title = $item->field_patent_title->value();
          $description = $item->field_patent_description->value();
  
          $patents[] = array(
            'title' => $title,
            'description' => $description,
          );
        }
        $variables['patents'] = $patents;
  
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
  
        /* Bio */
        $bio = $wrapper->field_bio->value();
        $variables['bio'] = !empty($bio) ? $bio['safe_value'] : '';
  
        /* Awards */
        $award_items = $wrapper->field_awards->value();
        $awards = array();
        foreach ($award_items as $item) {
          $item = entity_metadata_wrapper('field_collection_item', $item->item_id);
          $title = $item->field_award_title->value();
          $description = $item->field_award_description->value();
  
          $awards[] = array(
            'title' => $title,
            'description' => $description,
          );
        }
        $variables['awards'] = $awards;
  
        $summary = $wrapper->field_summary->value();
        $variables['summary'] = !empty($summary) ? $summary['safe_value'] : ''  ;
  
        $variables['title'] = $wrapper->title->value();
  
        $variables['research_area_name'] = $top_level_research_area->name;
  
        /* Research area icon (color) */
        $variables['research_area_icon_color'] = file_create_url($top_level_research_area->field_term_icon_with_color_['und'][0]['uri']);
  
        $variables['research_area_css_class'] = $research_area_css_class;
      }
        break;
      

    case 'page':
      if ($variables['view_mode'] != 'search_result') {
        $wrapper = entity_metadata_wrapper('node', $variables['nid']);

        /* Jumbotron fields */
        $jumbotron_fields = $wrapper->field_jumbotron_fields->value();
        $variables['jumbotron_fields'] = $jumbotron_fields;

        switch ($jumbotron_fields) {
          case 'banner':
            $variables['banner_text'] = $wrapper->field_jumbotron_teaser->value();

            break;

          case 'title_teaser_link':
            /* Jumbotron link */
            $variables['jumbotron_teaser'] = $wrapper->field_jumbotron_teaser->value();

            /* Jumbotron link */
            $jumbotron_link = $wrapper->field_jumbotron_link->value();
            if ($jumbotron_link) {
              $jumbotron_link['attributes']['class'][] = 'call-to-action-link';
              $variables['jumbotron_link'] = l(t($jumbotron_link['title'] . '<i class="bf-arrow bf-arrow-right"></i>'), $jumbotron_link['url'], array(
                      'query' => $jumbotron_link['query'],
                      'attributes' => $jumbotron_link['attributes'],
                      'html' => true,
                    ));
            }

            break;
        }

        /* Jumbotron image */
        $jumbotron_image = $wrapper->field_page_hero->value();

        if (!$jumbotron_image) {
          $jumbotron_image = '/' . drupal_get_path('theme', 'benefunder') . '/media/images/nemo_background.jpg';
        }
        else {
          $jumbotron_image = file_create_url($jumbotron_image['uri']);
        }
        $variables['jumbotron_image'] = $jumbotron_image;

        /* Subtitle */
        $variables['subtitle'] = $wrapper->field_subtitle->value();

        /* 50/50 Image/Text alternating */
        $fifty_fifty_items = $wrapper->field_50_50_image_text_alternati->value();
        $fifty_fifty = array();
        foreach ($fifty_fifty_items as $item) {
          $item = entity_metadata_wrapper('field_collection_item', $item->item_id);
          $image = $item->field_50_50_image->value();
          $text = $item->field_50_50_text->value();
  
          $fifty_fifty[] = array(
            'text' => isset($text) ? $text['safe_value'] : '',
            'image' => !empty($image) ? file_create_url($image['uri']) : '',
          );
        }
        $variables['fifty_fifty'] = $fifty_fifty;

        /* Body text */
        $body = $wrapper->body->value();
        if (!empty($body)) {
          $variables['body'] = $wrapper->body->value->value();
        }

        /* Bottom body text */
        $bottom_body = $wrapper->field_bottom_text->value();
        if (!empty($bottom_body)) {
          $variables['bottom_body'] = $wrapper->field_bottom_text->value->value();
        }
      }

      break;
  }
}