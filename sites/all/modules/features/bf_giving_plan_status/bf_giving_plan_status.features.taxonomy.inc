<?php
/**
 * @file
 * bf_giving_plan_status.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bf_giving_plan_status_taxonomy_default_vocabularies() {
  return array(
    'plan_status' => array(
      'name' => 'Plan Status',
      'machine_name' => 'plan_status',
      'description' => 'The current state of a Giving Plan',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
