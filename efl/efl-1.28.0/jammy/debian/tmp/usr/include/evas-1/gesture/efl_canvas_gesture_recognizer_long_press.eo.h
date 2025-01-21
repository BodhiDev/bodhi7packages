#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_LONG_PRESS_EO_H_
#define _EFL_CANVAS_GESTURE_RECOGNIZER_LONG_PRESS_EO_H_

#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_LONG_PRESS_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_RECOGNIZER_LONG_PRESS_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Recognizer_Long_Press;

#endif

#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_LONG_PRESS_EO_TYPES
#define _EFL_CANVAS_GESTURE_RECOGNIZER_LONG_PRESS_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This is the recognizer for Long-tap gestures. See
 * @ref Efl_Canvas_Gesture_Long_Press and @ref Efl_Canvas_Gesture_Recognizer.
 * For internal use only.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer_Long_Press
 */
#define EFL_CANVAS_GESTURE_RECOGNIZER_LONG_PRESS_CLASS efl_canvas_gesture_recognizer_long_press_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_recognizer_long_press_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
