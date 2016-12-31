<?php
/**
 * @file
 * bf_research_stages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_research_stages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
