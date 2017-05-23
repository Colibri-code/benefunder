<html>
<head>
  <meta charset="UTF-8">
  <script src="https://use.typekit.net/jxh1lif.js"></script>
  <script>try{Typekit.load({ async: true });}catch(e){}</script>

  <style type="text/css">
    html {
      background-color: #00008b;
    }
    /* Define page size. Requires print-area adjustment! */
    body {
      background-color: cadetblue;
      margin:     0;
      padding:    0;
      width:      21cm;
      height:     21.8cm;

      background-image: url(<?php print $background; ?>);
      background-origin: border-box;
      background-size: cover;
      background-repeat: no-repeat;
    }

    /* Printable area */
    #print-area {
      position:   relative;
      top:        1cm;
      left:       1cm;
      width:      15cm;
      height:     20cm;

      font-family: "Raleway", sans-serif;
      /*background-color: lightblue;*/

    }

    #header {
      height:     3cm;

      background: #ccc;
    }
    #footer {
      position:   absolute;
      bottom:     0;
      width:      100%;
      height:     3cm;

      background: #ccc;
    }
/*    html {*/
/*      height: 11in;*/
/*      width: 8.5in;*/
/*      margin: 0;*/
/*      padding: 0;*/
/*    }*/
/*    body {*/
/*      margin: 0;*/
/*      padding: 0;*/
/*      width: 8.5in;*/
/*      height: 11in;*/
/*      font-family: "Raleway", sans-serif;*/
/*      background-image: url(*/<?php //print $background; ?>/*);*/
/*      background-size: 8in, 10in, cover;*/
/*      background-clip: content-box;*/
/*    }*/
    h1 {
      position: absolute;
      top: 200px;
      padding: 25px;
      color: black;
      text-transform: uppercase;
      background: rgba(102, 102, 102, 0.50);
    }
    h1 span {
      font-size: 125%;
    }
  </style>

</head>
<body>

<div id="print-area">
  <h1><?php print $name; ?><br/><span>Needs Assessment</span></h1>
</div>

</body>
</html>