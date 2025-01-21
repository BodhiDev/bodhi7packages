#ifndef _EFL_CANVAS_VG_NODE_EO_H_
#define _EFL_CANVAS_VG_NODE_EO_H_

#ifndef _EFL_CANVAS_VG_NODE_EO_CLASS_TYPE
#define _EFL_CANVAS_VG_NODE_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Vg_Node;

#endif

#ifndef _EFL_CANVAS_VG_NODE_EO_TYPES
#define _EFL_CANVAS_VG_NODE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl vector graphics abstract class
 *
 * @ingroup Efl_Canvas_Vg_Node
 */
#define EFL_CANVAS_VG_NODE_CLASS efl_canvas_vg_node_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_vg_node_class_get(void) EINA_CONST;

/**
 * @brief The transformation matrix to be used for this node object.
 *
 * @note Pass @c null to cancel the applied transformation.
 *
 * @param[in] obj The object.
 * @param[in] m Transformation matrix.
 *
 * @ingroup Efl_Canvas_Vg_Node
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_node_transformation_set(Eo *obj, const Eina_Matrix3 *m);

/**
 * @brief The transformation matrix to be used for this node object.
 *
 * @note Pass @c null to cancel the applied transformation.
 *
 * @param[in] obj The object.
 *
 * @return Transformation matrix.
 *
 * @ingroup Efl_Canvas_Vg_Node
 */
EVAS_API EVAS_API_WEAK const Eina_Matrix3 *efl_canvas_vg_node_transformation_get(const Eo *obj);

/**
 * @brief The origin position of the node object.
 *
 * This origin position affects node transformation.
 *
 * @param[in] obj The object.
 * @param[in] x @c origin x position.
 * @param[in] y @c origin y position.
 *
 * @ingroup Efl_Canvas_Vg_Node
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_node_origin_set(Eo *obj, double x, double y);

/**
 * @brief The origin position of the node object.
 *
 * This origin position affects node transformation.
 *
 * @param[in] obj The object.
 * @param[out] x @c origin x position.
 * @param[out] y @c origin y position.
 *
 * @ingroup Efl_Canvas_Vg_Node
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_node_origin_get(const Eo *obj, double *x, double *y);

/**
 * @brief Set a composite target node to this node object.
 *
 * @param[in] obj The object.
 * @param[in] target Composite target node
 * @param[in] method Composite Method.
 *
 * @ingroup Efl_Canvas_Vg_Node
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_node_comp_method_set(Eo *obj, Efl_Canvas_Vg_Node *target, Efl_Gfx_Vg_Composite_Method method);
#endif /* EFL_BETA_API_SUPPORT */

#endif
