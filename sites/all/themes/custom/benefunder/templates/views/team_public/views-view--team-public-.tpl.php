<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>

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
