<?php
/**
 * @file
 * bf_node_limit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_node_limit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
