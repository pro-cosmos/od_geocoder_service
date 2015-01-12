<?php
/**
 * @file
 * geocoder_service_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function geocoder_service_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'geocoding_service';
  $page->task = 'page';
  $page->admin_title = 'Сервис добавления геометок';
  $page->admin_description = '';
  $page->path = 'geocoder-service';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Сервис добавления геометок',
    'name' => 'main-menu',
    'weight' => '6',
    'parent' => array(
      'type' => 'tab',
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
  $handler->name = 'page_geocoding_service_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'geocoding_service';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Панель',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.entity-entityform-type h2 {display:none}',
    'contexts' => array(
      0 => array(
        'identifier' => 'Entityform Type',
        'keyword' => 'entityform_type',
        'name' => 'entity:entityform_type',
        'entity_id' => '36',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'panels_everywhere_site_template' => 'site_template_panel_context_9',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = 'Geocoding service';
  $display->uuid = 'a816b6b9-7cb0-4584-9266-740b4c33d9ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-61ff23b7-46c5-4b21-8c78-b4c582829221';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'entityform_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'context_entity:entityform_type_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61ff23b7-46c5-4b21-8c78-b4c582829221';
    $display->content['new-61ff23b7-46c5-4b21-8c78-b4c582829221'] = $pane;
    $display->panels['middle'][0] = 'new-61ff23b7-46c5-4b21-8c78-b4c582829221';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['geocoding_service'] = $page;

  return $pages;

}
