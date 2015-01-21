<footer>
  <div class="container">
    <div class="row">
      <div class="footer-menu col-md-6 hidden-xs hidden-sm">
        <?php print theme('links', array('links' => menu_navigation_links('menu-footer-menu'), 'attributes' => array('class'=> array('menu')) ));?>
      </div>
      <div class="social-menu col-xs-12 col-sm-6">
        <ul class="menu">
          <li>
            <a class="facebook" href="https://www.facebook.com/benefunder" target="_blank"><span></span>Facebook</a>
          </li>
          <li>
            <a class="twitter" href="https://twitter.com/benefundit" target="_blank"><span></span>Twitter</a>
          </li>
          <li>
            <a class="linkedin" href="https://www.linkedin.com/company/benefunder" target="_blank"><span></span>LinkedIn</a>
          </li>
        </ul>
      </div>
      <div class="copyright-section col-xs-12 col-sm-6 col-md-12">
        <span class="reserved">Copyright © <?php echo date("Y"); ?>, Benefunder. All Rights Reserved.</span>
        <div class="privacy-menu">
          <?php print theme('links', array('links' => menu_navigation_links('menu-footer-second-menu'), 'attributes' => array('class'=> array('menu')) ));?>
        </div>
      </div>
    </div>
  </div>
</footer>