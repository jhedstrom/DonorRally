<?php
// $Id: donor_rally_install.profile 880 2009-09-04 00:10:54Z jhedstrom $

/**
 * Return an array of the modules to be enabled when this profile is installed.
 *
 * @return array
 *   An array of modules to enable.
 */
function donor_rally_install_profile_modules() {
  $modules = array(
    // Drupal core modules.
    'help', 'menu', 'taxonomy', 'dblog', 'path',

    // Contributed modules.
    'admin_menu',
    'advanced_help',
    'better_formats',
    'ctools',
    'content',
    // Date modules.
    'date_api', 'date_timezone', 'date', 'date_repeat', 'date_popup',
    'features',
    'pathauto',
    'path_redirect',
    'role_delegation',
    'strongarm',
    'token',
    'views',

    // Custom modules.
    'os_custom',

    // Development modules.
    'devel',
    'masquerade',
  );

  return $modules;
}

/**
 * Return a description of the profile for the initial installation screen.
 *
 * @return
 *   An array with keys 'name' and 'description' describing this profile,
 *   and optional 'language' to override the language selection for
 *   language-specific profiles.
 */
function donor_rally_install_profile_details() {
  return array(
    'name' => 'Volunteer Rally',
    'description' => st('Select this profile to enable a Volunteer Rally installation.'),
  );
}

/**
 * Return a list of tasks that this profile supports.
 *
 * @return
 *   A keyed array of tasks the profile will perform during
 *   the final stage. The keys of the array will be used internally,
 *   while the values will be displayed to the user in the installer
 *   task list.
 */
function donor_rally_install_profile_task_list() {
  $tasks['volunteer-management-modules-batch'] = st('Install volunteer rally modules');
  return $tasks;
}

/**
 * Perform any final installation tasks for this profile.
 *
 * The installer goes through the profile-select -> locale-select
 * -> requirements -> database -> profile-install-batch
 * -> locale-initial-batch -> configure -> locale-remaining-batch
 * -> finished -> done tasks, in this order, if you don't implement
 * this function in your profile.
 *
 * If this function is implemented, you can have any number of
 * custom tasks to perform after 'configure', implementing a state
 * machine here to walk the user through those tasks. First time,
 * this function gets called with $task set to 'profile', and you
 * can advance to further tasks by setting $task to your tasks'
 * identifiers, used as array keys in the hook_profile_task_list()
 * above. You must avoid the reserved tasks listed in
 * install_reserved_tasks(). If you implement your custom tasks,
 * this function will get called in every HTTP request (for form
 * processing, printing your information screens and so on) until
 * you advance to the 'profile-finished' task, with which you
 * hand control back to the installer. Each custom page you
 * return needs to provide a way to continue, such as a form
 * submission or a link. You should also set custom page titles.
 *
 * You should define the list of custom tasks you implement by
 * returning an array of them in hook_profile_task_list(), as these
 * show up in the list of tasks on the installer user interface.
 *
 * Remember that the user will be able to reload the pages multiple
 * times, so you might want to use variable_set() and variable_get()
 * to remember your data and control further processing, if $task
 * is insufficient. Should a profile want to display a form here,
 * it can; the form should set '#redirect' to FALSE, and rely on
 * an action in the submit handler, such as variable_set(), to
 * detect submission and proceed to further tasks. See the configuration
 * form handling code in install_tasks() for an example.
 *
 * Important: Any temporary variables should be removed using
 * variable_del() before advancing to the 'profile-finished' phase.
 *
 * @param $task
 *   The current $task of the install system. When hook_profile_tasks()
 *   is first called, this is 'profile'.
 * @param $url
 *   Complete URL to be used for a link or form action on a custom page,
 *   if providing any, to allow the user to proceed with the installation.
 *
 * @return
 *   An optional HTML string to display to the user. Only used if you
 *   modify the $task, otherwise discarded.
 */
