<?php
/**
 * @file
 * bf_fa_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bf_fa_dashboard_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_13e3abc9-c8f5-4488-8f4e-ec2beb671eb3';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      11 => NULL,
      12 => NULL,
      13 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      54 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      64 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
      74 => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = '823258d2-80f2-462f-846f-efb3ea89deb1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view__panel_context_13e3abc9-c8f5-4488-8f4e-ec2beb671eb3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f4f6b5c8-11b6-4542-8408-1b3bc421a547';
  $pane->panel = 'left_above';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'FA Dash Video 1',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<div class="video_wrapper"><iframe src="https://player.vimeo.com/video/114405202" width="500" height="281" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe></div>',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f4f6b5c8-11b6-4542-8408-1b3bc421a547';
  $display->content['new-f4f6b5c8-11b6-4542-8408-1b3bc421a547'] = $pane;
  $display->panels['left_above'][0] = 'new-f4f6b5c8-11b6-4542-8408-1b3bc421a547';
  $pane = new stdClass();
  $pane->pid = 'new-1f09da26-89e1-4579-bb58-24771112ebeb';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'FA Dash Links',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<div class="fa-dashboard-links">
<div class="fa-links">
<div class="fa fa-comments">&nbsp;<a href="https://benefunder-service.atlassian.net/wiki/x/Toc">Client Facing Materials</a></div>
</div>

<div class="fa-links">
<div class="fa fa-file">&nbsp;<a href="https://benefunder-service.atlassian.net/wiki/x/boc">Advisor Materials</a></div>
</div>

<div class="fa-links">
<div class="fa fa-map-marker">&nbsp;<a href="/search/site">Search All Causes</a></div>
</div>

<div class="fa-links">
<div class="fa fa-plus-circle">&nbsp;<a href="/request-a-cause">Request a Cause</a></div>
</div>

<div class="fa-links">
<div class="fa fa-phone">&nbsp;<a href="https://benefunder-service.atlassian.net/servicedesk/customer/portal/1">Help Desk/Tutorials</a></div>
</div>
</div>

<div class="fa-solo-button"><a class="btn btn-purple" href="/node/add/giving-proposal?destination=user">Add a Client Profile / Assessment</a><span class="fa fa-question-circle fa-2x tooltip" title="To start a needs assessment and begin the Cause matching process, add a Client Profile. You\'ll be able to enter basic client information, their giving history and select some preliminary Causes. Once your needs assessment is done, send it to Benefunder to provide a comprehensive set of Causes tailored just for your client.">&nbsp;</span></div>

</div>
',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1f09da26-89e1-4579-bb58-24771112ebeb';
  $display->content['new-1f09da26-89e1-4579-bb58-24771112ebeb'] = $pane;
  $display->panels['middle'][0] = 'new-1f09da26-89e1-4579-bb58-24771112ebeb';
  $pane = new stdClass();
  $pane->pid = 'new-42aa948c-a67f-41c1-ae4c-ff36c53e1b51';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views-my_clients-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '42aa948c-a67f-41c1-ae4c-ff36c53e1b51';
  $display->content['new-42aa948c-a67f-41c1-ae4c-ff36c53e1b51'] = $pane;
  $display->panels['middle'][1] = 'new-42aa948c-a67f-41c1-ae4c-ff36c53e1b51';
  $pane = new stdClass();
  $pane->pid = 'new-f2b2bd2c-9c87-487c-b318-1585f781f1b3';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'FA Dash Sample Proposals',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<div class="fa-dashboard-products">
<div class="fa-see-products-box"><div class="fa fa-bookmark fa-2x">&nbsp;</div><div class="fa-white">See Products</div></div>

<p class="proposal-text">Use these sample proposals to jumpstart a philanthropy conversation with your clients.
Download the brochure with talking points. Need more support?
Visit the Help Desk or contact us.</p>

<hr style="clear: both; visibility: hidden; margin: 40px;"/>

<div class="col-sm-4">
    <h4>Mission Impact Funds</h4>
    <div class="details">No minimum required<br/>Style: Mutual Fund</div>
    <p>Sed elementum eget nec sodales. Nam feugiat mauris aliquet neque posuere, ornare ullamcorper erat mattis. Cras malesuada, est in tincidunt congue, lacus mauris euismod ex, sit amet congue ante leo quis lectus. Praesent scelerisque</p>
    <p><a href="https://issuu.com/benefunder/docs/the_clean_energy_fund?e=18358491/14175431"><img alt="Clean Energy" src="/sites/all/themes/custom/benefunder/media/images/Issuu_Clean_Energy_Impact_Fund.png" /></a></p>
    <p><a href="https://issuu.com/benefunder/docs/veteran_impact_fund_bf?e=18358491/14519161"><img alt="Veterans Impact Fund" src="/sites/all/themes/custom/benefunder/media/images/Veteran_Impact_Fund.png" /></a></p>
    </div>

<div class="col-sm-4">
    <h4>Charitable Impact Funds</h4>
    <div class="details">$250k Annual Distribution<br/>Style: Self-directed</div>
    <p>Nam feugiat mauris aliquet neque posuere, ornare ullamcorper erat mattis. Cras malesuada, est in tincidunt congue, lacus mauris euismod ex, sit amet congue ante leo quis lectus. Praesent scelerisque elementum bibendum. Fusce finibus malesuada nunc, id consequat</p>
    <p><a href="https://issuu.com/benefunder/docs/the_john_legacy_fund?e=18358491/14519161"><img alt="John Legacy Giving Plan" src="/sites/all/themes/custom/benefunder/media/images/John_Legacy_Giving_Plan.png" /></a></p>
    </div>

<div class="col-sm-4">
    <h4>Patron Impact Funds</h4>
    <div class="details">$2.5M Annual Distribution<br/>Style: Fully-supported, concierge services</div>
    <p>Sed elementum eget eros nec sodales. Nam feugiat mauris aliquet neque posuere, ornare ullamcorper erat mattis. Cras malesuada, est in tincidunt congue, lacus mauris euismod ex, sit amet congue ante leo quis lectus. Praesent malesuada nunc, id consequat</p>
    <p><a href="https://issuu.com/benefunder/docs/private_philanthropy_services_pre-p?e=18358491/14519161"><img alt="Sarah and Evan Schuman Longevity Fund" src="/sites/all/themes/custom/benefunder/media/images/Schuman_Longevity_Fund.png" /></a></p>
    </div>
</div>
',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'row',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f2b2bd2c-9c87-487c-b318-1585f781f1b3';
  $display->content['new-f2b2bd2c-9c87-487c-b318-1585f781f1b3'] = $pane;
  $display->panels['middle'][2] = 'new-f2b2bd2c-9c87-487c-b318-1585f781f1b3';
  $pane = new stdClass();
  $pane->pid = 'new-98a46d8f-99bd-4bf5-8738-727084670618';
  $pane->panel = 'right_above';
  $pane->type = 'block';
  $pane->subtype = 'views-my_favorites-block_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '98a46d8f-99bd-4bf5-8738-727084670618';
  $display->content['new-98a46d8f-99bd-4bf5-8738-727084670618'] = $pane;
  $display->panels['right_above'][0] = 'new-98a46d8f-99bd-4bf5-8738-727084670618';
  $pane = new stdClass();
  $pane->pid = 'new-202f6fa5-a98a-4e33-98cf-22cd45956b63';
  $pane->panel = 'right_above';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'FA Dash Video 2',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<iframe width="500" height="281" src="https://www.youtube.com/embed/WPuo5Gg-yZY" frameborder="0" allowfullscreen></iframe>',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '202f6fa5-a98a-4e33-98cf-22cd45956b63';
  $display->content['new-202f6fa5-a98a-4e33-98cf-22cd45956b63'] = $pane;
  $display->panels['right_above'][1] = 'new-202f6fa5-a98a-4e33-98cf-22cd45956b63';
  $pane = new stdClass();
  $pane->pid = 'new-734f354d-9ce0-4bc2-bb8d-ad0ed8c1f1e2';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="pull-left"><p><span style="font-size:20px">DASHBOARD</span> (alpha)</p></div>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '734f354d-9ce0-4bc2-bb8d-ad0ed8c1f1e2';
  $display->content['new-734f354d-9ce0-4bc2-bb8d-ad0ed8c1f1e2'] = $pane;
  $display->panels['top'][0] = 'new-734f354d-9ce0-4bc2-bb8d-ad0ed8c1f1e2';
  $pane = new stdClass();
  $pane->pid = 'new-88c4c748-7a3c-4746-9b53-8a5aa0a5135e';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'bf_fa_dashboard-fa_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '88c4c748-7a3c-4746-9b53-8a5aa0a5135e';
  $display->content['new-88c4c748-7a3c-4746-9b53-8a5aa0a5135e'] = $pane;
  $display->panels['top'][1] = 'new-88c4c748-7a3c-4746-9b53-8a5aa0a5135e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_13e3abc9-c8f5-4488-8f4e-ec2beb671eb3'] = $handler;

  return $export;
}
