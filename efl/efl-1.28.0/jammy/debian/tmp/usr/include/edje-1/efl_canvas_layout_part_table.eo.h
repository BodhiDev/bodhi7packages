#ifndef _EFL_CANVAS_LAYOUT_PART_TABLE_EO_H_
#define _EFL_CANVAS_LAYOUT_PART_TABLE_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_PART_TABLE_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_PART_TABLE_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Part_Table;

#endif

#ifndef _EFL_CANVAS_LAYOUT_PART_TABLE_EO_TYPES
#define _EFL_CANVAS_LAYOUT_PART_TABLE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Represents a Table created as part of a layout.
 *
 * Can not be deleted, this is only a representation of an internal object of
 * an EFL layout.
 *
 * @ingroup Efl_Canvas_Layout_Part_Table
 */
#define EFL_CANVAS_LAYOUT_PART_TABLE_CLASS efl_canvas_layout_part_table_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_canvas_layout_part_table_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
