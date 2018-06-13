<?php
/**
 * @file
 * bf_node_limit.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bf_node_limit_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_limit_cause_access_arguments';
  $strongarm->value = array(
    0 => 'create',
    1 => 'cause',
  );
  $export['node_limit_cause_access_arguments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_limit_cause_access_callback';
  $strongarm->value = 'node_access';
  $export['node_limit_cause_access_callback'] = $strongarm;

  return $export;
}
