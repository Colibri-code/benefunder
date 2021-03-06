<?php
/**
 * @file
 * bf_interest_list.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function bf_interest_list_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cause|cause_tile';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cause';
  $ds_fieldsetting->view_mode = 'cause_tile';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_subtitle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '&nbsp;',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_last_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|cause|cause_tile'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function bf_interest_list_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cause|cause_tile';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cause';
  $ds_layout->view_mode = 'cause_tile';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_jumbotron_image',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_subtitle',
        3 => 'field_first_name',
        4 => 'field_last_name',
        5 => 'field_university_or_institution',
        6 => 'field_picture',
        7 => 'body',
      ),
    ),
    'fields' => array(
      'field_jumbotron_image' => 'left',
      'title' => 'right',
      'field_subtitle' => 'right',
      'field_first_name' => 'right',
      'field_last_name' => 'right',
      'field_university_or_institution' => 'right',
      'field_picture' => 'right',
      'body' => 'right',
    ),
    'limit' => array(
      'field_university_or_institution' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|cause|cause_tile'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|interest_list|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'interest_list';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'xmlsitemap',
        2 => 'redirect',
        3 => 'path',
        4 => 'field_select_causes',
        5 => 'field_email_action',
        6 => 'field_signer_emails',
      ),
      'hidden' => array(
        7 => 'field_about_benefunder',
        8 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'xmlsitemap' => 'ds_content',
      'redirect' => 'ds_content',
      'path' => 'ds_content',
      'field_select_causes' => 'ds_content',
      'field_email_action' => 'ds_content',
      'field_signer_emails' => 'ds_content',
      'field_about_benefunder' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|interest_list|form'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function bf_interest_list_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'cause_tile';
  $ds_view_mode->label = 'Cause Tile';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['cause_tile'] = $ds_view_mode;

  return $export;
}
