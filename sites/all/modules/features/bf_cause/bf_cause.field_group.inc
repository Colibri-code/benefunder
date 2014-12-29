<?php
/**
 * @file
 * bf_cause.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bf_cause_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|cause|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cause';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_university_or_institution',
      1 => 'field_research_area',
      2 => 'field_subtitle',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic|node|cause|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cause_media|node|cause|form';
  $field_group->group_name = 'group_cause_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cause';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Cause Media',
    'weight' => '3',
    'children' => array(
      0 => 'field_jumbotron_video',
      1 => 'field_jumbotron_image',
      2 => 'field_jumbotron_copy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cause-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cause_media|node|cause|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cause|node|cause|form';
  $field_group->group_name = 'group_cause';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cause';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Cause',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_share_lines',
      2 => 'field_summary',
      3 => 'field_call_to_action',
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
  $export['group_cause|node|cause|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researcher_bio|node|cause|form';
  $field_group->group_name = 'group_researcher_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cause';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Researcher Bio',
    'weight' => '5',
    'children' => array(
      0 => 'field_education',
      1 => 'field_bio',
      2 => 'field_awards',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-researcher-bio field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_researcher_bio|node|cause|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researcher_links|node|cause|form';
  $field_group->group_name = 'group_researcher_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cause';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Researcher Links',
    'weight' => '6',
    'children' => array(
      0 => 'field_publications',
      1 => 'field_videos',
      2 => 'field_in_the_news',
      3 => 'field_patents',
      4 => 'field_additional_videos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-researcher-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_researcher_links|node|cause|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researcher|node|cause|form';
  $field_group->group_name = 'group_researcher';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cause';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Researcher',
    'weight' => '4',
    'children' => array(
      0 => 'field_picture',
      1 => 'field_name',
      2 => 'field_email',
      3 => 'field_academic_position',
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
  $export['group_researcher|node|cause|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|cause|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cause';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_researcher',
      1 => 'group_cause',
      2 => 'group_basic',
      3 => 'group_cause_media',
      4 => 'group_researcher_bio',
      5 => 'group_researcher_links',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|node|cause|form'] = $field_group;

  return $export;
}
