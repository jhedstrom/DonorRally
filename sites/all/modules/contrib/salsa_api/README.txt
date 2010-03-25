# $Id$

This is just a quick and dirty readme:

Requires a salsa campaign manager login and a webserver that supports cURL.

To install, copy the salsa_api folder into your drupal's modules folder,

Enable the modules in the module page (listed under "Salsa"),

Under Site Configuration there will be a menu item called "Salsa API Configuration",

You will need to fill out all 3 forms for the module to work.

For the url to salsa api, type in the node url that your organization is on, for instance:

If you login to salsa with this url: https://hq-org2.democracyinaction.org/dia/hq/login.jsp

You would enter "https://hq-org2.democracyinaction.org" (no trailing /)

Keep in mind that this is still a module in heavy development, so don’t be surprised if there are
problems, however it should work well enough. Retrieving data is working quite well and wont damage any of
your data if something does go wrong, however saving data can so use with care.

I know this is not a great readme, so if you have questions please feel free to ask in the issue queue.

Developers: Please see the DEVELOPERS.txt file for some documentation on how to use the api in your modules.
