<?php

// Remove WWW.
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
  $_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
  if ($_SERVER['HTTP_HOST'] == 'www.benefunder.org' ||
      $_SERVER['HTTP_HOST'] == 'live-benefunder.gotpantheon.com') {
    header('HTTP/1.0 301 Moved Permanently');
    header('Location: http://benefunder.org'. $_SERVER['REQUEST_URI']);
    exit();
  }
}