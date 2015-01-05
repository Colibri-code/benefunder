<?php

/**
 * @file
 * template.php
 */

/**
 * Custom exposed filter for Cause Listing page.
 *
 * @param $vars
 */
function benefunder_preprocess_views_exposed_form(&$vars) {
  $form = &$vars['form'];
  if ($form['#id'] == 'views-exposed-form-cause-listing-page') {

    // Load full taxonomy tree.
    $full_tree = taxonomy_get_tree(2);
    $options['all'] = t('All');

    // Sort terms by depth into arrays for later rendering.
    foreach ($full_tree as $term) {
      if ($term->depth == 0) {
        $options[$term->tid] = $term->name;
      }
      else {
        $sub[$term->parents[0]][$term->tid] = $term->name;
      }
    }

    // Render primary filter.
    $select = '<div class="primary-filter gutters"><select id="causes-list-exposed-filter">';
    foreach ($options as $value => $label) {
      $select .= '<option value="' . $value . '">' . $label . '</option>';
    }
    $select .= '</select></div>';
    $vars['widgets']['filter-term_node_tid_depth']->widget = $select;
    $vars['widgets']['filter-term_node_tid_depth']->widget .= '<div class="conditional-filter secondary">';

    // Render secondary filter.
    foreach ($sub as $parent_tid => $subs) {
      $links = array();
      foreach ($subs as $tid => $name) {
        $class = (isset($_GET['term_node_tid_depth']) && $_GET['term_node_tid_depth'] == $tid) ? array('active-tag', 'tag') : array('tag');
        $links[] = l(t($name), 'cause-listing', array('query' => array('term' => $tid), 'attributes' => array('class' => $class)));
      }
      $id = drupal_strtolower($options[$parent_tid]) . '-filter-tags';
      $list = theme('item_list', array('items' => $links, 'type' => 'ul', 'attributes' => array('id' => $id, 'class' => 'filter-tags')));
      $vars['widgets']['filter-term_node_tid_depth']->widget .= $list;
    }

    $vars['widgets']['filter-term_node_tid_depth']->widget .= '</div>';
  }
}