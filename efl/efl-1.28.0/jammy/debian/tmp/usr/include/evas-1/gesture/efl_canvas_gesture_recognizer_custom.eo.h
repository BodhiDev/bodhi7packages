#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_CUSTOM_EO_H_
#define _EFL_CANVAS_GESTURE_RECOGNIZER_CUSTOM_EO_H_

#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_CUSTOM_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_RECOGNIZER_CUSTOM_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Recognizer_Custom;

#endif

#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_CUSTOM_EO_TYPES
#define _EFL_CANVAS_GESTURE_RECOGNIZER_CUSTOM_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This is the recognizer for Custom gestures. See
 * @ref Efl_Canvas_Gesture_Recognizer.
 *
 * Custom-written recognizers must inherit this class. They are responsible for
 * managing and updating the state of the recognized @ref Efl_Canvas_Gesture
 * object inside their implementation of the
 * @ref efl_gesture_recognizer_recognize method, which is required.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer_Custom
 */
#define EFL_CANVAS_GESTURE_RECOGNIZER_CUSTOM_CLASS efl_canvas_gesture_recognizer_custom_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_recognizer_custom_class_get(void) EINA_CONST;

/**
 * @brief This is the name of the gesture recognizer.
 *
 * @param[in] obj The object.
 * @param[in] gesture_name The name of the gesture recognizer.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer_Custom
 */
EVAS_API EVAS_API_WEAK void efl_gesture_recognizer_custom_gesture_name_set(Eo *obj, const char *gesture_name);

/**
 * @brief This is the name of the gesture recognizer.
 *
 * @param[in] obj The object.
 *
 * @return The name of the gesture recognizer.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer_Custom
 */
EVAS_API EVAS_API_WEAK const char *efl_gesture_recognizer_custom_gesture_name_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
