#ifndef _EFL_UI_NAVIGATION_LAYOUT_EO_H_
#define _EFL_UI_NAVIGATION_LAYOUT_EO_H_

#ifndef _EFL_UI_NAVIGATION_LAYOUT_EO_CLASS_TYPE
#define _EFL_UI_NAVIGATION_LAYOUT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Navigation_Layout;

#endif

#ifndef _EFL_UI_NAVIGATION_LAYOUT_EO_TYPES
#define _EFL_UI_NAVIGATION_LAYOUT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Navigation_Layout widget.
 *
 * Navigation_Layout widget provides a layout form useful for navigation.
 * Navigation_Layout widget is used to be pushed to or popped from Stack
 * widget(Efl.Ui.Stack class) as a content.
 *
 * @ingroup Efl_Ui_Navigation_Layout
 */
#define EFL_UI_NAVIGATION_LAYOUT_CLASS efl_ui_navigation_layout_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_navigation_layout_class_get(void) EINA_CONST;

/**
 * @brief The bar object which is located at the top area as a title. e.g.
 * Navigation_Bar widget(Efl.Ui.Navigation_Bar) can be used as @c bar.
 *
 * @param[in] obj The object.
 * @param[in] value The bar object located at the top area of the Navigation
 * Layout.
 *
 * @ingroup Efl_Ui_Navigation_Layout
 */
EAPI EAPI_WEAK void efl_ui_navigation_layout_bar_set(Eo *obj, Efl_Ui_Layout_Base *value);

/**
 * @brief The bar object which is located at the top area as a title. e.g.
 * Navigation_Bar widget(Efl.Ui.Navigation_Bar) can be used as @c bar.
 *
 * @param[in] obj The object.
 *
 * @return The bar object located at the top area of the Navigation Layout.
 *
 * @ingroup Efl_Ui_Navigation_Layout
 */
EAPI EAPI_WEAK Efl_Ui_Layout_Base *efl_ui_navigation_layout_bar_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
