<?php

/**
 * Implements hook_views_query_alter().
 *
 * @param $view
 * @param $query
 */
function cause_listing_views_query_alter(&$view, &$query) {
  if ($view->name == 'cause_listing') {
    // Modify join to only include top-level taxonomy terms, removes dupes.
    $join = $query->table_queue['taxonomy_term_data_field_data_field_research_area__taxonomy_term_hierarchy']['join'];
    $join->extra = array(
      array(
        'field' => 'parent',
        'operator' => '=',
        'value' => 0,
        'numeric' => TRUE,
      )
    );
    $join->type = 'INNER';
    
    // Not sure why this table is joined twice - remove 1 join.
    unset($query->table_queue['taxonomy_term_data_taxonomy_term_hierarchy']);
  }
}
