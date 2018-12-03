<?php

/**
 * @file
 * resource.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function resource_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_resources';
  $page->task = 'page';
  $page->admin_title = 'Search Resources';
  $page->admin_description = '';
  $page->path = 'search-resources';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_resources__panel';
  $handler->task = 'page';
  $handler->subtask = 'search_resources';
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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => 'col-sm-8 col-md-9 col-lg-10',
        'hide_empty' => 0,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => 'col-sm-4 col-md-3 col-lg-2',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bd46cca5-80d7-4fc0-9d10-4fdf49e2a9e5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_resources__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9dac73ed-cc7f-4b46-8bfc-9a3bc82fb164';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'resource_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
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
  $pane->uuid = '9dac73ed-cc7f-4b46-8bfc-9a3bc82fb164';
  $display->content['new-9dac73ed-cc7f-4b46-8bfc-9a3bc82fb164'] = $pane;
  $display->panels['center'][0] = 'new-9dac73ed-cc7f-4b46-8bfc-9a3bc82fb164';
  $pane = new stdClass();
  $pane->pid = 'new-17365e58-64de-45fd-b155-4d225836fe48';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-XT1TPkMHzBZ6YSwJUL4ciEJqOg0HJZYa';
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
  $pane->uuid = '17365e58-64de-45fd-b155-4d225836fe48';
  $display->content['new-17365e58-64de-45fd-b155-4d225836fe48'] = $pane;
  $display->panels['sidebar'][0] = 'new-17365e58-64de-45fd-b155-4d225836fe48';
  $pane = new stdClass();
  $pane->pid = 'new-040f6693-e609-47fa-8c12-3d6861686dd4';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-X8fL92WXvkyHqBllry4UDsvxAUKl1s7q';
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
  $pane->uuid = '040f6693-e609-47fa-8c12-3d6861686dd4';
  $display->content['new-040f6693-e609-47fa-8c12-3d6861686dd4'] = $pane;
  $display->panels['sidebar'][1] = 'new-040f6693-e609-47fa-8c12-3d6861686dd4';
  $pane = new stdClass();
  $pane->pid = 'new-068d1967-2c24-40f0-b564-7d4634530783';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-BNzHqvTZwAVUdcnNTgOBuDNuhN0RzRJ9';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '068d1967-2c24-40f0-b564-7d4634530783';
  $display->content['new-068d1967-2c24-40f0-b564-7d4634530783'] = $pane;
  $display->panels['sidebar'][2] = 'new-068d1967-2c24-40f0-b564-7d4634530783';
  $pane = new stdClass();
  $pane->pid = 'new-c679bf25-a8ed-42fd-b2fa-fedcc66c8a9b';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-507ubj1dn1r5Re4jR003jEu9Euhk8whi';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c679bf25-a8ed-42fd-b2fa-fedcc66c8a9b';
  $display->content['new-c679bf25-a8ed-42fd-b2fa-fedcc66c8a9b'] = $pane;
  $display->panels['sidebar'][3] = 'new-c679bf25-a8ed-42fd-b2fa-fedcc66c8a9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9dac73ed-cc7f-4b46-8bfc-9a3bc82fb164';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_resources'] = $page;

  return $pages;

}
