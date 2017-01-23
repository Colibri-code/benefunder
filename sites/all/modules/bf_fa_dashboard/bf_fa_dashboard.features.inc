<?php
/**
 * @file
 * bf_fa_dashboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_fa_dashboard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
