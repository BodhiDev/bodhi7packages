#ifndef _EFL_CANVAS_ROTATE_ANIMATION_EO_H_
#define _EFL_CANVAS_ROTATE_ANIMATION_EO_H_

#ifndef _EFL_CANVAS_ROTATE_ANIMATION_EO_CLASS_TYPE
#define _EFL_CANVAS_ROTATE_ANIMATION_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Rotate_Animation;

#endif

#ifndef _EFL_CANVAS_ROTATE_ANIMATION_EO_TYPES
#define _EFL_CANVAS_ROTATE_ANIMATION_EO_TYPES


#endif
/**
 * @brief Animated rotation effect.
 *
 * The @ref Efl_Canvas_Object will rotate around a pivot point from one degree
 * to another. Coordinates for the pivot point can be relative to another
 * object or absolute (relative to the containing canvas).
 *
 * @note Changing an object's position using @ref efl_gfx_entity_position_get
 * while this animation is running might lead to unexpected results.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Rotate_Animation
 */
#define EFL_CANVAS_ROTATE_ANIMATION_CLASS efl_canvas_rotate_animation_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_rotate_animation_class_get(void) EINA_CONST;

/**
 * @brief Degree range to animate and pivot object. The object will rotate from
 * @c from_degree to @c to_degree around the pivot point. All of the object's
 * vertices (i.e. the corners, if it's a rectangular object) will be rotated by
 * these degrees, relative to the pivot point inside the pivot object. The
 * pivot point is another object @c pivot plus an additional offset
 * @c center_point.
 *
 * @param[in] obj The object.
 * @param[in] from_degree Initial rotation (from 0 to 360). 0 means no
 * rotation.
 * @param[in] to_degree Ending rotation (from 0 to 360). 0 means no rotation.
 * @param[in] pivot Object to use as pivot. @c NULL means the animated object
 * itself.
 * @param[in] center_point Position in pixels of the pivot point inside the
 * pivot object. <tt>(0,0)</tt> means the upper-left corner.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Rotate_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_rotate_set(Eo *obj, double from_degree, double to_degree, Efl_Canvas_Object *pivot, Eina_Vector2 center_point);

/**
 * @brief Degree range to animate and pivot object. The object will rotate from
 * @c from_degree to @c to_degree around the pivot point. All of the object's
 * vertices (i.e. the corners, if it's a rectangular object) will be rotated by
 * these degrees, relative to the pivot point inside the pivot object. The
 * pivot point is another object @c pivot plus an additional offset
 * @c center_point.
 *
 * @param[in] obj The object.
 * @param[out] from_degree Initial rotation (from 0 to 360). 0 means no
 * rotation.
 * @param[out] to_degree Ending rotation (from 0 to 360). 0 means no rotation.
 * @param[out] pivot Object to use as pivot. @c NULL means the animated object
 * itself.
 * @param[out] center_point Position in pixels of the pivot point inside the
 * pivot object. <tt>(0,0)</tt> means the upper-left corner.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Rotate_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_rotate_get(const Eo *obj, double *from_degree, double *to_degree, Efl_Canvas_Object **pivot, Eina_Vector2 *center_point);

/**
 * @brief Degree range to animate and absolute pivot point. The object will
 * rotate from @c from_degree to @c to_degree around the pivot point. All of
 * the object's vertices (i.e. the corners, if it's a rectangular object) will
 * be rotated by these degrees, relative to an absolute pivot point. The pivot
 * point is relative to the canvas.
 *
 * @param[in] obj The object.
 * @param[in] from_degree Initial rotation (from 0 to 360). 0 means no
 * rotation.
 * @param[in] to_degree Ending rotation (from 0 to 360). 0 means no rotation.
 * @param[in] pivot_point Position of the pivot point relative to the canvas.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Rotate_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_rotate_absolute_set(Eo *obj, double from_degree, double to_degree, Eina_Position2D pivot_point);

/**
 * @brief Degree range to animate and absolute pivot point. The object will
 * rotate from @c from_degree to @c to_degree around the pivot point. All of
 * the object's vertices (i.e. the corners, if it's a rectangular object) will
 * be rotated by these degrees, relative to an absolute pivot point. The pivot
 * point is relative to the canvas.
 *
 * @param[in] obj The object.
 * @param[out] from_degree Initial rotation (from 0 to 360). 0 means no
 * rotation.
 * @param[out] to_degree Ending rotation (from 0 to 360). 0 means no rotation.
 * @param[out] pivot_point Position of the pivot point relative to the canvas.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Rotate_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_rotate_absolute_get(const Eo *obj, double *from_degree, double *to_degree, Eina_Position2D *pivot_point);

#endif
