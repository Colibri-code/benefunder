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
      <a class="sector-link" href="/causes?term=66&amp;primary=tid-66" data-shelf="life-shelf">
        <div class="sector life col-xs-6 col-md-3">
          <img class="sector-icon" src="<?php print $life_icon; ?>">
          <h2 class="sector-title">Life</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
      <a class="sector-link" href="/causes?term=91&amp;primary=tid-91" data-shelf="technology-shelf">
        <div class="sector technology col-xs-6 col-md-3">
          <img class="sector-icon" src="<?php print $technologies_icon; ?>">
          <h2 class="sector-title">Technology</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
      <a class="sector-link" href="/causes?term=10&amp;primary=tid-10" data-shelf="environment-shelf">
        <div class="sector environment col-xs-6 col-md-3">
    
          <img class="sector-icon" src="<?php print $environment_icon; ?>">
          <h2 class="sector-title">Environment</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
      <a class="sector-link" href="/causes?term=7&amp;primary=tid-7" data-shelf="humanities-shelf">
        <div class="sector humanities col-xs-6 col-md-3">
          <img class="sector-icon" src="<?php print $humanities_icon; ?>">
          <h2 class="sector-title">Humanities</h2>
          <div class="triangle-clip"></div>
        </div>
      </a>
    </div>
  </div>
  <div class="drop-shelf">
    <div class="darken"></div>
    <div id="life-shelf" class="sector-shelf">
      <?php print $life_text; ?>
      <a href="/causes?term=66&amp;primary=tid-66">See All Life Causes<i class="fa fa-long-arrow-right"></i></a>
    </div>
    <div id="technology-shelf" class="sector-shelf">
      <?php print $technologies_text; ?>
      <a href="/causes?term=91&amp;primary=tid-91">See All Technology Causes<i class="fa fa-long-arrow-right"></i></a>
    </div>
    <div id="environment-shelf" class="sector-shelf">
      <?php print $environment_text; ?>
      <a href="/causes?term=10&amp;primary=tid-10">See All Environment Causes<i class="fa fa-long-arrow-right"></i></a>
    </div>
    <div id="humanities-shelf" class="sector-shelf">
      <?php print $humanities_text; ?>
      <a href="/causes?term=7&amp;primary=tid-7">See All Humanities Causes<i class="fa fa-long-arrow-right"></i></a>
    </div>
  </div>
</section>