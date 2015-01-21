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
      0 => 'field_research_area',
      1 => 'field_university_or_institution',
      2 => 'field_first_name',
      3 => 'field_last_name',
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
      0 => 'field_jumbotron_image',
      1 => 'field_jumbotron_video',
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
      1 => 'field_call_to_action',
      2 => 'field_summary',
      3 => 'field_subtitle',
      4 => 'title',
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
  $field_group->identifier = 'group_hidden|node|cause|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cause';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Not Displayed',
    'weight' => '8',
    'children' => array(
      0 => 'field_email',
      1 => 'field_keywords',
      2 => 'field_share_lines',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hidden field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hidden|node|cause|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overlay|node|cause|form';
  $field_group->group_name = 'group_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cause';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Cause Overlay',
    'weight' => '7',
    'children' => array(
      0 => 'field_overlay_copy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-overlay field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_overlay|node|cause|form'] = $field_group;

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
      0 => 'field_bio',
      1 => 'field_education',
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
      0 => 'field_awards',
      1 => 'field_additional_videos',
      2 => 'field_in_the_news',
      3 => 'field_patents',
      4 => 'field_publications',
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
      0 => 'field_academic_position',
      1 => 'field_picture',
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
      0 => 'group_basic',
      1 => 'group_cause_media',
      2 => 'group_cause',
      3 => 'group_hidden',
      4 => 'group_overlay',
      5 => 'group_researcher_bio',
      6 => 'group_researcher_links',
      7 => 'group_researcher',
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
