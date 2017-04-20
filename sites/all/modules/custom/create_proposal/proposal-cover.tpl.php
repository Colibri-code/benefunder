<html>
<head>
  <meta charset="UTF-8">
  <script src="https://use.typekit.net/jxh1lif.js"></script>
  <script>try{Typekit.load({ async: true });}catch(e){}</script>
  <style type="text/css">
    html {
      height: 100%;
    }
    body {
      background-image: url(<?php print $background; ?>);
      background-size: 100% 100%;
      font-family: "Raleway", sans-serif;
      height: 100%;
      width: 100%;
      border: 15px solid black;
      margin: 0;
    }
    h1 {
      position: absolute;
      top: 200px;
      padding: 25px;
      color: black;
      text-transform: uppercase;
      border-left: 15px solid #9F18A3;
      background: rgba(0, 0, 0, 0.5);
      margin-left: -15px;
    }
    h1 span {
      font-size: 125%;
    }
    #right {
      background: black;
      position: fixed;
      top: 0;
      bottom: 0;
      right: 0;
      width: 15px;
    }
  </style>
</head>
<body>

<div id="right"></div>
<h1><?php print $name; ?><br/><span>Needs Assessment</span></h1>

</body>
</html>