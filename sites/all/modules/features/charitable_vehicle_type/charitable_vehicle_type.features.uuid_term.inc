<?php
/**
 * @file
 * charitable_vehicle_type.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function charitable_vehicle_type_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Private Foundation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '87626b97-3264-46b4-acbe-12d7a3e8da48',
    'vocabulary_machine_name' => 'charitable_vehicle_type',
  );
  $terms[] = array(
    'name' => 'Donor Advised Fund',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ea5eaf78-92d3-4697-8545-9162734c53e2',
    'vocabulary_machine_name' => 'charitable_vehicle_type',
  );
  return $terms;
}
