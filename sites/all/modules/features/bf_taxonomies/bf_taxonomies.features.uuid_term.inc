<?php
/**
 * @file
 * bf_taxonomies.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function bf_taxonomies_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Infectious',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '020167bc-7d5d-49be-b94d-680abe7e962d',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Pediatric',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '05f68591-ca10-4301-9e30-0b0a1f9d66f9',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Humanities',
    'description' => 'Philosophy, literature, religion, art, music, history, and language shape our culture. Benefunder researchers are exploring the human experience, such as creating better solutions for relieving anxiety, enhancing hands-on higher education, understanding how social networks impact our daily lives, and how identity shapes political, social, business, education, and economic outcomes.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '080b773f-5832-47fb-92d9-6a65271fa81a',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
  );
  $terms[] = array(
    'name' => 'Environment',
    'description' => 'From enhanced renewable energies to space exploration, enhancing battery life, and understanding the world\'s oceans and ecosystems, academic researchers are developing solutions that will help us guard our resources and preserve our environment for future generations.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0bcde4c4-43b7-493d-aeb3-3219c18f7554',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    ),
  );
  $terms[] = array(
    'name' => 'Health IT',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0d8366ce-a46c-4668-898b-5fbd4231f1c9',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Cardiovascular',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1382af75-3617-4c82-a6fb-d8894a72e380',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Clean Energy',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '14639664-8b2d-4b6f-964c-ec1dd736d7bb',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    ),
  );
  $terms[] = array(
    'name' => 'IOT, Devices, Data',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '18386c69-dd26-43c7-b654-437997884c86',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Nanotechnology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1a5e6ef5-9134-4821-84ea-438a74fb4917',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Musculoskeletal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1e09a259-b5d5-410d-8398-095a5b0a5a14',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Economics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2550e357-5492-4833-8c10-b532274f586c',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Women in STEM',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2e1bce36-b432-4a2c-9f82-a98901c1dd44',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'History',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2e7af326-d26e-4b1a-afb3-9a3f25cad630',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Performing Arts',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '34eb86b3-f3fb-440c-9091-d4960a261ab4',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Cybersecurity',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3729e5f2-6df3-4b7b-ba66-5202271f57c4',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Photonics / Imaging',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '386d47c3-6618-4259-b50e-74168edb92f9',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Diagnostics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3885c07f-0a13-4820-afe6-ff73f88972b7',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Geology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3b120fe0-3a46-437a-9d8c-120f97855a1c',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    ),
  );
  $terms[] = array(
    'name' => 'Computational Sciences / Mathematics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3b1b23a1-5703-42d5-85f9-bdf8d975add8',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Linguistics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4066e723-5114-4c4f-b466-7c05ad5e09c0',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Informational Sciences / Internet',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '423068e6-a8b9-4f9b-83b3-d8b4c2ad8004',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Anthropology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4959653f-bcbb-406b-b20f-7368bbcf4ba1',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Evolution',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4d126344-6621-4f9f-abb5-c4b297f324d3',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Life Science',
    'description' => 'Improving human health, discovering treatments, finding cures - from lifestyle changes to treating disabilities, transforming healthcare, and improving medical devices and diagnostics, the nation\'s top researchers are discovering groundbreaking solutions.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
  );
  $terms[] = array(
    'name' => 'Global Policy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '696445f9-ef5c-440b-aae3-612f048419b1',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Oceanic',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6d9c721a-02b8-46be-8e74-25980d6739e6',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    ),
  );
  $terms[] = array(
    'name' => 'Sociology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6f65fb2f-b6b1-4674-af7f-46e70a7b15ef',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Semiconductor',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '70e99fb7-3ba6-4dc8-8749-edf35d364e09',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Regenerative Medicine',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '750c6500-0050-4c85-8378-d2018b2e104c',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Robotics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7556f57a-aadc-4db9-ba3c-1e721f030f1c',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Metabolic / Diabetes',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '77abddfb-fd88-4473-87c0-581dd1ef3c68',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Technology',
    'description' => 'Robots, rockets, computers, and wearable technology - research explores cutting-edge ideas, creates new materials, and pushes past limits to introduce new products that will improve our lives. University researchers are working to meet today\'s challenges in high-performance computing, big data, cybersecurity, and so much more.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '797fa9c6-81a9-4032-b846-763ed1162542',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
  );
  $terms[] = array(
    'name' => 'Space',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '798186f2-1c7c-4273-964e-b3e4c9844584',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Respiratory',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '802aea84-78d2-46d5-b07a-36c81cf0864b',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Music',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '80b366a6-31f8-4210-bad3-94a570007e45',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Psychology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '85a7752e-daaa-4c02-aa87-2c4ca3d795de',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Veteran\'s Causes',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '89e2157e-1396-4df8-ad33-f33553697fc2',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Telecommunications',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8c16c06b-504d-418f-b754-3c80bc48bd5d',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Chemical',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '90fabab4-60d8-42c3-baf2-088a56f6b518',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    ),
  );
  $terms[] = array(
    'name' => 'Electronics / Sensors',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a2b84603-2f7d-4634-8250-8c2db567e736',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Immunology / Inflammatory',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a58146f6-c07f-411b-a2b5-75f09a8b8984',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'IOT & Medical Devices',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a9252a1c-96e9-43d2-970d-fd944225f118',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Circulatory',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ac8fc89b-33b7-4e6c-bc77-85c303551d35',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ad63341f-18e9-4afd-9549-ae096b4681a8',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Neurological / Cognitive',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b475d643-98d5-419f-9aea-9849cc32f19e',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Genomics / Congenital',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b5b3f43f-7413-4efb-964f-7b4062f65df8',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Literary Arts',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'be31b546-38d2-4a2a-acbc-776ce40cf719',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Telemedicine',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c968db8b-907d-427b-b0be-4aba80ef35e3',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Natural Disasters / Emergency',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cbfd4ca0-e16a-4489-9dda-dfaec571672e',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    ),
  );
  $terms[] = array(
    'name' => 'Proteomics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ce222bba-6b64-45e8-965a-09147d4e21ff',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Stem Cell',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cf3dcfc5-03eb-4797-a180-c9934067ea8d',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Chemistry',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd179c7fb-a7eb-4b9b-9e20-89e43c49aa86',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Poverty & Equality',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd483b121-9c3a-4e37-abd5-ed58a3400910',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Virtual Arts',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd9821a20-fb73-4d17-9fcc-0b28d2f1795a',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Drug Development',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'def6fa1c-ade5-497e-9a59-e37c53057d0a',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Empowering Women',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e1db40cd-7ae3-40ca-89f3-bf1610519419',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Archaeology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e6f3f673-29b3-4e8a-b20e-684c39234826',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Oncology / Cancer',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e7490983-c679-404b-a28e-99075a1fd37f',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Fluidics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e9230a73-9c10-4190-90f3-2e85cdb70ff7',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Ecology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e9a031ec-28cd-4a41-8831-02263dd8681b',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    ),
  );
  $terms[] = array(
    'name' => 'Materials Science / Physics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ef33ee2f-2587-4967-ad25-8f432180d82c',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '797fa9c6-81a9-4032-b846-763ed1162542',
    ),
  );
  $terms[] = array(
    'name' => 'Women\'s Health',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f8423a1d-6c60-4ee3-8309-1173df93e4db',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '571713b2-f33e-448f-a4bc-fc967f7dbf1d',
    ),
  );
  $terms[] = array(
    'name' => 'Law / Ethics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f8abb3fa-fc60-40fb-877f-234caa93b6b6',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  $terms[] = array(
    'name' => 'Atmospheric / Space',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fa3189d0-a512-437e-a0c0-b157bda7dfea',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    ),
  );
  $terms[] = array(
    'name' => 'Remediation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fafacbbf-ba8f-40f6-8fb7-789f20c7ed02',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    ),
  );
  $terms[] = array(
    'name' => 'Political Science',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fc3fe7f2-0656-42ce-a6ae-451c064ff86d',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(),
    'parent' => array(
      0 => '080b773f-5832-47fb-92d9-6a65271fa81a',
    ),
  );
  return $terms;
}
