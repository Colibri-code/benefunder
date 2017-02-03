<?php
/**
 * @file
 * bf_university_or_institution.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_university_or_institution_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
