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
    <div id="feature-1" class="feature col-sm-12 hidden-xs hidden-sm">
      <!-- first #1 -->
      <div class="cause-teaser <?php print $causes[0]['research_area_css_class']; ?>">
        <h2 class="teaser-title"><?php print $causes[0]['title']; ?></h2>
        <img class="cause-image-white" src="<?php print $causes[0]['research_area_icon_white']; ?>">
        <div class="lifestyle" style="background-image: url('<?php print $causes[0]['image']; ?>');"></div>
        <div class="jumbo-rail col-sm-6 col-md-4">
          <img class="researcher-image" src="<?php print $causes[0]['researcher_image']; ?>">
          <span class="researcher"><?php print $causes[0]['researcher_name']; ?></span>
          <p class="bio"><?php print $causes[0]['researcher_text']; ?></p>
          <div class="type">
            <img src="<?php print $causes[0]['research_area_icon_color']; ?>">
            <span class="<?php print $causes[0]['research_area_css_class']; ?>"><?php print $causes[0]['research_area_name']; ?></span>
          </div>
          <a class="cause-link" href="cause.php">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
        </div>
      </div>
    </div>
  </div>
  <div class="feature-main col-sm-12 col-md-8">
    <div class="feature-row top-row">
      <div class="stacked col-xs-12 col-sm-8 col-md-3">
        <div id="feature-2" class="col-xs-6 col-md-12 feature">
          <!-- feature #2 -->
          <div class="cause-teaser <?php print $causes[1]['research_area_css_class']; ?>">
            <h2 class="teaser-title"><?php print $causes[1]['title']; ?></h2>
            <img class="cause-image-white" src="<?php print $causes[1]['research_area_icon_white']; ?>">
            <div class="lifestyle" style="background-image: url('<?php print $causes[1]['image']; ?>');"></div>
            <div class="jumbo-rail col-sm-6 col-md-4">
              <img class="researcher-image" src="<?php print $causes[1]['researcher_image']; ?>">
              <span class="researcher"><?php print $causes[1]['researcher_name']; ?></span>
              <p class="bio"><?php print $causes[1]['researcher_text']; ?></p>
              <div class="type">
                <img src="<?php print $causes[1]['research_area_icon_color']; ?>">
                <span class="<?php print $causes[1]['research_area_css_class']; ?>"><?php print $causes[1]['research_area_name']; ?></span>
              </div>
              <a class="cause-link" href="cause.php">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
            </div>
          </div>
        </div>
        <div id="feature-3" class="col-xs-6 col-md-12 feature">
          <!-- feature #3 -->
          <div class="cause-teaser <?php print $causes[2]['research_area_css_class']; ?>">
            <h2 class="teaser-title"><?php print $causes[2]['title']; ?></h2>
            <img class="cause-image-white" src="<?php print $causes[2]['research_area_icon_white']; ?>">
            <div class="lifestyle" style="background-image: url('<?php print $causes[2]['image']; ?>');"></div>
            <div class="jumbo-rail col-sm-6 col-md-4">
              <img class="researcher-image" src="<?php print $causes[2]['researcher_image']; ?>">
              <span class="researcher"><?php print $causes[2]['researcher_name']; ?></span>
              <p class="bio"><?php print $causes[2]['researcher_text']; ?></p>
              <div class="type">
                <img src="<?php print $causes[2]['research_area_icon_color']; ?>">
                <span class="<?php print $causes[2]['research_area_css_class']; ?>"><?php print $causes[2]['research_area_name']; ?></span>
              </div>
              <a class="cause-link" href="cause.php">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
            </div>
          </div>
        </div>
      </div>
      <div id="feature-4" class="feature col-xs-12 col-sm-4 col-md-9">
        <!-- feature #4 -->
        <div class="cause-teaser <?php print $causes[3]['research_area_css_class']; ?>">
          <h2 class="teaser-title"><?php print $causes[3]['title']; ?></h2>
          <img class="cause-image-white" src="<?php print $causes[3]['research_area_icon_white']; ?>">
            <div class="lifestyle" style="background-image: url('<?php print $causes[3]['image']; ?>');"></div>
            <div class="jumbo-rail col-sm-6 col-md-4">
            <img class="researcher-image" src="<?php print $causes[3]['researcher_image']; ?>">
            <span class="researcher"><?php print $causes[3]['researcher_name']; ?></span>
            <p class="bio"><?php print $causes[3]['researcher_text']; ?></p>
            <div class="type">
              <img src="<?php print $causes[3]['research_area_icon_color']; ?>">
              <span class="<?php print $causes[3]['research_area_css_class']; ?>"><?php print $causes[3]['research_area_name']; ?></span>
            </div>
            <a class="cause-link" href="cause.php">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
          </div>
        </div>
      </div>
    </div>
    <div class="feature-row bottom-row">
      <div id="feature-5" class="feature col-xs-6">
        <!-- feature #5 -->
        <div class="cause-teaser <?php print $causes[4]['research_area_css_class']; ?>">
          <h2 class="teaser-title"><?php print $causes[4]['title']; ?></h2>
          <img class="cause-image-white" src="<?php print $causes[4]['research_area_icon_white']; ?>">
          <div class="lifestyle" style="background-image: url('<?php print $causes[4]['image']; ?>');"></div>
          <div class="jumbo-rail col-sm-6 col-md-4">
            <img class="researcher-image" src="<?php print $causes[4]['researcher_image']; ?>">
            <span class="researcher"><?php print $causes[4]['researcher_name']; ?></span>
            <p class="bio"><?php print $causes[4]['researcher_text']; ?></p>
            <div class="type">
              <img src="<?php print $causes[4]['research_area_icon_color']; ?>">
              <span class="<?php print $causes[4]['research_area_css_class']; ?>"><?php print $causes[4]['research_area_name']; ?></span>
            </div>
            <a class="cause-link" href="cause.php">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
          </div>
        </div>
      </div>
      <div id="feature-6" class="feature col-xs-6">
        <!-- feature #6 -->
        <div class="cause-teaser <?php print $causes[5]['research_area_css_class']; ?>">
          <h2 class="teaser-title"><?php print $causes[5]['title']; ?></h2>
          <img class="cause-image-white" src="<?php print $causes[5]['research_area_icon_white']; ?>">
          <div class="lifestyle" style="background-image: url('<?php print $causes[5]['image']; ?>');"></div>
          <div class="jumbo-rail col-sm-6 col-md-4">
            <img class="researcher-image" src="<?php print $causes[5]['researcher_image']; ?>">
            <span class="researcher"><?php print $causes[5]['researcher_name']; ?></span>
            <p class="bio"><?php print $causes[5]['researcher_text']; ?></p>
            <div class="type">
              <img src="<?php print $causes[5]['research_area_icon_color']; ?>">
              <span class="<?php print $causes[5]['research_area_css_class']; ?>"><?php print $causes[5]['research_area_name']; ?></span>
            </div>
            <a class="cause-link" href="cause.php">See Cause <i class="bf-arrow bf-arrow-right"></i></a>
          </div>
        </div>
      </div>
    </div>
  </div>
</section>