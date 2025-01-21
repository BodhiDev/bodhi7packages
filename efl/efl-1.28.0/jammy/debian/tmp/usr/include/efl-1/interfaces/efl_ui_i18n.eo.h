#ifndef _EFL_UI_I18N_EO_H_
#define _EFL_UI_I18N_EO_H_

#ifndef _EFL_UI_I18N_EO_CLASS_TYPE
#define _EFL_UI_I18N_EO_CLASS_TYPE

typedef Eo Efl_Ui_I18n;

#endif

#ifndef _EFL_UI_I18N_EO_TYPES
#define _EFL_UI_I18N_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** A common Internationalization interface for UI objects.
 *
 * @ingroup Efl_Ui_I18n
 */
#define EFL_UI_I18N_INTERFACE efl_ui_i18n_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_i18n_interface_get(void) EINA_CONST;

/**
 * @brief Whether this object should be mirrored.
 *
 * If mirrored, an object is in RTL (right to left) mode instead of LTR (left
 * to right).
 *
 * @param[in] obj The object.
 * @param[in] rtl @c true for RTL, @c false for LTR (default).
 *
 * @ingroup Efl_Ui_I18n
 */
EAPI EAPI_WEAK void efl_ui_mirrored_set(Eo *obj, Eina_Bool rtl);

/**
 * @brief Whether this object should be mirrored.
 *
 * If mirrored, an object is in RTL (right to left) mode instead of LTR (left
 * to right).
 *
 * @param[in] obj The object.
 *
 * @return @c true for RTL, @c false for LTR (default).
 *
 * @ingroup Efl_Ui_I18n
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_mirrored_get(const Eo *obj);

/**
 * @brief Whether the property @ref efl_ui_mirrored_get should be set
 * automatically.
 *
 * If enabled, the system or application configuration will be used to set the
 * value of @ref efl_ui_mirrored_get.
 *
 * This property may be implemented by high-level widgets (in Efl.Ui) but not
 * by low-level widgets (in @ref Efl_Canvas_Scene) as the configuration should
 * affect only high-level widgets.
 *
 * @param[in] obj The object.
 * @param[in] automatic Whether the widget uses automatic mirroring
 *
 * @ingroup Efl_Ui_I18n
 */
EAPI EAPI_WEAK void efl_ui_mirrored_automatic_set(Eo *obj, Eina_Bool automatic);

/**
 * @brief Whether the property @ref efl_ui_mirrored_get should be set
 * automatically.
 *
 * If enabled, the system or application configuration will be used to set the
 * value of @ref efl_ui_mirrored_get.
 *
 * This property may be implemented by high-level widgets (in Efl.Ui) but not
 * by low-level widgets (in @ref Efl_Canvas_Scene) as the configuration should
 * affect only high-level widgets.
 *
 * @param[in] obj The object.
 *
 * @return Whether the widget uses automatic mirroring
 *
 * @ingroup Efl_Ui_I18n
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_mirrored_automatic_get(const Eo *obj);

/**
 * @brief The (human) language for this object.
 *
 * @param[in] obj The object.
 * @param[in] language The current language.
 *
 * @ingroup Efl_Ui_I18n
 */
EAPI EAPI_WEAK void efl_ui_language_set(Eo *obj, const char *language);

/**
 * @brief The (human) language for this object.
 *
 * @param[in] obj The object.
 *
 * @return The current language.
 *
 * @ingroup Efl_Ui_I18n
 */
EAPI EAPI_WEAK const char *efl_ui_language_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
