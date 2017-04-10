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
    'label' => 'Proposal Review & Approval',
    'weight' => '42',
    'children' => array(
      0 => 'field_analyst_feedback_1',
      1 => 'field_client_feedback_1',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Proposal Review & Approval',
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
    'label' => 'Ready for Benefunder',
    'weight' => '40',
    'children' => array(
      0 => 'field_analyst_feedback',
      1 => 'field_client_feedback',
      2 => 'field_client_approval',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Ready for Benefunder',
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
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Client Giving History',
    'weight' => '37',
    'children' => array(
      0 => 'field_what_did_the_client_like_d',
      1 => 'field_program_targets',
      2 => 'field_giving_targets',
      3 => 'field_what_organizations_has_the',
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
    'weight' => '45',
    'children' => array(
      0 => 'field_already_have_daf',
      1 => 'field_daf_forms',
      2 => 'field_daf_provider',
      3 => 'field_disbursement_frequency',
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
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Client Profile',
    'weight' => '36',
    'children' => array(
      0 => 'field_donor_profile',
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
    'weight' => '43',
    'children' => array(
      0 => 'field_execution_markup',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-execution field-group-tab',
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
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Account Details & Funding Information',
    'weight' => '44',
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
  $field_groups['group_giving_plan|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_initial_distributions|node|giving_proposal|form';
  $field_group->group_name = 'group_initial_distributions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Initial Distributions',
    'weight' => '48',
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
    'label' => 'Needs Assessment',
    'weight' => '35',
    'children' => array(
      0 => 'field_intro_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Needs Assessment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-introduction field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_introduction|node|giving_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_addendum|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal_addendum';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Benefunder Addendum',
    'weight' => '47',
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
    'label' => 'Causes & Allocations',
    'weight' => '38',
    'children' => array(
      0 => 'field_cause',
      1 => 'field_cause_markup',
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
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
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
    'label' => 'Ready to Print',
    'weight' => '39',
    'children' => array(
      0 => 'field_giving_proposal',
      1 => 'field_additional_documents',
      2 => 'field_file_explanation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Ready to Print',
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
    'weight' => '2',
    'children' => array(
      0 => 'group_check_1',
      1 => 'group_check_2',
      2 => 'group_current_giving',
      3 => 'group_daf_funded',
      4 => 'group_donor_profile',
      5 => 'group_execution',
      6 => 'group_giving_plan',
      7 => 'group_introduction',
      8 => 'group_proposal_matches',
      9 => 'group_proposal_proposal',
      10 => 'group_proposal',
      11 => 'group_send_signatures',
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
  $field_group->identifier = 'group_proposal|node|giving_proposal|form';
  $field_group->group_name = 'group_proposal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Proposal',
    'weight' => '41',
    'children' => array(
      0 => 'field_proposal_markup',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposal field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_proposal|node|giving_proposal|form'] = $field_group;

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
      2 => 'field_daf_disbursement_confirmed',
      3 => 'field_disbursement_tracking_numb',
      4 => 'field_signer_emails',
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
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_videos|node|giving_proposal|form';
  $field_group->group_name = 'group_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Preliminary Cause Selection',
    'weight' => '39',
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
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wire_and_ach|node|giving_proposal|form';
  $field_group->group_name = 'group_wire_and_ach';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_tabs';
  $field_group->data = array(
    'label' => 'Routing Instructions',
    'weight' => '46',
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
  t('Account Details & Funding Information');
  t('Benefunder Addendum');
  t('Benefunder Check 3');
  t('Causes & Allocations');
  t('Client Giving History');
  t('Client Profile');
  t('Client\'s Current Giving History');
  t('DAF Account Setup / Verification');
  t('Donor Information');
  t('Execution');
  t('Initial Distributions');
  t('Needs Assessment');
  t('Philanthropic Profile');
  t('Preliminary Cause Selection');
  t('Proposal');
  t('Proposal Review & Approval');
  t('Ready for Benefunder');
  t('Ready to Print');
  t('Research Interests');
  t('Routing Instructions');
  t('Send for Signatures');

  return $field_groups;
}
