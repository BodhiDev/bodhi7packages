#ifndef _EFL_CANVAS_VG_SHAPE_EO_H_
#define _EFL_CANVAS_VG_SHAPE_EO_H_

#ifndef _EFL_CANVAS_VG_SHAPE_EO_CLASS_TYPE
#define _EFL_CANVAS_VG_SHAPE_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Vg_Shape;

#endif

#ifndef _EFL_CANVAS_VG_SHAPE_EO_TYPES
#define _EFL_CANVAS_VG_SHAPE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl vector graphics shape class
 *
 * @ingroup Efl_Canvas_Vg_Shape
 */
#define EFL_CANVAS_VG_SHAPE_CLASS efl_canvas_vg_shape_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_vg_shape_class_get(void) EINA_CONST;

/**
 * @brief Fill of the shape object
 *
 * @param[in] obj The object.
 * @param[in] f Fill object
 *
 * @ingroup Efl_Canvas_Vg_Shape
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_shape_fill_set(Eo *obj, Efl_Canvas_Vg_Node *f);

/**
 * @brief Fill of the shape object
 *
 * @param[in] obj The object.
 *
 * @return Fill object
 *
 * @ingroup Efl_Canvas_Vg_Shape
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Vg_Node *efl_canvas_vg_shape_fill_get(const Eo *obj);

/**
 * @brief Stroke fill of the shape object
 *
 * @param[in] obj The object.
 * @param[in] f Stroke fill object
 *
 * @ingroup Efl_Canvas_Vg_Shape
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_shape_stroke_fill_set(Eo *obj, Efl_Canvas_Vg_Node *f);

/**
 * @brief Stroke fill of the shape object
 *
 * @param[in] obj The object.
 *
 * @return Stroke fill object
 *
 * @ingroup Efl_Canvas_Vg_Shape
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Vg_Node *efl_canvas_vg_shape_stroke_fill_get(const Eo *obj);

/**
 * @brief Stroke marker of the shape object
 *
 * @param[in] obj The object.
 * @param[in] m Stroke marker object
 *
 * @ingroup Efl_Canvas_Vg_Shape
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_shape_stroke_marker_set(Eo *obj, Efl_Canvas_Vg_Node *m);

/**
 * @brief Stroke marker of the shape object
 *
 * @param[in] obj The object.
 *
 * @return Stroke marker object
 *
 * @ingroup Efl_Canvas_Vg_Shape
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Vg_Node *efl_canvas_vg_shape_stroke_marker_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
