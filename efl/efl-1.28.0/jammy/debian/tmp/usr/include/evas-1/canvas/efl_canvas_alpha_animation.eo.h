#ifndef _EFL_CANVAS_ALPHA_ANIMATION_EO_H_
#define _EFL_CANVAS_ALPHA_ANIMATION_EO_H_

#ifndef _EFL_CANVAS_ALPHA_ANIMATION_EO_CLASS_TYPE
#define _EFL_CANVAS_ALPHA_ANIMATION_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Alpha_Animation;

#endif

#ifndef _EFL_CANVAS_ALPHA_ANIMATION_EO_TYPES
#define _EFL_CANVAS_ALPHA_ANIMATION_EO_TYPES


#endif
/**
 * @brief Animated alpha blending effect.
 *
 * The @ref Efl_Canvas_Object will have its alpha (transparency) value
 * multiplied by this animation. This can be used to create fade-in and
 * fade-out transitions, for example.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Alpha_Animation
 */
#define EFL_CANVAS_ALPHA_ANIMATION_CLASS efl_canvas_alpha_animation_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_alpha_animation_class_get(void) EINA_CONST;

/**
 * @brief Alpha range to animate. <tt>0.0</tt> means the object is
 * transparent and <tt>1.0</tt> means the object is opaque.
 *
 * @param[in] obj The object.
 * @param[in] from_alpha Initial alpha value.
 * @param[in] to_alpha Ending alpha value.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Alpha_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_alpha_set(Eo *obj, double from_alpha, double to_alpha);

/**
 * @brief Alpha range to animate. <tt>0.0</tt> means the object is
 * transparent and <tt>1.0</tt> means the object is opaque.
 *
 * @param[in] obj The object.
 * @param[out] from_alpha Initial alpha value.
 * @param[out] to_alpha Ending alpha value.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Alpha_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_alpha_get(const Eo *obj, double *from_alpha, double *to_alpha);

#endif
