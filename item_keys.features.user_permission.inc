<?php
/**
 * @file
 * item_keys.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function item_keys_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer feeds.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
