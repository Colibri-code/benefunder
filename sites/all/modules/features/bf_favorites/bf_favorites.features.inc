<?php
/**
 * @file
 * bf_favorites.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function bf_favorites_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorites".
  $flags['bookmarks'] = array(
    'entity_type' => 'node',
    'title' => 'Favorites',
    'global' => 0,
    'types' => array(
      0 => 'cause',
    ),
    'flag_short' => 'Favorite This',
    'flag_long' => 'Add this cause to your favorites',
    'flag_message' => '',
    'unflag_short' => 'Unfavorite This',
    'unflag_long' => 'Remove this cause from your favorites',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'pdf' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'bf_favorites',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
