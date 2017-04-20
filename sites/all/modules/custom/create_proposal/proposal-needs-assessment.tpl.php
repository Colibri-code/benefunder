<html>
<head>
  <meta charset="UTF-8">
  <script src="https://use.typekit.net/jxh1lif.js"></script>
  <script>try{Typekit.load({ async: true });}catch(e){}</script>
  <style type="text/css">
    body {
      font-family: "Raleway", sans-serif;
    }
    .header {
      background: url(<?php print $background; ?>);
    }
    h2 {
      position: fixed;
      top: 150px;
      left: 75px;
      color: white;
    }
    h3 {
      color: cadetblue;
    }
    table {
      border-collapse: collapse;
    }
    td {
      border: 1px solid black;
      padding: 5px;
    }
    td:first-child {
      text-align: right;
      font-weight: bold;
    }
    td:first-child:after {
      content: ":";
    }
  </style>
</head>

<body>

<div class="header">
<h2>Giving Profile</h2>
<p>Benefunder provides you with impact in your giving: a unique opportunity to find, fund, and follow
research that supports your charitable interests in an efficient, cost effective manner.</p>
</div>

<h3>Donor</h3>

<table>
  <tr>
    <td>Name</td>
    <td><?php print $name; ?></td>
  </tr>
  <tr>
    <td>Location</td>
    <td><?php print $citystate; ?></td>
  </tr>
  <tr>
    <td>University Alumni Associations</td>
    <td><?php print $alumni_associations; ?></td>
  </tr>
</table>

<h3>Categories of Research Interests</h3>
<h3>Current Charitable Giving</h3>
<h3>Anticipated Giving Plan</h3>

</body>
</html>