<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_form_alter().
 */
function benefunder_form_alter(array &$form, array &$form_state = array(), $form_id = NULL) {
    switch ($form_id) {
      case 'search_block_form':
        unset($form['search_block_form']['#theme_wrappers']);
        unset($form['actions']['submit']['#attributes']['class']);
        $form['#attributes']['class'][] = 'hidden-xs hidden-sm';
        
        break;
    }
}

/**
 * Implements template_preprocess_page().
 */
function benefunder_preprocess_page(&$vars, $hook) {
  if (isset($vars['node'])) {
    // If the node type is "blog_madness" the template suggestion will be "page--blog-madness.tpl.php".
    $vars['theme_hook_suggestions'][] = 'page__'. $vars['node']->type;
  }
}