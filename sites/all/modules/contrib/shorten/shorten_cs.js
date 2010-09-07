// $Id$
Drupal.behaviors.shorten_cs = function (context) {
  //Make sure we can run context.find().
  if (!(context instanceof jQuery)) {
    context = $(context);
  }
  if (context.find('.shorten-cs-apply-js input:radio[name=type]:checked').val() == 'text') {
    context.find('#edit-tag-wrapper').hide();
  }
  context.find('.shorten-cs-apply-js input:radio[name=type]').change(function() {
    if ($(this).val() == 'text') {
      context.find('#edit-tag-wrapper').hide('fast');
    }
    else {
      context.find('#edit-tag-wrapper').show('fast');
    }
  });
}