<?php
/**
 * @file
 * bf_linkedin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_linkedin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
