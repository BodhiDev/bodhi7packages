#ifndef _EFL_CANVAS_LAYOUT_PART_BOX_EO_H_
#define _EFL_CANVAS_LAYOUT_PART_BOX_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_PART_BOX_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_PART_BOX_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Part_Box;

#endif

#ifndef _EFL_CANVAS_LAYOUT_PART_BOX_EO_TYPES
#define _EFL_CANVAS_LAYOUT_PART_BOX_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Represents a Box created as part of a layout.
 *
 * Its lifetime is limited to one function call only, unless an extra reference
 * is explicitly held.
 *
 * @ingroup Efl_Canvas_Layout_Part_Box
 */
#define EFL_CANVAS_LAYOUT_PART_BOX_CLASS efl_canvas_layout_part_box_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_canvas_layout_part_box_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
