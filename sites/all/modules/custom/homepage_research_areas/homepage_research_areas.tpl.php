<section class="cause-sectors">
  <style type="text/css">
    .drop-shelf.technology-shelf {
      background-image: url('<?php print $technologies_image; ?>');
    }
    .drop-shelf.life-shelf {
      background-image: url('<?php print $life_image; ?>');
    }
    .drop-shelf.environment-shelf {
      background-image: url('<?php print $environment_image; ?>');
    }
    .drop-shelf.humanities-shelf {
      background-image: url('<?php print $humanities_image; ?>');
    }
  </style>

  <!-- Preload -->
  <img style="display: none;" src="<?php print $technologies_image; ?>" />
  <img style="display: none;" src="<?php print $life_image; ?>" />
  <img style="display: none;" src="<?php print $environment_image; ?>" />
  <img style="display: none;" src="<?php print $humanities_image; ?>" />

  <div class="container">
    <div class="row">
      <a class="sector-link" href="cause-list.php" data-shelf="life-shelf">
        <div class="sector life col-xs-6 col-md-3">
          <img class="sector-icon" src="<?php print $life_icon; ?>">
          <h2 class="sector-title">Life</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
      <a class="sector-link" href="cause-list.php" data-shelf="technology-shelf">
        <div class="sector technology col-xs-6 col-md-3">
          <img class="sector-icon" src="<?php print $technologies_icon; ?>">
          <h2 class="sector-title">Technology</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
      <a class="sector-link" href="cause-list.php" data-shelf="environment-shelf">
        <div class="sector environment col-xs-6 col-md-3">
    
          <img class="sector-icon" src="<?php print $environment_icon; ?>">
          <h2 class="sector-title">Environment</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
      <a class="sector-link" href="cause-list.php" data-shelf="humanities-shelf">
        <div class="sector humanities col-xs-6 col-md-3">
          <img class="sector-icon" src="<?php print $humanities_icon; ?>">
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