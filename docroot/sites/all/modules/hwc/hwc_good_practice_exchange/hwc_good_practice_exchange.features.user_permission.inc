<?php
/**
 * @file
 * hwc_good_practice_exchange.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hwc_good_practice_exchange_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create document content'.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      'campaign partner' => 'campaign partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document content'.
  $permissions['delete any document content'] = array(
    'name' => 'delete any document content',
    'roles' => array(
      'campaign partner' => 'campaign partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document content'.
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(
      'campaign partner' => 'campaign partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in document'.
  $permissions['delete terms in document'] = array(
    'name' => 'delete terms in document',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any document content'.
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(
      'campaign partner' => 'campaign partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document content'.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      'campaign partner' => 'campaign partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in document'.
  $permissions['edit terms in document'] = array(
    'name' => 'edit terms in document',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}