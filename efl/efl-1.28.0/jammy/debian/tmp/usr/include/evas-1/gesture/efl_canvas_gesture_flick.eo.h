#ifndef _EFL_CANVAS_GESTURE_FLICK_EO_H_
#define _EFL_CANVAS_GESTURE_FLICK_EO_H_

#ifndef _EFL_CANVAS_GESTURE_FLICK_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_FLICK_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Flick;

#endif

#ifndef _EFL_CANVAS_GESTURE_FLICK_EO_TYPES
#define _EFL_CANVAS_GESTURE_FLICK_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Flick gesture class holding state information. See
 * @ref Efl_Canvas_Gesture to see what this state is and
 * @[Efl.Canvas.Gesture_Events.gesture,flick] for a description of the Flick
 * gesture.
 *
 * Application developers receive these objects inside a gesture event and do
 * not typically need to create their own.
 *
 * @ingroup Efl_Canvas_Gesture_Flick
 */
#define EFL_CANVAS_GESTURE_FLICK_CLASS efl_canvas_gesture_flick_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_flick_class_get(void) EINA_CONST;

/**
 * @brief The flick gesture momentum value, this is, the direction in which the
 * pointer was flicked.
 *
 * @param[in] obj The object.
 *
 * @return The momentum vector.
 *
 * @ingroup Efl_Canvas_Gesture_Flick
 */
EVAS_API EVAS_API_WEAK Eina_Vector2 efl_gesture_flick_momentum_get(const Eo *obj);

/**
 * @brief The flick gesture direction angle, this is, the angle in which the
 * pointer was flicked.
 *
 * @param[in] obj The object.
 *
 * @return The angle value.
 *
 * @ingroup Efl_Canvas_Gesture_Flick
 */
EVAS_API EVAS_API_WEAK double efl_gesture_flick_angle_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
