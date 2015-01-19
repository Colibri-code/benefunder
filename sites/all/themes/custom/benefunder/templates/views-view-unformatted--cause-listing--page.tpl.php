<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php foreach ($rows as $id => $row): ?>
  <div class="listing-teaser col-xs-6 col-sm-3 <?php if ($id == 0) { print ' col-xs-offset-6'; } ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>