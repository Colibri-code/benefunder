<?php
/**
 * @file
 * bf_team.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bf_team_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'team_members';
  $page->task = 'page';
  $page->admin_title = 'Team members';
  $page->admin_description = '';
  $page->path = 'admin/content/team-members';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Team members',
    'name' => 'management',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_team_members__panel';
  $handler->task = 'page';
  $handler->subtask = 'team_members';
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
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Team Members';
  $display->uuid = 'ee0a2707-afd3-4d1f-aa67-0b78201cf9bb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_team_members__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-57ea686f-dff8-4858-80c5-470b986ed916';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'team_members-panel_pane_team_section';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '57ea686f-dff8-4858-80c5-470b986ed916';
  $display->content['new-57ea686f-dff8-4858-80c5-470b986ed916'] = $pane;
  $display->panels['middle'][0] = 'new-57ea686f-dff8-4858-80c5-470b986ed916';
  $pane = new stdClass();
  $pane->pid = 'new-831872f4-18c1-42a4-8630-524240e33ecb';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'team_members-panel_pane_moard_members';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '831872f4-18c1-42a4-8630-524240e33ecb';
  $display->content['new-831872f4-18c1-42a4-8630-524240e33ecb'] = $pane;
  $display->panels['middle'][1] = 'new-831872f4-18c1-42a4-8630-524240e33ecb';
  $pane = new stdClass();
  $pane->pid = 'new-87344ce1-8606-470c-9345-edc737e73784';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'team_members-panel_pane_advisors';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '87344ce1-8606-470c-9345-edc737e73784';
  $display->content['new-87344ce1-8606-470c-9345-edc737e73784'] = $pane;
  $display->panels['middle'][2] = 'new-87344ce1-8606-470c-9345-edc737e73784';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['team_members'] = $page;

  return $pages;

}