function donor_rally_install_profile_tasks(&$task, $url) {

  if ($task == 'profile') {
    // Insert default user-defined node types into the database. For a complete
    // list of available node type attributes, refer to the node type API
    // documentation at: http://api.drupal.org/api/HEAD/function/hook_node_info.
    $types = array(
      array(
        'type' => 'page',
        'name' => st('Page'),
        'module' => 'node',
        'description' => st("A <em>page</em> is a simple method for creating and displaying information that rarely changes, such as an \"About us\" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site's initial home page."),
        'custom' => TRUE,
        'modified' => TRUE,
        'locked' => FALSE,
        'help' => '',
        'min_word_count' => '',
      ),
    );

    foreach ($types as $type) {
      $type = (object) _node_type_set_defaults($type);
      node_type_save($type);
    }

    // Default page to not be promoted, and have comments disabled, and create new revisions.
    variable_set('node_options_page', array('status', 'revision'));
    variable_set('comment_page', COMMENT_NODE_DISABLED);

    // Don't display date and author information for page nodes by default.
    $theme_settings = variable_get('theme_settings', array());
    $theme_settings['toggle_node_info_page'] = FALSE;
    variable_set('theme_settings', $theme_settings);

    // Create roles.
    _donor_rally_install_user_roles();
    // Assign sensible input filter defaults to roles.
    _donor_rally_install_better_formats();
    // Initial permissions.
    _donor_rally_install_set_permissions();
    // Pathauto defaults.
    _donor_rally_install_pathauto();
    // Core configuration and tweaks.
    _donor_rally_install_core();

    $task = 'volunteer-management-modules';
 }

  // We are running a batch task for this profile so basically do
  // nothing and return page.
  if (in_array($task, array('volunteer-management-modules-batch'))) {
    include_once 'includes/batch.inc';
    $output = _batch_page();
  }

  if ($task == 'volunteer-management-modules') {
    $modules = _donor_rally_install_modules();
    $files = module_rebuild_cache();
    // Create batch
    foreach ($modules as $module) {
      $batch['operations'][] = array('_install_module_batch', array($module, $files[$module]->info['name']));
    }
    $batch['operations'][] = array('_donor_rally_install_clean', array());
    $batch['finished'] = '_donor_rally_install_profile_batch_finished';
    $batch['title'] = st('Installing @drupal', array('@drupal' => drupal_install_profile_name()));
    $batch['error_message'] = st('The installation has encountered an error.');

    // Start a batch, switch to 'intranet-modules-batch' task. We need to
    // set the variable here, because batch_process() redirects.
    variable_set('install_task', 'volunteer-management-modules-batch');
    batch_set($batch);
    batch_process($url, $url);
    // Jut for cli installs. We'll never reach here on interactive installs.
    return;
  }

  return $output;
}

/**
 * Implementation of hook_form_alter().
 *
 * Allows the profile to alter the site-configuration form. This is
 * called through custom invocation, so $form_state is not populated.
 */
function donor_rally_install_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'install_configure') {
    // Set default for site name field.
    $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  }
}

/**
 * Creates Site Editor and Web Admin roles.
 */
function _donor_rally_install_user_roles() {
  foreach (array('site editor', 'web admin') as $role) {
    if (!db_result(db_query("SELECT rid FROM {role} WHERE name = '%s'", array(':role_name' => $role)))) {
      db_query("INSERT INTO {role} (name) VALUES ('%s')", $role);
      drupal_set_message(t('The %role role has been added.', array('%role' => $role)));
      $dummy = array();
      better_formats_new_role($dummy, $dummy);
    }
  }
}

/**
 * Set site editor and web admin default input format to full HTML.
 */
function _donor_rally_install_better_formats() {
  $roles = array();
  foreach (user_roles() as $rid => $name) {
    if (in_array($name, array('site editor', 'web admin'))) {
      $roles[] = $rid;
      // Float admin to top, site editor 2nd highest.
      $weight = -2 * $rid;
      db_query("UPDATE {better_formats_defaults} SET format = %d, weight = %d WHERE rid = %d AND type = '%s'", array(':format' => 2, ':weight' => $weight, ':rid' => $rid, ':type' => 'node'));
      db_query("UPDATE {better_formats_defaults} SET format = %d, weight = %d WHERE rid = %d AND type = '%s'", array(':format' => 2, ':weight' => $weight, ':rid' => $rid, ':type' => 'comment'));
    }
  }
  $current = db_result(db_query("SELECT roles FROM {filter_formats} WHERE format = 2"));
  if ($current) {
    $current = explode(',', $roles);
    $roles = array_merge($current, $roles);
  }
  $roles = ','. implode(',', $roles) .',';
  // Allow site editors and web admins to use HTML;
  db_query("UPDATE {filter_formats} SET roles = '%s' WHERE format = 2", array(':roles' => $roles));
}

/**
 * Set some sensible permissions.
 */
