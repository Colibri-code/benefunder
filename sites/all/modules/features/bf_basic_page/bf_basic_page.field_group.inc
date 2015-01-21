<?php
/**
 * @file
 * bf_basic_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bf_basic_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_text|node|page|form';
  $field_group->group_name = 'group_body_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page_tabs';
  $field_group->data = array(
    'label' => 'Body Text',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_50_50_image_text_alternati',
      2 => 'field_bottom_text',
      3 => 'field_subtitle',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-body-text field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_body_text|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jumbotron|node|page|form';
  $field_group->group_name = 'group_jumbotron';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page_tabs';
  $field_group->data = array(
    'label' => 'Jumbotron',
    'weight' => '2',
    'children' => array(
      0 => 'field_page_hero',
      1 => 'field_jumbotron_fields',
      2 => 'field_jumbotron_link',
      3 => 'field_jumbotron_teaser',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-jumbotron field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_jumbotron|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_tabs|node|page|form';
  $field_group->group_name = 'group_page_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_jumbotron',
      1 => 'group_body_text',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-page-tabs field-group-tabs',
      ),
    ),
  );
  $export['group_page_tabs|node|page|form'] = $field_group;

  return $export;
}