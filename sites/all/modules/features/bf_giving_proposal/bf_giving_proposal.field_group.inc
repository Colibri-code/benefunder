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
  $field_group->identifier = 'group_assistance|node|giving_proposal|form';
  $field_group->group_name = 'group_assistance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Needs Assessment',
    'weight' => '64',
    'children' => array(
      0 => 'field_assistance',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Needs Assessment',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-assistance field-group-tab header-tab assessment-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_assistance|node|giving_proposal|form'] = $field_group;

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
    'label' => 'Benefunder Check',
    'weight' => '38',
    'children' => array(
      0 => 'field_analyst_feedback_1',
      1 => 'field_client_feedback_1',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Benefunder Check',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-check-1 field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'label' => 'Proposal Review & Approval',
    'weight' => '40',
    'children' => array(
      0 => 'field_analyst_feedback',
      1 => 'field_client_feedback',
      2 => 'field_client_approval',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Proposal Review & Approval',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-check-2 field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_check_2|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
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
    'label' => 'Giving Profile',
    'weight' => '46',
    'children' => array(
      0 => 'field_non_profits_supported',
      1 => 'field_what_did_the_client_like_d',
      2 => 'field_program_targets',
      3 => 'field_giving_targets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Giving Profile',
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
    'label' => 'DAF Account Setup / Verification',
    'weight' => '42',
    'children' => array(
      0 => 'field_already_have_daf',
      1 => 'field_daf_forms',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'DAF Account Setup / Verification',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-daf-funded field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
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
  $field_group->identifier = 'group_execution|node|giving_proposal|form';
  $field_group->group_name = 'group_execution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Execution',
    'weight' => '73',
    'children' => array(
      0 => 'field_execution_area',
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
  $field_groups['group_execution|node|giving_proposal|form'] = $field_group;

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
    'label' => 'Account Details & Funding Information',
    'weight' => '47',
    'children' => array(
      0 => 'field_charitable_vehicle',
      1 => 'field_contribution_funding',
      2 => 'field_planned_annual_contributio',
      3 => 'field_planned_initial_contributi',
      4 => 'field_vehicle_name',
      5 => 'field_vehicle_type',
      6 => 'field_how_does_the_client_plan_o',
      7 => 'field_what_is_the_intended_distr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Account Details & Funding Information',
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
  $field_group->identifier = 'group_initial_distributions|node|giving_proposal|form';
  $field_group->group_name = 'group_initial_distributions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Initial Distributions',
    'weight' => '45',
    'children' => array(
      0 => 'field_distribution',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-initial-distributions field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_initial_distributions|node|giving_proposal|form'] = $field_group;

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
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_addendum|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal_addendum';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Benefunder Addendum',
    'weight' => '43',
    'children' => array(
      0 => 'field_addendum',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposal-addendum field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_proposal_addendum|node|giving_proposal|form'] = $field_group;

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
    'label' => 'Causes Portfolio & Allocation',
    'weight' => '39',
    'children' => array(
      0 => 'field_cause',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Causes Portfolio & Allocation',
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
    'label' => 'Philanthropic Profile',
    'weight' => '36',
    'children' => array(
      0 => 'group_current_giving',
      1 => 'group_donor_profile',
      2 => 'group_giving_plan',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Philanthropic Profile',
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
    'weight' => '41',
    'children' => array(
      0 => 'field_giving_proposal',
      1 => 'field_additional_documents',
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
  $field_group->identifier = 'group_proposal_stage|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal_stage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Proposal Stage',
    'weight' => '69',
    'children' => array(
      0 => 'field_proposal',
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
  $field_groups['group_proposal_stage|node|giving_proposal|form'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'group_check_1',
      1 => 'group_check_2',
      2 => 'group_daf_funded',
      3 => 'group_initial_distributions',
      4 => 'group_introduction',
      5 => 'group_proposal_addendum',
      6 => 'group_proposal_matches',
      7 => 'group_proposal_planned',
      8 => 'group_proposal_proposal',
      9 => 'group_send_signatures',
      10 => 'group_videos',
      11 => 'group_wire_and_ach',
      12 => 'group_assistance',
      13 => 'group_proposal_stage',
      14 => 'group_execution',
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
  $field_group->identifier = 'group_send_signatures|node|giving_proposal|form';
  $field_group->group_name = 'group_send_signatures';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Send for Signatures',
    'weight' => '46',
    'children' => array(
      0 => 'field_signature_request_id',
      1 => 'field_ready_to_send',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-send-signatures field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_send_signatures|node|giving_proposal|form'] = $field_group;

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
    'label' => 'Preliminary Cause Selection',
    'weight' => '37',
    'children' => array(
      0 => 'field_inspiration',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Preliminary Cause Selection',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-videos field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_videos|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wire_and_ach|node|giving_proposal|form';
  $field_group->group_name = 'group_wire_and_ach';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Routing Instructions',
    'weight' => '44',
    'children' => array(
      0 => 'field_aba_number_for_wires',
      1 => 'field_ach',
      2 => 'field_bank_name',
      3 => 'field_account_number',
      4 => 'field_account_holder',
      5 => 'field_bank_address',
      6 => 'field_swift_code',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Routing Instructions',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-wire-and-ach field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_wire_and_ach|node|giving_proposal|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Anticipated Giving Plan');
  t('Benefunder Addendum');
  t('Benefunder Check');
  t('Benefunder Check 3');
  t('Causes Portfolio & Allocation');
  t('Client\'s Current Giving History');
  t('Current Charitable Giving');
  t('DAF Account Setup / Verification');
  t('Donor Information');
  t('Donor Profile');
  t('Execution');
  t('Final Proposal');
  t('Initial Distributions');
  t('Introduction');
  t('Needs Assessment');
  t('Philanthropic Profile');
  t('Preliminary Cause Selection');
  t('Proposal Review & Approval');
  t('Proposal Stage');
  t('Research Interests');
  t('Routing Instructions');
  t('Send for Signatures');

  return $field_groups;
}
