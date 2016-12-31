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
  $field_group->identifier = 'group_check_1|node|giving_proposal|form';
  $field_group->group_name = 'group_check_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Benefunder Check 1',
    'weight' => '38',
    'children' => array(
      0 => 'field_client_feedback_1',
      1 => 'field_analyst_feedback_1',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-check-1 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_check_1|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_check_2|node|giving_proposal|form';
  $field_group->group_name = 'group_check_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Benefunder Check 2',
    'weight' => '40',
    'children' => array(
      0 => 'field_client_feedback',
      1 => 'field_analyst_feedback',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-check-2 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_check_2|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_check_3|node|giving_proposal|form';
  $field_group->group_name = 'group_check_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Benefunder Check 3',
    'weight' => '46',
    'children' => array(
      0 => 'field_client_feedback_2',
      1 => 'field_analyst_feedback_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-check-3 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_check_3|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_current_giving|node|giving_proposal|form';
  $field_group->group_name = 'group_current_giving';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_planned';
  $field_group->data = array(
    'label' => 'Current Charitable Giving',
    'weight' => '43',
    'children' => array(
      0 => 'field_charitable_vehicle',
      1 => 'field_non_profits_supported',
      2 => 'field_vehicle_name',
      3 => 'field_vehicle_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Current Charitable Giving',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-current-giving field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_current_giving|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_daf_funded|node|giving_proposal|form';
  $field_group->group_name = 'group_daf_funded';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'DAF Funded',
    'weight' => '45',
    'children' => array(
      0 => 'field_already_have_daf',
      1 => 'field_daf_forms',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-daf-funded field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_daf_funded|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donor_profile|node|giving_proposal|form';
  $field_group->group_name = 'group_donor_profile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_planned';
  $field_group->data = array(
    'label' => 'Donor Profile',
    'weight' => '45',
    'children' => array(
      0 => 'field_donor_profile',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Donor Profile',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-donor-profile field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_donor_profile|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_giving_plan|node|giving_proposal|form';
  $field_group->group_name = 'group_giving_plan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_planned';
  $field_group->data = array(
    'label' => 'Anticipated Giving Plan',
    'weight' => '44',
    'children' => array(
      0 => 'field_contribution_funding',
      1 => 'field_planned_annual_contributio',
      2 => 'field_planned_annual_distributio',
      3 => 'field_planned_initial_contributi',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Anticipated Giving Plan',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-giving-plan field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_giving_plan|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_introduction|node|giving_proposal|form';
  $field_group->group_name = 'group_introduction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Introduction',
    'weight' => '35',
    'children' => array(
      0 => 'field_intro_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-introduction field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_introduction|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
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
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
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
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
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
    'label' => 'Causes & Allocations',
    'weight' => '39',
    'children' => array(
      0 => 'field_cause',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Causes & Allocations',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-proposal-matches field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'label' => 'Client Interview',
    'weight' => '36',
    'children' => array(
      0 => 'group_current_giving',
      1 => 'group_giving_plan',
      2 => 'group_donor_profile',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Client Interview',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-proposal-planned field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'label' => 'Final Proposal',
    'weight' => '44',
    'children' => array(
      0 => 'field_giving_proposal',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Final Proposal',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-proposal-proposal field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'label' => 'Needs Assessment',
    'weight' => '1',
    'children' => array(
      0 => 'group_proposal_matches',
      1 => 'group_proposal_planned',
      2 => 'group_proposal_proposal',
      3 => 'group_videos',
      4 => 'group_introduction',
      5 => 'group_check_1',
      6 => 'group_check_2',
      7 => 'group_check_3',
      8 => 'group_daf_funded',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Needs Assessment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-proposal-tabs field-group-tabs',
      ),
    ),
  );
  $field_groups['group_proposal_tabs|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_videos|node|giving_proposal|form';
  $field_group->group_name = 'group_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Select Inspirational Videos',
    'weight' => '37',
    'children' => array(
      0 => 'field_inspiration',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Select Inspirational Videos',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-videos field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_videos|node|giving_proposal|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Anticipated Giving Plan');
  t('Benefunder Check 1');
  t('Benefunder Check 2');
  t('Benefunder Check 3');
  t('Causes & Allocations');
  t('Client Interview');
  t('Client\'s Current Giving History');
  t('Current Charitable Giving');
  t('DAF Funded');
  t('Donor Information');
  t('Donor Profile');
  t('Final Proposal');
  t('Introduction');
  t('Needs Assessment');
  t('Research Interests');
  t('Select Inspirational Videos');

  return $field_groups;
}
