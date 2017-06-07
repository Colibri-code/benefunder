<?php
/**
 * @file
 * bf_taxonomies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bf_taxonomies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_research_area_pattern';
  $strongarm->value = 'hidden/[term:name]';
  $export['pathauto_taxonomy_term_research_area_pattern'] = $strongarm;

  return $export;
}
