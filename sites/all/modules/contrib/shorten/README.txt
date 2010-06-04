// $Id$

=======
SUMMARY
=======

This module allows shortening URLs via almost any service. This is accomplished
either via the API or with an included block. Over 15 services are available by
default and additional services are easily added. If the shorturl module is
installed, that can be used to shorten URLs as well.

=======
DETAILS
=======

This module includes a number of features that will ensure the best experience
for you and your users. When retrieving a URL, Shorten URLs will time out if the
shortening service you chose does not respond after 3 seconds.  It will then use
a backup service of your choice to make sure you still have a shortened URL. If
retrieving a shortened URL fails, an explanation will be logged.

If you have cURL enabled, you can choose whether to retrieve shortened URLs via
cURL or PHP's native functions. Which one is best for you depends on your system
resources. If you don't have cURL enabled, you will not be able to choose the
cURL option.

You can also choose whether to allow users to choose which shortening service to
use on the block. Note however that since shortened URLs are cached, requesting
the same shortened URL from different services may return results from the first
service in both instances.

===
API
===

shorten_url($original = '', $service = '')
  Returns a shortened URL. $original is the URL to be shortened, and $service is
the service to use to shorten the URL. For service, you can use any string that
appears in the default service options on the settings page. If $original is not
specified it defaults to the current page; if $service is not specified it
defaults to the primary service set in the settings for this module. Shortened
URLs are cached for performance.

hook_shorten_service($original)
  $original is the URL to be shortened. This hook should return an array keyed
by the name of the service, with values as one of the options below:

<?php
  return array(
    //Automatically gets the shortened URL based on the URL to TinyURL's API
    //provided below.
    'TinyURL' => 'http://tinyurl.com/api-create.php?url=',
    //This is equivalent to the above.
    'TinyURL' => array(
      'custom' => FALSE,
      'url' => 'http://tinyurl.com/api-create.php?url=',
    ),

    //Does custom processing within the hook and passes an already-shortened URL.
    //Use this for services requiring $_POST or JSON.
    'myservice' => array(
      'custom' => TRUE,
      'url' => mymodule_get_short_myservice_url($original),
    ),

    //Automatically gets the shortened URL from the value of the 'tag' element
    //when the relevant service provides the response as XML.
    'short.ie' => array(
      'custom' => 'xml',
      'url' => 'http://short.ie/api?url=',
      'tag' => 'shortened',
    ),
  );
?>

=====
NOTES
=====

IceCreamYou wrote and maintains the module.
Please report issues in the module's queue at
http://drupal.org/project/issues/shorten