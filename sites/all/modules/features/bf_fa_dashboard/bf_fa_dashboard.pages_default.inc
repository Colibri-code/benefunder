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
              0 => 6,
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
    'body' => '<div class="video_wrapper"><iframe src="https://player.vimeo.com/video/114405202" width="400" height="225" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe></div>',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '42aa948c-a67f-41c1-ae4c-ff36c53e1b51';
  $display->content['new-42aa948c-a67f-41c1-ae4c-ff36c53e1b51'] = $pane;
  $display->panels['middle'][0] = 'new-42aa948c-a67f-41c1-ae4c-ff36c53e1b51';
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
<div class="fa fa-comments">&nbsp;<a href="/">Client Facing Materials</a></div>
</div>

<div class="fa-links">
<div class="fa fa-file">&nbsp;<a href="/">Advisor Materials</a></div>
</div>

<div class="fa-links">
<div class="fa fa-map-marker">&nbsp;<a href="/search/site">Search All Causes</a></div>
</div>

<div class="fa-links">
<div class="fa fa-heart">&nbsp;<a href="/">Request a Cause</a></div>
</div>

<div class="fa-links">
<div class="fa fa-phone">&nbsp;<a href="“/">Help Desk/Tutorials</a></div>
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1f09da26-89e1-4579-bb58-24771112ebeb';
  $display->content['new-1f09da26-89e1-4579-bb58-24771112ebeb'] = $pane;
  $display->panels['middle'][1] = 'new-1f09da26-89e1-4579-bb58-24771112ebeb';
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
    'body' => '<div class="col-sm-6">
<p>Use these sample proposals to get a philanthropy conversation started with your clients. Download the brochure and talking points here. Need more help? Contact us for more.</p>
</div>

<div class="col-sm-6">
<div class="col-sm-4"><a href="/sites/default/files/John%20Legacy%20Giving%20Plan.pdf"><img alt="John Legacy Giving Plan" src="/sites/all/themes/custom/benefunder/media/images/John_Legacy_Giving_Plan.png" /></a></div>

<div class="col-sm-4"><a href="/sites/default/files/John%20Legacy%20Giving%20Plan.pdf"><img alt="Clean Energy" src="/sites/all/themes/custom/benefunder/media/images/Issuu_Clean_Energy_Impact_Fund.png" /></a></div>

<div class="col-sm-4"><a href="/sites/default/files/John%20Legacy%20Giving%20Plan.pdf"><img alt="Veterans Impact Fund" src="/sites/all/themes/custom/benefunder/media/images/Veteran_Impact_Fund.png" /></a></div>
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
    'css_class' => 'row sample_proposals',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f2b2bd2c-9c87-487c-b318-1585f781f1b3';
  $display->content['new-f2b2bd2c-9c87-487c-b318-1585f781f1b3'] = $pane;
  $display->panels['middle'][2] = 'new-f2b2bd2c-9c87-487c-b318-1585f781f1b3';
  $pane = new stdClass();
  $pane->pid = 'new-202f6fa5-a98a-4e33-98cf-22cd45956b63';
  $pane->panel = 'right_above';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'FA Dash Video 2',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<div class="video_wrapper"><iframe src="https://player.vimeo.com/video/133803634" width="400" height="225" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe></div>',
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
  $pane->uuid = '202f6fa5-a98a-4e33-98cf-22cd45956b63';
  $display->content['new-202f6fa5-a98a-4e33-98cf-22cd45956b63'] = $pane;
  $display->panels['right_above'][0] = 'new-202f6fa5-a98a-4e33-98cf-22cd45956b63';
  $pane = new stdClass();
  $pane->pid = 'new-e688a1d8-91d4-459c-b4fd-5601f8417943';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Header Action Buttons',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div><a class="btn btn-black" href="#">Help Desk</a><a class="btn btn-purple" href="/node/add/giving-proposal">+ Create a Proposal</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'header-buttons',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e688a1d8-91d4-459c-b4fd-5601f8417943';
  $display->content['new-e688a1d8-91d4-459c-b4fd-5601f8417943'] = $pane;
  $display->panels['top'][0] = 'new-e688a1d8-91d4-459c-b4fd-5601f8417943';
  $pane = new stdClass();
  $pane->pid = 'new-56dd288f-68a5-46b0-afee-689063d8cc21';
  $pane->panel = 'top';
  $pane->type = 'user_picture';
  $pane->subtype = 'user_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:user_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = '56dd288f-68a5-46b0-afee-689063d8cc21';
  $display->content['new-56dd288f-68a5-46b0-afee-689063d8cc21'] = $pane;
  $display->panels['top'][1] = 'new-56dd288f-68a5-46b0-afee-689063d8cc21';
  $pane = new stdClass();
  $pane->pid = 'new-bfe099a5-a857-43d5-9304-c075c0ee779a';
  $pane->panel = 'top';
  $pane->type = 'user_links';
  $pane->subtype = 'user_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'build_mode' => 'full',
    'context' => 'argument_entity_id:user_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bfe099a5-a857-43d5-9304-c075c0ee779a';
  $display->content['new-bfe099a5-a857-43d5-9304-c075c0ee779a'] = $pane;
  $display->panels['top'][2] = 'new-bfe099a5-a857-43d5-9304-c075c0ee779a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_13e3abc9-c8f5-4488-8f4e-ec2beb671eb3'] = $handler;

  return $export;
}
