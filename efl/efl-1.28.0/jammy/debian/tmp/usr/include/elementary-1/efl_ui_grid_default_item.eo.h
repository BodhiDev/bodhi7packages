#ifndef _EFL_UI_GRID_DEFAULT_ITEM_EO_H_
#define _EFL_UI_GRID_DEFAULT_ITEM_EO_H_

#ifndef _EFL_UI_GRID_DEFAULT_ITEM_EO_CLASS_TYPE
#define _EFL_UI_GRID_DEFAULT_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Ui_Grid_Default_Item;

#endif

#ifndef _EFL_UI_GRID_DEFAULT_ITEM_EO_TYPES
#define _EFL_UI_GRID_DEFAULT_ITEM_EO_TYPES


#endif
/** Default Item class to be used inside @ref Efl_Ui_Grid containers. The
 * @c icon part is in the middle, the @c extra part overlaps it on its
 * upper-right corner. The @c text part is centered below the @c icon. Theming
 * can change this arrangement.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Grid_Default_Item
 */
#define EFL_UI_GRID_DEFAULT_ITEM_CLASS efl_ui_grid_default_item_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_grid_default_item_class_get(void) EINA_CONST;

#endif
