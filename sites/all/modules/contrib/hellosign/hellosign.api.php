<?php
/**
 * @file
 * Hooks provided by the HelloSign module.
 */

/**
 * HelloSign Callback Hook.
 *
 * This hook is called whenever HelloSign makes a call to the site,
 * such as after a document has been signed. For info about the types of events
 * that happen and what this data structure contains, please refer to the
 * HelloSign docs (https://www.hellosign.com/api/eventsAndCallbacksWalkthrough).
 *
 * @param array $data
 *   The data sent by HelloSign.
 */
function hook_process_hellosign_callback(array $data) {
  // Get event info.
  $event_type = $data->event->event_type;

  if ($event_type == 'signature_request_signed') {
    drupal_set_message(t('Somebody has signed HelloSign esignature request @request_id.',
      array('@request_id' => $data->signature_request->signature_request_id)));
  }
}
