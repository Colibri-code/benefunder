<?php
/**
 * @file
 * bf_senior_editor_role.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function bf_senior_editor_role_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'causes_workflow'
  $workflows['causes_workflow'] = entity_import('Workflow', '{
    "name" : "causes_workflow",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "(creation)" : {"weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "approved" : {"weight":"-16","sysid":"0","state":"approved","status":"1","name":"approved"},
      "draft" : {"weight":"-19","sysid":"0","state":"draft","status":"1","name":"draft"},
      "ready" : {"weight":"-17","sysid":"0","state":"ready","status":"1","name":"ready"},
      "review" : {"weight":"-18","sysid":"0","state":"review","status":"1","name":"review"}
    },
    "transitions" : {
      "_creation_to_draft" : {"roles":{"-1":-1,"4":4},"name":"_creation_to_draft","label":"","rdf_mapping":[],"start_state":"(creation)","end_state":"draft"},
      "approved_to_approved" : {"roles":{"-1":-1,"3":3,"4":4,"7":7,"8":8},"name":"approved_to_approved","label":"","rdf_mapping":[],"start_state":"approved","end_state":"approved"},
      "approved_to_draft" : {"roles":{"4":4},"name":"approved_to_draft","label":"","rdf_mapping":[],"start_state":"approved","end_state":"draft"},
      "approved_to_ready" : {"roles":{"4":4},"name":"approved_to_ready","label":"","rdf_mapping":[],"start_state":"approved","end_state":"ready"},
      "approved_to_review" : {"roles":{"4":4},"name":"approved_to_review","label":"","rdf_mapping":[],"start_state":"approved","end_state":"review"},
      "draft_to_draft" : {"roles":{"-1":-1,"3":3,"4":4,"7":7,"8":8},"name":"draft_to_draft","label":"","rdf_mapping":[],"start_state":"draft","end_state":"draft"},
      "draft_to_review" : {"roles":{"4":4},"name":"draft_to_review","label":"","rdf_mapping":[],"start_state":"draft","end_state":"review"},
      "ready_to_approved" : {"roles":{"8":8},"name":"ready_to_approved","label":"","rdf_mapping":[],"start_state":"ready","end_state":"approved"},
      "ready_to_draft" : {"roles":{"4":4},"name":"ready_to_draft","label":"","rdf_mapping":[],"start_state":"ready","end_state":"draft"},
      "ready_to_ready" : {"roles":{"-1":-1,"3":3,"4":4,"7":7,"8":8},"name":"ready_to_ready","label":"","rdf_mapping":[],"start_state":"ready","end_state":"ready"},
      "ready_to_review" : {"roles":{"4":4},"name":"ready_to_review","label":"","rdf_mapping":[],"start_state":"ready","end_state":"review"},
      "review_to_draft" : {"roles":{"4":4},"name":"review_to_draft","label":"","rdf_mapping":[],"start_state":"review","end_state":"draft"},
      "review_to_ready" : {"roles":{"4":4},"name":"review_to_ready","label":"","rdf_mapping":[],"start_state":"review","end_state":"ready"},
      "review_to_review" : {"roles":{"-1":-1,"3":3,"4":4,"7":7,"8":8},"name":"review_to_review","label":"","rdf_mapping":[],"start_state":"review","end_state":"review"}
    },
    "label" : "Causes Workflow",
    "typeMap" : [],
    "rdf_mapping" : [],
    "system_roles" : {
      "-1" : "(author)",
      "3" : "administrator",
      "4" : "Editor",
      "7" : "Researcher",
      "8" : "Senior Editor"
    }
  }');

  return $workflows;
}
