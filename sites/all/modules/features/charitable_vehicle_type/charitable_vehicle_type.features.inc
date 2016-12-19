<?php
/**
 * @file
 * charitable_vehicle_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function charitable_vehicle_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
