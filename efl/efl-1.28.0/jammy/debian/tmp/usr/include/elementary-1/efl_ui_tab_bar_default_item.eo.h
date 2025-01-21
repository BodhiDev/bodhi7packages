#ifndef _EFL_UI_TAB_BAR_DEFAULT_ITEM_EO_H_
#define _EFL_UI_TAB_BAR_DEFAULT_ITEM_EO_H_

#ifndef _EFL_UI_TAB_BAR_DEFAULT_ITEM_EO_CLASS_TYPE
#define _EFL_UI_TAB_BAR_DEFAULT_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Ui_Tab_Bar_Default_Item;

#endif

#ifndef _EFL_UI_TAB_BAR_DEFAULT_ITEM_EO_TYPES
#define _EFL_UI_TAB_BAR_DEFAULT_ITEM_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A icon that represents the default parts in the appearance of the tab
 * bar.
 *
 * Setting the icon again after there was a previous one, will trigger an
 * animation.
 *
 * @ingroup Efl_Ui_Tab_Bar_Default_Item
 */
#define EFL_UI_TAB_BAR_DEFAULT_ITEM_CLASS efl_ui_tab_bar_default_item_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_tab_bar_default_item_class_get(void) EINA_CONST;

/**
 * @brief Set the content of the default item as a image.
 *
 * The content will be re-set (means, the old content is deleted).
 *
 * @param[in] obj The object.
 * @param[in] standard_name The icon name, names are defined as standard free
 * desktop icon names.
 *
 * @ingroup Efl_Ui_Tab_Bar_Default_Item
 */
EAPI EAPI_WEAK void efl_ui_tab_bar_default_item_icon_set(Eo *obj, const char *standard_name);

/**
 * @brief Set the content of the default item as a image.
 *
 * The content will be re-set (means, the old content is deleted).
 *
 * @param[in] obj The object.
 *
 * @return The icon name, names are defined as standard free desktop icon
 * names.
 *
 * @ingroup Efl_Ui_Tab_Bar_Default_Item
 */
EAPI EAPI_WEAK const char *efl_ui_tab_bar_default_item_icon_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
