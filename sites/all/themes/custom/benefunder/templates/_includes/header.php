<nav class="navbar navbar-default" id="navbar-default" role="navigation">

  <?php $block = module_invoke('search', 'block_view'); print render($block['content']); ?>

  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle mobile-search-toggle collapsed" data-toggle="collapse" data-target="#mobile-search"><i class="fa fa-search"></i></button>
      <button type="button" class="navbar-toggle menu-toggle collapsed" data-toggle="collapse" data-target="#header-main-navigation">
        <div class="burger"></div>
      </button>
      <a class="navbar-brand" href="/">Benefunder</a>
    </div>

    <!-- Mobile search -->
    <div class="collapse navbar-collapse" id="mobile-search">

      <?php $block = module_invoke('search', 'block_view'); print render($block['content']); ?>

    </div><!-- /.navbar-collapse -->

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="header-main-navigation">

      <button type="button" class="search-toggle" data-target="#header-search-form"><span></span></button>

      <?php print render($primary_nav); ?>

      <div class="footer-menu hidden-md hidden-lg">
        <?php print theme('links', array('links' => menu_navigation_links('menu-footer-menu'), 'attributes' => array('class'=> array('menu')) ));?>
      </div>

      <div class="copyright-section hidden-md hidden-lg">
        <span class="reserved">Copyright © <?php echo date("Y"); ?>, Benefunder. All Rights Reserved.</span>
        <div class="privacy-menu">
          <?php print theme('links', array('links' => menu_navigation_links('menu-footer-second-menu'), 'attributes' => array('class'=> array('menu')) ));?>
        </div>
      </div>

    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>