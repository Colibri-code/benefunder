<?php

$files = file_scan_directory(dirname(__FILE__), '/Causes.*/', array(
  'key' => 'name',
  'recurse' => FALSE,
));

// Match filenames to actual taxonomy terms.
$term_map = array(
  'Brain/Neurological' => 'Neurological / Cognitive',
  'Food (agricultural) & Water Sustainability' => 'Agriculture',
  'Internet of Things/Data Science' => 'IOT, Devices, Data',
  'Poverty & Homelessness / Equality' => 'Poverty & Equality',
  'Cancer' => 'Oncology / Cancer',
  'Autoimmune Diseases-Translational' => 'Autoimmune Diseases',
  'Longevity' => 'Longevity, Immortality Research',
  'Wireless Life Devices' => 'IOT, Devices, Data',
  'Medical Devices' => 'IOT & Medical Devices',
  'Ocean' => 'Oceanic',
  'Veterans' => 'Veteran\'s Causes',
  'Rare/Tropical Diseases' => 'Rare / Tropical Diseases',
  'Autoimmune Diseases-Translational' => 'Autoimmune Research',
);

// Some causes have changed names since spreadsheets were created, also quotes and mis-speelings.
$cause_map = array(
  'Monitoring our Ocean Backyard' => 'Monitoring our Radioactive Ocean',
  'Reviving Water Flow' => 'Sustaining Water Flow',
  'Targeting Chronic Pain with Potetnially Limited Risk of Addiction' => 'Targeting Chronic Pain with Potentially Limited Risk of Addiction',
  'Biomarkers for Alzheimer’s and Parkinson’s Diseases' => 'Biomarkers for Alzheimer\'s and Parkinson\'s Diseases',
  'Using Novel Diagnostic Techniques to Transform Parkinson\'s Disease Research' => 'Using Novel Diagnostic Techniques to Transform Parkinson’s Disease Research',
  'Pioneering Parkinson\'s Disease Research Through Elite Patient Care and Novel Clinical Trials' => 'Pioneering Parkinson’s Disease Research Through Elite Patient Care and Novel Clinical Trials',
  'Plant-Based Knowledge for Treatment of Human Diseases' => 'Identifying and Further Developing Aspirin-like Compounds May Benefit Billions',
  'Preventing \'Bone Attacks\' in Older Adults to Maintain Independence' => 'Preventing ‘Bone Attacks’ in Older Adults to Maintain Independence',
  'Uncovering the racism as well as the gender bias underlying financial structures and credit allocation' => 'Race, Gender, and Capitalism',
  'Advancing data and knowledge management to promote equality and fairness' => 'Making Big Data Fair',
  'Drugging the Undruggable' => 'A Prescription for the Undruggable',
  'Understanding the Past, Present, and Future of Nature\'s most Exotic Objects' => 'Understanding the Past, Present, and Future of Nature’s most Exotic Objects',
  'The Role of Media on our Nation\'s Youth' => 'The Role of Media on our Nation’s Youth',
  'Alzheimer\'s disease, Neruodegernerative, Treatments, Iron, oxidative damage, chelator, IP-6, therapeutics' => 'A Supplement May Relieve Symptoms of Alzheimer\'s',
  'Alzheimer\'s disease, Neruodegernerative, Treatments, Iron, oxidative damage, chelator, IP-6' => 'A Supplement May Relieve Symptoms of Alzheimer\'s',
  'magic bullet drug; developing a new drug paradigm; bench-to-bedside; translational research; entrepreneurial; chemistry/biology interface; innovative; novel; creative; multi-disciplinary;  unique; venture; philanthropy; venture philanthropy' => 'A Prescription for the Undruggable',
  'big data, molecular evolution, protein design, protein interactions. bioinformatics, biophysics, biochemistry' => 'Illuminating Tomorrow’s Drug Design Targets',
  'Drug discovery, biomarker discovery, macular degeneration, inflammation, autoimmune diseases, complement system, protein interactions, immunophysics, immunoengineering, peptide and protein design, design of protein-protein/ligand interfaces, structural bioinformatics, translational bioinformatics' => 'Immunophysics and Immunoengineering: Computational Approaches Meet Clinical Applications',
);

foreach ($files as $name => $file) {
  // Get term id.
  $term_name = str_replace('Causes of High Interest - ', '', urldecode($name));
  $term_name = isset($term_map[$term_name]) ? $term_map[$term_name] : $term_name;
  $taxonomy_array = taxonomy_get_term_by_name($term_name);
  $tid = array_pop($taxonomy_array)->tid;
  if (empty($tid)) {
    echo 'Could not find TERM id for: ' . $term_name . PHP_EOL;
    continue;
  }

  // Open file and get header.
  $fp = fopen($file->uri, 'r');
  $head = fgetcsv($fp);

  // Update each cause with term.
  $row = 1;
  while($column = fgetcsv($fp)) {
    $row++;
    $column = array_combine($head, $column);

    $cause_name = isset($cause_map[$column['Headline']]) ? $cause_map[$column['Headline']] : $column['Headline'];

    $cause_nid = db_query('SELECT n.nid FROM {node} n WHERE n.title LIKE :title AND n.type = :type', array(
        ':title'=> '%' . db_like($cause_name) . '%',
        ':type'=> 'cause')
    )->fetchField();

    if (empty($cause_nid)) {
      echo $name . ' row ' . $row . PHP_EOL;
      echo 'Could not find NODE id for: ' . $cause_name . PHP_EOL;
    }
    else {
      $cause_wrapper = entity_metadata_wrapper('node', $cause_nid);
      if ($taxonomy_array->vocabulary_machine_name == 'research_area') {
        $cause_wrapper->field_research_area[] = $tid;
      }
      elseif ($taxonomy_array->vocabulary_machine_name == 'aging_wellness_disease') {
        $cause_wrapper->aging_wellness_disease[] = $tid;
      }
      $cause_wrapper->save();
    }
  }
}
