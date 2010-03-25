// $Id: googleanalytics.js 707 2009-04-15 19:36:38Z jhedstrom $

Drupal.behaviors.gaTrackerAttach = function(context) {

  // Attach onclick event to all links.
  $('a', context).click( function() {
    var ga = Drupal.settings.googleanalytics;
    // Expression to check for absolute internal links.
    var isInternal = new RegExp("^(https?):\/\/" + window.location.host, "i");
    // Expression to check for special links like gotwo.module /go/* links.
    var isInternalSpecial = new RegExp("(\/go\/.*)$", "i");
    // Expression to check for download links.
    var isDownload = new RegExp("\\.(" + ga.trackDownloadExtensions + ")$", "i");

    try {
      // Is the clicked URL internal?
      if (isInternal.test(this.href)) {
        // Is download tracking activated and the file extension configured for download tracking?
        if (ga.trackDownload && isDownload.test(this.href)) {
          // Download link clicked.
          var extension = isDownload.exec(this.href);
          pageTracker._trackEvent("Downloads", extension[1].toUpperCase(), this.href.replace(isInternal, ''));
        }
        else if (isInternalSpecial.test(this.href)) {
          // Keep the internal URL for Google Analytics website overlay intact.
          pageTracker._trackPageview(this.href.replace(isInternal, ''));
        }
      }
      else {
        if (ga.trackMailto && $(this).is("a[href^=mailto:]")) {
          // Mailto link clicked.
          pageTracker._trackEvent("Mails", "Click", this.href.substring(7));
        }
        else if (ga.trackOutgoing) {
          // External link clicked.
          pageTracker._trackEvent("Outgoing links", "Click", this.href);
        }
      }
    } catch(err) {}
  });
}
