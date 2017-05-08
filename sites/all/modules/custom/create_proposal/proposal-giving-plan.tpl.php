<html>
<head>
  <meta charset="UTF-8">
  <style type="text/css">
    body {
      font-family: "Raleway", sans-serif;
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
    .pieContainer {
      height: 200px;
    }
    .pieBackground {
      background-color: grey;
      position: absolute;
      width: 200px;
      height: 200px;
      border-radius: 100px;
    }
    .pie {
      position: absolute;
      width: 200px;
      height: 200px;
      border-radius: 100px;
      clip: rect(0px, 100px, 200px, 0px);
    }
    .hold {
      position: absolute;
      width: 200px;
      height: 200px;
      border-radius: 100px;
      clip: rect(0px, 200px, 200px, 100px);
    }
    #pieSlice1 .pie {
      background-color: red;
      transform:rotate(50deg);
      -webkit-transform:rotate(50deg);
      -moz-transform:rotate(50deg);
      -o-transform:rotate(50deg);
    }
    #pieSlice2 {
      transform:rotate(50deg);
      -webkit-transform:rotate(50deg);
      -moz-transform:rotate(50deg);
      -o-transform:rotate(50deg);
    }
    #pieSlice2 .pie {
      background-color: yellow;
      transform:rotate(50deg);
      -webkit-transform:rotate(50deg);
      -moz-transform:rotate(50deg);
      -o-transform:rotate(50deg);
    }
    #pieSlice3 {
      transform:rotate(100deg);
      -webkit-transform:rotate(100deg);
      -moz-transform:rotate(100deg);
      -o-transform:rotate(100deg);
    }
    #pieSlice3 .pie {
      background-color: blue;
      transform:rotate(100deg);
      -webkit-transform:rotate(100deg);
      -moz-transform:rotate(100deg);
      -o-transform:rotate(100deg);
    }
    #pieSlice4 {
      transform:rotate(200deg);
      -webkit-transform:rotate(200deg);
      -moz-transform:rotate(200deg);
      -o-transform:rotate(200deg);
    }
    #pieSlice4 .pie {
      background-color: green;
      transform:rotate(160deg);
      -webkit-transform:rotate(160deg);
      -moz-transform:rotate(160deg);
      -o-transform:rotate(160deg);
    }
    .life {
      color: red;
    }
    .tech {
      color: yellow;
    }
    .env {
      color: blue;
    }
    .arts {
      color: green;
    }
  </style>
</head>

<body>

<h1>Giving Plan</h1>

<h3>Distribution Management</h3>
Initial Contribution: $1,000,000.00<br/>
Planned Annual Contribution: $250,000.00<br/>
Annual Distribution Percentage: 15%<br/>

<h3>Allocation</h3>

<div class="pieContainer">
  <div class="pieBackground"></div>
  <div id="pieSlice1" class="hold"><div class="pie"></div></div>
  <div id="pieSlice2" class="hold"><div class="pie"></div></div>
  <div id="pieSlice3" class="hold"><div class="pie"></div></div>
  <div id="pieSlice4" class="hold"><div class="pie"></div></div>
</div>

<div class="legend">
  <ul>
    <li class="life">Life Sciences (13.89%)</li>
    <ul class="life">
      <li>Genomics/Congenital</li>
      <li>Neurological/Cognitive</li>
    </ul>
    <li class="tech">Technology (13.89%)</li>
    <ul class="tech">
      <li>Computational Sciences/Mathematics</li>
      <li>Informational Sciences/Internet</li>
      <li>Robotics</li>
    </ul>
    <li class="env">Environment (27.78%)</li>
    <ul class="env">
      <li>Energy</li>
    </ul>
    <li class="arts">Humanities (44.44%)</li>
    <ul class="arts">
      <li>Archaeology</li>
      <li>Economics</li>
      <li>Law/Ethics</li>
    </ul>
  </ul>
</div>

<h3>Fees</h3>

Total Annual Fund Overhead as a percent of fund balance: 1.50%<br/>
Benefunder Service Fee: 10%<br/>
Financial institution fees may apply<br/>

</body>
</html>
