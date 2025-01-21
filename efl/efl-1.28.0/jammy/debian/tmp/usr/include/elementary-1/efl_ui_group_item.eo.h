#ifndef _EFL_UI_GROUP_ITEM_EO_H_
#define _EFL_UI_GROUP_ITEM_EO_H_

#ifndef _EFL_UI_GROUP_ITEM_EO_CLASS_TYPE
#define _EFL_UI_GROUP_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Ui_Group_Item;

#endif

#ifndef _EFL_UI_GROUP_ITEM_EO_TYPES
#define _EFL_UI_GROUP_ITEM_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Special @ref Efl_Ui_Item that acts as group header.
 *
 * Items in this group have to be added directly to the @ref Efl_Ui_Group_Item
 * using the @ref Efl_Pack_Linear interface, instead of being added to the
 * container. For example, an @ref Efl_Ui_List container where all items are
 * inside a group will contain only @ref Efl_Ui_Group_Item objects. Normal
 * @ref Efl_Ui_Item objects will be contained inside the group items.
 *
 * Each container chooses how group headers are rendered. See for example
 * @ref Efl_Ui_List or @ref Efl_Ui_Grid.
 *
 * @ingroup Efl_Ui_Group_Item
 */
#define EFL_UI_GROUP_ITEM_CLASS efl_ui_group_item_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_group_item_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
