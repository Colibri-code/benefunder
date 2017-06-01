<?php
/**
 * @file
 * bf_aging_wellness_disease.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bf_aging_wellness_disease_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_aging_wellness_disease_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_aging_wellness_disease_pattern'] = $strongarm;

  return $export;
}
