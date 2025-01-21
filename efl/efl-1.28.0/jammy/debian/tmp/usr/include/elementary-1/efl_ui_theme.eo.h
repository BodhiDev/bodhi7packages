#ifndef _EFL_UI_THEME_EO_H_
#define _EFL_UI_THEME_EO_H_

#ifndef _EFL_UI_THEME_EO_CLASS_TYPE
#define _EFL_UI_THEME_EO_CLASS_TYPE

typedef Eo Efl_Ui_Theme;

#endif

#ifndef _EFL_UI_THEME_EO_TYPES
#define _EFL_UI_THEME_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl Ui Theme class
 *
 * @ingroup Efl_Ui_Theme
 */
#define EFL_UI_THEME_CLASS efl_ui_theme_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_theme_class_get(void) EINA_CONST;

/**
 * @brief This is the default theme.
 *
 * All widgets use the default theme implicitly unless a specific theme is set.
 *
 * @return The default theme handle
 *
 * @ingroup Efl_Ui_Theme
 */
EAPI EAPI_WEAK Efl_Ui_Theme *efl_ui_theme_default_get(void);

/**
 * @brief Appends a theme extension to the list of extensions. This is intended
 * when an application needs more styles of widgets or new widget themes that
 * the default does not provide (or may not provide). The application has
 * "extended" usage by coming up with new custom style names for widgets for
 * specific uses, but as these are not "standard", they are not guaranteed to
 * be provided by a default theme. This means the application is required to
 * provide these extra elements itself in specific Edje files. This call adds
 * one of those Edje files to the theme search path to be searched after the
 * default theme. The use of this call is encouraged when default styles do not
 * meet the needs of the application. Use this call instead of
 * @ref efl_ui_theme_overlay_add for almost all cases.
 *
 * @param[in] obj The object.
 * @param[in] item The Edje file path to be used
 *
 * @ingroup Efl_Ui_Theme
 */
EAPI EAPI_WEAK void efl_ui_theme_extension_add(Eo *obj, const char *item);

/**
 * @brief Deletes a theme extension from the list of extensions.
 *
 * @param[in] obj The object.
 * @param[in] item The Edje file path not to be used
 *
 * @ingroup Efl_Ui_Theme
 */
EAPI EAPI_WEAK void efl_ui_theme_extension_del(Eo *obj, const char *item);

/**
 * @brief Prepends a theme overlay to the list of overlays. Use this if your
 * application needs to provide some custom overlay theme (An Edje file that
 * replaces some default styles of widgets) where adding new styles, or
 * changing system theme configuration is not possible. Do NOT use this instead
 * of a proper system theme configuration. Use proper configuration files,
 * profiles, environment variables etc. to set a theme so that the theme can be
 * altered by simple configuration by a user. Using this call to achieve that
 * effect is abusing the API and will create lots of trouble.
 *
 * @param[in] obj The object.
 * @param[in] item The Edje file path to be used
 *
 * @ingroup Efl_Ui_Theme
 */
EAPI EAPI_WEAK void efl_ui_theme_overlay_add(Eo *obj, const char *item);

/**
 * @brief Delete a theme overlay from the list of overlays.
 *
 * @param[in] obj The object.
 * @param[in] item The Edje file path not to be used
 *
 * @ingroup Efl_Ui_Theme
 */
EAPI EAPI_WEAK void efl_ui_theme_overlay_del(Eo *obj, const char *item);
#endif /* EFL_BETA_API_SUPPORT */

#endif
