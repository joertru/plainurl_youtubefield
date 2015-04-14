<?php

/**
 * Implements hook_views_data_alter().
 */
function plainurl_youtubefield_views_data_alter(&$data) {
  $data['node'][' YURLplain'] = array(
    'title' => 'Plain Url Youtube_field',
    'help' => 'Print Plain Text URL youtube_field',
    'field' => array(
      'handler' => 'plainurl_youtubefield_handler_city',
    ),
  );
}

?>