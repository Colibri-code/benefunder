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
    <div class="collapse navbar-collapse collapsed" id="mobile-search">

      <?php $block = module_invoke('search', 'block_view'); print render($block['content']); ?>

    </div><!-- /.navbar-collapse -->

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="header-main-navigation">

      <button type="button" class="search-toggle" data-target="#header-search-form"></button>

      <?php print theme('links', array('links' => menu_navigation_links('main-menu'), 'attributes' => array('class'=> array('nav', 'navbar-nav', 'navbar-right')) ));?>

      <div class="footer-menu hidden-md hidden-lg">
        <ul class="menu">
          <li><a href="#">Contact Us</a></li>
          <li><a href="#">Financial Advisors</a></li>
          <li><a href="#">Researchers</a></li>
          <li><a href="#">Institutions</a></li>
        </ul>
      </div><!-- end .footer-menu -->

      <div class="privacy-menu hidden-md hidden-lg">
        <ul class="menu">
          <li><a href="#">Privacy</a></li>
          <li><a href="#">Legal</a></li>
        </ul>
      </div><!-- end .privacy-menu -->

    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>