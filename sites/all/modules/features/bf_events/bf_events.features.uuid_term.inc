<?php
/**
 * @file
 * bf_events.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function bf_events_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Webinar',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0a0a60e1-ffe2-4938-bfab-fcff85d6dbaa',
    'vocabulary_machine_name' => 'event_types',
  );
  $terms[] = array(
    'name' => 'Lab visit',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '44ede472-de75-4964-b6b4-8f3168e2cffc',
    'vocabulary_machine_name' => 'event_types',
  );
  $terms[] = array(
    'name' => 'Meeting',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '69ab3b68-f8d5-4eb2-9726-cf58b89eadff',
    'vocabulary_machine_name' => 'event_types',
  );
  $terms[] = array(
    'name' => 'Conference',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ae509a34-823d-41c6-9b16-5e2bc83268dd',
    'vocabulary_machine_name' => 'event_types',
  );
  return $terms;
}
