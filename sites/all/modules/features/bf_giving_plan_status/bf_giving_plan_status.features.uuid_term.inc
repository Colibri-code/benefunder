<?php
/**
 * @file
 * bf_giving_plan_status.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function bf_giving_plan_status_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Complete',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '319cee98-ab25-44be-8036-28c3e4ec91e2',
    'vocabulary_machine_name' => 'plan_status',
  );
  $terms[] = array(
    'name' => 'Rejected',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '830fb148-0105-438f-a523-cba4738b6261',
    'vocabulary_machine_name' => 'plan_status',
  );
  $terms[] = array(
    'name' => 'Pending Acceptance',
    'description' => '',
    'format' => 'full_html',
    'weight' => -2,
    'uuid' => '83357b11-7990-4976-9fa6-90a967354f29',
    'vocabulary_machine_name' => 'plan_status',
  );
  $terms[] = array(
    'name' => 'Continuing',
    'description' => NULL,
    'format' => NULL,
    'weight' => -1,
    'uuid' => 'e974894b-a8c1-4db9-a5cf-fc6e93266023',
    'vocabulary_machine_name' => 'plan_status',
  );
  return $terms;
}
