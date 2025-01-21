#ifndef _EFL_CANVAS_LAYOUT_PART_SWALLOW_EO_H_
#define _EFL_CANVAS_LAYOUT_PART_SWALLOW_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_PART_SWALLOW_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_PART_SWALLOW_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Part_Swallow;

#endif

#ifndef _EFL_CANVAS_LAYOUT_PART_SWALLOW_EO_TYPES
#define _EFL_CANVAS_LAYOUT_PART_SWALLOW_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Represents a SWALLOW part of an Edje object.
 *
 * Its lifetime is limited to one function call only, unless an extra reference
 * is explicitely held.
 *
 * @ingroup Efl_Canvas_Layout_Part_Swallow
 */
#define EFL_CANVAS_LAYOUT_PART_SWALLOW_CLASS efl_canvas_layout_part_swallow_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_canvas_layout_part_swallow_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
