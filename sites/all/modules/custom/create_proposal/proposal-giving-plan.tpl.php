<html>
<head>
  <meta charset="UTF-8">
  <style type="text/css">
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
      background-color: #339999;
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
      background-color: #cc6600;
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
      background-color: #3f9ed4;
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
      background-color: #9357b2;
      transform:rotate(160deg);
      -webkit-transform:rotate(160deg);
      -moz-transform:rotate(160deg);
      -o-transform:rotate(160deg);
    }
    .life {
      color: #339999;
    }
    .tech {
      color: #cc6600;
    }
    .env {
      color: #3f9ed4;
    }
    .arts {
      color: #9357b2;
    }
    .fif {
      color: gray;
    }
    div.half {
      width: 50%;
      float: left;
    }
  </style>
</head>

<body>

<div class="print-area">
  <h1 class="title">Giving Plan</h1>

  <h3>Distribution Management</h3>
  Initial Contribution: $1,000,000.00<br/>
  Planned Annual Contribution: $250,000.00<br/>
  Annual Distribution Percentage: 15%<br/>

  <div class="half">
    <h3>Allocation by Research Area</h3>

    <div class="pieContainer">
      <div class="pieBackground"></div>
      <div id="pieSlice1" class="hold"><div class="pie"></div></div>
      <div id="pieSlice2" class="hold"><div class="pie"></div></div>
      <div id="pieSlice3" class="hold"><div class="pie"></div></div>
      <div id="pieSlice4" class="hold"><div class="pie"></div></div>
    </div>

    <div class="legend">
      <?php print theme('item_list', array('items' => $legend)); ?>
    </div>
  </div>

<!--  <div class="half">-->
<!--    <h3>Allocation by Research Stage</h3>-->
<!---->
<!--    <div class="pieContainer">-->
<!--      <div class="pieBackground"></div>-->
<!--      <div id="pieSlice1" class="hold"><div class="pie"></div></div>-->
<!--      <div id="pieSlice2" class="hold"><div class="pie"></div></div>-->
<!--      <div id="pieSlice3" class="hold"><div class="pie"></div></div>-->
<!--      <div id="pieSlice4" class="hold"><div class="pie"></div></div>-->
<!--    </div>-->
<!---->
<!--    <div class="legend">-->
<!--      <ul>-->
<!--        <li class="life">Basic (13.89%)</li>-->
<!--        <ul class="life">-->
<!--          <li>Genomics/Congenital</li>-->
<!--          <li>Neurological/Cognitive</li>-->
<!--        </ul>-->
<!--        <li class="tech">Applied/Translational (13.89%)</li>-->
<!--        <ul class="tech">-->
<!--          <li>Computational Sciences/Mathematics</li>-->
<!--          <li>Informational Sciences/Internet</li>-->
<!--          <li>Robotics</li>-->
<!--        </ul>-->
<!--        <li class="env">Proof of Concept (27.78%)</li>-->
<!--        <ul class="env">-->
<!--          <li>Energy</li>-->
<!--        </ul>-->
<!--        <li class="arts">Commercialization (44.44%)</li>-->
<!--        <ul class="arts">-->
<!--          <li>Archaeology</li>-->
<!--          <li>Economics</li>-->
<!--          <li>Law/Ethics</li>-->
<!--        </ul>-->
<!--        <li class="fif">Programs & Policy (44.44%)</li>-->
<!--        <ul class="fif">-->
<!--          <li>Archaeology</li>-->
<!--          <li>Economics</li>-->
<!--          <li>Law/Ethics</li>-->
<!--        </ul>-->
<!--      </ul>-->
<!--    </div>-->
<!--  </div>-->


  <h3>Fees</h3>

  Total Annual Fund Overhead as a percent of fund balance: 1.50%<br/>
  Benefunder Service Fee: 10%<br/>
  Financial institution fees may apply<br/>

</div>

<div class="footer">
  Benefunder Page <?php print $page_num ?> of <?php print $page_total ?>
</div>

</body>
</html>
