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
    'body' => '<iframe src="https://player.vimeo.com/video/117639472" width="320" height="180" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>',
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
  $pane->pid = 'new-010d57d4-28b1-450b-bf8d-e5e8498be38c';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'my_clients';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
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
  $pane->uuid = '010d57d4-28b1-450b-bf8d-e5e8498be38c';
  $display->content['new-010d57d4-28b1-450b-bf8d-e5e8498be38c'] = $pane;
  $display->panels['middle'][0] = 'new-010d57d4-28b1-450b-bf8d-e5e8498be38c';
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
    'body' => '<a href="/">Client Facing Materials</a>
<a href="/">Advisor Materials</a>
<a href="/search/site">Search All Causes</a>
<a href="/">Request a Cause</a>
<a href="/">Help Desk/Tutortials</a>
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
    'body' => '<p>Use these sample proposals to get a philanthropy conversation started with your clients. Download the brochure and talking points here. Need more help? Contact us for more.</p>
<p><a href="/sites/default/files/John%20Legacy%20Giving%20Plan.pdf">John Legacy Giving Plan</a> 
<a href="/sites/default/files/John%20Legacy%20Giving%20Plan.pdf">Clean Energy</a> 
<a href="/sites/default/files/John%20Legacy%20Giving%20Plan.pdf">Veterans Impact Fund</a></p>
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
    'body' => '<iframe src="https://player.vimeo.com/video/133803634" width="320" height="180" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '56dd288f-68a5-46b0-afee-689063d8cc21';
  $display->content['new-56dd288f-68a5-46b0-afee-689063d8cc21'] = $pane;
  $display->panels['top'][0] = 'new-56dd288f-68a5-46b0-afee-689063d8cc21';
  $pane = new stdClass();
  $pane->pid = 'new-757f5856-b01f-44b5-b286-f0575d57b7ea';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'linkedin_profile-linkedin_profile';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '757f5856-b01f-44b5-b286-f0575d57b7ea';
  $display->content['new-757f5856-b01f-44b5-b286-f0575d57b7ea'] = $pane;
  $display->panels['top'][1] = 'new-757f5856-b01f-44b5-b286-f0575d57b7ea';
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
