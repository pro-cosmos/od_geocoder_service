<?php
/**
 * @file
 * geocoder_service_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function geocoder_service_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function geocoder_service_feature_default_entityform_type() {
  $items = array();
  $items['geocoding_service'] = entity_import('entityform_type', '{
    "type" : "geocoding_service",
    "label" : "\\u0421\\u0435\\u0440\\u0432\\u0438\\u0441 \\u0434\\u043e\\u0431\\u0430\\u0432\\u043b\\u0435\\u043d\\u0438\\u044f \\u0433\\u0435\\u043e\\u043c\\u0435\\u0442\\u043e\\u043a",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "\\u003Cnone\\u003E",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "\\u0421\\u0435\\u0440\\u0432\\u0438\\u0441 \\u0434\\u043e\\u0431\\u0430\\u0432\\u043b\\u0435\\u043d\\u0438\\u044f \\u0433\\u0435\\u043e\\u043c\\u0435\\u0442\\u043e\\u043a",
      "submission_text" : {
        "value" : "\\u0412\\u0430\\u0448 \\u0444\\u0430\\u0439\\u043b \\u0434\\u043e\\u0431\\u0430\\u0432\\u043b\\u0435\\u043d \\u0432 \\u043e\\u0447\\u0435\\u0440\\u0435\\u0434\\u044c \\u043d\\u0430 \\u043e\\u0431\\u0440\\u0430\\u0431\\u043e\\u0442\\u043a\\u0443, \\u043f\\u043e \\u043e\\u043a\\u043e\\u043d\\u0447\\u0430\\u043d\\u0438\\u0438 \\u043e\\u043f\\u0435\\u0440\\u0430\\u0446\\u0438\\u0438 \\u043d\\u0430 \\u0432\\u0430\\u0448\\u0443 \\u043f\\u043e\\u0447\\u0442\\u0443 \\u043f\\u0440\\u0438\\u0434\\u0435\\u0442 \\u0441\\u043e\\u043e\\u0431\\u0449\\u0435\\u043d\\u0438\\u0435 \\u0441\\u043e \\u0441\\u0441\\u044b\\u043b\\u043a\\u043e\\u0439 \\u0434\\u043b\\u044f \\u0441\\u043a\\u0430\\u0447\\u043a\\u0438 \\u043e\\u0431\\u0440\\u0430\\u0431\\u043e\\u0442\\u0430\\u043d\\u043d\\u043e\\u0433\\u043e \\u0444\\u0430\\u0439\\u043b\\u0430",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "1" : 0, "6" : 0, "3" : 0, "4" : 0, "5" : 0, "7" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "geocoder-service",
      "instruction_pre" : { "value" : "", "format" : "full_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
