<?php

// Redirect all Benefunder domains to www.benefunder.com
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
  ($_SERVER['PANTHEON_ENVIRONMENT'] === 'live') &&
  (php_sapi_name() != "cli")) {

  if (in_array($_SERVER['HTTP_HOST'], array(
    'benefunder.org',
    'www.benefunder.org',
    'benefunder.info',
    'www.benefunder.info',
    'benefunder.net',
    'www.benefunder.net',
    'http://live-benefunder.pantheonsite.io/',
    'live-benefunder.gotpantheon.com',
  ))) {
    header('HTTP/1.0 301 Moved Permanently');
    header('Location: http://www.benefunder.com'. $_SERVER['REQUEST_URI']);
    exit();
  }
}