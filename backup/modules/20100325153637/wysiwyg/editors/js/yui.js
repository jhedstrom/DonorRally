// $Id: yui.js 667 2009-03-23 18:11:10Z jhedstrom $

/**
 * Attach this editor to a target element.
 */
Drupal.wysiwyg.editor.attach.yui = function(context, params, settings) {
  // Apply theme.
  $('#' + params.field).parent().addClass('yui-skin-' + settings.theme);
  // Attach editor.
  var editor = new YAHOO.widget.Editor(params.field, settings);
  editor.render();
};

/**
 * Detach a single or all editors.
 *
 * See Drupal.wysiwyg.editor.detach.none() for a full desciption of this hook.
 */
Drupal.wysiwyg.editor.detach.yui = function(context, params) {
  if (typeof params != 'undefined') {
    var instance = YAHOO.widget.EditorInfo.getEditorById(params.field);
    if (instance) {
      instance.saveHTML();
      instance.destroy();
    }
  }
  else {
    for (var e in YAHOO.widget.EditorInfo._instances) {
      // Save contents of all editors back into textareas.
      var instance = YAHOO.widget.EditorInfo._instances[e];
      instance.saveHTML();
      instance.destroy();
      // Remove all editor instances.
      //nicEditors.editors[e].nicInstances = [];
    }
  }
};

