#ifndef _EFL_CANVAS_SCALE_ANIMATION_EO_H_
#define _EFL_CANVAS_SCALE_ANIMATION_EO_H_

#ifndef _EFL_CANVAS_SCALE_ANIMATION_EO_CLASS_TYPE
#define _EFL_CANVAS_SCALE_ANIMATION_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Scale_Animation;

#endif

#ifndef _EFL_CANVAS_SCALE_ANIMATION_EO_TYPES
#define _EFL_CANVAS_SCALE_ANIMATION_EO_TYPES


#endif
/**
 * @brief Animated scaling effect.
 *
 * The @ref Efl_Canvas_Object will have its size and position changed due to a
 * scaling operation around a specified pivot point. Coordinates for the pivot
 * point can be relative to the object or absolute (relative to the containing
 * canvas).
 *
 * @note Changing an object's geometry using @ref efl_gfx_entity_position_get
 * or @ref efl_gfx_entity_size_get while this animation is running might lead
 * to unexpected results.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Scale_Animation
 */
#define EFL_CANVAS_SCALE_ANIMATION_CLASS efl_canvas_scale_animation_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_scale_animation_class_get(void) EINA_CONST;

/**
 * @brief Scale range and pivot object. The object's scale will change from
 * @c from_scale to @c to_scale. All of the object's vertices (i.e. the
 * corners, if it's a rectangular object) will be multiplied by this scale,
 * relative to the pivot point inside the pivot object. The pivot point is
 * another object @c pivot plus an additional offset @c center_point.
 *
 * @param[in] obj The object.
 * @param[in] from_scale Initial scale value.
 * @param[in] to_scale Ending scale value.
 * @param[in] pivot Object to use as pivot. @c NULL means the animated object
 * itself.
 * @param[in] center_point Position in pixels of the pivot point inside the
 * pivot object. <tt>(0,0)</tt> means the upper-left corner.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Scale_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_scale_set(Eo *obj, Eina_Vector2 from_scale, Eina_Vector2 to_scale, Efl_Canvas_Object *pivot, Eina_Vector2 center_point);

/**
 * @brief Scale range and pivot object. The object's scale will change from
 * @c from_scale to @c to_scale. All of the object's vertices (i.e. the
 * corners, if it's a rectangular object) will be multiplied by this scale,
 * relative to the pivot point inside the pivot object. The pivot point is
 * another object @c pivot plus an additional offset @c center_point.
 *
 * @param[in] obj The object.
 * @param[out] from_scale Initial scale value.
 * @param[out] to_scale Ending scale value.
 * @param[out] pivot Object to use as pivot. @c NULL means the animated object
 * itself.
 * @param[out] center_point Position in pixels of the pivot point inside the
 * pivot object. <tt>(0,0)</tt> means the upper-left corner.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Scale_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_scale_get(const Eo *obj, Eina_Vector2 *from_scale, Eina_Vector2 *to_scale, Efl_Canvas_Object **pivot, Eina_Vector2 *center_point);

/**
 * @brief Scale range and pivot position, relative to the canvas. The object's
 * scale will change from @c from_scale to @c to_scale. All of the object's
 * vertices (i.e. the corners, if it's a rectangular object) will be multiplied
 * by this scale, relative to the pivot point. The pivot point is relative to
 * the canvas.
 *
 * @param[in] obj The object.
 * @param[in] from_scale Initial scale value.
 * @param[in] to_scale Ending scale value.
 * @param[in] pivot_point Position of the pivot point relative to the canvas.
 * If @c null the target passed to @ref efl_animation_apply is used as pivot
 * element.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Scale_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_scale_absolute_set(Eo *obj, Eina_Vector2 from_scale, Eina_Vector2 to_scale, Eina_Position2D pivot_point);

/**
 * @brief Scale range and pivot position, relative to the canvas. The object's
 * scale will change from @c from_scale to @c to_scale. All of the object's
 * vertices (i.e. the corners, if it's a rectangular object) will be multiplied
 * by this scale, relative to the pivot point. The pivot point is relative to
 * the canvas.
 *
 * @param[in] obj The object.
 * @param[out] from_scale Initial scale value.
 * @param[out] to_scale Ending scale value.
 * @param[out] pivot_point Position of the pivot point relative to the canvas.
 * If @c null the target passed to @ref efl_animation_apply is used as pivot
 * element.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Scale_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_scale_absolute_get(const Eo *obj, Eina_Vector2 *from_scale, Eina_Vector2 *to_scale, Eina_Position2D *pivot_point);

#endif
