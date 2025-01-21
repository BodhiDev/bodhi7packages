#ifndef _EFL_CANVAS_SEQUENTIAL_GROUP_ANIMATION_EO_H_
#define _EFL_CANVAS_SEQUENTIAL_GROUP_ANIMATION_EO_H_

#ifndef _EFL_CANVAS_SEQUENTIAL_GROUP_ANIMATION_EO_CLASS_TYPE
#define _EFL_CANVAS_SEQUENTIAL_GROUP_ANIMATION_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Sequential_Group_Animation;

#endif

#ifndef _EFL_CANVAS_SEQUENTIAL_GROUP_ANIMATION_EO_TYPES
#define _EFL_CANVAS_SEQUENTIAL_GROUP_ANIMATION_EO_TYPES


#endif
/**
 * @brief Combined animation which plays its individual animations in a
 * sequential order (one after the other).
 *
 * For instance, this could be used to move an @ref Efl_Canvas_Object from one
 * position to another and then start rotating it once it reaches its
 * destination.
 *
 * Use @ref efl_animation_group_animation_add to append individual animations.
 * Animations are played in the order in which they are added.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Sequential_Group_Animation
 */
#define EFL_CANVAS_SEQUENTIAL_GROUP_ANIMATION_CLASS efl_canvas_sequential_group_animation_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_sequential_group_animation_class_get(void) EINA_CONST;

#endif
