<?php
/**
 * @file
 * bf_research_stages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bf_research_stages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_research_stages_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_research_stages_pattern'] = $strongarm;

  return $export;
}
