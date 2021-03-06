<?php
/**
 * @file
 * bf_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function bf_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array();
  $environment->index_bundles = array(
    'node' => array(
      0 => 'cause',
      1 => 'partner',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
