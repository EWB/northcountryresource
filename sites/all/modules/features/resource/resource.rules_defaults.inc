<?php

/**
 * @file
 * resource.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function resource_default_rules_configuration() {
  $items = array();
  $items['rules_find_locate_location_term'] = entity_import('rules_config', '{ "rules_find_locate_location_term" : {
      "LABEL" : "Find or Generate Location Term",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "city" : { "label" : "City", "type" : "text" },
        "state" : { "label" : "State", "type" : "text" },
        "term" : { "label" : "Term", "type" : "taxonomy_term", "parameter" : false }
      },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_fetched" : { "entites_fetched" : "Entities Fetched" } },
            "DO" : [
              { "drupal_message" : { "message" : "Searching for location: [city:value] | [state:value]" } },
              { "entity_query" : {
                  "USING" : { "type" : "taxonomy_term", "property" : "name", "value" : [ "city" ] },
                  "PROVIDE" : { "entity_fetched" : { "entites_fetched" : "Entities Fetched" } }
                }
              },
              { "data_set" : { "data" : [ "term" ], "value" : [ "entites-fetched:0" ] } }
            ],
            "LABEL" : "Locate Existing"
          }
        },
        { "RULE" : {
            "PROVIDE" : {
              "entity_fetched" : { "entity_fetched" : "Fetched entity" },
              "variable_added" : { "parent" : "Parent" }
            },
            "IF" : [ { "data_is_empty" : { "data" : [ "term" ] } } ],
            "DO" : [
              { "entity_query" : {
                  "USING" : { "type" : "taxonomy_term", "property" : "name", "value" : [ "state" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "taxonomy_term", "value" : [ "entity-fetched:0" ] },
                  "PROVIDE" : { "variable_added" : { "parent" : "Parent" } }
                }
              },
              { "drupal_message" : { "message" : "Looking for Parent: [parent:name]" } }
            ],
            "LABEL" : "Locate Parent"
          }
        },
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "created_parent" : "Created Parent" } },
            "IF" : [
              { "data_is_empty" : { "data" : [ "term" ] } },
              { "data_is_empty" : { "data" : [ "parent" ] } }
            ],
            "DO" : [
              { "entity_create" : {
                  "USING" : {
                    "type" : "taxonomy_term",
                    "param_name" : [ "state" ],
                    "param_vocabulary" : "location"
                  },
                  "PROVIDE" : { "entity_created" : { "created_parent" : "Created Parent" } }
                }
              },
              { "data_set" : { "data" : [ "parent" ], "value" : [ "created-parent" ] } },
              { "entity_save" : { "data" : [ "parent" ], "immediate" : "1" } }
            ],
            "LABEL" : "Create Parent If Empty"
          }
        },
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "created_city" : "Created City" } },
            "IF" : [ { "data_is_empty" : { "data" : [ "term" ] } } ],
            "DO" : [
              { "entity_create" : {
                  "USING" : {
                    "type" : "taxonomy_term",
                    "param_name" : [ "city" ],
                    "param_vocabulary" : "location"
                  },
                  "PROVIDE" : { "entity_created" : { "created_city" : "Created City" } }
                }
              },
              { "data_set" : { "data" : [ "created-city:parent:0" ], "value" : [ "parent" ] } },
              { "entity_save" : { "data" : [ "created-city" ], "immediate" : "1" } },
              { "data_set" : { "data" : [ "term" ], "value" : [ "created-city" ] } }
            ],
            "LABEL" : "Create Term If Empty"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "term" ]
    }
  }');
  $items['rules_resource_content_phone'] = entity_import('rules_config', '{ "rules_resource_content_phone" : {
      "LABEL" : "On Resource Node Feed in Copy over Telephone",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "feeds" ],
      "ON" : { "feeds_import_resource_content" : [] },
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-phone-number" ],
            "value" : [ "node:field-telephone-number-text" ]
          }
        }
      ]
    }
  }');
  $items['rules_set_location_term_from_address'] = entity_import('rules_config', '{ "rules_set_location_term_from_address" : {
      "LABEL" : "Set Location Term from Address",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--resource" : { "bundle" : "resource" } },
      "DO" : [
        { "drupal_message" : { "message" : "Processing Location..." } },
        { "component_rules_find_locate_location_term" : {
            "USING" : {
              "city" : [ "node:field-address:locality" ],
              "state" : [ "node:field-address:administrative-area" ]
            },
            "PROVIDE" : { "term" : { "term" : "Term" } }
          }
        },
        { "data_set" : { "data" : [ "node:field-location" ], "value" : [ "term" ] } }
      ]
    }
  }');
  return $items;
}
