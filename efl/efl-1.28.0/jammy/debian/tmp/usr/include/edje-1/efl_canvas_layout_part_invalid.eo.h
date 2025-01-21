#ifndef _EFL_CANVAS_LAYOUT_PART_INVALID_EO_H_
#define _EFL_CANVAS_LAYOUT_PART_INVALID_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_PART_INVALID_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_PART_INVALID_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Part_Invalid;

#endif

#ifndef _EFL_CANVAS_LAYOUT_PART_INVALID_EO_TYPES
#define _EFL_CANVAS_LAYOUT_PART_INVALID_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Common class for part proxy objects for @ref Efl_Canvas_Layout.
 *
 * As an @ref Efl_Part implementation class, all objects of this class are
 * meant to be used for one and only one function call. In pseudo-code, the use
 * of object of this type looks like the following: rect =
 * layout.part("somepart").geometry_get();
 *
 * @ingroup Efl_Canvas_Layout_Part_Invalid
 */
#define EFL_CANVAS_LAYOUT_PART_INVALID_CLASS efl_canvas_layout_part_invalid_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_canvas_layout_part_invalid_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
