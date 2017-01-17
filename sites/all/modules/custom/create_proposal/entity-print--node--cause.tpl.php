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
    div.background {
      background-image: url(<?php print $background ?>);
      height: 290px;
      margin: 0;
      background-repeat: no-repeat;
      background-size: cover;
    }
    div.pdf_title {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size: 28px;
      line-height: 30px;
      color: #5CC6CF;
      padding: 18px 33px 18px 33px;
      opacity: 0.5;
      background-color: #999999;
    }
    div.pdf_info {
      height: 184px;
      background-color: #1F99A4;
      opacity: 0.5;
      padding: 40px 40px 0;
      color: #fff;
    }
    .pdf_info a {
      color: #fff;
    }
    div.pdf_media {
      float: left;
      width: 45%;
      text-align: center;
    }
    div.pdf_institution_logo {
      display: inline-block;
      border: solid 4px #fff;
      width: 100px;
    }
    div.pdf_picture {
      margin-left: 5px;
      display: inline-block;
      border: solid 4px #fff;
      width: 100px;
    }
    .pdf_picture img, .pdf_institution_logo img {
      max-width: 100%;
    }
    div.pdf_info_block {
      float: left;
    }
    div.pdf_name {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size : 20px;
      line-height : 18px;
    }
    div.pdf_positions {
      clear: both;
    }
    div.pdf_position_text {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size : 14px;
      line-height : 14px;
    }
    div.pdf_affiliation_text {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size : 11px;
      line-height : 19px;
      font-weight: 300;
    }
    div.pdf_body {
      padding: 40px;
    }
    div.pdf_body_content {
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
    div.pdf_summary {
      font-family: 'Alegreya', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size: 10px;
      line-height: 15px;
      font-weight: normal;
    }
    div.pdf_body_content_right {
      width: 47.5%;
      margin-left: 2.5%;
      float: left;
    }
    div.pdf_awards {
      font-family: 'Alegreya', "Arial", "Helvetica", "Verdana", "sans-serif";
      font-size: 10px;
      line-height: 15px;
      font-weight: normal;
    }
    div.pdf_footer {
      position: absolute;
      padding: 40px;
      bottom: 0;
      left: 0;
      right: 0;
    }
    div.pdf_footer_media {
      display: inline-block;
    }
    div.pdf_company_logo {
      display: inline-block;
    }
    div.pdf_user_picture {
      margin-left: 5px;
      display: inline-block;
    }
    div.pdf_company_logo img {
      width: 55px;
    }
    div.pdf_user_picture img {
      width: 55px;
    }
    div.pdf_user_details {
      margin-left: 5px;
      display: inline-block;
      vertical-align: text-top;
    }
    div.pdf_user_name {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      color: #1F99A4;
      font-size : 16px;
      line-height : 18px;
    }
    div.pdf_user_title {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      color: #1F99A4;
      font-size : 10px;
      line-height : 19px;
      font-weight: 100;
    }
    .header_title {
      font-family: 'raleway', "Arial", "Helvetica", "Verdana", "sans-serif";
      color: #1F99A4;
      font-size: 11px;
      line-height: 15px;
      font-weight: 600;
      text-transform: uppercase;
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
      <?php if (!empty($affiliation_logo)): ?><div class="pdf_institution_logo"><?php print $affiliation_logo ?></div><?php endif; ?>
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
