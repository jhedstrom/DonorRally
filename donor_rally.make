; $Id$
core = "6.x"

; Contrib projects

projects[admin][subdir] = "contrib"
projects[admin][version] = "2.0"

projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.2"

projects[better_formats][subdir] = "contrib"
projects[better_formats][version] = "1.2"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.0"

projects[cck][subdir] = "contrib"
projects[cck][version] = "2.8"

projects[content_profile][subdir] = "contrib"
projects[content_profile][version] = "1.0"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.7"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0"

projects[filefield][subdir] = "contrib"
projects[filefield][version] = "3.7"

projects[forward][subdir] = "contrib"
projects[forward][version] = "1.16"

projects[imageapi][subdir] = "contrib"
projects[imageapi][version] = "1.8"

projects[imagecache][subdir] = "contrib"
projects[imagecache][version] = "2.0-beta10"

projects[imagefield][subdir] = "contrib"
projects[imagefield][version] = "3.7"

projects[imagefield_tokens][subdir] = "contrib"
projects[imagefield_tokens][version] = "1.0"

projects[jquery_ui][subdir] = "contrib"
projects[jquery_ui][version] = "1.3"

projects[location][subdir] = "contrib"
projects[location][version] = "3.1"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.4"

projects[role_delegation][subdir] = "contrib"
projects[role_delegation][version] = "1.3"

projects[salsa_api][subdir] = "contrib"
projects[salsa_api][type] = "module"
projects[salsa_api][download][type] = "cvs"
projects[salsa_api][download][module] = "contributions/modules/salsa_api"
projects[salsa_api][download][revision] = "DRUPAL-6--2:2009-07-22"

projects[service_links][subdir] = "contrib"
projects[service_links][type] = "module"
projects[service_links][download][type] = "cvs"
projects[service_links][download][module] = "contributions/modules/service_links"
projects[service_links][download][revision] = "DRUPAL-6--2:2010-07-10"

projects[shorten][subdir] = "contrib"
projects[shorten][version] = "1.9"

projects[shorturl][subdir] = "contrib"
projects[shorturl][version] = "1.2"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[token][subdir] = "contrib"
projects[token][version] = "1.14"

projects[vertical_tabs][subdir] = "contrib"
projects[vertical_tabs][type] = "module"
projects[vertical_tabs][download][type] = "cvs"
projects[vertical_tabs][download][module] = "contributions/modules/vertical_tabs"
projects[vertical_tabs][download][revision] = "DRUPAL-6--2:2010-02-09"

projects[views_bonus][subdir] = "contrib"
projects[views_bonus][version] = "1.1"

projects[views_or][subdir] = "contrib"
projects[views_or][type] = "module"
projects[views_or][download][type] = "cvs"
projects[views_or][download][module] = "contributions/modules/views_or"
projects[views_or][download][revision] = "DRUPAL-6--2:2009-08-12"

; Patched projects

projects[simple_payments][subdir] = "contrib"
projects[simple_payments][type] = "module"
projects[simple_payments][download][type] = "cvs"
projects[simple_payments][download][module] = "contributions/modules/simple_payments"
projects[simple_payments][download][revision] = "DRUPAL-6--2:2010-08-09"
; http://drupal.org/node/839952
projects[simple_payments][patch][] = http://drupal.org/files/issues/simple_payments.payer_email.patch
; http://drupal.org/node/869142#comment-3267326
http://drupal.org/files/issues/simple_payments-869142-views-support.patch

projects[views][subdir] = "contrib"
projects[views][version] = "2.11"
; http://drupal.org/node/862072
projects[views][patch][] = http://drupal.org/files/issues/views.862072.patch

; Devel modules

projects[devel][subdir] = "devel"
projects[devel][version] = "1.22"

projects[simpletest][subdir] = "devel"
projects[simpletest][version] = "2.10"
