<?php if (!empty($rows)): ?>
  <div class="bio-group">
    <div class="bio-group__label">
      <?php if ($view->display[$view->current_display]->display_options['title']): ?>
        <?php print $view->display[$view->current_display]->display_options['title']; ?>
      <?php endif; ?>
    </div>
    <div class="bio-group__content">
      <?php print $rows; ?>
    </div>
  </div>
<?php endif; ?>

<?php if ($attachment_after): ?>
  <?php print $attachment_after; ?>
<?php endif; ?>
