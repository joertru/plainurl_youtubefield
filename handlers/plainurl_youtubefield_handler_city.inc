<?php

/**
 * This field handler displays a node's nid with custom text.
 *
 * @ingroup views_field_handlers
 */
class plainurl_youtubefield_handler_city extends views_handler_field_entity {
  function render($values) {
    // Operation data views
    return $values->_field_data['nid']['entity']->field_video['und'][0]['input'];
  }
}

?>