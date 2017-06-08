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
        $form['search_block_form']['#attributes']['placeholder'] = t('Search Causes');
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

  if (arg(0) == 'search') {
    drupal_set_title(t('Search'));
  }
}

/**
 * Overrides theme_menu_tree().
 */
function benefunder_menu_tree__primary(&$variables) {
  return '<ul class="navbar-right nav navbar-nav">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_pager().
 */
function benefunder_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));
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
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['node']->type . '__' . $variables['view_mode'];
  // Adding regions to node templates so that sidebars can be printed there
  if ($plugin = context_get_plugin('reaction', 'block')) {
    $variables['sidebar_first'] = $plugin->block_get_blocks_by_region('sidebar_first');
    $variables['sidebar_second'] = $plugin->block_get_blocks_by_region('sidebar_second');
  }

  switch ($variables['type']) {
    case 'event':
      $node_w =  entity_metadata_wrapper('node', $variables['node']);
      if($variables['view_mode'] == 'teaser'){
        if(($city = $node_w->field_venue_address->locality->value()) && ($vname = $node_w->field_venue_name->value())){
          $variables['venue'] = $vname . ', ' . $city;
        }
      }
      if($event_date = $node_w->field_event_date->value()){
        $variables['short_date']['day'] = date('d', $event_date);
        $variables['short_date']['month'] = date('M', $event_date);
      }
      if($hosts = $node_w->field_co_host_name->value()){
        $variables['hosts'] = implode(',', $hosts);
      }
      if($reg_url = $node_w->field_registration_url->url->value()){
        $variables['reg_url'] = $reg_url;
      }
      if($ev_type = $node_w->field_event_type->label()){
        $variables['event_type'] = $ev_type;
        $variables['event_type_modifier'] = drupal_html_class('card-event--' . $ev_type);
      }
      if($variables['view_mode'] == 'full'){
        if(!empty($variables['content']['field_related_causes'])){
          $r_causes = &$variables['content']['field_related_causes'];
          foreach(element_children($variables['content']['field_related_causes']) as $ch){
            $r_causes[$ch]['node'][$r_causes['#items'][$ch]['target_id']]['#modifier'] = 'card-researcher--block';
            $r_causes[$ch]['node'][$r_causes['#items'][$ch]['target_id']]['#show_uni'] = TRUE;
          }
        }
        if($img_uri = $node_w->field_event_image->file->url->value()){
          $variables['img_uri'] = $img_uri;
        }
      }
      break;
    case 'cause':
      if(isset($variables['elements']['#modifier'])){
        $node_w =  entity_metadata_wrapper('node', $variables['node']);
        $variables['modifier'] = $variables['elements']['#modifier'];
        if(!empty($variables['elements']['#show_uni']) && ($uni = $node_w->field_university_or_institution->label())){
          $variables['uni'] = $uni;
        }
      }
      if ($variables['view_mode'] != 'search_result') {
        $wrapper = entity_metadata_wrapper('node', $variables['nid']);
        /* Cause image */
        $jumbotron_image = $wrapper->field_jumbotron_image->value();
        $variables['hero_image'] = !empty($jumbotron_image) ? image_style_url('cause_detail_-_jumbotron_image', $jumbotron_image['uri']) : '';
  
        /* Researcher image */
        $researcher_image = $wrapper->field_picture->value();
        if ($researcher_image) {
          $variables['researcher_image'] = !empty($researcher_image) ? file_create_url($researcher_image['uri']) : '';
        }
  
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
                'query' => isset($link['query']) ? $link['query'] : NULL,
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
                'query' => isset($link['query']) ? $link['query'] : NULL,
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
              'query' => isset($item['query']) ? $item['query'] : NULL,
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
                      'query' => isset($jumbotron_link['query']) ? $jumbotron_link['query'] : NULL,
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
          $jumbotron_image = image_style_url('cause_detail_-_jumbotron_image', $jumbotron_image['uri']);
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
            'image' => !empty($image) ? image_style_url('basic_page_-_50_50_alternating', $image['uri']) : '',
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