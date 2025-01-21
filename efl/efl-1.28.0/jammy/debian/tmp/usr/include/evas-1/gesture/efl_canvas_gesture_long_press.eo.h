#ifndef _EFL_CANVAS_GESTURE_LONG_PRESS_EO_H_
#define _EFL_CANVAS_GESTURE_LONG_PRESS_EO_H_

#ifndef _EFL_CANVAS_GESTURE_LONG_PRESS_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_LONG_PRESS_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Long_Press;

#endif

#ifndef _EFL_CANVAS_GESTURE_LONG_PRESS_EO_TYPES
#define _EFL_CANVAS_GESTURE_LONG_PRESS_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Long-tap gesture class holding state information. See
 * @ref Efl_Canvas_Gesture to see what this state is and
 * @[Efl.Canvas.Gesture_Events.gesture,long_press] for a description of the
 * Long-tap gesture.
 *
 * Application developers receive these objects inside a gesture event and do
 * not typically need to create their own.
 *
 * @ingroup Efl_Canvas_Gesture_Long_Press
 */
#define EFL_CANVAS_GESTURE_LONG_PRESS_CLASS efl_canvas_gesture_long_press_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_long_press_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
