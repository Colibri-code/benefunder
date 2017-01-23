<?php
/**
 * @file
 * bf_linkedin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bf_linkedin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_profile_user_page_enabled';
  $strongarm->value = '3';
  $export['linkedin_profile_user_page_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_profile_user_page_linkedin_fields';
  $strongarm->value = array(
    'headline' => 'headline',
    'location' => 'location',
    'industry' => 'industry',
    'positions' => 'positions',
    'id' => 0,
    'first-name' => 0,
    'last-name' => 0,
    'summary' => 0,
    'specialties' => 0,
    'honors' => 0,
    'interests' => 0,
    'num-recommenders' => 0,
    'member-url-resources' => 0,
    'picture-url' => 0,
    'public-profile-url' => 0,
    'educations' => 0,
    'distance' => 0,
    'current-status' => 0,
    'current-status-timestamp' => 0,
    'num-connections' => 0,
    'num-connections-capped' => 0,
    'associations' => 0,
    'phone-numbers' => 0,
    'im-accounts' => 0,
    'twitter-accounts' => 0,
    'date-of-birth' => 0,
    'main-address' => 0,
  );
  $export['linkedin_profile_user_page_linkedin_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_profile_user_page_weight';
  $strongarm->value = '2';
  $export['linkedin_profile_user_page_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_auth_login_link_on_page';
  $strongarm->value = 1;
  $export['linkedin_auth_login_link_on_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_destination_immediate_redirect';
  $strongarm->value = 0;
  $export['login_destination_immediate_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_destination_preserve_destination';
  $strongarm->value = 0;
  $export['login_destination_preserve_destination'] = $strongarm;

  return $export;
}
