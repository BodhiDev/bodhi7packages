#ifndef _EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_EO_H_
#define _EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Part_Type_Provider;

#endif

#ifndef _EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_EO_TYPES
#define _EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Common Interface for the Part Type
 *
 * The getter for the part type is usefull for different types of part
 * hirachies. This interface can be used to support all the different kinds of
 * part types that are available in EFL.
 *
 * @ingroup Efl_Canvas_Layout_Part_Type_Provider
 */
#define EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_INTERFACE efl_canvas_layout_part_type_provider_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_canvas_layout_part_type_provider_interface_get(void) EINA_CONST;

/**
 * @brief Type of this part in the layout.
 *
 * @param[in] obj The object.
 *
 * @return One of the types or @c none if not an existing part.
 *
 * @ingroup Efl_Canvas_Layout_Part_Type_Provider
 */
EAPI EAPI_WEAK Efl_Canvas_Layout_Part_Type efl_canvas_layout_part_type_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
