#ifndef _EFL_CANVAS_VG_GRADIENT_EO_H_
#define _EFL_CANVAS_VG_GRADIENT_EO_H_

#ifndef _EFL_CANVAS_VG_GRADIENT_EO_CLASS_TYPE
#define _EFL_CANVAS_VG_GRADIENT_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Vg_Gradient;

#endif

#ifndef _EFL_CANVAS_VG_GRADIENT_EO_TYPES
#define _EFL_CANVAS_VG_GRADIENT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl vectopr graphics gradient abstract class
 *
 * @ingroup Efl_Canvas_Vg_Gradient
 */
#define EFL_CANVAS_VG_GRADIENT_CLASS efl_canvas_vg_gradient_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_vg_gradient_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
