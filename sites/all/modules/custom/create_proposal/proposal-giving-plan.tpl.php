<html>
<head>
  <meta charset="UTF-8">
  <style type="text/css">
    .pie {
      position:absolute;
      width:100px;
      height:200px;
      overflow:hidden;
      left:150px;
      -webkit-transform-origin:left center;
      transform-origin:left center;
    }

    .pie.big {
      width:200px;
      height:200px;
      left:50px;
      -webkit-transform-origin:center center;
      transform-origin:center center;
    }

    .pie:BEFORE {
      content:"";
      position:absolute;
      width:100px;
      height:200px;
      left:-100px;
      border-radius:100px 0 0 100px;
      -webkit-transform-origin:right center;
      transform-origin:right center;

    }

    .pie.big:BEFORE {
      left:0px;
    }

    .pie.big:AFTER {
      content:"";
      position:absolute;
      width:100px;
      height:200px;
      left:100px;
      border-radius:0 100px 100px 0;
    }

    .pie:nth-of-type(1):BEFORE,
    .pie:nth-of-type(1):AFTER {
      background-color: #3f9ed4;
    }
    .pie:nth-of-type(2):AFTER,
    .pie:nth-of-type(2):BEFORE {
      background-color: #9357b2;
    }
    .pie:nth-of-type(3):AFTER,
    .pie:nth-of-type(3):BEFORE {
      background-color: #339999;
    }
    .pie:nth-of-type(4):AFTER,
    .pie:nth-of-type(4):BEFORE {
      background-color: #cc6600;
    }

    <?php
      $current_deg = 0;
      foreach ($legend as $tid => $term) {
        // Convert percentage to degrees.
        $slice_deg = empty($term['allocation']) ? 0 : round(($term['allocation'] / 100) * 360);
        $legend[$tid]['slice'] = $slice_deg;

        print<<<ENDSLICE
.pie[data-start="{$current_deg}"] {
  transform: rotate({$current_deg}deg);
  -webkit-transform: rotate({$current_deg}deg);
}
.pie[data-value="{$slice_deg}"]:BEFORE {
  transform: rotate({$slice_deg}deg);
  -webkit-transform: rotate({$slice_deg}deg);
}
ENDSLICE;

        $current_deg += $slice_deg;
      }
    ?>

    .life {
      color: #339999;
    }
    .technology {
      color: #cc6600;
    }
    .environment {
      color: #3f9ed4;
    }
    .humanities {
      color: #9357b2;
    }
    .fif {
      color: gray;
    }
    div.half {
      width: 50%;
      float: left;
    }
    div.legend {
      margin-top: 225px;
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

    <?php
      $current_deg = 0;
      foreach ($legend as $tid => $term) {
        $slice_deg = $term['slice'];
        $class = ($slice_deg > 179) ? 'pie big' : 'pie';
        print "<div class='{$class}' data-start='{$current_deg}' data-value='{$slice_deg}'></div>";
        $current_deg += $slice_deg;
      }
    ?>

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
