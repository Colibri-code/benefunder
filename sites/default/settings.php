<?php

// Redirect benefunder.org
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
  $_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
  if ($_SERVER['HTTP_HOST'] == 'www.benefunder.org' ||
      $_SERVER['HTTP_HOST'] == 'benefunder.org') {
    header('HTTP/1.0 301 Moved Permanently');
    header('Location: http://www.benefunder.com'. $_SERVER['REQUEST_URI']);
    exit();
  }
}

// Redirect benefunder.info
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
  $_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
  if ($_SERVER['HTTP_HOST'] == 'www.benefunder.info' ||
      $_SERVER['HTTP_HOST'] == 'benefunder.info') {
    header('HTTP/1.0 301 Moved Permanently');
    header('Location: http://www.benefunder.com'. $_SERVER['REQUEST_URI']);
    exit();
  }
}

// Redirect benefunder.net
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
  $_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
  if ($_SERVER['HTTP_HOST'] == 'www.benefunder.net' ||
      $_SERVER['HTTP_HOST'] == 'benefunder.net') {
    header('HTTP/1.0 301 Moved Permanently');
    header('Location: http://www.benefunder.com'. $_SERVER['REQUEST_URI']);
    exit();
  }
}

// Per-Environment variables for Pantheon only.
if (isset($_SERVER['PANTHEON_ENVIRONMENT'])) {
  // DEV environment.
  if ($_SERVER['PANTHEON_ENVIRONMENT'] == 'dev') {
    $conf['linkedin_consumer_key'] = '78k2ndkgahdokm';
    $conf['linkedin_consumer_secret'] = 'zE89nodVnoHgYlt6';
    $cookie_domain = '.dev-benefunder.pantheonsite.io';
  }
  // TEST environment.
  elseif ($_SERVER['PANTHEON_ENVIRONMENT'] == 'test') {
    $conf['linkedin_consumer_key'] = '78jvscf2g0zcsu';
    $conf['linkedin_consumer_secret'] = 'VFxrlvr4lJRaaJil';
    $cookie_domain = '.test-benefunder.pantheonsite.io';
  }
  // PROD environment.
  elseif ($_SERVER['PANTHEON_ENVIRONMENT'] == 'live') {
    $conf['linkedin_consumer_key'] = '781hc8muzcmorx';
    $conf['linkedin_consumer_secret'] = '0nYYDfzJt0vfTdtC';
    $cookie_domain = '.benefunder.com';
  }
}

// All Pantheon Environments.
if (defined('PANTHEON_ENVIRONMENT')) {

  // Set path to wkhtmltopdf.
  $conf['entity_print_wkhtmltopdf'] = '/srv/bin/wkhtmltopdf';

  // Hellosign credentials.
  $conf['hellosign_api_key'] = '224e350f27213febd04b7c272e3fb7b0482fdc06163cd6e59ed333c5e4d0d630';
  $conf['hellosign_client_id'] = '04a26a2e01407f7b0ccfeea8e7965d86';
  $conf['hellosign_test_mode'] = 1;

  // Use Redis for caching.
  $conf['redis_client_interface'] = 'PhpRedis';
  $conf['cache_backends'][] = 'sites/all/modules/contrib/redis/redis.autoload.inc';
  $conf['cache_default_class'] = 'Redis_CacheCompressed';
  $conf['cache_prefix'] = array('default' => 'pantheon-redis');

  // Do not use Redis for cache_form (no performance difference).
  $conf['cache_class_cache_form'] = 'DrupalDatabaseCache';

  // Use Redis for Drupal locks (semaphore).
  $conf['lock_inc'] = 'sites/all/modules/contrib/redis/redis.lock.inc';

  // High performance - no hook_boot(), no hook_exit(), ignores Drupal IP blacklists.
  $conf['page_cache_without_database'] = TRUE;
  $conf['page_cache_invoke_hooks'] = FALSE;

  // Explicitly set page_cache_maximum_age to 1 day as database won't be available.
  $conf['page_cache_maximum_age'] = 86400;
}

/**
 * Fast 404 pages:
 *
 * Drupal can generate fully themed 404 pages. However, some of these responses
 * are for images or other resource files that are not displayed to the user.
 * This can waste bandwidth, and also generate server load.
 *
 * The options below return a simple, fast 404 page for URLs matching a
 * specific pattern:
 * - 404_fast_paths_exclude: A regular expression to match paths to exclude,
 *   such as images generated by image styles, or dynamically-resized images.
 *   The default pattern provided below also excludes the private file system.
 *   If you need to add more paths, you can add '|path' to the expression.
 * - 404_fast_paths: A regular expression to match paths that should return a
 *   simple 404 page, rather than the fully themed 404 page. If you don't have
 *   any aliases ending in htm or html you can add '|s?html?' to the expression.
 * - 404_fast_html: The html to return for simple 404 pages.
 *
 * Add leading hash signs if you would like to disable this functionality.
 */
$conf['404_fast_paths_exclude'] = '/\/(?:styles)|(?:system\/files)\//';
$conf['404_fast_paths'] = '/(wp\-login\.php|\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp|s?html?))$/i';
$conf['404_fast_html'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';
drupal_fast_404();
