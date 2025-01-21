#ifndef _EFL_UI_TAB_BAR_EO_H_
#define _EFL_UI_TAB_BAR_EO_H_

#ifndef _EFL_UI_TAB_BAR_EO_CLASS_TYPE
#define _EFL_UI_TAB_BAR_EO_CLASS_TYPE

typedef Eo Efl_Ui_Tab_Bar;

#endif

#ifndef _EFL_UI_TAB_BAR_EO_TYPES
#define _EFL_UI_TAB_BAR_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A selectable box of items.
 *
 * Within one object only one @ref Efl_Ui_Tab_Bar_Default_Item can be selected
 * at the same time.
 *
 * @ingroup Efl_Ui_Tab_Bar
 */
#define EFL_UI_TAB_BAR_CLASS efl_ui_tab_bar_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_tab_bar_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
