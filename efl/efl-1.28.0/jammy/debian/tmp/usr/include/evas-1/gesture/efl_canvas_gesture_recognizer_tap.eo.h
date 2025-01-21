#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_TAP_EO_H_
#define _EFL_CANVAS_GESTURE_RECOGNIZER_TAP_EO_H_

#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_TAP_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_RECOGNIZER_TAP_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Recognizer_Tap;

#endif

#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_TAP_EO_TYPES
#define _EFL_CANVAS_GESTURE_RECOGNIZER_TAP_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This is the recognizer for Tap gestures. See @ref Efl_Canvas_Gesture_Tap
 * and @ref Efl_Canvas_Gesture_Recognizer. For internal use only.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer_Tap
 */
#define EFL_CANVAS_GESTURE_RECOGNIZER_TAP_CLASS efl_canvas_gesture_recognizer_tap_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_recognizer_tap_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
