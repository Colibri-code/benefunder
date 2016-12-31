<?php
/**
 * @file
 * bf_research_stages.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function bf_research_stages_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Translational',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '06c86d90-a379-48ec-bf7f-92f30c27f71d',
    'vocabulary_machine_name' => 'research_stages',
  );
  $terms[] = array(
    'name' => 'Experimental Research',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '286e206b-26ef-49a6-92ab-58859a48a3d2',
    'vocabulary_machine_name' => 'research_stages',
  );
  $terms[] = array(
    'name' => 'New Discovery',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '85abd02f-4978-417f-a5cb-fa32e8867658',
    'vocabulary_machine_name' => 'research_stages',
  );
  $terms[] = array(
    'name' => 'Commercialization',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cfb21c79-4274-4454-903a-29afc1fa9004',
    'vocabulary_machine_name' => 'research_stages',
  );
  return $terms;
}
