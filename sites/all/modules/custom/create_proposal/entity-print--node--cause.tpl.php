<?php

/**
 * @file
 * PDF template for printing.
 *
 * Available variables are:
 *  - $entity - The entity itself.
 *  - $entity_array - The renderable array of this entity.
 *  - $entity_print_css - An array of stylesheets to be rendered.
 */
?>

<html>
<head>
  <meta charset="UTF-8">
  <script src="https://use.typekit.net/jxh1lif.js"></script>
  <script>try{Typekit.load({ async: true });}catch(e){}</script>
  <style type="text/css">
    div.print-area {
      font-size: 8px;
      line-height: 150%;
    }
    img {
      max-width: 100%;
      height: auto;
    }
    .background {
      background-image: url(<?php print $background ?>);
      height: 6cm;
      margin: 0;
      background-repeat: no-repeat;
      background-size: cover;
      overflow: hidden;
    }
    .pdf_title {
      font-size: 250%;
      /*font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";*/
      /*font-size: 28px;*/
      /*line-height: 30px;*/
      color: #fff;
      padding: 18px 33px 18px 33px;
      background-color: rgba(0, 0, 0, 0.5);
      line-height: 125%;
    }
    .pdf_info {
      /*height: 184px;*/
      background-color: rgba(9, 50, 97, 0.75);
      padding: 40px 40px 0;
      color: #fff;
      position: relative;
      height: 100%;
    }
    .pdf_info a {
      color: #fff;
    }
    .pdf_media {
      float: left;
      text-align: left;
      margin-right: 20px;
      height: 100%;
    }
    .pdf_picture {
      margin-left: 5px;
      display: inline-block;
      border: solid 4px #fff;
      width: 100px;
    }
    .pdf_picture img, .pdf_institution_logo img {
      max-width: 100%;
    }
    .pdf_info_block {
      margin-top: 25px;
    }
    .pdf_name {
      font-size : 175%;
    }
    .pdf_position_text {
      font-size : 150%;
      /*line-height : 14px;*/
    }
    .pdf_position_text p {
      -webkit-margin-after: 0em;
      -webkit-margin-before: 0.5em;
    }
    .pdf_body {
      padding: 15px 0;
    }
    .pdf_body_content {
      width: 47.5%;
      margin-right: 2.5%;
      float: left;
    }
    .read_more_btn {
      background-color: #1F99A4;
      color: #FFF;
      padding: 10px;
      width: 100%;
      border: none;
      margin: 20px 0;
    }
    .pdf_body_content_right {
      width: 47.5%;
      margin-left: 2.5%;
      float: left;
    }
    .pdf_awards ul {
      -webkit-padding-start: 0;
      list-style-position: inside;
    }
    /*.header_title {*/
      /*font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";*/
      /*color: #1F99A4;*/
      /*line-height: 15px;*/
      /*font-weight: 600;*/
      /*text-transform: uppercase;*/
      /*margin-bottom: 10px;*/
    /*}*/
    h3 {
      text-transform: uppercase;
      font-weight: bold;
      font-size: 175%;
    }
    hr {
      clear: both;
    }
    .pdf_affiliation_logo {
      width: 25px;
      float: left;
      margin-right: 10px;
    }
    .pdf_footer {
      font-size: 80%;
      margin-top: 20px;
    }
    .pdf_subtitle {
      font-size: 150%;
    }
  </style>
</head>

<body>


2004, University of California at Santa Cruz, Santa Cruz, CA
2002, California State University East Bay, Hayward, CA
1997-2001, Berkeley City College, Berkeley, CA
1995, University of Maryland, College Park, MD


<div class="print-area">
  <div class="background">
    <div class="pdf_title"><?php print $title ?></div>
    <div class="pdf_info">
      <div class="pdf_media">
        <?php if (!empty($picture)): ?><div class="pdf_picture"><img src="<?php print $picture ?>"/></div><?php endif; ?>
      </div>
      <div class="pdf_info_block">
        <div class="pdf_name"><?php print $name ?></div>
        <div class="pdf_positions">
          <?php if (!empty($academic_positions)): ?><div class="pdf_position_text"><?php print $academic_positions ?></div><?php endif; ?>
        </div>
      </div>
    </div>
  </div>
  <div class="pdf_body">
    <div class="pdf_body_content">
      <h3 class="header_title">Current Research</h3>
      <div class="pdf_subtitle"><?php print $subtitle ?></div>
      <div class="pdf_summary"><?php print $summary ?></div>
      <a href="http://www.benefunder.com/<?php print $short_url ?>"><button class="btn read_more_btn">Read More at benefunder.com/<?php print $short_url ?></button></a>
    </div>
    <div class="pdf_body_content_right">
      <?php if (!empty($affiliation)): ?>
        <h3 class="header_title">Affiliation</h3>
        <?php if (!empty($affiliation_logo)): ?>
          <div class="pdf_affiliation_logo"><img src="<?php print $affiliation_logo ?>"/></div>
        <?php endif; ?>
        <div class="pdf_awards"><?php print $affiliation ?></div>
      <?php endif; ?>

      <?php if (!empty($education)): ?>
        <h3 class="header_title">Education</h3>
        <div class="pdf_awards"><?php print $education ?></div>
      <?php endif; ?>

      <?php if (!empty($awards)): ?>
        <h3 class="header_title">Awards</h3>
        <div class="pdf_awards"><?php print $awards ?></div>
      <?php endif; ?>

      <?php if (!empty($research_areas)): ?>
        <h3 class="header_title">Research Areas</h3>
        <div class="pdf_awards"><?php print $research_areas ?></div>
      <?php endif; ?>

      <?php if (!empty($contribution)): ?>
        <h3 class="header_title">Funding Request</h3>
        <div class="pdf_awards"><?php print $contribution ?></div>
      <?php endif; ?>

      <hr size="1"/>

      <div class="pdf_footer">
        Copyright &copy; 2017 / Benefunder 4790 Eastgate Mall, Ste 125, San Diego, CA 92121 / info@benefunder.com / (858) 215-1136
      </div>
    </div>
  </div>
</div>
</body>
</html>
