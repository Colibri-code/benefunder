<?php
/**
 * @file
 * bf_interest_list.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bf_interest_list_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_about_benefunder'.
  $field_bases['field_about_benefunder'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_about_benefunder',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<h2>Innovative and High-Impact Giving with Benefunder</h2>

<p>Benefunder is the first marketplace that matches philanthropists directly with research and other programs at top institutions. We bring access, efficiency, and engagement to donors, facilitating greater impact while providing a scalable source of funding for principal investigators. Benefunder integrates with wealth management by partnering with donor-advised fund (DAF) administrators. We act as a philanthropic specialist to financial advisors, private bankers, and family offices, allowing them to expand their service and relationship opportunities.</p>
',
      ),
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_email_action'.
  $field_bases['field_email_action'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_action',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'No Email' => 'No Email',
        'Send Email to address' => 'Send Email to address',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_select_causes'.
  $field_bases['field_select_causes'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_select_causes',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'cause' => 'cause',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
