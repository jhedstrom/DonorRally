// $Id$

Drupal.behaviors.shorten = function (context) {
  shorten = $('#edit-shortened-url')[0];
  if (shorten) {
    shorten.select();
    shorten.focus();
  }
  $('#edit-shortened-url').click(function() {
    shorten.select();
    shorten.focus();
  });
  $('#edit-this-shortened').click(function() {
    $('#edit-this-shortened')[0].select().focus();
  });
}