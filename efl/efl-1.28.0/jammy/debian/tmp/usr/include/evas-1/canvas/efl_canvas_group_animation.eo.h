#ifndef _EFL_CANVAS_GROUP_ANIMATION_EO_H_
#define _EFL_CANVAS_GROUP_ANIMATION_EO_H_

#ifndef _EFL_CANVAS_GROUP_ANIMATION_EO_CLASS_TYPE
#define _EFL_CANVAS_GROUP_ANIMATION_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Group_Animation;

#endif

#ifndef _EFL_CANVAS_GROUP_ANIMATION_EO_TYPES
#define _EFL_CANVAS_GROUP_ANIMATION_EO_TYPES


#endif
/**
 * @brief Base class for combined animations (groups of animations that are
 * played together).
 *
 * This class provides methods to add, remove and retrieve individual
 * animations from the group.
 *
 * See for example @ref Efl_Canvas_Parallel_Group_Animation and
 * @ref Efl_Canvas_Sequential_Group_Animation.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Group_Animation
 */
#define EFL_CANVAS_GROUP_ANIMATION_CLASS efl_canvas_group_animation_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_group_animation_class_get(void) EINA_CONST;

/**
 * @brief Adds the given animation to the animation group.
 *
 * @param[in] obj The object.
 * @param[in] animation Animation to add to the group.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Group_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_group_animation_add(Eo *obj, Efl_Canvas_Animation *animation);

/**
 * @brief Removes the given animation from the animation group.
 *
 * @param[in] obj The object.
 * @param[in] animation Animation to remove from the group.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Group_Animation
 */
EVAS_API EVAS_API_WEAK void efl_animation_group_animation_del(Eo *obj, Efl_Canvas_Animation *animation);

/**
 * @brief All animations that are currently part of this group.
 *
 * @param[in] obj The object.
 *
 * @return The iterator carrying all animations of this group
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Group_Animation
 */
EVAS_API EVAS_API_WEAK Eina_Iterator *efl_animation_group_animations_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

#endif
