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
</head>

<body>

<div class="background">
  <div class="pdf_title"><?php print $title ?></div>
  <div class="pdf_info">
    <div class="pdf_media">
      <?php if (!empty($affiliation_logo)): ?><div class="pdf_institution_logo"><?php print $affiliation_logo ?></div><?php endif; ?>
      <?php if (!empty($picture)): ?><div class="pdf_picture"><?php print $picture ?></div><?php endif; ?>
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
