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