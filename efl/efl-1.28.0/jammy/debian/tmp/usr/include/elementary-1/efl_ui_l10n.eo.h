#ifndef _EFL_UI_L10N_EO_H_
#define _EFL_UI_L10N_EO_H_

#ifndef _EFL_UI_L10N_EO_CLASS_TYPE
#define _EFL_UI_L10N_EO_CLASS_TYPE

typedef Eo Efl_Ui_L10n;

#endif

#ifndef _EFL_UI_L10N_EO_TYPES
#define _EFL_UI_L10N_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Interface for all translatable text APIs.
 *
 * This is intended for translation of human readable on-screen text strings
 * but may also be used in text-to-speech situations.
 *
 * @ingroup Efl_Ui_L10n
 */
#define EFL_UI_L10N_INTERFACE efl_ui_l10n_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_l10n_interface_get(void) EINA_CONST;

/**
 * @brief A unique string to be translated.
 *
 * Often this will be a human-readable string (e.g. in English) but it can also
 * be a unique string identifier that must then be translated to the current
 * locale with @c dgettext() or any similar mechanism.
 *
 * Setting this property will enable translation for this object or part.
 *
 * Sets the new untranslated string and domain for this object.
 *
 * @param[in] obj The object.
 * @param[in] label A unique (untranslated) string.
 * @param[in] domain A translation domain. If @c null this uses the default
 * domain (eg. set by @c textdomain()).
 *
 * @ingroup Efl_Ui_L10n
 */
EAPI EAPI_WEAK void efl_ui_l10n_text_set(Eo *obj, const char *label, const char *domain);

/**
 * @brief A unique string to be translated.
 *
 * Often this will be a human-readable string (e.g. in English) but it can also
 * be a unique string identifier that must then be translated to the current
 * locale with @c dgettext() or any similar mechanism.
 *
 * Setting this property will enable translation for this object or part.
 *
 * @param[in] obj The object.
 * @param[out] domain A translation domain. If @c null this means the default
 * domain is used.
 *
 * @return This returns the untranslated value of @c label. The translated
 * string can usually be retrieved with @ref efl_text_get.
 *
 * @ingroup Efl_Ui_L10n
 */
EAPI EAPI_WEAK const char *efl_ui_l10n_text_get(const Eo *obj, const char **domain);

#ifdef EFL_UI_L10N_PROTECTED
/**
 * @brief Requests this object to update its text strings for the current
 * locale.
 *
 * Currently strings are translated with @c dgettext, so support for this
 * function may depend on the platform. It is up to the application to provide
 * its own translation data.
 *
 * This function is a hook meant to be implemented by any object that supports
 * translation. This can be called whenever a new object is created or when the
 * current locale changes, for instance. This should only trigger further calls
 * to @ref efl_ui_l10n_translation_update to children objects.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Ui_L10n
 */
EAPI EAPI_WEAK void efl_ui_l10n_translation_update(Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#endif
