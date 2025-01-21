#ifndef _EFL_CANVAS_OBJECT_ANIMATION_EO_H_
#define _EFL_CANVAS_OBJECT_ANIMATION_EO_H_

#ifndef _EFL_CANVAS_OBJECT_ANIMATION_EO_CLASS_TYPE
#define _EFL_CANVAS_OBJECT_ANIMATION_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Object_Animation;

#endif

#ifndef _EFL_CANVAS_OBJECT_ANIMATION_EO_TYPES
#define _EFL_CANVAS_OBJECT_ANIMATION_EO_TYPES


#endif
/**
 * @brief A mixin that provides animation capabilities to
 * @ref Efl_Canvas_Object.
 *
 * By including this mixin canvas objects can be animated just by calling
 * @ref efl_canvas_object_animation_start.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Object_Animation
 */
#define EFL_CANVAS_OBJECT_ANIMATION_MIXIN efl_canvas_object_animation_mixin_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_object_animation_mixin_get(void) EINA_CONST;

/**
 * @brief The animation that is currently played on the canvas object.
 *
 * @c null in case that there is no animation running.
 *
 * @param[in] obj The object.
 *
 * @return The animation which is currently applied on this object.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Object_Animation
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Animation *efl_canvas_object_animation_get(const Eo *obj);

/**
 * @brief The current progress of the animation, between <tt>0.0</tt> and
 * <tt>1.0</tt>.
 *
 * Even if the animation is going backwards (speed < 0.0) the progress will
 * still go from <tt>0.0</tt> to <tt>1.0</tt>.
 *
 * If there is no animation going on, this will return <tt>-1.0</tt>.
 *
 * @param[in] obj The object.
 *
 * @return Current progress of the animation.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Object_Animation
 */
EVAS_API EVAS_API_WEAK double efl_canvas_object_animation_progress_get(const Eo *obj);

/**
 * @brief Pause the animation.
 *
 * @ref efl_canvas_object_animation_get will not be unset. When @c pause is
 * @c false, the animation will be resumed at the same progress it was when it
 * was paused.
 *
 * @param[in] obj The object.
 * @param[in] pause Paused state.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Object_Animation
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_animation_pause_set(Eo *obj, Eina_Bool pause);

/**
 * @brief Pause the animation.
 *
 * @ref efl_canvas_object_animation_get will not be unset. When @c pause is
 * @c false, the animation will be resumed at the same progress it was when it
 * was paused.
 *
 * @param[in] obj The object.
 *
 * @return Paused state.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Object_Animation
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_animation_pause_get(const Eo *obj);

/**
 * @brief Start a new animation.
 *
 * If there is an animation going on, it is stopped and the previous
 * @ref efl_canvas_object_animation_get object is replaced. Its lifetime is
 * adjusted accordingly.
 *
 * @param[in] obj The object.
 * @param[in] animation The animation to start. When not needed anymore, the
 * reference that was passed is given up.
 * @param[in] speed The speed of the playback. <tt>1.0</tt> is normal
 * playback. Negative values mean reverse playback.
 * @param[in] starting_progress The progress point where to start. Must be
 * between <tt>0.0</tt> and <tt>1.0</tt>. Useful to revert an
 * animation which has already started.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Object_Animation
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_animation_start(Eo *obj, Efl_Canvas_Animation *animation EFL_TRANSFER_OWNERSHIP, double speed, double starting_progress);

/**
 * @brief Stop the animation.
 *
 * After this call, @ref efl_canvas_object_animation_get will return @c null.
 * The reference that was taken during @ref efl_canvas_object_animation_start
 * will be given up.
 *
 * @param[in] obj The object.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Object_Animation
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_animation_stop(Eo *obj);

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_OBJECT_ANIMATION_EVENT_ANIMATION_CHANGED;

/** The animation object got changed.
 * @return Efl_Canvas_Animation *
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Object_Animation
 */
#define EFL_CANVAS_OBJECT_ANIMATION_EVENT_ANIMATION_CHANGED (&(_EFL_CANVAS_OBJECT_ANIMATION_EVENT_ANIMATION_CHANGED))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_OBJECT_ANIMATION_EVENT_ANIMATION_PROGRESS_UPDATED;

/** The animation progress got changed.
 * @return double
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Object_Animation
 */
#define EFL_CANVAS_OBJECT_ANIMATION_EVENT_ANIMATION_PROGRESS_UPDATED (&(_EFL_CANVAS_OBJECT_ANIMATION_EVENT_ANIMATION_PROGRESS_UPDATED))

#endif
