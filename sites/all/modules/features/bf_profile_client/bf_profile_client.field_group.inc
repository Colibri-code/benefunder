<?php
/**
 * @file
 * bf_profile_client.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bf_profile_client_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_current_giving_history|node|client_profile|form';
  $field_group->group_name = 'group_current_giving_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Client\'s Current Giving History',
    'weight' => '6',
    'children' => array(
      0 => 'field_focus',
      1 => 'field_charitable_vehicle',
      2 => 'field_vehicle_type',
      3 => 'field_vehicle_name',
      4 => 'field_non_profits_supported',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_current_giving_history|node|client_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donor_information|node|client_profile|form';
  $field_group->group_name = 'group_donor_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Donor Information',
    'weight' => '4',
    'children' => array(
      0 => 'field_nickname',
      1 => 'field_address',
      2 => 'field_alumni_affiliations',
      3 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_donor_information|node|client_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_giving_proposal|node|client_profile|form';
  $field_group->group_name = 'group_giving_proposal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Giving Proposal',
    'weight' => '9',
    'children' => array(
      0 => 'field_giving_proposal',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_giving_proposal|node|client_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_matches|node|client_profile|form';
  $field_group->group_name = 'group_matches';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Matches',
    'weight' => '8',
    'children' => array(
      0 => 'field_cause_matches',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_matches|node|client_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_planned_giving|node|client_profile|form';
  $field_group->group_name = 'group_planned_giving';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Planned Giving',
    'weight' => '7',
    'children' => array(
      0 => 'field_planned_initial_contributi',
      1 => 'field_planned_annual_contributio',
      2 => 'field_contribution_funding',
      3 => 'field_planned_annual_distributio',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_planned_giving|node|client_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_interests|node|client_profile|form';
  $field_group->group_name = 'group_research_interests';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Research Interests',
    'weight' => '5',
    'children' => array(
      0 => 'field_research_areas',
      1 => 'field_research_focus',
      2 => 'field_research_stage',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_research_interests|node|client_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|client_profile|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab Group',
    'weight' => '3',
    'children' => array(
      0 => 'group_donor_information',
      1 => 'group_research_interests',
      2 => 'group_current_giving_history',
      3 => 'group_planned_giving',
      4 => 'group_matches',
      5 => 'group_giving_proposal',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tabs|node|client_profile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Client\'s Current Giving History');
  t('Donor Information');
  t('Giving Proposal');
  t('Matches');
  t('Planned Giving');
  t('Research Interests');
  t('Tab Group');

  return $field_groups;
}
