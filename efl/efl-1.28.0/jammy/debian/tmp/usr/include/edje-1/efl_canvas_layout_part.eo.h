#ifndef _EFL_CANVAS_LAYOUT_PART_EO_H_
#define _EFL_CANVAS_LAYOUT_PART_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_PART_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_PART_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Part;

#endif

#ifndef _EFL_CANVAS_LAYOUT_PART_EO_TYPES
#define _EFL_CANVAS_LAYOUT_PART_EO_TYPES


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
 * @ingroup Efl_Canvas_Layout_Part
 */
#define EFL_CANVAS_LAYOUT_PART_CLASS efl_canvas_layout_part_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_canvas_layout_part_class_get(void) EINA_CONST;

/**
 * @brief The name and value of the current state of this part (read-only).
 *
 * This is the state name as it appears in EDC description blocks. A state has
 * both a name and a value (double). The default state is "default" 0.0, but
 * this function will return "" if the part is invalid.
 *
 * @param[in] obj The object.
 * @param[out] state The name of the state.
 * @param[out] val The value of the state.
 *
 * @ingroup Efl_Canvas_Layout_Part
 */
EAPI EAPI_WEAK void efl_canvas_layout_part_state_get(const Eo *obj, const char **state, double *val);
#endif /* EFL_BETA_API_SUPPORT */

#endif
