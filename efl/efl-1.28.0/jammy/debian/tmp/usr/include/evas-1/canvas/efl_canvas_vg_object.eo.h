#ifndef _EFL_CANVAS_VG_OBJECT_EO_H_
#define _EFL_CANVAS_VG_OBJECT_EO_H_

#ifndef _EFL_CANVAS_VG_OBJECT_EO_CLASS_TYPE
#define _EFL_CANVAS_VG_OBJECT_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Vg_Object;

#endif

#ifndef _EFL_CANVAS_VG_OBJECT_EO_TYPES
#define _EFL_CANVAS_VG_OBJECT_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Enumeration that defines how viewbox will be filled int the vg canvs's
 * viewport. default Fill_Mode is @c none
 *
 * @ingroup Efl_Canvas_Vg_Fill_Mode
 */
typedef enum
{
  EFL_CANVAS_VG_FILL_MODE_NONE = 0, /**< Don't scale the viewbox. Placed it
                                     * inside viewport taking align property
                                     * into account */
  EFL_CANVAS_VG_FILL_MODE_STRETCH, /**< Scale the viewbox so that it matches the
                                    * canvas viewport. Aaspect ratio might be
                                    * changed. */
  EFL_CANVAS_VG_FILL_MODE_MEET, /**< Scale the viewbox so that it fits inside
                                 * canvas viewport while maintaining the aspect
                                 * ratio. At least one of the dimensions of the
                                 * viewbox should be equal to the corresponding
                                 * dimension of the viewport. */
  EFL_CANVAS_VG_FILL_MODE_SLICE /**< Scale the viewbox so that it covers the
                                 * entire canvas viewport while maintaining the
                                 * aspect ratio. At least one of the dimensions
                                 * of the viewbox should be equal to the
                                 * corresponding dimension of the viewport. */
} Efl_Canvas_Vg_Fill_Mode;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl vector graphics class
 *
 * @ingroup Efl_Canvas_Vg_Object
 */
#define EFL_CANVAS_VG_OBJECT_CLASS efl_canvas_vg_object_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_vg_object_class_get(void) EINA_CONST;

/**
 * @brief Control how the viewbox is mapped to the vg canvas's viewport.
 *
 * @param[in] obj The object.
 * @param[in] fill_mode Fill mode type
 *
 * @ingroup Efl_Canvas_Vg_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_object_fill_mode_set(Eo *obj, Efl_Canvas_Vg_Fill_Mode fill_mode);

/**
 * @brief Control how the viewbox is mapped to the vg canvas's viewport.
 *
 * @param[in] obj The object.
 *
 * @return Fill mode type
 *
 * @ingroup Efl_Canvas_Vg_Object
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Vg_Fill_Mode efl_canvas_vg_object_fill_mode_get(const Eo *obj);

/**
 * @brief The viewbox for the evas vg canvas. viewbox if set should be mapped
 * to the canvas geometry when rendering the vg tree.
 *
 * @param[in] obj The object.
 * @param[in] viewbox viewbox for the vg canvas
 *
 * @ingroup Efl_Canvas_Vg_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_object_viewbox_set(Eo *obj, Eina_Rect viewbox);

/**
 * @brief The viewbox for the evas vg canvas. viewbox if set should be mapped
 * to the canvas geometry when rendering the vg tree.
 *
 * @param[in] obj The object.
 *
 * @return viewbox for the vg canvas
 *
 * @ingroup Efl_Canvas_Vg_Object
 */
EVAS_API EVAS_API_WEAK Eina_Rect efl_canvas_vg_object_viewbox_get(const Eo *obj);

/**
 * @brief Control how the viewbox is positioned inside the viewport.
 *
 * @param[in] obj The object.
 * @param[in] align_x Alignment in the horizontal axis (0 <= align_x <= 1).
 * @param[in] align_y Alignment in the vertical axis (0 <= align_y <= 1).
 *
 * @ingroup Efl_Canvas_Vg_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_object_viewbox_align_set(Eo *obj, double align_x, double align_y);

/**
 * @brief Control how the viewbox is positioned inside the viewport.
 *
 * @param[in] obj The object.
 * @param[out] align_x Alignment in the horizontal axis (0 <= align_x <= 1).
 * @param[out] align_y Alignment in the vertical axis (0 <= align_y <= 1).
 *
 * @ingroup Efl_Canvas_Vg_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_object_viewbox_align_get(const Eo *obj, double *align_x, double *align_y);

/**
 * @brief The root node of the evas_object_vg.
 *
 * @note To manually create the shape object and show in the Vg object canvas
 * you must create the hierarchy and set as root node.
 *
 * It takes the ownership of the root node.
 *
 * @param[in] obj The object.
 * @param[in] root Root node of the VG canvas.
 *
 * @ingroup Efl_Canvas_Vg_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_vg_object_root_node_set(Eo *obj, Efl_Canvas_Vg_Node *root);

/**
 * @brief The root node of the evas_object_vg.
 *
 * @note To manually create the shape object and show in the Vg object canvas
 * you must create the hierarchy and set as root node.
 *
 * It takes the ownership of the root node.
 *
 * @param[in] obj The object.
 *
 * @return Root node of the VG canvas.
 *
 * @ingroup Efl_Canvas_Vg_Object
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Vg_Node *efl_canvas_vg_object_root_node_get(const Eo *obj);

/** The default vector size that specified from vector resource.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Vg_Object
 */
EVAS_API EVAS_API_WEAK Eina_Size2D efl_canvas_vg_object_default_size_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
