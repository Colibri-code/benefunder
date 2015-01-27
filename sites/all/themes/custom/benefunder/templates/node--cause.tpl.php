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
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> <?php print $research_area_css_class; ?> clearfix"<?php print $attributes; ?>>

  <div class="node-heading-wrapper">
    <div class="back-to-causes">
      <a href="/causes"><i class="bf-arrow bf-arrow-left"></i>All Causes</a>
    </div>
    <div class="cause-type <?php print $research_area_css_class; ?>">
      <img src="<?php print $research_area_icon_color; ?>">
      <span><?php print $research_area_name; ?></span>
    </div>
    <h1 class="page-title"><?php print $title; ?></h1>
  </div><!-- end .node-heading-wrapper -->

  <section class="hero-wrapper">
    <div class="hero" style="background-image: url('<?php print $hero_image; ?>');"></div>
    <h2 class="sub-heading"><?php print $jumbotron_copy; ?></h2>
    <a class="video-play-button" href="<?php if (isset($jumbotron_video)) { print $jumbotron_video; } ?>">Play Video</a>
  </section><!-- end .hero-wrapper -->

  <div class="node-content-wrapper">

    <div class="col-sm-4 sidebar-first">
      <div class="researcher-intro">
        <img class="headshot" src="<?php print $researcher_image; ?>">
        <div class="researcher-details">
          <p class="researcher-name"><?php print $researcher_first_name; ?></p>
          <p class="researcher-name"><?php print $researcher_last_name; ?></p>
          <p class="affiliation"><?php print $affiliation; ?></p>
        </div>
      </div><!-- end .researcher-intro -->

      <div class="researcher-body">
        <?php if (isset($affiliation_logo)): ?>
          <div class="affiliation-logo">
            <img src="<?php print $affiliation_logo; ?>">
          </div>
        <?php endif; ?>
        <div class="open-html">

          <?php if (!empty($academic_positions)): ?>
            <h4>Academic Position</h4>
            <?php foreach ($academic_positions as $position): ?>
              <p><?php print $position['safe_value']; ?></p>
            <?php endforeach; ?>
          <?php endif; ?>

          <?php if (!empty($education_items)): ?>
            <h4>Education</h4>
            <?php foreach ($education_items as $item): ?>
              <p><?php print $item['safe_value']; ?></p>
            <?php endforeach; ?>
          <?php endif; ?>

          <?php if (isset($call_to_action)): ?>
            <h4>How to Contribute</h4>
            <?php print $call_to_action; ?>
          <?php endif; ?>

          <p style="font-size:24px">(858) 215-1136</p>
        </div>
      </div><!-- end .researcher-body -->

      <?php print render($sidebar_first); ?>
    </div><!-- end .sidebar-first -->

    <div class="col-xs-12 col-sm-7 pull-right main-content">
      <div id="block-system-main">
        <div class="<?php print $research_area_css_class; ?> cause-meta">
          <div class="title-wrapper">
            <img class="cause-type-icon" src="<?php print $research_area_icon_color; ?>">
            <p class="cause-title"><?php print $title; ?></p>
          </div>
          <?php $block = module_invoke('service_links', 'block_view', 'service_links'); ?>
          <div class="share-block">
            <p class="share-text collapsed" data-toggle="collapse" data-target=".share-wrapper">Share</p>
            <div class="share-wrapper collapse">
              <i class="carrot"></i>
              <div class="share-contents">
                <?php print render($block['content']); ?>
              </div>
            </div>
          </div>
        </div><!-- end .cause-meta -->

        <h2 class="body-intro-text"><?php print $subtitle; ?></h2>
        
        <div class="open-html">
          <?php print $body; ?>
          <?php print $summary; ?>
        </div> <!-- end .open-html -->

        <div class="explore-more-block">
          <h2 class="block-title collapsed" data-toggle="collapse" data-target=".explore-more-wrapper">Explore More</h2>
          <div class="explore-more-wrapper collapse">

            <?php if (!empty($bio)): ?>
              <div class="bio">
                <h2 class="block-title">Bio</h2>
                <?php print $bio; ?>
              </div>
            <?php endif; ?>

            <?php if (isset($in_the_news) && !empty($in_the_news)): ?>
              <div class="more-news">
                <h2 class="block-title">In the News</h2>
                <?php foreach ($in_the_news as $item): ?>
                  <div class="news-teaser">
                    <h2 class="teaser-title"><?php print $item['link']; ?></h2>
                    <?php if (!empty($item['teaser'])): ?>
                      <p><?php print $item['teaser']; ?></p>
                    <?php endif; ?>
                  </div>
                <?php endforeach; ?>
              </div><!-- end .more-news -->
            <?php endif; ?>

            <?php if (isset($publications) && !empty($publications)): ?>
              <div class="more-publications">
                <h2 class="block-title">Publications</h2>
                <?php foreach ($publications as $item): ?>
                  <div class="publications-teaser">
                    <p><?php print $item['title']; ?></p>
                    <p class="desc"><?php print $item['teaser']; ?></p>
                    <?php print $item['link']; ?>
                  </div>
                <?php endforeach; ?>
              </div><!-- end .more-publications -->
            <?php endif; ?>

            <?php if (isset($additional_videos) && !empty($additional_videos)): ?>
              <div class="more-videos">
                <h2 class="block-title">Videos</h2>
                <?php foreach ($additional_videos as $item): ?>
                  <div class="videos-teaser">
                    <?php print $item; ?>
                  </div>
                <?php endforeach; ?>
              </div><!-- end .more-videos -->
            <?php endif; ?>

            <?php if (isset($awards) && !empty($awards)): ?>
              <div class="awards">
                <h2 class="block-title">Awards</h2>
                <?php foreach ($awards as $award): ?>
                  <div class="award">
                    <h4><?php print $award['title']; ?></h4>
                    <p><?php print $award['description']; ?></p>
                  </div>
                <?php endforeach; ?>
              </div><!-- end .awards -->
            <?php endif; ?>

            <?php if (isset($patents) && !empty($patents)): ?>
              <div class="patents">
                <h2 class="block-title">Patents</h2>
                <?php foreach ($patents as $patent): ?>
                  <div class="patent">
                    <h4><?php print $patent['title']; ?></h4>
                    <p><?php print $patent['description']; ?></p>
                  </div>
                <?php endforeach; ?>
              </div><!-- end .patents -->
            <?php endif; ?>

          </div><!-- end .explore-more-wrapper -->
        </div><!-- end .explore-more-block -->
      </div><!-- end #system-content-main -->
    </div><!-- end .main-content -->
  </div><!-- end .node-content-wrapper -->

</div>
