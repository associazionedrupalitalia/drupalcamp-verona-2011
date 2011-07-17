core = 7.x

api = 2

projects[] = "drupal"

; Modules

;; Contrib

;;; Admin
;projects[admin][subdir] = "contrib"
;projects[admin_menu][subdir] = "contrib"
;projects[taxonomy_manager][subdir] = "contrib"

;;; Core
projects[boxes][subdir] = "contrib"
projects[boxes][version] = 1.0-beta3
projects[boxes][patch][] = "http://drupal.org/files/issues/options_form_called_without_arg-1133116-0_drushmake.patch"
projects[ctools][subdir] = "contrib"
projects[context][subdir] = "contrib"
projects[date][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[features][subdir] = "contrib"
projects[field_group][subdir] = "contrib"
projects[field_permissions][subdir] = "contrib"
projects[link][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
projects[references][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[views][subdir] = "contrib"

;;; Optional
projects[block_class][subdir] = "contrib"
projects[block_class][version] = 1.x-dev
projects[defaultcontent][subdir] = "contrib"
projects[defaultcontent][version] = 1.0-alpha1
projects[defaultcontent][patch][] = "http://drupal.org/files/issues/defaultcontent-1087244-no-prefixes.patch"
projects[delta][subdir] = "contrib"
projects[flag][subdir] = "contrib"
projects[flag][version] = 2.x-dev
projects[flag][patch][] = "http://drupal.org/files/issues/flag-strict-1-1119842.patch"
;projects[nodequeue][subdir] = "contrib"
;projects[nodequeue][version] = 2.0-alpha1
projects[omega_tools][subdir] = "contrib"
projects[omega_tools][version] = 3.0-beta2
projects[rules][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = 2.0-beta2
projects[strongarm][patch][] = "http://silent-voice.org/sites/default/files/strongarm_set_conf-needs-to-be-called-sooner-1062452--4.patch"
projects[variable][subdir] = "contrib"
projects[webform][subdir] = "contrib"

;;; SEO
projects[google_analytics][subdir] = "contrib"
projects[metatags_quick][subdir] = "contrib"
projects[xmlsitemap][subdir] = "contrib"

;;; Editor
projects[wysiwyg][subdir] = "contrib"
;projects[imce][subdir] = "contrib"
;projects[imce_wysiwyg][subdir] = "contrib"
projects[insert][subdir] = "contrib"

;; Custom


;; Devel
projects[devel][subdir] = "devel"
projects[devel_themer][subdir] = "devel"

;; Features


;; L10n
projects[i18n][subdir] = "l10n"
projects[i18n][version] = 1.0-rc1
;projects[languageicons][subdir] = "l10n"
projects[translation_helpers][subdir] = "l10n"
projects[translation_helpers][version] = 1.x-dev
projects[translation_overview][subdir] = "l10n"
;projects[translation_management][subdir] = "l10n"
;projects[transliteration][subdir] = "l10n"


; Themes
projects[] = tao
projects[] = rubik
projects[omega][version] = 3.0-beta3

; Libraries

libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://cloud.github.com/downloads/tinymce/tinymce/tinymce_3.4.3.2.zip"
