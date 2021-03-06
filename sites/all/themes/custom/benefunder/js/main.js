/* ========================================================================
 * DOM-based Routing
 * Based on http://goo.gl/EUTi53 by Paul Irish
 *
 * Only fires on body classes that match. If a body class contains a dash,
 * replace the dash with an underscore when adding it to the object below.
 *
 * .noConflict()
 * The routing is enclosed within an anonymous function so that you can 
 * always reference jQuery with $, even when in .noConflict() mode.

 * ======================================================================== */


(function($) {
var general = function() {

  var screenSizeExtrasmall = 480,
      screenSizeSmall = 768,
      screenSizeMedium = 992,
      screenSizeLarge = 1200;


  var getRandomInt = function(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
  };

  // Returns viewport size
  var viewport = {
    width:  function() {
      return Math.max(document.documentElement.clientWidth, window.innerWidth || 0);
    },  
    height: function() {
      return Math.max(document.documentElement.clientHeight, window.innerHeight || 0);
    }
  };

  var isMobile = function() {
    return viewport.width() >= screenSizeMedium ? false : true;
  };

  return {

    // Enable HTML placeholder behavior for browsers that don't natively supporti it
    enablePlaceholder: function() {
      $('input').placeholder();
    },

    // Handles mobile/desktop navbar 
    setNavbar: function() {
      $('button.search-toggle').on('click', function() {
        $('#search-block-form, .navbar-default, #mobile-search').toggleClass('activated');
        setTimeout(function() {
          if ($('#search-block-form, .navbar-default, #mobile-search').hasClass('activated')) {
            $('#edit-search-block-form--2').focus();
          }
        }, 500);
      });

      $('button.menu-toggle.collapsed').on('click', function() {
        $('#mobile-search').removeClass('in');
      });

      $('button.mobile-search-toggle.collapsed').on('click', function() {
        $('#header-main-navigation').removeClass('in');
        $('button.menu-toggle').addClass('collapsed');
        setTimeout(function() {
          $('#edit-search-block-form--4').focus();
        }, 500);
      });
    },

    // Handles footer random background image
    setFooter: function() {
      $('footer').css({'background-image': 'url(/sites/all/themes/custom/benefunder/media/images/footer_backgrounds/' + getRandomInt(0,0) + '.jpg)'});
    },

    // Handles footer random background image
    searchPager: function() {
      if ($('.page-search .sidebar-second ul.pager').length) {
        var pager = $('.page-search .sidebar-second ul.pager');
        var pagerParent = $('.pagerer-pager');
        var initialOffset = $(pager).offset().top;

        $(window).scroll(function() {
          if (viewport.width() >= 992) {
            if ($(document).scrollTop() < initialOffset) {
              $(pager).removeClass('sticky');
            }
            else if (($(pager).offset().top - $(document).scrollTop()) <= 0) {
              $(pager).addClass('sticky');
            }
          }
        });

        $(window).resize(function() {
          initialOffset = $(pager).offset().top;
          if (viewport.width() < 992) {
            $(pager).removeClass('sticky');
          }
        });
      }
    },

    // Window resize function
    windowResize: function() {
      $(window).resize(function() {
          general.setupTileGrid();
          general.listingTeaserHeight();
          //console.log(viewport.height());
      });
    },

    // Show/hide for Homepage Humble Brag section
    setupHumbleBrag: function(bragObject, bragText, highlight) {

      var replaceHighlight = function() {
        $(bragObject).removeClass('current');
        var context = $(this)[0] === window ? $(bragObject)[0] : $(this);
        $(context).addClass('current');
        var content = $(context).find(bragText + ' .brag-text').text();
        var bragLink = $(context).find(bragText + ' a');
        var bragLinkHTML = bragLink.length ? bragLink[0].outerHTML : '';
        $(highlight)
          .fadeOut(500, function() {
            $(this).html('<p><span>&ldquo;</span>'+content+'<span>&rdquo;</span></p>' + bragLinkHTML);
          })
          .fadeIn(500);
      };

      $(bragObject).on('click', replaceHighlight);
      replaceHighlight();
    },

    // Hompeage Cause Sector shelf
    setCauseShelf: function(triggerObject, responseObject) {
      $(triggerObject).on('click', function(e) {
        if( !isMobile() ){
          e.preventDefault();
          $(triggerObject).children().removeClass('active');
          $(responseObject)
            .removeClass('active')
            .css('z-index', 0);
          $(e.currentTarget.children[0]).addClass('active');

          var shelf = $(e.currentTarget).data('shelf');
          $('.drop-shelf').attr('class', shelf + ' drop-shelf');

          $('#' + shelf)
            .addClass('active')
            .css('z-index', 1);
        }
      });
      $(triggerObject).first().trigger('click');
    },

    // Homepage Featured Causes Tile System
    setupTileGrid: function() {
      
      // Set feature heights based on width of viewport
      var screenWidth = viewport.width(),
          screens = {

            tiny:function(){
              $('.cause-features .feature').css('height', screenWidth / 2);
            },
            smalll: function(){
              $('#feature-1, #feature-2, #feature-3, #feature-4').css('height', screenWidth / 3);
              $('#feature-5, #feature-6').css('height', screenWidth / 2);
            },
            medium: function(){
              $('.feature-row .feature').css('height', '100%');
              $('#feature-1').css('height', '200px');
            }
          };

      if (screenWidth > screenSizeMedium) {
        screens.medium();
      } else {
        if (screenWidth < screenSizeSmall) {
          screens.tiny();
        }
        else {
          screens.smalll();
        }  
      }
    },

    

    // Homepage Jumbo Teaser event handling
    jumboTeaser: function() {
      $('.cause-features .feature').on('click', function(event) {
        if (!$(this).hasClass('empty')) {
          if (viewport.width() >= screenSizeSmall) {
            $('.jumbo-teaser')
              .addClass('full')
              .css('z-index', 3)
              .find('.contents').html( $(this).children().clone() );

            $('html, body').animate({ scrollTop: 0 }, 'slow');
          }
          else {
            document.location.href = '/' + $(this).data('path');
          }
        }
      });
      $('.jumbo-teaser .empty').on('click', function(event) {
        $('.jumbo-teaser')
          .removeClass('full');

          setTimeout(function(){ 
            $('.jumbo-teaser').css('z-index', 0);
          }, 600 );
      });
    },
    // Setting Listing Teaser height based on width
    listingTeaserHeight: function() {
      var teaser = $('.causes-list .listing-teaser');
          tWidth = teaser.width();
          teaser.height(tWidth * 0.90);
    },
    // Setting Listing Teaser height based on width
    listingTeaserHeightNewItems: function() {
      Drupal.behaviors.cause_listing = {
        attach: function (context, settings) {
          var teaser = $('.causes-list .listing-teaser');
              tWidth = teaser.width();
              teaser.height(tWidth * 0.90);
        }
      };
    },

    // Initializing jQuery Selectric plugin for select lists
    setupSelectric: function() {
      $('#causes-list-exposed-filter').selectric({
        optionsItemBuilder: function(itemData, element, index){
          return '<span class="tid-' + itemData.value + '" data-tid="' + itemData.value + '">' + itemData.text + '</span>';
        },
        onInit: function() {
          var secondFiltersHeight = $('.conditional-filter.secondary').height();
          $('.cause-list-wrapper').css('top', '-' + secondFiltersHeight + 'px');
          $('.view-cause-listing .selectric b.button').prepend('<span></span>');

          // Add class to selectric to change color of currently selected item
          var primary = getParameterByName('primary');
          if (primary.length) {
            $('.selectricHideSelect + .selectric .label').addClass(primary);
          }

          setTimeout(function() {
            $('.conditional-filter.secondary .active').addClass('slide-down');
            $('.cause-list-wrapper').addClass('slide-down').css('top', 0);
          }, 500);

          $('.primary-filter .selectricItems li').unbind();
          
        },
        disableOnMobile: false
      });
    },

    // Setup for cause listing conditional filters
    conditionalFilters: function() {
      var primary = getParameterByName('primary');
      if (primary.length) {
        $('#' + primary + '-filter-tags').addClass('active');
        $('#causes-list-exposed-filter [value="' + primary.substring(4) + '"]').attr('selected', 'selected');
        $('#causes-list-exposed-filter').selectric('refresh');
      }

      $('.primary-filter .selectricItems li').on('click', function(event) {
        event.preventDefault();

        $('.selectricHideSelect + .selectric .label').addClass('fadeOut');
        var tid = $('span', this).data('tid');
        var researchAreaName = $('span', this).text();
        var researchAreaClass = $('span', this).attr('class');
        $('#causes-list-exposed-filter').selectric('close');

        setTimeout(function() {
          $('.selectricHideSelect + .selectric .label').text(researchAreaName);
          $('.selectricHideSelect + .selectric .label').attr('class', 'label');
          $('.selectricHideSelect + .selectric .label').addClass('tid-' + tid);

          var newPath = '';
          if ((typeof tid) === 'number') {
            newPath = '/causes?term=' + tid + '&primary=' + researchAreaClass;
          }
          else {
            newPath = '/causes';
          }

          var secondFilterSlideUpDelay = 0;
          if (getParameterByName('term')) {
            secondFilterSlideUpDelay = 400;
          }

          setTimeout(function() {
            var secondFiltersHeight = $('.conditional-filter.secondary').height();
            $('.cause-list-wrapper').css('top', '-' + secondFiltersHeight + 'px');
            $('.conditional-filter.secondary .active').removeClass('slide-down');
            setTimeout(function() {
              $('html, body').animate({ scrollTop: 0 }, 'fast', function() {
                document.location.href = newPath;
              });
              
            }, secondFilterSlideUpDelay);
          }, 400);
        }, 200);
      });

      $('.conditional-filter.secondary li a').click(function(e) {
        e.preventDefault();
        var href = $(this).attr('href');

        var secondFiltersHeight = $('.conditional-filter.secondary').height();
        $('.cause-list-wrapper').css('top', '-' + secondFiltersHeight + 'px');
        $('.conditional-filter.secondary .active').removeClass('slide-down');
        setTimeout(function() {
          $('html, body').animate({ scrollTop: 0 }, 'fast', function() {
            document.location.href = href;
          });
          
        }, 500);
      });

      $('.views-row').addClass('fadeIn');

      Drupal.behaviors.benefunder = {
        attach: function (context, settings) {
          $('.views-row').addClass('fadeIn');
        }
      };
    },

    causeDetailVideo: function() {

      // Open video link in modal if link is present
      var video =$('.video-play-button');

      if (video.attr('href').length > 1) {
        video.magnificPopup({
          type: 'iframe',
          closeMarkup: '<button title="Close (Esc)" type="button" class="mfp-close"><span></span>×</button>'
        });
      } else {
        video.css('display', 'none');
      }
    },

    heroBackgroundImage: function() {
      // Hero positioned as body background image for mobile menu dropdown
      imageSrc = $('.hero-wrapper .hero').attr('src');
      if (imageSrc) {
        $('body').css('background-image', 'url(' + imageSrc + ')');
      }
    },

    bio: function() {
      $('.bio').expander({
        'slicePoint':500,
        'expandText':'Read More',
        'userCollapseText':'Read Less',
      });
    }
  };
}();

var Benefunder = {
  // All pages
  common: {
    init: function() {
      // JavaScript to be fired on all pages
      general.enablePlaceholder();
      general.setNavbar();
      general.windowResize();
      general.setFooter();
      general.searchPager();
    }
  },
  // Home page
  front: {
    init: function() {
      // JavaScript to be fired on the home page
      general.setupHumbleBrag('.view-humble-brags .views-row', '.brag-copy', '.brag-highlight .inner');
      general.setCauseShelf('.sector-link', '.sector-shelf');
      general.setupTileGrid();
      general.jumboTeaser();
    }
  },
  // Causes Listing page
  page_causes: {
    init: function() {
      // Javascript to be fired on the causes listing page
      general.listingTeaserHeight();
      general.listingTeaserHeightNewItems();
      general.setupSelectric();
      general.conditionalFilters();
    }
  },
  // Cause Detail page
  node_type_cause: {
    init: function() {
      // Javascript to be fired on the causes detail page
      general.causeDetailVideo();
      general.heroBackgroundImage();
      general.bio();
    }
  },
  // type Basic Page 
  node_type_page: {
    init: function() {
      // Javascript to be fired on all Basic pages
    }
  }
};

// The routing fires all common scripts, followed by the page specific scripts.
// Add additional events for more control over timing e.g. a finalize event
var UTIL = {
  fire: function(func, funcname, args) {
    var namespace = Benefunder;
    funcname = (funcname === undefined) ? 'init' : funcname;
    if (func !== '' && namespace[func] && typeof namespace[func][funcname] === 'function') {
      namespace[func][funcname](args);
    }
  },
  loadEvents: function() {
    UTIL.fire('common');

    $.each(document.body.className.replace(/-/g, '_').split(/\s+/),function(i,classnm) {
      UTIL.fire(classnm);
    });
  }
};

function getParameterByName(name) {
    name = name.replace(/[\[]/, "\\[").replace(/[\]]/, "\\]");
    var regex = new RegExp("[\\?&]" + name + "=([^&#]*)"),
        results = regex.exec(location.search);
    return results === null ? "" : decodeURIComponent(results[1].replace(/\+/g, " "));
}

$(document).ready(UTIL.loadEvents);

})(jQuery); // Fully reference jQuery after this point.
