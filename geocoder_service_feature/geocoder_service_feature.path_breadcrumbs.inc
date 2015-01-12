<?php
/**
 * @file
 * geocoder_service_feature.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function geocoder_service_feature_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'geocoding_service';
  $path_breadcrumb->name = 'Сервис добавления геометок';
  $path_breadcrumb->path = 'geocoder-service';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Services',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['geocoding_service'] = $path_breadcrumb;

  return $export;
}
