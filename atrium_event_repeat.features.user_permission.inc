<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_event_repeat_user_default_permissions() {
  $permissions = array();

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}
