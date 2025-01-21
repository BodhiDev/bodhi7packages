#ifndef _EFL_UI_LIST_DEFAULT_ITEM_EO_H_
#define _EFL_UI_LIST_DEFAULT_ITEM_EO_H_

#ifndef _EFL_UI_LIST_DEFAULT_ITEM_EO_CLASS_TYPE
#define _EFL_UI_LIST_DEFAULT_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Ui_List_Default_Item;

#endif

#ifndef _EFL_UI_LIST_DEFAULT_ITEM_EO_TYPES
#define _EFL_UI_LIST_DEFAULT_ITEM_EO_TYPES


#endif
/** Default Item class to be used inside @ref Efl_Ui_List containers. It
 * displays the three parts in horizontal order: @c icon, @c text and @c extra.
 * Theming can change this arrangement.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_List_Default_Item
 */
#define EFL_UI_LIST_DEFAULT_ITEM_CLASS efl_ui_list_default_item_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_list_default_item_class_get(void) EINA_CONST;

#endif
