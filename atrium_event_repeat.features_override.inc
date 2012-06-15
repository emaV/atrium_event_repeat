<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function atrium_event_repeat_default_features_overrides() {
  $export = array();

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'oa_date_repeat_event_field_date';
  $features_override->description = 'OA Date Repeat: event-field_date';
  $features_override->component_type = 'content';
  $features_override->component_id = 'event-field_date';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'multiple',
          ),
        ),
        'value' => '1',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'repeat',
          ),
        ),
        'value' => 1,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'repeat_collapsed',
          ),
        ),
        'value' => '0',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'input_format',
          ),
        ),
        'value' => 'Y-m-d H:i:s',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'type',
          ),
        ),
        'value' => 'date_popup_repeat',
      ),
    ),
    'deletions' => array(),
  );
  $export['oa_date_repeat_event_field_date'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'oa_date_repeat_feed_ical_item_field_date';
  $features_override->description = 'OA Date Repeat: feed_ical_item-field_date';
  $features_override->component_type = 'content';
  $features_override->component_id = 'feed_ical_item-field_date';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'multiple',
          ),
        ),
        'value' => '1',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'repeat',
          ),
        ),
        'value' => 1,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'repeat_collapsed',
          ),
        ),
        'value' => '0',
      ),
    ),
    'deletions' => array(),
  );
  $export['oa_date_repeat_feed_ical_item_field_date'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'oa_date_repeat_views_calendar_listing';
  $features_override->description = 'OA Date Repeat: calendar_listing view';
  $features_override->component_type = 'views';
  $features_override->component_id = 'calendar_listing';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'defaults',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'relationships',
          ),
        ),
        'value' => FALSE,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'absolute',
          ),
        ),
        'value' => 0,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'link_class',
          ),
        ),
        'value' => '',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'rel',
          ),
        ),
        'value' => '',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'target',
          ),
        ),
        'value' => '',
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'empty',
          ),
        ),
        'value' => '',
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'hide_empty',
          ),
        ),
        'value' => 0,
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'empty_zero',
          ),
        ),
        'value' => 0,
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'hide_alter_empty',
          ),
        ),
        'value' => 1,
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'multiple',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'group',
          ),
        ),
        'value' => 0,
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'repeat',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'show_repeat_rule',
          ),
        ),
        'value' => 'show',
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'absolute',
          ),
        ),
        'value' => 0,
      ),
      12 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'link_class',
          ),
        ),
        'value' => '',
      ),
      13 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'rel',
          ),
        ),
        'value' => '',
      ),
      14 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'target',
          ),
        ),
        'value' => '',
      ),
      15 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'empty',
          ),
        ),
        'value' => '',
      ),
      16 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'hide_empty',
          ),
        ),
        'value' => 0,
      ),
      17 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'empty_zero',
          ),
        ),
        'value' => 0,
      ),
      18 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'hide_alter_empty',
          ),
        ),
        'value' => 1,
      ),
      19 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'multiple',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'group',
          ),
        ),
        'value' => 0,
      ),
      20 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'repeat',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'show_repeat_rule',
          ),
        ),
        'value' => 'show',
      ),
    ),
    'deletions' => array(),
  );
  $export['oa_date_repeat_views_calendar_listing'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'oa_date_repeat_views_calendar_upcoming';
  $features_override->description = 'Unselect Group multiple values for Date field';
  $features_override->component_type = 'views';
  $features_override->component_id = 'calendar_upcoming';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'absolute',
          ),
        ),
        'value' => 0,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'rel',
          ),
        ),
        'value' => '',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'hide_alter_empty',
          ),
        ),
        'value' => 1,
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'multiple',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'group',
          ),
        ),
        'value' => 0,
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'repeat',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'show_repeat_rule',
          ),
        ),
        'value' => 'show',
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'absolute',
          ),
        ),
        'value' => 0,
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'rel',
          ),
        ),
        'value' => '',
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'hide_alter_empty',
          ),
        ),
        'value' => 1,
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'multiple',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'group',
          ),
        ),
        'value' => 0,
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'repeat',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'show_repeat_rule',
          ),
        ),
        'value' => 'show',
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'absolute',
          ),
        ),
        'value' => 0,
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'rel',
          ),
        ),
        'value' => '',
      ),
      12 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'hide_alter_empty',
          ),
        ),
        'value' => 1,
      ),
      13 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'multiple',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'group',
          ),
        ),
        'value' => 0,
      ),
      14 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'repeat',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'show_repeat_rule',
          ),
        ),
        'value' => 'show',
      ),
      15 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'override',
          ),
        ),
        'value' => array(
          'button' => 'Use default',
        ),
      ),
      16 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'absolute',
          ),
        ),
        'value' => 0,
      ),
      17 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'rel',
          ),
        ),
        'value' => '',
      ),
      18 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'hide_alter_empty',
          ),
        ),
        'value' => 1,
      ),
      19 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'multiple',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'group',
          ),
        ),
        'value' => 0,
      ),
      20 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'repeat',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'show_repeat_rule',
          ),
        ),
        'value' => 'show',
      ),
      21 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'override',
          ),
        ),
        'value' => array(
          'button' => 'Use default',
        ),
      ),
      22 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'absolute',
          ),
        ),
        'value' => 0,
      ),
      23 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'rel',
          ),
        ),
        'value' => '',
      ),
      24 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'hide_alter_empty',
          ),
        ),
        'value' => 1,
      ),
      25 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'multiple',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'group',
          ),
        ),
        'value' => 0,
      ),
      26 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'repeat',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'show_repeat_rule',
          ),
        ),
        'value' => 'show',
      ),
      27 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'absolute',
          ),
        ),
        'value' => 0,
      ),
      28 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'rel',
          ),
        ),
        'value' => '',
      ),
      29 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'hide_alter_empty',
          ),
        ),
        'value' => 1,
      ),
      30 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'multiple',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'group',
          ),
        ),
        'value' => 0,
      ),
      31 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'repeat',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'show_repeat_rule',
          ),
        ),
        'value' => 'show',
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'min',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'max',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'min',
          ),
        ),
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'max',
          ),
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'min',
          ),
        ),
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'max',
          ),
        ),
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'min',
          ),
        ),
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'max',
          ),
        ),
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'date_filter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
      ),
    ),
  );
  $export['oa_date_repeat_views_calendar_upcoming'] = $features_override;

  return $export;
}
