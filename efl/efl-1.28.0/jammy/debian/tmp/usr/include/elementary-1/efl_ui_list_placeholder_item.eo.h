#ifndef _EFL_UI_LIST_PLACEHOLDER_ITEM_EO_H_
#define _EFL_UI_LIST_PLACEHOLDER_ITEM_EO_H_

#ifndef _EFL_UI_LIST_PLACEHOLDER_ITEM_EO_CLASS_TYPE
#define _EFL_UI_LIST_PLACEHOLDER_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Ui_List_Placeholder_Item;

#endif

#ifndef _EFL_UI_LIST_PLACEHOLDER_ITEM_EO_TYPES
#define _EFL_UI_LIST_PLACEHOLDER_ITEM_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** List Placeholder Item class. This item have only one swallow space, thus
 * user can decorate item by filling the swallow with any kind of container.
 *
 * @ingroup Efl_Ui_List_Placeholder_Item
 */
#define EFL_UI_LIST_PLACEHOLDER_ITEM_CLASS efl_ui_list_placeholder_item_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_list_placeholder_item_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
