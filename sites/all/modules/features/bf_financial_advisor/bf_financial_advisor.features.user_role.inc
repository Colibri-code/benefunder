<?php
/**
 * @file
 * bf_financial_advisor.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bf_financial_advisor_user_default_roles() {
  $roles = array();

  // Exported role: Financial Advisor.
  $roles['Financial Advisor'] = array(
    'name' => 'Financial Advisor',
    'weight' => 5,
  );

  return $roles;
}
