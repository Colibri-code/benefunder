<?php

$f = fopen('./aging-wellness-disease.csv', 'r');

$current_term = NULL;
$current_tid = NULL;

while ($row = fgetcsv($f)) {
  if ($row[0] != $current_term) {
    $taxonomy_array = taxonomy_get_term_by_name($row[0], 'aging_wellness_disease');
    $current_term = $row[0];
    $current_tid = array_pop($taxonomy_array)->tid;
  }

  $cause_nid = db_query('SELECT n.nid FROM {node} n WHERE n.title = :title AND n.type = :type', array(
    ':title'=> $row[1],
    ':type'=> 'cause')
  )->fetchField();

  if (empty($cause_nid)) {
    echo 'Could not find node ID for :' . $row[1] . PHP_EOL;
  }
  else {
    $cause_wrapper = entity_metadata_wrapper('node', $cause_nid);
    $cause_wrapper->field_aging_wellness_disease[] = $current_tid;
    $cause_wrapper->save();
  }
}