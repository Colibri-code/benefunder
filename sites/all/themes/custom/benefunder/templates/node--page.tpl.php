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
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($jumbotron_fields == 'title'): ?>
    <section class="hero-wrapper">
      <div class="hero" style="background-image: url('<?php print $jumbotron_image; ?>');"></div>
      <div class="hero-text only-title">
        <h1 class="page-title"><?php print $title; ?></h1>
      </div>
    </section><!-- end .hero-wrapper -->
  <?php elseif ($jumbotron_fields == 'title_teaser_link'): ?>
    <section class="hero-wrapper">
      <div class="inner">
        <div class="hero" style="background-image: url('<?php print $jumbotron_image; ?>');"></div>
        <div class="hero-text">
          <h1 class="page-title"><?php print $title; ?></h1>
          <p class="call-to-action-text"><?php print $jumbotron_teaser; ?></p>
          <?php print isset($jumbotron_link) ? $jumbotron_link : ''; ?>
        </div>
      </div><!-- end .inner -->
    </section><!-- end .hero-wrapper -->
  <?php elseif ($jumbotron_fields == 'banner'): ?>
    <section class="hero-wrapper">
      <div class="hero" style="background-image: url('<?php print $jumbotron_image; ?>');"></div>
    </section><!-- end .hero-wrapper -->

    <section class="banner">
      <div class="banner-inner col-xs-12 col-sm-6">
        <h1><?php print $title; ?></h1>
        <p><?php print $banner_text; ?></p>
      </div>
    </section>
  <?php endif; ?>

  <div class="node-content-wrapper">
    <?php if (!empty($sidebar_second)): ?>
      <div class="col-xs-12 col-sm-8 col-md-7 main-content">
    <?php else: ?>
      <div class="col-xs-12 main-content">
    <?php endif; ?>
      <div id="block-system-main">

        <?php if (!empty($subtitle)): ?>
          <div class="field-body-label">
            <p><?php print $subtitle; ?></p>
          </div>
        <?php endif; ?>
        <div class="open-html field-name-body">

          <?php if (!empty($body)) { print $body; } ?>

          <?php if (!empty($fifty_fifty)): ?>
            <?php foreach ($fifty_fifty as $delta => $row): ?>
                <div class="subhead-row row">
                  <?php if (!empty($row['image'])): ?>
                    <div class="feature feature-img col-xs-12 <?php print (!empty($row['text'])) ? 'col-sm-6' : ''; ?> <?php if (($delta % 2) != 0) { print 'right-feature'; } ?>">
                      <img src="<?php print $row['image']; ?>">
                    </div>
                  <?php endif; ?>
                  <?php if (!empty($row['text'])): ?>
                    <div class="feature feature-text col-xs-12 <?php print (!empty($row['image'])) ? 'col-sm-6' : ''; ?>">
                      <?php print $row['text']; ?>
                    </div>
                  <?php endif; ?>
                </div>
            <?php endforeach; ?>
          <?php endif; ?>

          <?php if (!empty($bottom_body)) { print $bottom_body; } ?>

        </div> <!-- end .ckeditor -->
      </div><!-- end #system-content-main -->
    </div><!-- end .main-content -->

    <?php if (!empty($sidebar_second)): ?>
      <div class="col-xs-12 col-sm-4 col-md-4 col-md-offset-1 sidebar-second">
        <?php print render($sidebar_second); ?>
      </div><!-- end .sidebar-second -->
    <?php endif; ?>

  </div><!-- end .node-content-wrapper -->

</div>
