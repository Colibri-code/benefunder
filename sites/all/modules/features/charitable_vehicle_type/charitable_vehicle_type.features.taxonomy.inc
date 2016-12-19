<?php
/**
 * @file
 * charitable_vehicle_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function charitable_vehicle_type_taxonomy_default_vocabularies() {
  return array(
    'charitable_vehicle_type' => array(
      'name' => 'Charitable Vehicle Type',
      'machine_name' => 'charitable_vehicle_type',
      'description' => 'type of charitable vehicle used',
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
