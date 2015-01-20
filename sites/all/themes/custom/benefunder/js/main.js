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
			});

			$('button.menu-toggle.collapsed').on('click', function() {
				$('#mobile-search').removeClass('in');
			});

			$('button.mobile-search-toggle.collapsed').on('click', function() {
				$('#header-main-navigation').removeClass('in');
			});
		},

		// Handles footer random background image
		setFooter: function() {
			$('footer').css({'background-image': 'url(/sites/all/themes/custom/benefunder/media/images/footer_backgrounds/' + getRandomInt(0,0) + '.jpg)'});
		},

		// Window resize function
		windowResize: function() {
		  $(window).resize(function() {
		      general.setCauseShelf('.sector-link', '.sector-shelf');
		      general.setupTileGrid();
		      general.shiftLayout();
		      //console.log(viewport.height());
		  });
		},

		// Show/hide for Homepage Humble Brag section
		setupHumbleBrag: function(bragObject, bragText, highlight) {

			var replaceHighlight = function() {
				$(bragObject).removeClass('current');
				var context = $(this)[0] === window ? $(bragObject)[0] : $(this);
				$(context).addClass('current');
				var content = $(context).find(bragText).text();
				$(highlight)
					.fadeOut(500, function() {
						$(this).html('<p><span>&ldquo;</span>'+content+'<span>&rdquo;</span></p>');
					})
					.fadeIn(500);
			};

			$(bragObject).on('click', replaceHighlight);
			replaceHighlight();
		},

		// Hompeage Cause Sector shelf
		setCauseShelf: function(triggerObject, responseObject) {
			$(triggerObject).on('click', function(e) {
				//console.log(e);
				if( !isMobile() ){
					e.preventDefault();
					$(triggerObject).children().removeClass('active');
					$(responseObject)
						.removeClass('active')
						.css('z-index', 0);
					$(e.currentTarget.children[0]).addClass('active');

					var shelf = $(e.currentTarget).data('shelf');

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
							$('.feature-row .feature').css('height', screenWidth / 2);
						},
						smalll: function(){
							$('#feature-2, #feature-3, #feature-4').css('height', screenWidth / 3);
							$('#feature-5, #feature-6').css('height', screenWidth / 2);
						},
						medium: function(){
							$('.feature-row .feature').css('height', '100%');
						}
					};

			if (screenWidth > screenSizeMedium) {
				screens.medium();
			} else {
				screenWidth < screenSizeSmall ? screens.tiny() :  screens.smalll();
			}
		},

		

		// Homepage Jumbo Teaser event handling
		jumboTeaser: function() {
			$('.cause-features .feature').on('click', function(event) {
				$('.jumbo-teaser')
					.addClass('full')
					.css('z-index', 3)
					.find('.contents').html( $(this).children().clone() );
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
					return '<span class="tid-' + itemData.value + '">' + itemData.text + '</span>';
				},
				onInit: function() {
					$('.view-cause-listing .selectric b.button').prepend('<span></span>');
				}
			});
		},

		// Show secondary conditional filters on primary filter click 
		conditionalFilters: function() {
			$('.primary-filter .selectricItems span').on('click', function(event) {
				//console.log(event.target.className);

				$('.conditional-filter .filter-tags').removeClass('active');
				$('#' + event.target.className + '-filter-tags').addClass('active');
			});
		},

		causeDetailVideo: function() {

			// Open video link in modal if link is present
			var video =$('.video-play-button');

			if (video.attr('href').length > 1) {
				video.magnificPopup({
					type: 'iframe'
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

		shiftLayout: function() {
			// If larger than mobile float third feature to the right to create offset grid
			if ( viewport.width() >= screenSizeSmall ) {
				var thirdFeature = $('.subhead-row .feature')[2];
				$(thirdFeature).css('float', 'right');
			}
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
		}
	},
	// Home page
	front: {
		init: function() {
			// JavaScript to be fired on the home page
			general.setupHumbleBrag('.view-humble-brag .views-row', '.brag-copy', '.brag-highlight .inner');
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
		}
	},
	// type Basic Page 
	node_type_page: {
		init: function() {
			// Javascript to be fired on all Basic pages
		}
	},
	// About Benefunder page
	about_benefunder: {
		init: function() {
			// Javascript to be fired on the About Benefunder page
			general.shiftLayout();
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

$(document).ready(UTIL.loadEvents);

})(jQuery); // Fully reference jQuery after this point.
