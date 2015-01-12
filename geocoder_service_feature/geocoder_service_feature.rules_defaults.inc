<?php
/**
 * @file
 * geocoder_service_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function geocoder_service_feature_default_rules_configuration() {
  $items = array();
  $items['rules_geocoder_service_addfile_rule'] = entity_import('rules_config', '{ "rules_geocoder_service_addfile_rule" : {
      "LABEL" : "Geocoder service addfile rule",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules", "od_geocoder_service" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "entity:type" ], "value" : "geocoding_service" } }
      ],
      "DO" : [
        { "od_geocoder_service_rules_action_addfile" : { "ef" : [ "entity" ] } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  return $items;
}
