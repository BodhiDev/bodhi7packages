#ifndef _EFL_CANVAS_POLYGON_EO_H_
#define _EFL_CANVAS_POLYGON_EO_H_

#ifndef _EFL_CANVAS_POLYGON_EO_CLASS_TYPE
#define _EFL_CANVAS_POLYGON_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Polygon;

#endif

#ifndef _EFL_CANVAS_POLYGON_EO_TYPES
#define _EFL_CANVAS_POLYGON_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Low-level polygon object
 *
 * @ingroup Efl_Canvas_Polygon
 */
#define EFL_CANVAS_POLYGON_CLASS efl_canvas_polygon_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_polygon_class_get(void) EINA_CONST;

/**
 * @brief Adds the given point to the given evas polygon object.
 *
 * @param[in] obj The object.
 * @param[in] pos A point coordinate.
 *
 * @ingroup Efl_Canvas_Polygon
 */
EVAS_API EVAS_API_WEAK void efl_canvas_polygon_point_add(Eo *obj, Eina_Position2D pos);

/** Removes all of the points from the given evas polygon object.
 *
 * @ingroup Efl_Canvas_Polygon
 */
EVAS_API EVAS_API_WEAK void efl_canvas_polygon_points_clear(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
