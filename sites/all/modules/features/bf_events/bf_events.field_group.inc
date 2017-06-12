<?php
/**
 * @file
 * bf_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bf_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venue|node|event|form';
  $field_group->group_name = 'group_venue';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Venue',
    'weight' => '17',
    'children' => array(
      0 => 'field_venue_address',
      1 => 'field_venue_name',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_venue|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Venue');

  return $field_groups;
}
