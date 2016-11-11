<?php
/**
 * @file
 * bf_profile_financial_advisor.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function bf_profile_financial_advisor_default_profile2_type() {
  $items = array();
  $items['financial_advisor'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "financial_advisor",
    "label" : "Financial Advisor",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
