<?php
/**
 * @file
 * bf_cause.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bf_cause_taxonomy_default_vocabularies() {
  return array(
    'aging_wellness_disease' => array(
      'name' => 'Aging, Wellness & Disease',
      'machine_name' => 'aging_wellness_disease',
      'description' => 'Aging, Wellness & Disease',
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
