<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div class="event">
  <div class="event__top">
    <div class="event__img" style="background-image: url(<?php print $img_uri; ?>);"></div>
    <?php print l(t('Back to All Events'), 'events', array('attributes' => array('class' => 'event__back-link'))); ?>
  </div>
  <div class="event__content">
    <div class="event__left-side">
      <div class="event__info-title"><?php print t('Event information'); ?></div>
      <div class="event__info-wrapper">
        <div class="event__venue-label"><?php print t('Address'); ?></div>
        <div class="event__venue-name">
          <?php print drupal_render($content['field_venue_name']); ?>
        </div>
        <div class="event__venue">
          <?php print drupal_render($content['field_venue_address']); ?>
        </div>
        <div class="event__sponsor-label"><?php print t('Sponsor'); ?></div>
        <div class="event__sponsor-name">
          <?php print drupal_render($content['field_sponsor_name']); ?>
        </div>
        <div class="event__sponsor-logo">
          <?php print drupal_render($content['field_sponsor_logo']); ?>
        </div>
      </div>
      <div class="event__people">
        <div class="event__people-label"><?php print t('Researchers'); ?></div>
        <?php print drupal_render($content['field_related_causes']); ?>
      </div>
      <?php print l(t('Register for this Event'), drupal_render($content['field_registration_url']), array('attributes' => array('class' => 'event__register-link'))); ?>
    </div>
    <div class="event__right-side">
      <div class="event__title">
        <?php print $node->title; ?>
      </div>
      <div class="event__info-panel">
        <?php if(!empty($short_date)) : ?>
          <div class="event__short-date">
            <div class="event__short-date-d"><?php print $short_date['day']; ?></div>
            <div class="event__short-date-m"><?php print $short_date['month']; ?></div>
          </div>
        <?php endif; ?>
        <div class="event__info-panel-center">
          <div class="event__time">
            <?php print drupal_render($content['field_event_date']); ?>
          </div>
          <?php if(!empty($hosts)) : ?>
            <div class="event__hosts">
              <div class="event__hosts-label">
                <?php print t('Hosts:'); ?>
              </div>
              <div class="event__hosts-content">
                <?php print $hosts; ?>
              </div>
            </div>
          <?php endif; ?>
        </div>
        <?php if(!empty($event_type)): ?>
          <div class="event__type"><?php print $event_type; ?></div>
        <?php endif; ?>
      </div>
      <div class="event__description-label"><?php print t('Event Description'); ?></div>
      <div class="event__description">
        <?php print drupal_render($content['body']); ?>
      </div>
    </div>
  </div>
</div>

