<?php
/**
 * @file
 * bf_financial_advisor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bf_financial_advisor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create giving_proposal content'.
  $permissions['create giving_proposal content'] = array(
    'name' => 'create giving_proposal content',
    'roles' => array(
      'Financial Advisor' => 'Financial Advisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own giving_proposal content'.
  $permissions['delete own giving_proposal content'] = array(
    'name' => 'delete own giving_proposal content',
    'roles' => array(
      'Financial Advisor' => 'Financial Advisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own financial_advisor profile'.
  $permissions['edit own financial_advisor profile'] = array(
    'name' => 'edit own financial_advisor profile',
    'roles' => array(
      'Financial Advisor' => 'Financial Advisor',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own giving_proposal content'.
  $permissions['edit own giving_proposal content'] = array(
    'name' => 'edit own giving_proposal content',
    'roles' => array(
      'Financial Advisor' => 'Financial Advisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own financial_advisor profile'.
  $permissions['view own financial_advisor profile'] = array(
    'name' => 'view own financial_advisor profile',
    'roles' => array(
      'Financial Advisor' => 'Financial Advisor',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
