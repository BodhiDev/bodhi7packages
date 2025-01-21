#ifndef _EFL_CANVAS_RECTANGLE_EO_H_
#define _EFL_CANVAS_RECTANGLE_EO_H_

#ifndef _EFL_CANVAS_RECTANGLE_EO_CLASS_TYPE
#define _EFL_CANVAS_RECTANGLE_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Rectangle;

#endif

#ifndef _EFL_CANVAS_RECTANGLE_EO_TYPES
#define _EFL_CANVAS_RECTANGLE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Evas canvas rectangle class
 *
 * @ingroup Efl_Canvas_Rectangle
 */
#define EFL_CANVAS_RECTANGLE_CLASS efl_canvas_rectangle_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_rectangle_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
