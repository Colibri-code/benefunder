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

// All Pantheon Environments.
if (defined('PANTHEON_ENVIRONMENT')) {

  // Use Redis for caching.
  $conf['redis_client_interface'] = 'PhpRedis';
  $conf['cache_backends'][] = 'sites/all/modules/contrib/redis/redis.autoload.inc';
  $conf['cache_default_class'] = 'Redis_Cache';
  $conf['cache_prefix'] = array('default' => 'pantheon-redis');

  // Do not use Redis for cache_form (no performance difference).
  $conf['cache_class_cache_form'] = 'DrupalDatabaseCache';

  // Use Redis for Drupal locks (semaphore).
  $conf['lock_inc'] = 'sites/all/modules/contrib/redis/redis.lock.inc';

  // High performance - no hook_boot(), no hook_exit(), ignores Drupal IP blacklists.
  $conf['page_cache_without_database'] = TRUE;
  $conf['page_cache_invoke_hooks'] = FALSE;
  // Explicitly set page_cache_maximum_age as database won't be available.
  $conf['page_cache_maximum_age'] = 900;
}
