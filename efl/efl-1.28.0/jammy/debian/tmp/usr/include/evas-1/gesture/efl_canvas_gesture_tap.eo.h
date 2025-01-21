#ifndef _EFL_CANVAS_GESTURE_TAP_EO_H_
#define _EFL_CANVAS_GESTURE_TAP_EO_H_

#ifndef _EFL_CANVAS_GESTURE_TAP_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_TAP_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Tap;

#endif

#ifndef _EFL_CANVAS_GESTURE_TAP_EO_TYPES
#define _EFL_CANVAS_GESTURE_TAP_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Tap gesture class holding state information. See
 * @ref Efl_Canvas_Gesture to see what this state is and
 * @[Efl.Canvas.Gesture_Events.gesture,tap] for a description of the Tap
 * gesture.
 *
 * Application developers receive these objects inside a gesture event and do
 * not typically need to create their own.
 *
 * @ingroup Efl_Canvas_Gesture_Tap
 */
#define EFL_CANVAS_GESTURE_TAP_CLASS efl_canvas_gesture_tap_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_tap_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
