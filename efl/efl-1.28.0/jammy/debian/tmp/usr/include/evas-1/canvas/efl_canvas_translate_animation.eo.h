#ifndef _EFL_CANVAS_TRANSLATE_ANIMATION_EO_H_
#define _EFL_CANVAS_TRANSLATE_ANIMATION_EO_H_

#ifndef _EFL_CANVAS_TRANSLATE_ANIMATION_EO_CLASS_TYPE
#define _EFL_CANVAS_TRANSLATE_ANIMATION_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Translate_Animation;

#endif

#ifndef _EFL_CANVAS_TRANSLATE_ANIMATION_EO_TYPES
#define _EFL_CANVAS_TRANSLATE_ANIMATION_EO_TYPES


#endif
/**
 * @brief Animated translation effect.
 *
 * The @ref Efl_Canvas_Object will move from one point to another. Coordinates
 * for the origin and destination points can be relative to the object or
 * absolute (relative to the containing canvas).
 *
 * @note Changing an object's position using @ref efl_gfx_entity_position_get
 * while this animation is running might lead to unexpected results.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Translate_Animation
 */
#define EFL_CANVAS_TRANSLATE_ANIMATION_CLASS efl_canvas_translate_animation_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_translate_animation_class_get(void) EINA_CONST;

/**
 * @brief Translation vector, relative to the starting position of the object.
 * So, for example, if @c from is <tt>(0,0)</tt>, the object will move
 * from its current position to @c to.
 *
 * @param[in] obj The object.
 * @param[in] from Relative initial position.
 * @param[in] to Relative ending position.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Translate_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_translate_set(Eo *obj, Eina_Position2D from, Eina_Position2D to);

/**
 * @brief Translation vector, relative to the starting position of the object.
 * So, for example, if @c from is <tt>(0,0)</tt>, the object will move
 * from its current position to @c to.
 *
 * @param[in] obj The object.
 * @param[out] from Relative initial position.
 * @param[out] to Relative ending position.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Translate_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_translate_get(const Eo *obj, Eina_Position2D *from, Eina_Position2D *to);

/**
 * @brief Translation vector, relative to the canvas. So, for example, if
 * @c from is <tt>(0,0)</tt>, the object will always start from the origin
 * of the canvas, regardless of the current object position.
 *
 * @param[in] obj The object.
 * @param[in] from Absolute initial position.
 * @param[in] to Absolute ending position.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Translate_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_translate_absolute_set(Eo *obj, Eina_Position2D from, Eina_Position2D to);

/**
 * @brief Translation vector, relative to the canvas. So, for example, if
 * @c from is <tt>(0,0)</tt>, the object will always start from the origin
 * of the canvas, regardless of the current object position.
 *
 * @param[in] obj The object.
 * @param[out] from Absolute initial position.
 * @param[out] to Absolute ending position.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Translate_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_translate_absolute_get(const Eo *obj, Eina_Position2D *from, Eina_Position2D *to);

#endif
