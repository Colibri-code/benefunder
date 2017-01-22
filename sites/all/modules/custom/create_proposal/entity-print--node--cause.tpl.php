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
  <style type="text/css">
    html {
      height: 100%;
    }
    body {
      height: 100%;
      margin: 0;
    }
    img {
      max-width: 100%;
      height: auto;
    }
    .background {
      background-image: url(<?php print $background ?>);
      height: 290px;
      margin: 0;
      background-repeat: no-repeat;
      background-size: cover;
    }
    .pdf_title {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size: 28px;
      line-height: 30px;
      color: #5CC6CF;
      padding: 18px 33px 18px 33px;
      background-color: rgba(0, 0, 0, 0.5);
    }
    .pdf_info {
      height: 184px;
      background-color: rgba(31, 153, 164, 0.5);
      padding: 40px 40px 0;
      color: #fff;
      position: relative;
    }
    .pdf_info a {
      color: #fff;
    }
    .pdf_media {
      float: left;
      width: 50%;
      text-align: center;
    }
    .pdf_picture {
      margin-left: 5px;
      display: inline-block;
      border: solid 4px #fff;
      width: 125px;
    }
    .pdf_picture img, .pdf_institution_logo img {
      max-width: 100%;
    }
    .pdf_info_block {
      float: left;
      width: 50%;
    }
    .pdf_name {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size : 20px;
      line-height : 18px;
    }
    .pdf_positions {
      clear: both;
    }
    .pdf_position_text {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size : 12px;
      line-height : 14px;
    }
    .pdf_affiliation_text {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size : 11px;
      line-height : 19px;
      font-weight: 300;
    }
    .pdf_body {
      padding: 40px;
    }
    .pdf_body_content {
      width: 47.5%;
      margin-right: 2.5%;
      float: left;
    }
    .read_more_btn {
      background-color: #1F99A4;
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size: 10px;
      line-height: 15px;
      color: #FFF;
      padding: 10px;
      width: 100%;
      border: none;
      margin: 20px 0;
    }
    .pdf_summary {
      font-family: 'Alegreya', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size: 10px;
      line-height: 15px;
      font-weight: normal;
    }
    .pdf_body_content_right {
      width: 47.5%;
      margin-left: 2.5%;
      float: left;
    }
    .pdf_awards {
      font-family: 'Alegreya', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size: 10px;
      line-height: 15px;
      font-weight: normal;

    }
    .pdf_awards ul {
      -webkit-padding-start: 0;
      list-style-position: inside;
    }
    .header_title {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      color: #1F99A4;
      font-size: 11px;
      line-height: 15px;
      font-weight: 600;
      text-transform: uppercase;
    }
    .pdf_stage {
      font-family: 'Alegreya', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size: 10px;
      line-height: 15px;
      font-weight: normal;
    }
    hr {
      clear: both;
    }
  </style>
</head>

<body>

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
        <?php if (!empty($affiliation)): ?><div class="pdf_affiliation_text"><?php print $affiliation ?></div><?php endif; ?>
      </div>
    </div>
  </div>
</div>
<div class="pdf_body">
  <div class="pdf_body_content">
    <h3 class="header_title">Current Research</h3>
    <div class="pdf_summary"><?php print $body ?><?php print $summary ?></div>
    <button class="btn read_more_btn">Read More on Benefunder.com</button>
  </div>
  <div class="pdf_body_content_right">
    <h3 class="header_title">Awards</h3>
    <?php if (!empty($awards)): ?><div class="pdf_awards"><?php print $awards ?></div><?php endif; ?>
    <h3 class="header_title">Stage of Research</h3>
    <div class="pdf_stage">Translational</div>
  </div>
</div>

</body>
</html>
