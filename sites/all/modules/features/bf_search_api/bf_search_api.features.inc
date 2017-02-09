<?php
/**
 * @file
 * bf_search_api.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function bf_search_api_default_search_api_index() {
  $items = array();
  $items['cause_index_solr'] = entity_import('search_api_index', '{
    "name" : "Cause Index Solr",
    "machine_name" : "cause_index_solr",
    "description" : null,
    "server" : "cause_index_solr_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "cause" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_50_50_image_text_alternati" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_aging_wellness_disease" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_awards" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_first_name" : { "type" : "text" },
        "field_in_the_news" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_jumbotron_copy" : { "type" : "text" },
        "field_jumbotron_fields" : { "type" : "string" },
        "field_jumbotron_image:file" : { "type" : "integer", "entity_type" : "file" },
        "field_jumbotron_teaser" : { "type" : "text" },
        "field_jumbotron_video:file" : { "type" : "integer", "entity_type" : "file" },
        "field_keywords" : { "type" : "text" },
        "field_last_name" : { "type" : "text" },
        "field_overlay_copy" : { "type" : "text" },
        "field_patents" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_publications" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_research_area" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_share_lines" : { "type" : "list\\u003Ctext\\u003E" },
        "field_subtitle" : { "type" : "text" },
        "field_university_or_institution" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "meta_description" : { "type" : "text" },
        "meta_keywords" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_subtitle" : true,
              "field_jumbotron_teaser" : true,
              "meta_description" : true,
              "meta_keywords" : true,
              "field_jumbotron_copy" : true,
              "field_first_name" : true,
              "field_last_name" : true,
              "field_keywords" : true,
              "field_overlay_copy" : true,
              "field_share_lines" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_subtitle" : true,
              "field_jumbotron_teaser" : true,
              "meta_description" : true,
              "meta_keywords" : true,
              "field_jumbotron_copy" : true,
              "field_first_name" : true,
              "field_last_name" : true,
              "field_keywords" : true,
              "field_overlay_copy" : true,
              "field_share_lines" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : {
              "field_subtitle" : true,
              "field_jumbotron_teaser" : true,
              "meta_description" : true,
              "meta_keywords" : true,
              "field_jumbotron_copy" : true,
              "field_first_name" : true,
              "field_last_name" : true,
              "field_keywords" : true,
              "field_overlay_copy" : true,
              "field_share_lines" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_subtitle" : true,
              "field_jumbotron_teaser" : true,
              "meta_description" : true,
              "meta_keywords" : true,
              "field_jumbotron_copy" : true,
              "field_first_name" : true,
              "field_last_name" : true,
              "field_keywords" : true,
              "field_overlay_copy" : true,
              "field_share_lines" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_subtitle" : true,
              "field_jumbotron_teaser" : true,
              "meta_description" : true,
              "meta_keywords" : true,
              "field_jumbotron_copy" : true,
              "field_first_name" : true,
              "field_last_name" : true,
              "field_keywords" : true,
              "field_overlay_copy" : true,
              "field_share_lines" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function bf_search_api_default_search_api_server() {
  $items = array();
  $items['cause_index_solr_server'] = entity_import('search_api_server', '{
    "name" : "Cause Index Solr Server",
    "machine_name" : "cause_index_solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
