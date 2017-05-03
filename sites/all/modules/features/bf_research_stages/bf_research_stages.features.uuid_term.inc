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
    'name' => 'Applied/Translational',
    'description' => 'Understanding how to implement new discoveries in practical ways',
    'format' => NULL,
    'weight' => 1,
    'uuid' => '06c86d90-a379-48ec-bf7f-92f30c27f71d',
    'vocabulary_machine_name' => 'research_stages',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Proof of Concept',
    'description' => 'Testing viability of the application of a discovery (Clinical Trials, Prototypes etc.)',
    'format' => NULL,
    'weight' => 2,
    'uuid' => '2efb4f2c-c79b-40b2-a7cc-b004a9acfe2f',
    'vocabulary_machine_name' => 'research_stages',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Basic',
    'description' => 'New discoveries & transformational breakthroughs, long time to market',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '85abd02f-4978-417f-a5cb-fa32e8867658',
    'vocabulary_machine_name' => 'research_stages',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Programs and Policy',
    'description' => 'Understanding the issues and providing services  ',
    'format' => NULL,
    'weight' => 4,
    'uuid' => 'b2bb00d4-93fb-45d8-a131-a25011fa8c26',
    'vocabulary_machine_name' => 'research_stages',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Commercialization',
    'description' => NULL,
    'format' => NULL,
    'weight' => 3,
    'uuid' => 'cfb21c79-4274-4454-903a-29afc1fa9004',
    'vocabulary_machine_name' => 'research_stages',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
