<?php
/**
 * @file
 * geocoder_service_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function geocoder_service_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:geocoder-service
  $menu_links['main-menu:geocoder-service'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'geocoder-service',
    'router_path' => 'geocoder-service',
    'link_title' => 'Сервис добавления геометок',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'language' => 'und',
    'customized' => 1,
    'parent_path' => '<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Сервис добавления геометок');


  return $menu_links;
}
