<?php
/**
 * @file
 * bf_aging_wellness_disease.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_aging_wellness_disease_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
