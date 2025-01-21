#ifndef _EFL_UI_TABLE_STATIC_EO_H_
#define _EFL_UI_TABLE_STATIC_EO_H_

#ifndef _EFL_UI_TABLE_STATIC_EO_CLASS_TYPE
#define _EFL_UI_TABLE_STATIC_EO_CLASS_TYPE

typedef Eo Efl_Ui_Table_Static;

#endif

#ifndef _EFL_UI_TABLE_STATIC_EO_TYPES
#define _EFL_UI_TABLE_STATIC_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Widget container that arranges its elements in a uniform grid.
 *
 * For convenience, the grid has an initial size of 100 by 100 cells, so all
 * positions and sizes can be interpreted as percentages. Cells are always
 * shown with the same size, regardless of their content. Therefore, adding
 * content to one cell does not affect other cells.
 *
 * @ingroup Efl_Ui_Table_Static
 */
#define EFL_UI_TABLE_STATIC_CLASS efl_ui_table_static_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_table_static_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
