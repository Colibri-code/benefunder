<?php
/**
 * @file
 * bf_theme.features.inc
 */

/**
 * Implements hook_themekey_features_rule_chain().
 */
function bf_theme_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'giving_proposal',
      'theme' => 'adminimal',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'bf_theme',
    ),
    'string' => '"node:type = giving_proposal >>> adminimal"',
    'childs' => array(),
  ),
  1 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'user',
      'theme' => 'adminimal',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'bf_theme',
    ),
    'string' => '"drupal:path = user >>> adminimal"',
    'childs' => array(),
  ),
);

return $rules;
}
