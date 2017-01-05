INTRODUCTION
------------
The HelloSign module is a Drupal integration for the HelloSign electronic
signature API. You can configure settings, create new esignature requests,
and receive event callbacks from HelloSign. Modules can call
hellosign_generate_esignature_request() in order to generate a signature
request, and hook_process_hellosign_callback() can be implemented to process
responses from HelloSign.

 * For a full description of the module, visit the project page:
   https://www.drupal.org/sandbox/camprandall/2457871


 * To submit bug reports and feature suggestions, or to track changes:
   https://www.drupal.org/project/issues/2457871


 * For more information about HelloSign and its features:
   https://www.hellosign.com/


REQUIREMENTS
------------
This module requires the following library:
 * HelloSign PHP SDK (https://github.com/HelloFax/hellosign-php-sdk)


INSTALLATION
------------
 * Install as you would normally install a contributed Drupal module. See:
   https://drupal.org/documentation/install/modules-themes/modules-7
   for further information.


 * Download and unpack the HelloSign PHP SDK in "sites/all/libraries". You
   should end up with a folder structure which looks like
   "sites/all/libraries/hellosign-php-sdk/vendor/hellosign"


CONFIGURATION
-------------
 * Configure HelloSign in Administration » Configuration » System » HelloSign:

   - HelloSign API Key

     The API key associated with your HelloSign account. You can create an
     account at https://www.hellosign.com/

   - HelloSign Client ID

     The Client ID associated with this HelloSign project. After you have a
     HelloSign account, you can create a client for the domain name you are
     using, and a client ID will be assigned to you.

   - CC email addresses

     A comma-separated list of email addresses which will be copied on every
     HelloSign signature request. Useful if you want to track completed requests
     by email without manually adding an additional address to every signature
     request.

   - Test mode

     Enables and disables test mode. In test mode, all requests sent to
     HelloSign will indicate to HelloSign that they are test requests.

USING THE API
-------------
 * Invoke hellosign_generate_esignature_request() with the following arguments
   (in order) to generate a new signature request.

   - $title: Document title
   - $subject: Email subject
   - $signers: Array of signers with a key of email address and a value of name
   - $file: A full path to a local system file
   - $mode: The type of signature request, either "embedded" or "email"

   This returns an array with status of 1 for success and 0 for failure. If
   failure, it also returns a "message", which contains the error string. If
   success, it also returns a signature_request_id token from HelloSign and an
   array of signatures.


 * Invoke hellosign_fetch_esignature_document($signature_request_id) to fetch
   the associated document for a HelloSign signature request.

   Note that you can do this at any phase so if you fetch them before signatures
   are added, you will simply return the document in its original state.

   This returns a full path to a local system file.


 * Invoke hellosign_get_embed_url($signature_id) to fetch a temporary url
   used to embed a signature in an iframe.


 * Invoke hellosign_cancel_esignature_request($signature_request_id) to queue
   a pending signature request for deletion in hellosign.

   This can only be used on signature requests that are not yet completed and
   a callback handler can for the event 'SIGNATURE_REQUEST_CANCELED' when the
   deletion is completed.

   This returns an array with status of 1 if the call to HelloSign was
   successful and 0, along with a message, if there was a failure.


MAINTAINERS
-----------
Current maintainers:
 * Clint Randall (https://www.drupal.org/u/camprandall)
 * Mike Goulding (https://www.drupal.org/u/mikeegoulding)
 * Jay Kerschner (https://www.drupal.org/u/jkerschner)
