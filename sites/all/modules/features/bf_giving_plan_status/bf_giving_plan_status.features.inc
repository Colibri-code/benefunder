<?php
/**
 * @file
 * bf_giving_plan_status.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_giving_plan_status_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
