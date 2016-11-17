<?php
/**
 * @file
 * financial_firms_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function financial_firms_taxonomy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
