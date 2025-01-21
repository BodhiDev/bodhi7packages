#ifndef _EFL_UI_LAYOUT_BASE_EO_H_
#define _EFL_UI_LAYOUT_BASE_EO_H_

#ifndef _EFL_UI_LAYOUT_BASE_EO_CLASS_TYPE
#define _EFL_UI_LAYOUT_BASE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Layout_Base;

#endif

#ifndef _EFL_UI_LAYOUT_BASE_EO_TYPES
#define _EFL_UI_LAYOUT_BASE_EO_TYPES


#endif
/**
 * @brief EFL layout widget abstract.
 *
 * A "layout" in the context of EFL is an object which interfaces with the
 * internal layout engine. Layouts are created using the EDC language, and any
 * widget which implements this abstract must have a corresponding theme group
 * to load in order to graphically display anything.
 *
 * Theme groups for EFL widgets must be versioned. This means having a
 * "version" <tt>data.item</tt> key in the theme group for the widget. If
 * the loaded theme group for a widget has version info which is lower than the
 * currently-running EFL version, a warning will be printed to notify the user
 * that new features may be available. If the loaded theme group for a widget
 * has no version info, an error will be generated. If the loaded theme group
 * for a widget has a version that is newer than the currently-running EFL
 * version, a critical error will be printed to notify the user that the theme
 * may not be compatible.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Layout_Base
 */
#define EFL_UI_LAYOUT_BASE_CLASS efl_ui_layout_base_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_layout_base_class_get(void) EINA_CONST;

/**
 * @brief Set a multiplier for applying finger size to the layout.
 *
 * By default, any widget which inherits from this class will apply the
 * finger_size global config value with a 1:1 width:height ratio during sizing
 * calculations. This will cause the widget to scale its size based on the
 * finger_size config value.
 *
 * To disable finger_size in a layout's sizing calculations, set the
 * multipliers for both axes to 0.
 *
 * @param[in] obj The object.
 * @param[in] multiplier_x Multiplier for X axis.
 * @param[in] multiplier_y Multiplier for Y axis.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Layout_Base
 */
EAPI EAPI_WEAK void efl_ui_layout_finger_size_multiplier_set(Eo *obj, unsigned int multiplier_x, unsigned int multiplier_y);

/**
 * @brief Set a multiplier for applying finger size to the layout.
 *
 * By default, any widget which inherits from this class will apply the
 * finger_size global config value with a 1:1 width:height ratio during sizing
 * calculations. This will cause the widget to scale its size based on the
 * finger_size config value.
 *
 * To disable finger_size in a layout's sizing calculations, set the
 * multipliers for both axes to 0.
 *
 * @param[in] obj The object.
 * @param[out] multiplier_x Multiplier for X axis.
 * @param[out] multiplier_y Multiplier for Y axis.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Layout_Base
 */
EAPI EAPI_WEAK void efl_ui_layout_finger_size_multiplier_get(const Eo *obj, unsigned int *multiplier_x, unsigned int *multiplier_y);

/**
 * @brief The theme of this widget, defines which edje group will be used.
 *
 * Based on the type of widget ($klass), a given @c group and a @c style
 * (usually "default"), the edje group name will be formed for this object.
 *
 * Widgets that inherit from this class will call this function automatically
 * so it should not be called by applications, unless you are dealing directly
 * with a @ref Efl_Ui_Layout object.
 *
 * Note that @c style will be the new style of this object, as retrieved by
 * @ref efl_ui_widget_style_get. As a consequence this function can only be
 * called during construction of the object, before finalize.
 *
 * If this returns @c false the widget is very likely to become
 * non-functioning.
 *
 * @param[in] obj The object.
 * @param[in] klass The class of the group, eg. "button".
 * @param[in] group The group, eg. "base".
 * @param[in] style The style to use, eg "default".
 *
 * @return Whether the theme was successfully applied or not, see the
 * Efl.Ui.Theme.Apply_Error subset of @ref Eina_Error for more information.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Layout_Base
 */
EAPI EAPI_WEAK Eina_Error efl_ui_layout_theme_set(Eo *obj, const char *klass, const char *group, const char *style);

/**
 * @brief The theme of this widget, defines which edje group will be used.
 *
 * Based on the type of widget ($klass), a given @c group and a @c style
 * (usually "default"), the edje group name will be formed for this object.
 *
 * Widgets that inherit from this class will call this function automatically
 * so it should not be called by applications, unless you are dealing directly
 * with a @ref Efl_Ui_Layout object.
 *
 * Note that @c style will be the new style of this object, as retrieved by
 * @ref efl_ui_widget_style_get. As a consequence this function can only be
 * called during construction of the object, before finalize.
 *
 * If this returns @c false the widget is very likely to become
 * non-functioning.
 *
 * @param[in] obj The object.
 * @param[out] klass The class of the group, eg. "button".
 * @param[out] group The group, eg. "base".
 * @param[out] style The style to use, eg "default".
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Layout_Base
 */
EAPI EAPI_WEAK void efl_ui_layout_theme_get(const Eo *obj, const char **klass, const char **group, const char **style);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This flag tells if this object will automatically mirror the rotation
 * changes of the window to this object.
 *
 * @param[in] obj The object.
 * @param[in] automatic @c true to mirror orientation changes to the theme
 * @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Layout_Base
 */
EAPI EAPI_WEAK void efl_ui_layout_automatic_theme_rotation_set(Eo *obj, Eina_Bool automatic);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This flag tells if this object will automatically mirror the rotation
 * changes of the window to this object.
 *
 * @param[in] obj The object.
 *
 * @return @c true to mirror orientation changes to the theme @c false
 * otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Layout_Base
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_layout_automatic_theme_rotation_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Apply a new rotation value to this object.
 *
 * @param[in] obj The object.
 * @param[in] orientation The new rotation angle, in degrees.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Layout_Base
 */
EAPI EAPI_WEAK void efl_ui_layout_theme_rotation_apply(Eo *obj, int orientation);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief The version a theme does offer
 *
 * A theme might offer older theme versions, with this property you can detect
 * which version is running. The theme version is bound to the efl-version, the
 * oldest version you will get here is 123. The newest of released EFL.
 *
 * This property is only valid after @ref efl_ui_widget_theme_apply has been
 * called.
 *
 * In case there is no version specified, 0 is returned.
 *
 * @param[in] obj The object.
 *
 * @return Theme version of this objec, for a EFL version called 1.23, this
 * property will return 123.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Layout_Base
 */
EAPI EAPI_WEAK int efl_ui_layout_theme_version_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_LAYOUT_EVENT_THEME_CHANGED;

/** Called when theme changed
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Layout_Base
 */
#define EFL_UI_LAYOUT_EVENT_THEME_CHANGED (&(_EFL_UI_LAYOUT_EVENT_THEME_CHANGED))

#endif
