<section class="cause-features">
  <div class="jumbo-teaser">
    <div class="empty"><span></span>X</div>
    <div class="contents">
      <!-- full width jumbo teaser inserts here -->
    </div>
  </div>
  <div class="feature-intro col-sm-12 col-md-4">
    <div class="feature-text col-sm-12">
      <h1><?php print $featured_causes_text; ?></h1>
    </div>
    <?php if (isset($causes[0]) && $causes[0]): ?>
      <div id="feature-1" class="feature col-sm-12" data-path="<?php print $causes[0]['path']; ?>">
        <!-- feature #1 -->
        <div class="cause-teaser <?php print $causes[0]['research_area_css_class']; ?>">
          <h2 class="teaser-title"><?php print $causes[0]['title']; ?></h2>
          <img class="cause-image-white" src="<?php print $causes[0]['research_area_icon_white']; ?>">
          <div class="lifestyle-wrapper"><div class="lifestyle" style="background-image: url('<?php print $causes[0]['image']; ?>');"></div></div>
          <div class="jumbo-rail col-sm-6 col-md-4">
            <?php if (isset($causes[0]['researcher_image'])): ?>
              <img class="researcher-image" src="<?php print $causes[0]['researcher_image']; ?>">
            <?php endif; ?>
            <span class="researcher"><?php print $causes[0]['researcher_name']; ?></span>
            <p class="bio"><?php print $causes[0]['overlay_copy']; ?></p>
            <div class="type">
              <img src="<?php print $causes[0]['research_area_icon_color']; ?>">
              <span class="<?php print $causes[0]['research_area_css_class']; ?>"><?php print $causes[0]['research_area_name']; ?></span>
            </div>
            <a class="cause-link" href="/<?php print drupal_get_path_alias('node/' . $causes[0]['nid']); ?>">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
          </div>
        </div>
      </div>
    <?php else: ?>
      <div id="feature-1" class="feature col-sm-12 empty hidden-xs hidden-sm"></div>
    <?php endif; ?>
  </div>
  <div class="feature-main col-sm-12 col-md-8">
    <div class="feature-row top-row">
      <div class="stacked col-xs-12 col-sm-8 col-md-3">
        <?php if (isset($causes[1]) && $causes[1]): ?>
          <div id="feature-2" class="col-xs-6 col-md-12 feature" data-path="<?php print $causes[1]['path']; ?>">
            <!-- feature #2 -->
            <div class="cause-teaser <?php print $causes[1]['research_area_css_class']; ?>">
              <h2 class="teaser-title"><?php print $causes[1]['title']; ?></h2>
              <img class="cause-image-white" src="<?php print $causes[1]['research_area_icon_white']; ?>">
              <div class="lifestyle-wrapper"><div class="lifestyle" style="background-image: url('<?php print $causes[1]['image']; ?>');"></div></div>
              <div class="jumbo-rail col-sm-6 col-md-4">
                <?php if (isset($causes[1]['researcher_image'])): ?>
                  <img class="researcher-image" src="<?php print $causes[1]['researcher_image']; ?>">
                <?php endif; ?>
                <span class="researcher"><?php print $causes[1]['researcher_name']; ?></span>
                <p class="bio"><?php print $causes[1]['overlay_copy']; ?></p>
                <div class="type">
                  <img src="<?php print $causes[1]['research_area_icon_color']; ?>">
                  <span class="<?php print $causes[1]['research_area_css_class']; ?>"><?php print $causes[1]['research_area_name']; ?></span>
                </div>
                <a class="cause-link" href="/<?php print drupal_get_path_alias('node/' . $causes[1]['nid']); ?>">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
              </div>
            </div>
          </div>
        <?php else: ?>
          <div id="feature-2" class="col-xs-6 col-md-12 feature empty"></div>
        <?php endif; ?>
        <?php if (isset($causes[2]) && $causes[2]): ?>
          <div id="feature-3" class="col-xs-6 col-md-12 feature" data-path="<?php print $causes[2]['path']; ?>">
            <!-- feature #3 -->
            <div class="cause-teaser <?php print $causes[2]['research_area_css_class']; ?>">
              <h2 class="teaser-title"><?php print $causes[2]['title']; ?></h2>
              <img class="cause-image-white" src="<?php print $causes[2]['research_area_icon_white']; ?>">
              <div class="lifestyle-wrapper"><div class="lifestyle" style="background-image: url('<?php print $causes[2]['image']; ?>');"></div></div>
              <div class="jumbo-rail col-sm-6 col-md-4">
                <?php if (isset($causes[2]['researcher_image'])): ?>
                  <img class="researcher-image" src="<?php print $causes[2]['researcher_image']; ?>">
                <?php endif; ?>
                <span class="researcher"><?php print $causes[2]['researcher_name']; ?></span>
                <p class="bio"><?php print $causes[2]['overlay_copy']; ?></p>
                <div class="type">
                  <img src="<?php print $causes[2]['research_area_icon_color']; ?>">
                  <span class="<?php print $causes[2]['research_area_css_class']; ?>"><?php print $causes[2]['research_area_name']; ?></span>
                </div>
                <a class="cause-link" href="/<?php print drupal_get_path_alias('node/' . $causes[2]['nid']); ?>">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
              </div>
            </div>
          </div>
        <?php else: ?>
          <div id="feature-3" class="col-xs-6 col-md-12 feature empty"></div>
        <?php endif; ?>
      </div>
      <?php if (isset($causes[3]) && $causes[3]): ?>
        <div id="feature-4" class="feature col-xs-12 col-sm-4 col-md-9" data-path="<?php print $causes[3]['path']; ?>">
          <!-- feature #4 -->
          <div class="cause-teaser <?php print $causes[3]['research_area_css_class']; ?>">
            <h2 class="teaser-title"><?php print $causes[3]['title']; ?></h2>
            <img class="cause-image-white" src="<?php print $causes[3]['research_area_icon_white']; ?>">
              <div class="lifestyle-wrapper"><div class="lifestyle" style="background-image: url('<?php print $causes[3]['image']; ?>');"></div></div>
              <div class="jumbo-rail col-sm-6 col-md-4">
              <?php if (isset($causes[3]['researcher_image'])): ?>
                <img class="researcher-image" src="<?php print $causes[3]['researcher_image']; ?>">
              <?php endif; ?>
              <span class="researcher"><?php print $causes[3]['researcher_name']; ?></span>
              <p class="bio"><?php print $causes[3]['overlay_copy']; ?></p>
              <div class="type">
                <img src="<?php print $causes[3]['research_area_icon_color']; ?>">
                <span class="<?php print $causes[3]['research_area_css_class']; ?>"><?php print $causes[3]['research_area_name']; ?></span>
              </div>
              <a class="cause-link" href="/<?php print drupal_get_path_alias('node/' . $causes[3]['nid']); ?>">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
            </div>
          </div>
        </div>
      <?php else: ?>
        <div id="feature-4" class="feature empty col-xs-12 col-sm-4 col-md-9">
      <?php endif; ?>
    </div>
    <div class="feature-row bottom-row">
      <?php if (isset($causes[4]) && $causes[4]): ?>
        <div id="feature-5" class="feature col-xs-6" data-path="<?php print $causes[4]['path']; ?>">
          <!-- feature #5 -->
          <div class="cause-teaser <?php print $causes[4]['research_area_css_class']; ?>">
            <h2 class="teaser-title"><?php print $causes[4]['title']; ?></h2>
            <img class="cause-image-white" src="<?php print $causes[4]['research_area_icon_white']; ?>">
            <div class="lifestyle-wrapper"><div class="lifestyle" style="background-image: url('<?php print $causes[4]['image']; ?>');"></div></div>
            <div class="jumbo-rail col-sm-6 col-md-4">
              <?php if (isset($causes[4]['researcher_image'])): ?>
                <img class="researcher-image" src="<?php print $causes[4]['researcher_image']; ?>">
              <?php endif; ?>
              <span class="researcher"><?php print $causes[4]['researcher_name']; ?></span>
              <p class="bio"><?php print $causes[4]['overlay_copy']; ?></p>
              <div class="type">
                <img src="<?php print $causes[4]['research_area_icon_color']; ?>">
                <span class="<?php print $causes[4]['research_area_css_class']; ?>"><?php print $causes[4]['research_area_name']; ?></span>
              </div>
              <a class="cause-link" href="/<?php print drupal_get_path_alias('node/' . $causes[4]['nid']); ?>">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
            </div>
          </div>
        </div>
      <?php else: ?>
        <div id="feature-5" class="feature empty col-xs-6">
      <?php endif; ?>
      <?php if (isset($causes[5]) && $causes[5]): ?>
        <div id="feature-6" class="feature col-xs-6" data-path="<?php print $causes[5]['path']; ?>">
          <!-- feature #6 -->
          <div class="cause-teaser <?php print $causes[5]['research_area_css_class']; ?>">
            <h2 class="teaser-title"><?php print $causes[5]['title']; ?></h2>
            <img class="cause-image-white" src="<?php print $causes[5]['research_area_icon_white']; ?>">
            <div class="lifestyle-wrapper"><div class="lifestyle" style="background-image: url('<?php print $causes[5]['image']; ?>');"></div></div>
            <div class="jumbo-rail col-sm-6 col-md-4">
              <?php if (isset($causes[5]['researcher_image'])): ?>
                <img class="researcher-image" src="<?php print $causes[5]['researcher_image']; ?>">
              <?php endif; ?>
              <span class="researcher"><?php print $causes[5]['researcher_name']; ?></span>
              <p class="bio"><?php print $causes[5]['overlay_copy']; ?></p>
              <div class="type">
                <img src="<?php print $causes[5]['research_area_icon_color']; ?>">
                <span class="<?php print $causes[5]['research_area_css_class']; ?>"><?php print $causes[5]['research_area_name']; ?></span>
              </div>
              <a class="cause-link" href="/<?php print drupal_get_path_alias('node/' . $causes[5]['nid']); ?>">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
            </div>
          </div>
        </div>
      <?php else: ?>
        <div id="feature-6" class="feature empty col-xs-6">
      <?php endif; ?>
    </div>
  </div>
</section>