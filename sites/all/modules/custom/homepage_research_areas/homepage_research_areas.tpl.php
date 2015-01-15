<section class="cause-sectors">
  <div class="container">
    <div class="row">
      <a class="sector-link" href="cause-list.php" data-shelf="life-shelf">
        <div class="sector life col-xs-6 col-md-3">
          <img class="sector-icon" src="<?php print drupal_get_path('module', 'homepage_research_areas'); ?>/images/life_icon.png">
          <h2 class="sector-title">Life</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
      <a class="sector-link" href="cause-list.php" data-shelf="technology-shelf">
        <div class="sector technology col-xs-6 col-md-3">
          <img class="sector-icon" src="<?php print drupal_get_path('module', 'homepage_research_areas'); ?>/images/technology_icon.png">
          <h2 class="sector-title">Technology</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
      <a class="sector-link" href="cause-list.php" data-shelf="environment-shelf">
        <div class="sector environment col-xs-6 col-md-3">
    
          <img class="sector-icon" src="<?php print drupal_get_path('module', 'homepage_research_areas'); ?>/images/environment_icon.png">
          <h2 class="sector-title">Environment</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
      <a class="sector-link" href="cause-list.php" data-shelf="humanities-shelf">
        <div class="sector humanities col-xs-6 col-md-3">
          <img class="sector-icon" src="<?php print drupal_get_path('module', 'homepage_research_areas'); ?>/images/humanities_icon.png">
          <h2 class="sector-title">Humanities</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
    </div>
  </div>
  <div class="drop-shelf">
    <div id="life-shelf" class="sector-shelf">
      <p><?php print $life_text; ?></p>
      <a href="cause-list.php">See All Life Causes<i class="fa fa-long-arrow-right"></i></a>
    </div>
    <div id="technology-shelf" class="sector-shelf">
      <p><?php print $technologies_text; ?></p>
      <a href="cause-list.php">See All Technology Causes<i class="fa fa-long-arrow-right"></i></a>
    </div>
    <div id="environment-shelf" class="sector-shelf">
      <p><?php print $environment_text; ?></p>
      <a href="cause-list.php">See All Environment Causes<i class="fa fa-long-arrow-right"></i></a>
    </div>
    <div id="humanities-shelf" class="sector-shelf">
      <p><?php print $humanities_text; ?></p>
      <a href="cause-list.php">See All Humanities Causes<i class="fa fa-long-arrow-right"></i></a>
    </div>
  </div>
</section>