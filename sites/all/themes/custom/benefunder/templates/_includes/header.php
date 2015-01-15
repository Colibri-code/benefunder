<nav class="navbar navbar-default" id="navbar-default" role="navigation">

  <?php $block = module_invoke('search', 'block_view'); print render($block['content']); ?>

  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#header-main-navigation">
        <div class="burger"></div>
      </button>
      <a class="navbar-brand" href="/">Benefunder</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="header-main-navigation">

      <button type="button" class="search-toggle" data-target="#header-search-form">
      </button>

      <form class="navbar-right hidden-md hidden-lg" id="header-search-form-mobile" role="search">
        <input type="text" class="form-control" placeholder="Search">
        <!-- <button type="submit" class="btn btn-default">Submit</button> -->
      </form>

      <ul class="nav navbar-nav navbar-right">
        <li><a href="#">Causes</a></li>
        <li><a href="#">Create a Fund</a></li>
        <li><a href="#">About Benefunder</a></li>
      </ul>

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