#ifndef _EFL_UI_DEFAULT_ITEM_EO_H_
#define _EFL_UI_DEFAULT_ITEM_EO_H_

#ifndef _EFL_UI_DEFAULT_ITEM_EO_CLASS_TYPE
#define _EFL_UI_DEFAULT_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Ui_Default_Item;

#endif

#ifndef _EFL_UI_DEFAULT_ITEM_EO_TYPES
#define _EFL_UI_DEFAULT_ITEM_EO_TYPES


#endif
/**
 * @brief Default Item Class.
 *
 * This class defines the standard parts for most @ref Efl_Ui_Item: Text, Icon
 * and Extra. Placement and layout details for these parts are left to the
 * extending classes like @ref Efl_Ui_List_Default_Item and
 * @ref Efl_Ui_Grid_Default_Item which should normally be used. Text-related
 * changes are mirrored to the @c text part for convenience. Content-related
 * changes are mirrored to the @c icon part.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Default_Item
 */
#define EFL_UI_DEFAULT_ITEM_CLASS efl_ui_default_item_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_default_item_class_get(void) EINA_CONST;

#endif
