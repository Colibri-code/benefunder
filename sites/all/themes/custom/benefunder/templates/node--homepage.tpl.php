<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup templates
 */
?>
<section class="cause-features">
  <div class="jumbo-teaser">
    <div class="empty"><span></span>X</div>
    <div class="contents">
      <!-- full width jumbo teaser inserts here -->
    </div>
  </div>
  <div class="feature-intro col-sm-12 col-md-4">
    <div class="feature-text col-sm-12">
    <div class="tlb">
     <h1><?php print $title; ?></h1>
   
      <div class="text"><?php  print( $node->body['und'][0]['value']); ?></div>
    </div>
    </div>
      <div class="research_icons  col-sm-12 col-md-4" style="width:100%">
   <div class="area_icon" ><img src="https://www.benefunder.com/sites/default/files/content/research_area/term_icon_with_color/benefunder_research_icons-life-science.png"/></div>
     <div class="area_icon" ><img src="https://www.benefunder.com/sites/default/files/content/research_area/term_icon_with_color/benefunder_research_icons-tech.png"/></div>
       <div class="area_icon" ><img src="https://www.benefunder.com/sites/default/files/content/research_area/term_icon_with_color/benefunder_research_icons-environment.png"/></div>
         <div class="area_icon" ><img src="https://www.benefunder.com/sites/default/files/content/research_area/term_icon_with_color/benefunder_research_icons-humanities.png"/></div>
   </div>
   </div>
   <div class="feature-main col-sm-12 col-md-8">
   <?php
        print  views_embed_view('cause_listing', 'block_1');  
   ?>
   </div>
 
</section >
<section class="video-univs">
    <div class="video col-sm-12 col-md-5">
        <h2>WATCH OUR TEDMED TALK</h2>
        
     <div class="video-container"><iframe width="853" height="480" src="https://www.youtube.com/embed/WPuo5Gg-yZY" frameborder="0" allowfullscreen></iframe></div>
    </div>
 
    <div class="univs col-sm-12 col-md-7">
        <div class="video-text">
            <h2>The Power of Philanthropy in Research</h2>
            <div>We believe in the power of Research-based Philanthropy to change the world and have reinvented the philanthropic experience so more of your gift is directed to the impact causes that mean the most to you.</div>
        </div>
        <div class="u-logos">
<div id="slider_logos" class="cycle-slideshow" 
        data-cycle-fx="fade" 
        data-cycle-timeout="2000"
         data-cycle-slides="> div"
    >
    
  
    <div class="slider_car" style="width:100%; float:left" >
       
        <div class="col-sm-12">
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/cnhs_logo-lg.png" /> 
        </div>  
        <div class="col-sm-12">    
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/harvard-logo.png" />
        </div>
        <div class="col-sm-12">     
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/IOSI_logo.png" />
        </div>
                 
    </div>
    <div class="slider_car" style="width:100%;  ">  
        <div class="col-sm-12">     
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/princeton-university-logo.jpg" />
        </div>
        <div class="col-sm-12"> 
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/Logo-Rutgers-University.jpg" />
        </div>   
        <div class="col-sm-12">
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/stanford-university-logo.jpg" /> 
        </div>                      
     </div>
      <div class="slider_car" style="width:100%;  ">  
        <div class="col-sm-12">     
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/syracuse_u.jpg" />
        </div>
        <div class="col-sm-12"> 
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/UT-University-of-Tennessee_logo.jpg" />
        </div>   
        <div class="col-sm-12">
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/ucsd-logo.jpg" /> 
        </div>                   
     </div>
    <div class="slider_car" style="width:100%;  ">  
        <div class="col-sm-12">     
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/uf-logo.jpg" />
        </div>
        <div class="col-sm-12"> 
            <img typeof="foaf:Image" class="img-responsive1" src="/sites/all/themes/custom/benefunder/logos/university-of-wisconsin-madison-logo.jpg" />
        </div>                 
     </div>
     <br/>
</div>

        
        </div>
    </div>
</section>
<section class="chart">
    <div class="col-sm-12 col-md-12">
        <img src="/sites/all/themes/custom/benefunder/logos/chart1.jpg" />
    </div>
</section>
<section class="info-form">
<div class="container">
    <div class=" text col-sm-12 col-md-7">
        <H2>RESEARCH DRIVES THE U.S. ECONOMY</H2>
        <H3>BUT only 3% of Philanthropy goes to research</H3>
        <div>There is a disparity between $390B in annual U.S. philanthropy and the 3% that makes its way to research. Benefunder was created in 2014 to address the nation’s growing innovation deficit and to provide a new and smarter way for donors to find, fund, and follow their passions. By connecting philanthropists directly to the causes that matter to them most, Benefunder empowers your Philanthropic  dollars to make the biggest impact possible
        </div>
    </div>
    <div class="col-sm-12 col-md-5">
         <div class="request-information-block">
            <div class="block-title">
                Request Information
            </div>
            <?php
               
              include drupal_get_path('module', 'request_information_form') . '/request_information_form.tpl.php';
                
            ?>
        </div>
    </div>
</div>
</section>
