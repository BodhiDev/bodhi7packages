#ifndef _EFL_UI_TAB_PAGE_EO_H_
#define _EFL_UI_TAB_PAGE_EO_H_

#ifndef _EFL_UI_TAB_PAGE_EO_CLASS_TYPE
#define _EFL_UI_TAB_PAGE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Tab_Page;

#endif

#ifndef _EFL_UI_TAB_PAGE_EO_TYPES
#define _EFL_UI_TAB_PAGE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A holder class for setting up a page in the pager.
 *
 * The item associated with this page can be used to setup a item which will
 * later be displayed in the @ref Efl_Ui_Tab_Bar of the @ref Efl_Ui_Tab_Pager
 * where this page was added to.
 *
 * @ingroup Efl_Ui_Tab_Page
 */
#define EFL_UI_TAB_PAGE_CLASS efl_ui_tab_page_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_tab_page_class_get(void) EINA_CONST;

/**
 * @brief Get this page represented as a @ref Efl_Ui_Tab_Bar_Default_Item
 *
 * The object returned here will reflect all the properties from the part here.
 * Properties will be automatically updated. This property is unique per
 * @ref Efl_Ui_Tab_Page.
 *
 * @param[in] obj The object.
 *
 * @return The @ref Efl_Ui_Tab_Bar_Default_Item for the tab bar.
 *
 * @ingroup Efl_Ui_Tab_Page
 */
EAPI EAPI_WEAK Efl_Ui_Tab_Bar_Default_Item *efl_ui_tab_page_tab_bar_item_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
