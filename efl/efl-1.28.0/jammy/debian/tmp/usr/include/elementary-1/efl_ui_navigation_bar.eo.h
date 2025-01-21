#ifndef _EFL_UI_NAVIGATION_BAR_EO_H_
#define _EFL_UI_NAVIGATION_BAR_EO_H_

#ifndef _EFL_UI_NAVIGATION_BAR_EO_CLASS_TYPE
#define _EFL_UI_NAVIGATION_BAR_EO_CLASS_TYPE

typedef Eo Efl_Ui_Navigation_Bar;

#endif

#ifndef _EFL_UI_NAVIGATION_BAR_EO_TYPES
#define _EFL_UI_NAVIGATION_BAR_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Navigation_Bar widget.
 *
 * Navigation_Bar widget provides a bar form useful for navigation.
 * Navigation_Bar has a back button which is used to navigate to the previous
 * content in the stack.
 *
 * @ingroup Efl_Ui_Navigation_Bar
 */
#define EFL_UI_NAVIGATION_BAR_CLASS efl_ui_navigation_bar_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_navigation_bar_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
