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
    'field_term_icon' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'benefunder_research_icons-humanities-white.png',
          'uri' => 'public://benefunder_research_icons-humanities-white.png',
          'filemime' => 'image/png',
          'filesize' => 3199,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'e1e36b18-10b8-4fd8-9007-4533eff0bfb1',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 301,
            'height' => 301,
          ),
          'alt' => '',
          'title' => '',
          'width' => 301,
          'height' => 301,
          'uuid_features_file_data' => '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',
        ),
      ),
    ),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'benefunder_research_icons-humanities.png',
          'uri' => 'public://content/research_area/term_icon_with_color/benefunder_research_icons-humanities.png',
          'filemime' => 'image/png',
          'filesize' => 3664,
          'status' => 1,
          'type' => 'image',
          'uuid' => '575ad91f-7319-4582-9b23-7425410e5b6f',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 301,
            'height' => 301,
          ),
          'alt' => '',
          'title' => '',
          'width' => 301,
          'height' => 301,
          'uuid_features_file_data' => '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',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Environment',
    'description' => 'From enhanced renewable energies to space exploration, enhancing battery life, and understanding the world\'s oceans and ecosystems, academic researchers are developing solutions that will help us guard our resources and preserve our environment for future generations.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0b1631a9-faa8-47a2-8de3-834fbc6960d2',
    'vocabulary_machine_name' => 'research_area',
    'field_term_icon' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'benefunder_research_icons-environment-white.png',
          'uri' => 'public://benefunder_research_icons-environment-white.png',
          'filemime' => 'image/png',
          'filesize' => 4116,
          'status' => 1,
          'type' => 'image',
          'uuid' => '6d804620-8db8-42e9-ac1a-45b743c7239b',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 301,
            'height' => 301,
          ),
          'alt' => '',
          'title' => '',
          'width' => 301,
          'height' => 301,
          'uuid_features_file_data' => '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',
        ),
      ),
    ),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'benefunder_research_icons-environment.png',
          'uri' => 'public://content/research_area/term_icon_with_color/benefunder_research_icons-environment.png',
          'filemime' => 'image/png',
          'filesize' => 4979,
          'status' => 1,
          'type' => 'image',
          'uuid' => '76091621-1570-45c3-a956-fac1ceb909da',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 301,
            'height' => 301,
          ),
          'alt' => '',
          'title' => '',
          'width' => 301,
          'height' => 301,
          'uuid_features_file_data' => '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',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
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
    'field_term_icon' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'benefunder_research_icons-life-science-white.png',
          'uri' => 'public://benefunder_research_icons-life-science-white.png',
          'filemime' => 'image/png',
          'filesize' => 3959,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'fd3b7c17-e99a-439f-bd91-af5a0a9a8335',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 301,
            'height' => 301,
          ),
          'alt' => '',
          'title' => '',
          'width' => 301,
          'height' => 301,
          'uuid_features_file_data' => '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',
        ),
      ),
    ),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'benefunder_research_icons-life-science.png',
          'uri' => 'public://content/research_area/term_icon_with_color/benefunder_research_icons-life-science.png',
          'filemime' => 'image/png',
          'filesize' => 4994,
          'status' => 1,
          'type' => 'image',
          'uuid' => '55a977a1-cde3-44fa-a631-72f8afb4b176',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 301,
            'height' => 301,
          ),
          'alt' => '',
          'title' => '',
          'width' => 301,
          'height' => 301,
          'uuid_features_file_data' => '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',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
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
    'field_term_icon' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'benefunder_research_icons-tech-white.png',
          'uri' => 'public://benefunder_research_icons-tech-white.png',
          'filemime' => 'image/png',
          'filesize' => 3853,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'efdb473f-565c-4077-8a34-d80997375af2',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 301,
            'height' => 301,
          ),
          'alt' => '',
          'title' => '',
          'width' => 301,
          'height' => 301,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAS0AAAEtCAYAAABd4zbuAAAACXBIWXMAABcRAAAXEQHKJvM/AAAOv0lEQVR42u3d3XUjtxkGYEyO78MOwlSwTAVhKjA7WLoCyxVEqUBJBfRWILkCShVQWwHZAdkBciGsV6LIFckB5o/Pc04uEmdHMGbmXQwEfAgBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAo2KME70AdDWgxjHGuxjjKr63jTEuYowzPQW0HVajFFanWhmBAW2OrlbxMnM9CDQ9wtrGegQX0FhoLWMePhWB4oE1j/ms9ChQOrTWMS+/VeQsf9EFnBFY0xDCOPNlP+tZhBalTHtyTYQWhBBC+FTgmiPditCilCIBkz47QWjRGxtdgNCiN+FSVZXQQmhRxNcC13zWrQgtSnkocM1H3QoDljYq36StNNu9EjDL9M/GBX/+MvPi0pJtnaWyOKsD1SYWfgEAZcPq3DIwdzHGUYF2TDIG1l3BsDp15f5SeEGZoLhk+8y6xKbkGONtjn2HhUJ1cWF7bjxpkC+w6pSB2RYKrsXA2lRs5AfX9km46vCo5vbCtow70hYbuKGjL2KMMd4WHAkuT/xUnRdqwzhjP21LBDz5VLqgu6OsEMI65Ns6swsh/L2qql2p4AghzMLL/sTXI6mnEMJzVVUPBftqEULIGYi/VVX1X08hnPci3sT8bgbaV9vM/bT2BHaXxaXd9c+eXLPtwJqG/Bu5xyXXjyG0hmrck2u2bdqj/kdoDdqkJ9cEoQUgtPrnuSfXbNvOoyK06IaN0Gr130nJHKHFmf4ocM2noXVSVVWPBUZbz6XWsyG0huwh88u4C2XqYXXB75mv9z+PH1ygD9t4OtJPo4wLTC0shZovZJYN01fQT/NMoTX11EH9UcSqaxUeOtpXdUvTzD1x0G5wLa+tYsGFeza3AgvKvZDbE1/Cmyvup1PL5cQ0Oht7uvpDaZp+vpSzEMLP4f3+uE0I4Y+SZWD6Fl7hpVzO/kbxXXhZ/vHgzEUAAAAAAAAAAAAAAAAAgH6zYboFaSPv5/D+HMJN+L6RV43y9u/TNLxsTHefuN6XIMa4PrFkyt211cLq0H2anXiftqkktvvEIF+ES6pqrtOojGbu0ch9glC7DPDWC9HYfVq5T3gRXj7z6tqqrtnpv1he3yefivT6RZhmPAJsqUd7cZ8WepQ+vwzLmNdUr/biPhkVF+SE6XIvwjiEkDtkPuvZ7PdpUuA+/apnhVYfzQpc00jLfRJauqCYvxW4ps+O/D4VuKbfIgqtXiry4JrXys5v+4QWgNDqo02h6z7r2qzsHRRaJF9LvGA26PbiPm10q9Dqo8cC13TcfT/69FG3Cq3eqarqucCn3Bc9W+Q+bdwnCH+WOLGNp/v3ae4+wfcX4j7TRlxrf8rep6WN7RD+rNG0qvkyzPVkL+7TTE8ypBdieeHf3AKr+8G1FVgM9aW4SQ/4SXMjPjVau0+3Z9yne/eJa/jbfJ4e9vWBoLozf9W5+7Q9cp+EFQAAA+LcQ3J/Vt2Et5UTHtICToDOBdbtgYnqlcMegC4G1twqcWAIgfXnKTVGXEDu4NmmcBnX/CQ8ZnXOco5XbboXeMC3YJgcWa2/OBYwr9YwrT84Kv5Ho67xkWuP0yLc9YFV5zfuGH57KLRW4cf17HfhpcTOt+KDo/DxaTO/hJc6VcsPrr159Z9xuvZHI7F/VVX16M7B9YbWImNZljd78DJtQt7nM/HKKQJIrnLDj2kU9Gcl0KqqdlVV/SOE8J9MP2Oj3DQYaU1rjnzWp1SiSHNVdUd19+4Y5rQIMcZ4YNT0JYTwz/Ay1zR99c++zXE9hxC+nLvaPU3Az9K1J+HtAbSbdN2n9N/v9v74f6qqunXHQGjt/6Zu3YE2HVpKMXW3MKdFCO8P4Bh3YML70wntRGjR4shinOaX2hhNHJqMb7um1/7Pb3wSvuV7Ap0MqvkPyjCvmyo0d2Qy/rbFfhm1NQn/qvBfq/cEuhZWsw9WjO+7K/m51mZIdCVEu3ZPoEuBdXfhr/tXhYOrM5PxTU/Cn7l/8uK9lNDHwKq7TqlYcB35JBq11E+NtaXGXyKvdwEYcTHYT8LOnmDcpSUGB7b+rK/xnkCbgTU640iqVg4F7dJkfFPza2fOYTlQtyMseWjGPLytm17Xvwu08dAaqE8tBNah0d3XAj9nHt6uxu/iPUFoteZz5utNcv/aPa2B2uz/nBb66tDPfCzwc37OfL2xSXmhNSQlHuYSx7B3YWV8UyvhZz25JkKrE587OZQIky6sjC++Er7giOivnnihRbMOfYZNG27DpIFR1qihtiO0KKzVyfimJuERWvzYpi8N7cBkfFOT8KWqRTx53IVW71VVtQnfD4Xow4vX5mR8I5PwR8L5qv6CElp85CHz9Xava7Fn1uZkfJPlaB56ck2EViu+9OjlOPQ5Nm0ptEoW/ftf5uv97tANBuUHNZo6tUG3rTI1LZWjWWS8J2NPOUMLrVz7D+cNtLXxMjXpVOlGN2yne7K27xCOvySTmsE1b6idjZepOTLqGfXgniw82Qw9uMYXnLq8bfJv8zbK1Bzok23Do+BO3xPoQnjNT/w0WTQ9X3Jkfumm8M9svUZVl+8J3/2kC9pRVdXvIYTf0whmGkL4W/heKuUpvKz5eWjpN1KNrow/Mop7avGeTMLL5ucu3RPggyDZH3GsCv6smyYKHTIM1mlx6mir5AJTB7MitKjt64mfcTnsB+IubX8CocXJHk8Il1KhZZSF0KL25+Gxz7haujIJj9Ci5xosUzM5MTBBaHH2aKtEaJmER2iRTROT8SbhEVpk83ji51zO0DLKQmiR7fPw2OfcRUzCI7TIKk3G7wqOtEzCI7QoPtrKGVom4RFaZPd04mddjpGWSXiEFtlHWjlHWybhEVo0Elq1J+NNwnMp9bQGJJUnnoS3p+fsQgiPVVVdNIqpqmoTY9yFt0fJ5xhpZZ2ET0X5JnvX3aR/d5+c0LGwGp9wssw2lVEeXXD95f7FMrT5UHvHF1xndqh9+7XAlEaG7gTW7QW1zWcZfsa0Zrtr1YRPdd2XZ/67r1JVUqClwLpv4mSfNJrJWjO+Tk34mifobAUXtBNYi6bO60ufn9mOzqpzMGumswoFFzQcWPOmT0Y+MLJZZW7/7MQ/m+uk7pUnCZoJrFwnVZ81Yso5GR9jvLtkEv7ICM3J0FfGOq3+mYW3yw/qmp842sq5Mv7SlfC/Zu7LXz1OQovyfi4UhB/JuTJ+esK1L23nWeHp0FWhRXnTAtc8ZYV7lpXxRybAn074c9NC/WlCXmhR2KjANT8cbaTPtxxlarpWjkZoCS0GLEeZGuVoEFo0JsdkvHI0CK0rsytwzVNDI8dk/PTCUdauUH8a5QktCntsYgR1xgt+8mT8pZPwIYSQqlTsetKfCC1e+aPANR9ODI5NqDcZX3cS/iHzv/djqoMPlJRh793FewjrrIy/dCX8qz8/zrwifuppMtKiGb9kus4uhPBb3U/JM17+WpPw6f/734yjLJ+G0OBo666NkUYqU7NNI667tPl5dOKfnaTaXPdptLi84OePDtTiOtf6kmKIQP3gWlzjZuGawaUQILT8As/PrPowiJc2Bde5o817Iyzozgt8+8EE/SDrpL+qj/+j4F6YdB+OShcM7yUO7/cSPl/Dr/bTCPLNSMpkOwAAAAAAAAAAAAAAAADAsNkwfYUObCzuxYbq/XbbDA3DDqrpByVcVqm8zahj7Z6lOlhXVXIHrjmsRh+89Pu2McabLoyqDh2i8UEJ5ak7Dj3/DKxxcs+ixXbPzqzGOogy0nDtgTWu8eK3FlwpaOsSXNDD0FpmOhvwpsE2jzIE7TcOr4AeBdY844Gm26Ym52ueLrRv6UmA/oRWzhOoGxltpVFWblNPw/A4YXp4gTUJ7w+2qOtzA02fFbjmZ0/E8PykCwanxOhi0sDn1rgnfYHQIrNS8099DICxx8HnIYDQAhBaEMJOFwgtuu+xwDU3VWEhhN960hcILXJK5Vp2PXz5Hwpc8w9PBPRAKjGT07ihdi/7uJIfqP/y59zDd9dguyd9WsUP5A2AWYYXf9X0aCXTKPHeEwD9DK55nwLrVbsXfWw3kCcAphd8Ki7bfvFjjDcXtPvOHYdhBNcofXZtTxilzDrU7vGJo657FR2uh9N4rnDkFd7vI9yEEB6rqtp0NXRTmycH2v3Qh5OEAAAAAAAAAAAAoC8sLr0yaXHpJLw9AGMTOry49FW7p3v/83Nqt8WlMLCg+raNZ33CnsNph9r9bRvP1jYeuKKR1QUnTt93YMP03IZpuL7AusbSNEulaaC/I6w+FgG8ydDuhScA+hVYyi3HOPckQH9Cy8EWMW49CdCf0NpmDq27Bto8jvkZbQ2Qcw+HF1jT8HYNVg5NVDMt8TN+9kQMz0+6YHCmBa45jjFGfYGRFpRl6YPQAhBaACczpzU8pTYPPxZu9zj9J6eNx0Fo0X0lwuW5qqp/lWx0Wp6w6EFf4POQnKqqei4wwvjSQNMfClzziycCeqDmRul3K8ub2n9Yc6P0u32TngToV3CtMr38Nw22OeeeyamnAPoVWuMMAbBood3TPgUtkDcAJjWCa9Fiu+c12n3rzkO/g2uUKpGeM4d104F2T878xF3HGGfuOAwnvKYf1Ftfp5I2o461e/5B6K7S/8eWnSvhNJ4r/WwMe6fxdPkkntfBu/c/PTuJBwAAAAAAAAAAAPKyuJQs0oLVzyGEyd4/2oQQnkIIDxaCAl0Iq2naAnTKnsZb222ANgPrkqJ96zQqA+h8YL0edQkuoLHAuutTGWfgugNrmrGO+70eBUqH1jLm5TORszhCjHMCaxxCmGa+7Gc9i9CilFlPronQghBCCJ8KXHOsWxFalFIkYMxrIbToG0sfEFoUUWTvYFVVj7oWoUUJXwtcc6NbEVqU8lDgmkZZCC3KqKrqucDI6IueBYqJMc4yroZf6lGgieC6z7Rh2lIHoJHQGsUYVzVDa64ngaaDa3nhCMvWHaC18LpNQXTSHFbadA3Q+qhrnua6tgeC6s78FQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAECP/R8HhUIFjEHnAAAAAABJRU5ErkJggg==',
        ),
      ),
    ),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'benefunder_research_icons-tech.png',
          'uri' => 'public://content/research_area/term_icon_with_color/benefunder_research_icons-tech.png',
          'filemime' => 'image/png',
          'filesize' => 4688,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'ccc9aa58-7913-4ee8-aee3-2768a0d9b458',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 301,
            'height' => 301,
          ),
          'alt' => '',
          'title' => '',
          'width' => 301,
          'height' => 301,
          'uuid_features_file_data' => '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',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
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
