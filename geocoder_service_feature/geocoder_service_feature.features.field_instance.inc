<?php
/**
 * @file
 * geocoder_service_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function geocoder_service_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-geocoding_service-field_geocoding_column'
  $field_instances['entityform-geocoding_service-field_geocoding_column'] = array(
    'bundle' => 'geocoding_service',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'default_value_label_token' => 0,
    'deleted' => 0,
    'description' => 'Номер колонки с адресом в csv файле',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_attributes' => array(),
        ),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'i18n_field',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_attributes' => array(),
        ),
        'type' => 'i18n_list_default',
        'weight' => 2,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'i18n_field',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_attributes' => array(),
        ),
        'type' => 'i18n_list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_geocoding_column',
    'label' => '№ колонки',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-geocoding_service-field_geocoding_csv_delimiter'
  $field_instances['entityform-geocoding_service-field_geocoding_csv_delimiter'] = array(
    'bundle' => 'geocoding_service',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_label_token' => 0,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_attributes' => array(),
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_geocoding_csv_delimiter',
    'label' => 'CSV Delimiter',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-geocoding_service-field_geocoding_email'
  $field_instances['entityform-geocoding_service-field_geocoding_email'] = array(
    'bundle' => 'geocoding_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_attributes' => array(),
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_attributes' => array(),
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_attributes' => array(),
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_geocoding_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-geocoding_service-field_geocoding_file'
  $field_instances['entityform-geocoding_service-field_geocoding_file'] = array(
    'bundle' => 'geocoding_service',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_attributes' => array(),
        ),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_attributes' => array(),
        ),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_attributes' => array(),
        ),
        'type' => 'file_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_geocoding_file',
    'label' => 'Файл',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'geocoding_files',
      'file_extensions' => 'csv xml',
      'max_filesize' => '50 MB',
      'od_file_preprocess' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'reference' => 0,
            'remote' => 0,
            'remotefile' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('CSV Delimiter');
  t('Email');
  t('Номер колонки с адресом в csv файле');
  t('Файл');
  t('№ колонки');

  return $field_instances;
}
