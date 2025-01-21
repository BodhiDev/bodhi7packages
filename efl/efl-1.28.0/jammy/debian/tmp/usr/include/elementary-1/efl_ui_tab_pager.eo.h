#ifndef _EFL_UI_TAB_PAGER_EO_H_
#define _EFL_UI_TAB_PAGER_EO_H_

#ifndef _EFL_UI_TAB_PAGER_EO_CLASS_TYPE
#define _EFL_UI_TAB_PAGER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Tab_Pager;

#endif

#ifndef _EFL_UI_TAB_PAGER_EO_TYPES
#define _EFL_UI_TAB_PAGER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Container for @ref Efl_Ui_Tab_Page
 *
 * This container consists out of a Efl.Ui.Tab_Bar and a place to display the
 * content of the pages. The items that are generated out of the pages will be
 * displayed in the tab bar of this pager.
 *
 * The object has an internal @ref Efl_Ui_Spotlight_Container which displays
 * the content of a item.
 *
 * @ingroup Efl_Ui_Tab_Pager
 */
#define EFL_UI_TAB_PAGER_CLASS efl_ui_tab_pager_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_tab_pager_class_get(void) EINA_CONST;

/**
 * @brief Tab bar where to add items of the @ref Efl_Ui_Tab_Page into.
 *
 * @param[in] obj The object.
 *
 * @return Tab bar for the items of the @ref Efl_Ui_Tab_Page
 *
 * @ingroup Efl_Ui_Tab_Pager
 */
EAPI EAPI_WEAK Efl_Ui_Tab_Bar *efl_ui_tab_pager_tab_bar_get(const Eo *obj);

/**
 * @brief Spotlight manager of the internal spotlight container
 *
 * @param[in] obj The object.
 * @param[in] manager The @ref Efl_Ui_Spotlight_Manager to pass to the internal
 * @ref Efl_Ui_Spotlight_Container
 *
 * @ingroup Efl_Ui_Tab_Pager
 */
EAPI EAPI_WEAK void efl_ui_tab_pager_spotlight_manager_set(Eo *obj, Efl_Ui_Spotlight_Manager *manager EFL_TRANSFER_OWNERSHIP);
#endif /* EFL_BETA_API_SUPPORT */

#endif
