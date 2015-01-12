<?php

/**
 * @file
 * Rules file.
 */

/**
 * Implements hook_rules_action_info().
 */
function od_geocoder_service_rules_action_info() {
  return array(
    'od_geocoder_service_rules_action_addfile' => array(
      'label' => t('Geocoder service add file'),
      'parameter' => array(
        'ef' => array(
          'type' => 'entityform',
          'label' => t('Entityform of uploading address file'),
        ),
      ),
      'group' => t('Entityforms'),
      'base' => 'od_geocoder_service_rules_action_addfile',
    )
  );
}

/**
 * Callback for "od_geocoder_service_add_file" action.
 */
function od_geocoder_service_rules_action_addfile($submission) {
  module_load_include('inc', 'od_geocoder_service', 'includes/od_geocoder_service');

  $file = $submission->field_geocoding_file['und'][0];

  $obj = array();
  $obj['email']  = $submission->field_geocoding_email['und'][0]['email'];
  $obj['column'] = $submission->field_geocoding_column['und'][0]['value'];
  $obj['delim'] = $submission->field_geocoding_csv_delimiter['und'][0]['value'];
  $obj['hash']   = _odgs_get_file_hash($file['fid']);
  $obj['fid'] = $file['fid'];
  $obj['status'] = OD_GEOCODER_SERVICE_STATUS_NEW;
  $obj['address_input'] = _odgs_get_file_addresses($file['fid'], (int)$obj['column'], $obj['delim']);

  od_common_include_library('mongodb');
  odMongodb::init(OD_GEOCODER_SERVICE_COLLECTION)->insert($obj);

  return true;
}

