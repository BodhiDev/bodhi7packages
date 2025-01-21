#ifndef _EFL_CANVAS_PARALLEL_GROUP_ANIMATION_EO_H_
#define _EFL_CANVAS_PARALLEL_GROUP_ANIMATION_EO_H_

#ifndef _EFL_CANVAS_PARALLEL_GROUP_ANIMATION_EO_CLASS_TYPE
#define _EFL_CANVAS_PARALLEL_GROUP_ANIMATION_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Parallel_Group_Animation;

#endif

#ifndef _EFL_CANVAS_PARALLEL_GROUP_ANIMATION_EO_TYPES
#define _EFL_CANVAS_PARALLEL_GROUP_ANIMATION_EO_TYPES


#endif
/**
 * @brief Combined animation which plays its individual animations in parallel
 * (all of them simultaneously).
 *
 * For instance, this could be used to move an @ref Efl_Canvas_Object from one
 * position to another while rotating it along the way.
 *
 * Use @ref efl_animation_group_animation_add to append individual animations.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Parallel_Group_Animation
 */
#define EFL_CANVAS_PARALLEL_GROUP_ANIMATION_CLASS efl_canvas_parallel_group_animation_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_parallel_group_animation_class_get(void) EINA_CONST;

#endif
