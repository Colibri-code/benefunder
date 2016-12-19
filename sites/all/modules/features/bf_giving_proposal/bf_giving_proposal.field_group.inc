<?php
/**
 * @file
 * bf_giving_proposal.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bf_giving_proposal_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_current|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal_current';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Client\'s Current Giving History',
    'weight' => '28',
    'children' => array(
      0 => 'field_focus',
      1 => 'field_charitable_vehicle',
      2 => 'field_vehicle_type',
      3 => 'field_vehicle_name',
      4 => 'field_non_profits_supported',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposal-current field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_proposal_current|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_donor|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal_donor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Donor Information',
    'weight' => '26',
    'children' => array(
      0 => 'field_address',
      1 => 'field_alumni_affiliations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposal-donor field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_proposal_donor|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_interests|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal_interests';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Research Interests',
    'weight' => '27',
    'children' => array(
      0 => 'field_research_areas',
      1 => 'field_research_focus',
      2 => 'field_research_stage',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposal-interests field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_proposal_interests|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_matches|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal_matches';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Matches',
    'weight' => '30',
    'children' => array(
      0 => 'field_cause',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposal-matches field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_proposal_matches|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_planned|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal_planned';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Planned Giving',
    'weight' => '29',
    'children' => array(
      0 => 'field_planned_annual_contributio',
      1 => 'field_contribution_funding',
      2 => 'field_planned_annual_distributio',
      3 => 'field_value_of_this_proposal',
      4 => 'field_planned_initial_contributi',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposal-planned field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_proposal_planned|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_proposal|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal_proposal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Proposal',
    'weight' => '31',
    'children' => array(
      0 => 'field_giving_proposal',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposal-proposal field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_proposal_proposal|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_tabs|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab Group',
    'weight' => '1',
    'children' => array(
      0 => 'group_proposal_donor',
      1 => 'group_proposal_interests',
      2 => 'group_proposal_current',
      3 => 'group_proposal_planned',
      4 => 'group_proposal_matches',
      5 => 'group_proposal_proposal',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-proposal-tabs field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_proposal_tabs|node|giving_proposal|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Client\'s Current Giving History');
  t('Donor Information');
  t('Matches');
  t('Planned Giving');
  t('Proposal');
  t('Research Interests');
  t('Tab Group');

  return $field_groups;
}
