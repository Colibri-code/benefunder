<?php
/**
 * @file
 * bf_profile_financial_advisor.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bf_profile_financial_advisor_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'profile2-financial_advisor-field_alumni_associations'.
  $field_instances['profile2-financial_advisor-field_alumni_associations'] = array(
    'bundle' => 'financial_advisor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_alumni_associations',
    'label' => 'Alumni Associations',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'apply_chosen' => '',
        'available_options' => '',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'available',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'profile2-financial_advisor-field_broker_dealer'.
  $field_instances['profile2-financial_advisor-field_broker_dealer'] = array(
    'bundle' => 'financial_advisor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_broker_dealer',
    'label' => 'Broker/Dealer',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'profile2-financial_advisor-field_firm'.
  $field_instances['profile2-financial_advisor-field_firm'] = array(
    'bundle' => 'financial_advisor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_firm',
    'label' => 'Firm',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'apply_chosen' => '',
        'available_options' => '',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'available',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'profile2-financial_advisor-field_foundations_managed'.
  $field_instances['profile2-financial_advisor-field_foundations_managed'] = array(
    'bundle' => 'financial_advisor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_foundations_managed',
    'label' => 'Foundations Managed',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'profile2-financial_advisor-field_location'.
  $field_instances['profile2-financial_advisor-field_location'] = array(
    'bundle' => 'financial_advisor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'profile2-financial_advisor-field_non_profit_boards'.
  $field_instances['profile2-financial_advisor-field_non_profit_boards'] = array(
    'bundle' => 'financial_advisor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_non_profit_boards',
    'label' => 'Non-Profit Boards',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance:
  // 'profile2-financial_advisor-field_number_of_dafs_managed'.
  $field_instances['profile2-financial_advisor-field_number_of_dafs_managed'] = array(
    'bundle' => 'financial_advisor',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_number_of_dafs_managed',
    'label' => 'Number of DAFs Managed',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'apply_chosen' => '',
        'available_options' => '1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'profile2-financial_advisor-field_total_assets_in_dafs'.
  $field_instances['profile2-financial_advisor-field_total_assets_in_dafs'] = array(
    'bundle' => 'financial_advisor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_total_assets_in_dafs',
    'label' => 'Total Assets in DAFs (millions)',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '$',
      'suffix' => 'Million',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alumni Associations');
  t('Broker/Dealer');
  t('Firm');
  t('Foundations Managed');
  t('Location');
  t('Non-Profit Boards');
  t('Number of DAFs Managed');
  t('Total Assets in DAFs (millions)');

  return $field_instances;
}
