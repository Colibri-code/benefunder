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
          'filename' => 'technology_white.png',
          'uri' => 'public://technology_white_0.png',
          'filemime' => 'image/png',
          'filesize' => 1989,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'f255b56e-084d-41b2-b21e-4476f21ade82',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 31,
            'height' => 57,
          ),
          'alt' => '',
          'title' => '',
          'width' => 31,
          'height' => 57,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAB8AAAA5CAYAAADOW/ASAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyhpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDIxIDc5LjE1NTc3MiwgMjAxNC8wMS8xMy0xOTo0NDowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MTQ4RTE0NzA3NDMyMTFFNEE3NERBMjVGQjBBRjcwMEUiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MTQ4RTE0NkY3NDMyMTFFNEE3NERBMjVGQjBBRjcwMEUiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4MjU5MTAxQjcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4MjU5MTAxQzcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PkxDJ5EAAAQzSURBVHja3JlvaM1RGMd378y/aNhIQhtFW62YNRaWd0yaNGWyMoVQkhfKvze8UN54YY3whhdKEWl7MX9ixNzJn/IvGrE7wmVjf5oZc32PvlfH4/nd+7u/e0c89ene3znPeZ77O+c55zznXF84HE75W+L32G4AqAKfQDfYz7L4xLy5B7aHf5et8drx+uYLlLKFyer2fFAPQqAGZIv6kNLmrXjOZtsQbeW76fZ00Cq69DFItXTyQZdVb77PsOpT2caWVtr+6UtzXhbWJU/oTebY7+R3uy7PwUaZradF6AeHoegSz8/AHpe6um3lzQeAgPjFJzzMiBPCRoC2f+r4HBaZ4WA9yAU3wRHwJc5gTgNrQCF4BA6CTlvB9y+ucEl1ngFOsVtMIK3oB18raLuTvjIig39GBMc3UOhx6dUopE1bzkTevFT8Sp9SloiU0uYvZf4oc7stic7b1DnPbtkouqQZZCSx2zNo05aN9lSbT96Dw/yMJTPZnQEXuplgLT/P/SDON5gChvD7ePAatIEcLz0S7yLzHAwDjWA2eAnauYpdZl0K6+JeZMySOFaJzIjcAx9BEOwCRWAeqABPwcgobX20naZtLJXgA4OhCRQoXbWFgePUlQ1gn1JeQJth+qi09/OpoE+JeL8wUsS68YqDNNADlolyvxLpxtfUSLcXK0MwEWSJstugB8xRunU6GKREfhZtyeEujjgMKsY+g3eirJdb7FxF3wTdG9Asyt/RlpRgxPl5UCsqd8j9l3Ld4c2LOAukdNKWLbU/fIqxKQWbHIItQgnHLF2UP42RuxfQdmkklrwslencoRZYZZkMpHn9fWgwi8p9Me5mmf0GbiUrkzGLwiZwh0FWKcZ9thjvB1bWWsk2d2jDF+9ZbYOSd5ezbjnoBgP5fAEc4vdypd0GzUdKjNVKSg3rJvB5FoOnA6xiXY3SrkHzEe1Y2+sw9420cG0w497BVDsgdGLZijrmVeLZBFS1mKtmkxgN7oInLK+mbjRbrvJ2cxReCfqYYFx1GcjFTBxSwTFQ58X5/3tocHuPMgmsBkPASdDgoDeO5zOTp50FFxO9kzF7fbvYi5coemOZ09myLpptN84PKPP2IZgmqFb0WqLZdtPtI5SyXE6vWDIq0YA7rZQd4YWPzTKXbeO+h9sMgiAEqqw1XVLBfd1c/hxV9vyE8va/Ms/NljiNW2daDN0cplmDk3H9ORRcsiLYdGu2w0XSSUvvFZie6FTbpkyhOpAl2KLoNSY65mZFW+pxWHuZy3se8/tK2RUeEmx2O5ztEhrz4eCa1ZUveFTWjku1ll4oRgrueqr5maEOZfLYE0U3nxvLDYdDR9L280WcfuaK67hDCpX0fxoMe0Vk14tr8Zh4dTwSfFWmVsmf+JtjDPMz7dKn39OoJiLT6vo/4dykxoutI7E5k5cxn3ct3wUYAC8O7zI6BExXAAAAAElFTkSuQmCC',
        ),
      ),
    ),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'humanities_icon.png',
          'uri' => 'public://content/research_area/term_icon_with_color/humanities_icon.png',
          'filemime' => 'image/png',
          'filesize' => 1890,
          'status' => 1,
          'type' => 'image',
          'uuid' => '018cb885-a75c-4d8e-98f3-508c59d61a3b',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 35,
            'height' => 54,
          ),
          'alt' => '',
          'title' => '',
          'width' => 35,
          'height' => 54,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAACMAAAA2CAYAAABNwiBxAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyhpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDIxIDc5LjE1NTc3MiwgMjAxNC8wMS8xMy0xOTo0NDowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MDIwMzhCNzk4N0NGMTFFNEI3QTNDNEE1RTY4QzNGMDciIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MDIwMzhCNzg4N0NGMTFFNEI3QTNDNEE1RTY4QzNGMDciIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDoyQzFBNDk4NDcyMDQxMUU0OTlBOTk1ODMyNTNGMkFEMyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDoyQzFBNDk4NTcyMDQxMUU0OTlBOTk1ODMyNTNGMkFEMyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PiqLBCUAAAPQSURBVHja7JlbSFRRFIZnbMyyAh1BuimGUZZBQdCNCoyExIowiaKXHixLSrIXA4MeyoegMgLNpIu9BZUPpShNZFFoF6SMtKKbqUEZqd3MtLR/xX9gdzgz58w4Fx9mwYee7d5r/2effVlrax8eHraNFouwjSILiwmL8dYcFbkVMfhZBrJADzgCTnjhYyyIBt/AHy/a7QWFIBZUgTwHhWxhhcmgBPSCSgsOF4BDYBZ4DA6C5xbabWM/mv3rX8RkGlTOsiAmEVwCM/ksgpJAOvhq0jbLoCxT5ky3wR/eWHi7FYoQzRaBVRbavjUo6xYxxUDdhvvBCwsO3W3d/RbavtbVE1/F8pnOgHdgI+gAj0AOeAVcHhxWg3tgiVJ2FVw3EbKOoyo/F4MEcEX6crCCS9fxS3AWRLFTI5N5sRns4nxpBuVgyIOQTbJqOIHbwI3/lrabRiImFxyl8y7OhRZQpyxhGdH9bnyMAWtAKqjnCGzlqLcZ7jMe3uIZ2MM9YL5Sfpqj4em4t4NSvpBm8vnXg05fd2ARO1VXth1kmLTLYD3VpnNz9Pk4kBFxGrRJNWmXauDbqRthr8U0cL6oNgBumrSrZz3VuujPZzHvQT6X/CD4wO0+2aTdbPCU9QfZPp/+PM4JM7vMN53HST3A82w8uMA6kexUbCdYClaCCWAOhX22WZigVkwc3VaeC8BhHqyT2HkDd9VpYB/4QboshxA+hh4fOWJ1Spl2Jq22Mgr+Dq4muimPDUWkN85NeVQoxMiq6tOV9VkMrvwupgmsBe18budzk88x8AhjaFnyc7mEtdUTTlXE0kArl3orn0MiZiEDr0QlQK9medDFpBiEBNEsD7qYX27KB0IhpsdN+adgL+04ZhMHuBPLQdkIfoMNzC57AyUmjiGE7K7fwXF2Xm4QQhQwkM/jOZViNYSw8pmyGUy7+MZ3+Hu5UmdQ+b2E4cRd1nexffZIR0Zik5NginIx4LRw/jzhpUAknxPop9FTtGc2MstAvMEViNnmlqYI0Sye/nz+TM0GFwNDTOY8WYtBZtlNfz6L6TNIuipArUm7WtZTTU71L77OGbnuOMZYt4NDr6W3ZpfH8vfdPB4kh7pFf6WMj9u9EZPE24kyprdiD73cNiQfryFiDxgFnmPi3+lOTLpyJXKfObKMyjU/RwnnwU/uQ6fAcv2VSA6/r1257CkMgBDNLjJ/r1Pi6B2CTOAiRYgWaCfbAmtJuoBe+i+KMEjsxWYEQYzenBHKBFOtKsBijPzXOHigiamX0pUBFiP+Y2y6S2l7+P9NYTFhMX6yvwIMACC54G0K8/unAAAAAElFTkSuQmCC',
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
          'filename' => 'technology_white.png',
          'uri' => 'public://technology_white.png',
          'filemime' => 'image/png',
          'filesize' => 1989,
          'status' => 1,
          'type' => 'image',
          'uuid' => '92aaec88-5670-45a6-ae60-4347f4f3aa4f',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 31,
            'height' => 57,
          ),
          'alt' => '',
          'title' => '',
          'width' => 31,
          'height' => 57,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAB8AAAA5CAYAAADOW/ASAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyhpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDIxIDc5LjE1NTc3MiwgMjAxNC8wMS8xMy0xOTo0NDowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MTQ4RTE0NzA3NDMyMTFFNEE3NERBMjVGQjBBRjcwMEUiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MTQ4RTE0NkY3NDMyMTFFNEE3NERBMjVGQjBBRjcwMEUiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4MjU5MTAxQjcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4MjU5MTAxQzcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PkxDJ5EAAAQzSURBVHja3JlvaM1RGMd378y/aNhIQhtFW62YNRaWd0yaNGWyMoVQkhfKvze8UN54YY3whhdKEWl7MX9ixNzJn/IvGrE7wmVjf5oZc32PvlfH4/nd+7u/e0c89ene3znPeZ77O+c55zznXF84HE75W+L32G4AqAKfQDfYz7L4xLy5B7aHf5et8drx+uYLlLKFyer2fFAPQqAGZIv6kNLmrXjOZtsQbeW76fZ00Cq69DFItXTyQZdVb77PsOpT2caWVtr+6UtzXhbWJU/oTebY7+R3uy7PwUaZradF6AeHoegSz8/AHpe6um3lzQeAgPjFJzzMiBPCRoC2f+r4HBaZ4WA9yAU3wRHwJc5gTgNrQCF4BA6CTlvB9y+ucEl1ngFOsVtMIK3oB18raLuTvjIig39GBMc3UOhx6dUopE1bzkTevFT8Sp9SloiU0uYvZf4oc7stic7b1DnPbtkouqQZZCSx2zNo05aN9lSbT96Dw/yMJTPZnQEXuplgLT/P/SDON5gChvD7ePAatIEcLz0S7yLzHAwDjWA2eAnauYpdZl0K6+JeZMySOFaJzIjcAx9BEOwCRWAeqABPwcgobX20naZtLJXgA4OhCRQoXbWFgePUlQ1gn1JeQJth+qi09/OpoE+JeL8wUsS68YqDNNADlolyvxLpxtfUSLcXK0MwEWSJstugB8xRunU6GKREfhZtyeEujjgMKsY+g3eirJdb7FxF3wTdG9Asyt/RlpRgxPl5UCsqd8j9l3Ld4c2LOAukdNKWLbU/fIqxKQWbHIItQgnHLF2UP42RuxfQdmkklrwslencoRZYZZkMpHn9fWgwi8p9Me5mmf0GbiUrkzGLwiZwh0FWKcZ9thjvB1bWWsk2d2jDF+9ZbYOSd5ezbjnoBgP5fAEc4vdypd0GzUdKjNVKSg3rJvB5FoOnA6xiXY3SrkHzEe1Y2+sw9420cG0w497BVDsgdGLZijrmVeLZBFS1mKtmkxgN7oInLK+mbjRbrvJ2cxReCfqYYFx1GcjFTBxSwTFQ58X5/3tocHuPMgmsBkPASdDgoDeO5zOTp50FFxO9kzF7fbvYi5coemOZ09myLpptN84PKPP2IZgmqFb0WqLZdtPtI5SyXE6vWDIq0YA7rZQd4YWPzTKXbeO+h9sMgiAEqqw1XVLBfd1c/hxV9vyE8va/Ms/NljiNW2daDN0cplmDk3H9ORRcsiLYdGu2w0XSSUvvFZie6FTbpkyhOpAl2KLoNSY65mZFW+pxWHuZy3se8/tK2RUeEmx2O5ztEhrz4eCa1ZUveFTWjku1ll4oRgrueqr5maEOZfLYE0U3nxvLDYdDR9L280WcfuaK67hDCpX0fxoMe0Vk14tr8Zh4dTwSfFWmVsmf+JtjDPMz7dKn39OoJiLT6vo/4dykxoutI7E5k5cxn3ct3wUYAC8O7zI6BExXAAAAAElFTkSuQmCC',
        ),
      ),
    ),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'environment_icon.png',
          'uri' => 'public://content/research_area/term_icon_with_color/environment_icon.png',
          'filemime' => 'image/png',
          'filesize' => 2032,
          'status' => 1,
          'type' => 'image',
          'uuid' => '10f90e78-1034-410a-9e74-772ec5e7672c',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 31,
            'height' => 57,
          ),
          'alt' => '',
          'title' => '',
          'width' => 31,
          'height' => 57,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAB8AAAA5CAYAAADOW/ASAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyhpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDIxIDc5LjE1NTc3MiwgMjAxNC8wMS8xMy0xOTo0NDowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6ODI1OTEwMUY3MjAwMTFFNDk5QTk5NTgzMjUzRjJBRDMiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6ODI1OTEwMjA3MjAwMTFFNDk5QTk5NTgzMjUzRjJBRDMiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4MjU5MTAxRDcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4MjU5MTAxRTcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Pg7C5sIAAAReSURBVHjaxJhpSBVRFMffs5dLtn2ohNKy1dCgxTZDIqGy1SCkiMyixBYoDKNsgz5ERFkZLVhQtKlFVJRGopVhtJhGoQWVlLbvFGGSpr7+p86Ly3TvezNjb96F35t5d2buf+6955x77tidTqfNV8Ux/ODdVjVQkRrt8R5orMVhDWgHToIleK7e4e3eQTgBhy1C1TzwEaQ7vCQYhMMUMBWMk9wS93vYTbYfCqaBHxA6iyH8hmNb/J8EEkFncAmsA0lgu+b5V/Rjjz5QYbhj4CroIDR0BkSBAnAaL/NGGIWOOJSCwVz1mXqOe6rM9HyjIOwahWA0NkFhkDQqI3Eaz89ORh29gM3PhHgfSV2LB49oBPk4rQRNrnoj4u1BJpAFhnydbbwG3Y2Kx/F8FoOhbEDvQS1Yhl4V6GyHbCHsb5DxcHMbnqcwtu46rl/N6AoyQnkJQlQ9DwQTGXKXXFADFgnCrSn1oJOs5zQXJWAA/yex+eDsfwo8vXBYTi6Jc+pkltjztYKwy8BiDDQe6OYa9fYmmAki2GZ2iuJ9Jc/11SlM0S0Px96KW+JFK+eSIopfkzxUqrPj+8FhGF+N4nqzrE4UzwKP+EYKBAfBXh29Jquv5CCiKoXgmfaFRXFaa8t4ronFYjRSFPKKfhDe4yHCfcdhDDgB7tOQgwyHZl4u0Eqlc6jJ99NBgs6k4z1GKYfWApwf0vp5DFuknkLBJxssRUMNBjwunKPiP0GmK3ins5EN4JhkHj2VXjLxHqA/GK2jgSGAXOqUiVjTE7wQxSnVeQpGgFvguJuHyZ+38lybKUG0vIri5E4Bwg1JiryLSho4wtmI0fDajRNHmxjbwxXDoy00NbFghkHRaI7pA8F18ZqfJIpRkLktaWcTWG9QOJIFaYEaBVahLkkUTwY3+D/5+ArwRNNOJGcwDwyONokGaeoWi+LPeTg78FzLpiEDbDZhYHZ3F0U/r+PwGq55AVpmG0QXMVCOSiJmtrs0iuZ1G5jF/1dy4mimPOYOfeAMNw+udt6deDUo57mp5VF4bMK17OzGuyF4TrpLVTxLweYK8BeW2zSFyHi+3p/TMFqxPoF9tJ6ohN1tl6rAIE3dWK2fciZK0TFYqHvIKXImhIvc7s8V9VGSukQWeitsHGI1wq5nJ4r7NaPiZZJFpo5dLoSNh+a0i+TZr2xgNrPiC8Edzmgaeau7Q3EvfWmYzec0IunodVNrxMnii9jIvnjYMMwBhzgelNLWV/c3GUU97aXv8fbGU3rk5D1csVF39HPzAaDc299rVOIRnEb7RDxUz5D/b/EItuphINrb4g7Nmu3aNNg4oaBc/rIVPU8VhF3X0qwa9gDJdX+rxHMlX5VyrBK/zt9dCnnnksyZiGXWTp8sJ+vYPHjVz5ttFhSVuNPX4g5fiFOS8JM3g6FWitOm/yKYy7vRao5ylohPZ2t3Ffq2tssq8TDFCmeJ+DWJpZdYJU751wLbn8/ZLRztUrwl/kuAAQBh6CVggaeRlwAAAABJRU5ErkJggg==',
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
          'filename' => 'technology_white.png',
          'uri' => 'public://technology_white_1.png',
          'filemime' => 'image/png',
          'filesize' => 1989,
          'status' => 1,
          'type' => 'image',
          'uuid' => '94daa2dc-50a5-492a-a0a7-9b907a09b51d',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 31,
            'height' => 57,
          ),
          'alt' => '',
          'title' => '',
          'width' => 31,
          'height' => 57,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAB8AAAA5CAYAAADOW/ASAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyhpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDIxIDc5LjE1NTc3MiwgMjAxNC8wMS8xMy0xOTo0NDowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MTQ4RTE0NzA3NDMyMTFFNEE3NERBMjVGQjBBRjcwMEUiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MTQ4RTE0NkY3NDMyMTFFNEE3NERBMjVGQjBBRjcwMEUiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4MjU5MTAxQjcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4MjU5MTAxQzcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PkxDJ5EAAAQzSURBVHja3JlvaM1RGMd378y/aNhIQhtFW62YNRaWd0yaNGWyMoVQkhfKvze8UN54YY3whhdKEWl7MX9ixNzJn/IvGrE7wmVjf5oZc32PvlfH4/nd+7u/e0c89ene3znPeZ77O+c55zznXF84HE75W+L32G4AqAKfQDfYz7L4xLy5B7aHf5et8drx+uYLlLKFyer2fFAPQqAGZIv6kNLmrXjOZtsQbeW76fZ00Cq69DFItXTyQZdVb77PsOpT2caWVtr+6UtzXhbWJU/oTebY7+R3uy7PwUaZradF6AeHoegSz8/AHpe6um3lzQeAgPjFJzzMiBPCRoC2f+r4HBaZ4WA9yAU3wRHwJc5gTgNrQCF4BA6CTlvB9y+ucEl1ngFOsVtMIK3oB18raLuTvjIig39GBMc3UOhx6dUopE1bzkTevFT8Sp9SloiU0uYvZf4oc7stic7b1DnPbtkouqQZZCSx2zNo05aN9lSbT96Dw/yMJTPZnQEXuplgLT/P/SDON5gChvD7ePAatIEcLz0S7yLzHAwDjWA2eAnauYpdZl0K6+JeZMySOFaJzIjcAx9BEOwCRWAeqABPwcgobX20naZtLJXgA4OhCRQoXbWFgePUlQ1gn1JeQJth+qi09/OpoE+JeL8wUsS68YqDNNADlolyvxLpxtfUSLcXK0MwEWSJstugB8xRunU6GKREfhZtyeEujjgMKsY+g3eirJdb7FxF3wTdG9Asyt/RlpRgxPl5UCsqd8j9l3Ld4c2LOAukdNKWLbU/fIqxKQWbHIItQgnHLF2UP42RuxfQdmkklrwslencoRZYZZkMpHn9fWgwi8p9Me5mmf0GbiUrkzGLwiZwh0FWKcZ9thjvB1bWWsk2d2jDF+9ZbYOSd5ezbjnoBgP5fAEc4vdypd0GzUdKjNVKSg3rJvB5FoOnA6xiXY3SrkHzEe1Y2+sw9420cG0w497BVDsgdGLZijrmVeLZBFS1mKtmkxgN7oInLK+mbjRbrvJ2cxReCfqYYFx1GcjFTBxSwTFQ58X5/3tocHuPMgmsBkPASdDgoDeO5zOTp50FFxO9kzF7fbvYi5coemOZ09myLpptN84PKPP2IZgmqFb0WqLZdtPtI5SyXE6vWDIq0YA7rZQd4YWPzTKXbeO+h9sMgiAEqqw1XVLBfd1c/hxV9vyE8va/Ms/NljiNW2daDN0cplmDk3H9ORRcsiLYdGu2w0XSSUvvFZie6FTbpkyhOpAl2KLoNSY65mZFW+pxWHuZy3se8/tK2RUeEmx2O5ztEhrz4eCa1ZUveFTWjku1ll4oRgrueqr5maEOZfLYE0U3nxvLDYdDR9L280WcfuaK67hDCpX0fxoMe0Vk14tr8Zh4dTwSfFWmVsmf+JtjDPMz7dKn39OoJiLT6vo/4dykxoutI7E5k5cxn3ct3wUYAC8O7zI6BExXAAAAAElFTkSuQmCC',
        ),
      ),
    ),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'life_icon.png',
          'uri' => 'public://content/research_area/term_icon_with_color/life_icon.png',
          'filemime' => 'image/png',
          'filesize' => 2016,
          'status' => 1,
          'type' => 'image',
          'uuid' => '43f202d5-8141-494d-89ff-e8b1084362af',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 31,
            'height' => 54,
          ),
          'alt' => '',
          'title' => '',
          'width' => 31,
          'height' => 54,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAB8AAAA2CAYAAAA/DULHAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyhpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDIxIDc5LjE1NTc3MiwgMjAxNC8wMS8xMy0xOTo0NDowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6ODI1OTEwMTc3MjAwMTFFNDk5QTk5NTgzMjUzRjJBRDMiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6ODI1OTEwMTg3MjAwMTFFNDk5QTk5NTgzMjUzRjJBRDMiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpGRDMxRDVDNDcxQ0YxMUU0OTlBOTk1ODMyNTNGMkFEMyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4MjU5MTAxNjcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Pj4rleIAAAROSURBVHjatFlbSFVBFD1algW9n5SVoR/1F1khVFRqL6uLkRZYYmAahlkQFVGQfUhQ9KG9UAgqqeiBSmmRJhZkRFT0Vx9mUBZZ9CBDyx62dq0r03R0zj1OA4u557HXOjOzZ8+euWGdnZ2OWmaUlsaiOg9MB+4Ca+7n5Dx3QizgmUieeOAheRrVd8Jd7I5T2KFhkeOvFNHeId9x/YW+LkZTtesEtOKkD/EEA6+r+A0gU7k+je7a7KPbW1HlabxGcRGaC7wBbgN7fXb7TuALMAcYTV6j+GDgGlqb5/SiwL4N1Xb2whHytpocbjlQ5dgtVeR1TOILgHrL4vXk7V4c3TMQ1Xd02VebyuT7Tv6uEiZBBjfH43cJv64FSIPBA1vi4I9DdREYw17YCP6XwZafApYB8mWTgcsw6G9JWHguk3cgdU6p3p6o2YyTL4Xhewv6w8mnlkRVvBmIUh7+AHLQNa8ttHws+fsot5tVh5MA0KE8LLAhTGcTngLlVkcw4IQFVzU63TxgNQxSLE814a9EdQG4Jc72+6aIq4grKTkHDNDv9wbCJ7z6fbcgcxVIttzwZPIaI5xMi4Bl8QB5nX+CjMv4SCyuAZ4AtRijTh9jHIZqITAFWAQOc2yH0UpUS5mJXAfKfLa2jPbCs5S8xiV1v/ZRa2E4CPWHEISHaUMXTt4Kk/gol3vF6La6ELo80cVvRnlxuArtup15XIRH4Qjmb+0GXlfxfOAo0Mgxkwz0DlAJ4mkGYXleyffjad9IvnxP3t4N8VBUBwGJToUYhm9aa3cDEiW349lHL5yexRUhWRI3iRhEHrG1hcAxXFeHwhWyuNILh4AY4CmwzWtrTWPupUQDslTeZB3thySklruNbU++YE3cNLa6L/gSZ4Z5AFjM8ZSWrvDiyVovXOHHxnDK7eBGoscIVwxk8XcsM9p0GBZ4yFrkw7LxEas41/spPJHABpO4vgAIQSQIQ3GqSEVY5TWKv2XGqRZZ5WaGID6yG17jqrYLuKRMwzPoznU+YsHvFZGXP8nb8zyHkCwAZ4E9dLoMn7Egg/bCc5a8fxeXZC8cKLecQJYLr5cEcjbQYDmHayCvMbymcVNns1wkr3uQ4aZhlkQpjM/C/7BpqJXoCNwLbhrC+UB2KE1AOZCE6z2WhYUvifxN1Ovan7/QNooyNRYB7yxoj2Aarg5xM1o/ITjPo1x8YQljdG/LeBffilKDTJ22R38l89PG8QgPB9K1PXqd6u1y6CfL5Cfm5wFb5zLkCZD3E3Uyu1pO71vOLz2B6pllZxe+CuhkmeZ5Nc9NbJZl5DUGmRrGZJtlMXmNC8tnGQ7Lp1F9yWtMowZxLz2GXbVXT388iko6to9d3kInbjWt54eB+fwtZ+RDQLTDR6MlD8xWeIR3vUk8SbtOBdp8iKcaeF3FHzMqBYucHm310e2TUKVovEZvz3X+/CEjRf7g2eLT17bQ3iFfrv7CLwEGADlLN5pzBZR3AAAAAElFTkSuQmCC',
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
          'filename' => 'technology_white.png',
          'uri' => 'public://technology_white_2.png',
          'filemime' => 'image/png',
          'filesize' => 1989,
          'status' => 1,
          'type' => 'image',
          'uuid' => '52a782c2-3a69-4b13-8072-6c459853b782',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 31,
            'height' => 57,
          ),
          'alt' => '',
          'title' => '',
          'width' => 31,
          'height' => 57,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAB8AAAA5CAYAAADOW/ASAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyhpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDIxIDc5LjE1NTc3MiwgMjAxNC8wMS8xMy0xOTo0NDowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MTQ4RTE0NzA3NDMyMTFFNEE3NERBMjVGQjBBRjcwMEUiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MTQ4RTE0NkY3NDMyMTFFNEE3NERBMjVGQjBBRjcwMEUiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4MjU5MTAxQjcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4MjU5MTAxQzcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PkxDJ5EAAAQzSURBVHja3JlvaM1RGMd378y/aNhIQhtFW62YNRaWd0yaNGWyMoVQkhfKvze8UN54YY3whhdKEWl7MX9ixNzJn/IvGrE7wmVjf5oZc32PvlfH4/nd+7u/e0c89ene3znPeZ77O+c55zznXF84HE75W+L32G4AqAKfQDfYz7L4xLy5B7aHf5et8drx+uYLlLKFyer2fFAPQqAGZIv6kNLmrXjOZtsQbeW76fZ00Cq69DFItXTyQZdVb77PsOpT2caWVtr+6UtzXhbWJU/oTebY7+R3uy7PwUaZradF6AeHoegSz8/AHpe6um3lzQeAgPjFJzzMiBPCRoC2f+r4HBaZ4WA9yAU3wRHwJc5gTgNrQCF4BA6CTlvB9y+ucEl1ngFOsVtMIK3oB18raLuTvjIig39GBMc3UOhx6dUopE1bzkTevFT8Sp9SloiU0uYvZf4oc7stic7b1DnPbtkouqQZZCSx2zNo05aN9lSbT96Dw/yMJTPZnQEXuplgLT/P/SDON5gChvD7ePAatIEcLz0S7yLzHAwDjWA2eAnauYpdZl0K6+JeZMySOFaJzIjcAx9BEOwCRWAeqABPwcgobX20naZtLJXgA4OhCRQoXbWFgePUlQ1gn1JeQJth+qi09/OpoE+JeL8wUsS68YqDNNADlolyvxLpxtfUSLcXK0MwEWSJstugB8xRunU6GKREfhZtyeEujjgMKsY+g3eirJdb7FxF3wTdG9Asyt/RlpRgxPl5UCsqd8j9l3Ld4c2LOAukdNKWLbU/fIqxKQWbHIItQgnHLF2UP42RuxfQdmkklrwslencoRZYZZkMpHn9fWgwi8p9Me5mmf0GbiUrkzGLwiZwh0FWKcZ9thjvB1bWWsk2d2jDF+9ZbYOSd5ezbjnoBgP5fAEc4vdypd0GzUdKjNVKSg3rJvB5FoOnA6xiXY3SrkHzEe1Y2+sw9420cG0w497BVDsgdGLZijrmVeLZBFS1mKtmkxgN7oInLK+mbjRbrvJ2cxReCfqYYFx1GcjFTBxSwTFQ58X5/3tocHuPMgmsBkPASdDgoDeO5zOTp50FFxO9kzF7fbvYi5coemOZ09myLpptN84PKPP2IZgmqFb0WqLZdtPtI5SyXE6vWDIq0YA7rZQd4YWPzTKXbeO+h9sMgiAEqqw1XVLBfd1c/hxV9vyE8va/Ms/NljiNW2daDN0cplmDk3H9ORRcsiLYdGu2w0XSSUvvFZie6FTbpkyhOpAl2KLoNSY65mZFW+pxWHuZy3se8/tK2RUeEmx2O5ztEhrz4eCa1ZUveFTWjku1ll4oRgrueqr5maEOZfLYE0U3nxvLDYdDR9L280WcfuaK67hDCpX0fxoMe0Vk14tr8Zh4dTwSfFWmVsmf+JtjDPMz7dKn39OoJiLT6vo/4dykxoutI7E5k5cxn3ct3wUYAC8O7zI6BExXAAAAAElFTkSuQmCC',
        ),
      ),
    ),
    'field_term_image' => array(),
    'field_term_icon_with_color_' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'technology_icon.png',
          'uri' => 'public://content/research_area/term_icon_with_color/technology_icon.png',
          'filemime' => 'image/png',
          'filesize' => 2197,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'a7268396-cbd0-4002-aaaa-a1233d00f583',
          'rdf_mapping' => array(),
          'image_dimensions' => array(
            'width' => 31,
            'height' => 57,
          ),
          'alt' => '',
          'title' => '',
          'width' => 31,
          'height' => 57,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAB8AAAA5CAYAAADOW/ASAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyhpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDIxIDc5LjE1NTc3MiwgMjAxNC8wMS8xMy0xOTo0NDowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6ODI1OTEwMUI3MjAwMTFFNDk5QTk5NTgzMjUzRjJBRDMiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6ODI1OTEwMUM3MjAwMTFFNDk5QTk5NTgzMjUzRjJBRDMiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4MjU5MTAxOTcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4MjU5MTAxQTcyMDAxMUU0OTlBOTk1ODMyNTNGMkFEMyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PsHFCaQAAAUDSURBVHja3FlpaFVHFL7vNda6tLVqrQSx0YqtsaBJjKmkjYRGDSoqLlSJoj/qErGurX9CiwlS6I9WibTWtqL5EUREbdUfSRDUVFOXqOCKOxoR9ygqmlgTv5N+V8bD3Jf73n1pSgc+5t1zz5xzZ84yZ+aFGhsbndZqCbEMOjw7JONWAJ8D8vW/AYvT1jT+HY2ccIwfvRSYB7wGtAO+AL6MVkisynMttJFxWXYsayq6H4Bk4AAwH0t6yWC5aRl2Q8noha4YyABO0SxHTJ6QdjgMehPdRaCzQT4D9MfgZ8bHVQId+P4RMBTvD/P9K+hOAu8bMu4CvcFzP9Ky5yjFDoUkuw+cwQCgAPhafruK2ZKVYocyc5pb9loPEz00H6DsArpv/fB6ybbNvJJ2NttGZfOIjbwbFfkAZXvPXGIVNhuGn/lcvoPArzFExDQqG0yHW63zQKg1M1zYacWWwNDogm4NMIIx/A2WqDSeiqAjD10R0A0oB2Y3LTtebMXDOINXbPERPuBgnBSL3feLmQ3y7+6yj1H8IQstSBujFDfRwhFi+24cldtk1brKC9WLK0BJHJWXUKbZCl+EGuwygg53G/gF9r7tw5ayaYTAu98Hb1d0swDpyzGmPKo4h4C+6Gow8DF+98DvQ0BbIBO009EuR7TKJW12ZKrMBK4C95nFdvGdZMnMqPdzCG+DTmL+BgTYvuoYU67YbyfLpyfAeNlSgWzgnseHi7e/A9yB7KcvzRwvZ7Au6wScB6aAqVoJ+ErKJ9Df9VBQJfGM94sVfRC6DUAfftwi8KwP86XsvWup2CHTZtB1+t0L9KS9HcuqpeodkTI2U6ZDHWtFpys8y5LnewJJWgeX+WPLxFPofNrzkyhL7ylZYSOudasDbqnttp5b7CcWfnG66+C5rOi3KEu3K67yCmCHelkAQQ8sg/Z5zHyIpQhxKKNAkUVXRZgM4nVjiYVAOmjfe0TIn8CHLDTNlmFZcvcDRFY6ZTfpEZ0JBkMDum0+wrOKm4TMtMzIXu95Kad8iZzqQMUES9/jyu4y6wYtPOazGpPCfGA6ILXXTxKbht0zlb1P4P1DI2fMpXzZVIptSSvSzKWAXMkQEnutg9DJht0H4/lVbW/yrOOYFMrIj7aGm2qh5RnJRg6IqUwiprPl+ZQVUXm9R+yL3WuYG8TuHwCvG8rrfMqKqHyVehaH+lHFqqTUt4GjPM855GloRlbzWyqWNJcO94wFRqXPrTeLhYMcGEswrizwfv7/OzT4WMbevH8RD9+EZazy4EtEN5N12h/g2xmojOJeLzvZG4bjTYTgrYqvOx2vu5krwPdzkJkvMBS7plrOes5sM5Vih7tZIOWdLLRkzrK51jmow22x0OS83kvhM59jows1LPEiKfp47yY3DktY1Wg+SaPLgLeA7WIy8wLoPxXnfkMtxNsnCbVqt+724O3H2l/4ngQNtfbM49kkyS3UMH1BxPtYqc0nknQNGA2+o0FDLdt4lnJpNZTNUXyTDMXSEhlmGUGUp1pocpr1czU2MGioHbfQ9rBKMVHkcbYL5HByfhtu1GxyKJgFW55VNpe71jRglHFYyI9HnLulkjjfvkhezEth2Vj+8jh0xCfOoWg0K1eJgFIoq2uxywGl+Dvnn38cTD/41L0Wb7FiAoolfS5R5KH0jRavZLqxPtOt67+h/Byhy+rdLa6ch8qxxpFYwm8C63nf7bkAAwBPn9uBDoOiZwAAAABJRU5ErkJggg==',
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