function _donor_rally_install_set_permissions() {
  $roles = user_roles();
  $admin_rid = array_search('web admin', $roles);
  $admin_user_perms = array(
    'access administration menu',
    'access fckeditor',
    'administer fckeditor',
    'allow fckeditor file uploads',
    'create url aliases',
    'administer menu',
    'administer nodes',
    'create page content',
    'delete any page content',
    'edit any page content',
    'revert revisions',
    'view revisions',
    'assign site editor role',
    'assign web admin role',
    'administer users',
    'access administration pages',
  );
  if (!db_result(db_query("SELECT rid FROM {permission} LEFT JOIN {role} USING (rid) WHERE name = '%s'", array(':role_name' => 'web admin')))) {
    db_query("INSERT INTO {permission} (rid, perm) VALUES (%d, '%s')", array(':rid' => $admin_rid, implode(', ', $admin_user_perms)));
    drupal_set_message(t("Set sensible defaults for %role role.", array('%role' => 'web admin')));
  }

  $site_editor_rid = array_search('site editor', $roles);
  $site_editor_user_perms = array(
    'access fckeditor',
    'allow fckeditor file uploads',
    'create url aliases',
    'create page content',
    'delete own page content',
    'edit any page content',
    'revert revisions',
    'view revisions',
  );
  if (!db_result(db_query("SELECT rid FROM {permission} LEFT JOIN {role} USING (rid) WHERE name = '%s'", array(':role_name' => 'site editor')))) {
    db_query("INSERT INTO {permission} (rid, perm) VALUES (%d, '%s')", array(':rid' => $site_editor_rid, implode(', ', $site_editor_user_perms)));
    drupal_set_message(t("Set sensible defaults for %role role.", array('%role' => 'site editor')));
  }
}

/**
 * Initial settings for pathauto and path redirect.
 */
function _donor_rally_install_pathauto() {
  // Get rid of wonky content/foo pattern.
  // The rationale is that it's easier to bulk-update pathauto aliases
  // than it is to remove unwanted ones.
  // We leave this blank because there's no one-size-fits all pattern.
  variable_set('pathauto_node_pattern', '');
  // Remove story pattern.  Even though we didn't create a story type,
  // pathauto will insert this default anyway.
  variable_del('pathauto_node_story_pattern');

  // Path redirect settings.
  $conf['path_redirect_allow_bypass'] = 0;
  $conf['path_redirect_auto_redirect'] = 1;
  $conf['path_redirect_default_status'] = '301';
  $conf['path_redirect_purge_inactive'] = '31536000'; // 1 year.
  $conf['path_redirect_redirect_warning'] = 0;
  foreach ($conf as $var => $val) {
    variable_set($var, $val);
  }
}

/**
 * Core customization.
 */
function _donor_rally_install_core() {
  // Change default anonymous to "Visitor".
  variable_set('anonymous', 'Visitor');
  
  // Increase the capacity of the Drupal watchdog.
  // The default of 1000 rows overflows too quickly, sometimes losing important
  // debug information.  100k rows is big, yet should still keep the watchdog
  // table under 10MB.
  variable_set('dblog_row_limit', 100000);
  
  // Set to open registration.
  variable_set('user_register', 1);

  // Disable all blocks.
  db_query("UPDATE {blocks} SET status = 0, region = ''");
}

/**
 * Additional modules to enable.
 */
function  _donor_rally_install_modules() {
  return array(
    // Modules required by the features below.
    'auto_nodetitle',
    'calendar', 'jcalendar',
    'cck_signup',
    'cck_signup_group',
    'content_permissions',
    'context',
    'date',
    'messaging',
    'messaging_mail',
    'node_repeat',
    'nodeaccess',
    'nodeaccess_userreference',
    'nodereference',
    'nodereference_url',
    'notifications',
    'notifications_cck_signup',
    'number',
    'optionwidgets',
    'text',
    'userreference',

    // Volunteer Rally features.
    'shift_signup', 'volunteer_shifts', 'volunteer_shifts_priority_capacity', 'volunteer_shifts_repeating', 'shift_signup_group',
  );
}

/**
 * Finished callback.
 */
function _donor_rally_install_profile_batch_finished($success, $results) {
  variable_set('install_task', 'profile-finished');
}

/**
 * Clear and rebuild caches.
 */
function _donor_rally_install_clean() {
  // Rebuild key tables/caches
  module_rebuild_cache(); // Detects the newly added bootstrap modules
  node_access_rebuild();
  drupal_get_schema(NULL, TRUE); // Clear schema DB cache
  drupal_flush_all_caches();    
  system_theme_data();  // Rebuild theme cache.
  _block_rehash();      // Rebuild block cache.
  views_invalidate_cache(); // Rebuild the views.
  menu_rebuild();       // Rebuild the menu.
  features_rebuild();   // Features rebuild scripts.
  node_access_needs_rebuild(FALSE);
}
