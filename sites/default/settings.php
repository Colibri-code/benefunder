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

//Redirect benefunder.info
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
  $_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
  if ($_SERVER['HTTP_HOST'] == 'www.benefunder.info' ||
      $_SERVER['HTTP_HOST'] == 'benefunder.info') {
    header('HTTP/1.0 301 Moved Permanently');
    header('Location: http://www.benefunder.com'. $_SERVER['REQUEST_URI']);
    exit();
  }
}

//Redirect benefunder.net
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
  $_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
  if ($_SERVER['HTTP_HOST'] == 'www.benefunder.net' ||
      $_SERVER['HTTP_HOST'] == 'benefunder.net') {
    header('HTTP/1.0 301 Moved Permanently');
    header('Location: http://www.benefunder.com'. $_SERVER['REQUEST_URI']);
    exit();
  }
}