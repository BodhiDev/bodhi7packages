#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_EO_H_
#define _EFL_CANVAS_GESTURE_RECOGNIZER_EO_H_

#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_RECOGNIZER_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Recognizer;

#endif

#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_EO_TYPES
#define _EFL_CANVAS_GESTURE_RECOGNIZER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Base abstract class for Gesture Recognizers. For internal use only.
 *
 * Gesture recognizers listen to events that occur on a target object to see if
 * a particular gesture has occurred.
 *
 * Recognizer-specific configuration values can be modified through
 * @ref efl_config_get, and the global config object can be found using
 * @ref efl_provider_find. Default configuration values are taken from the
 * system's configuration.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer
 */
#define EFL_CANVAS_GESTURE_RECOGNIZER_CLASS efl_canvas_gesture_recognizer_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_recognizer_class_get(void) EINA_CONST;

/**
 * @brief This property returns the class type of gesture recognized by this
 * recognizer. It must be implemented for the recognizer to function.
 *
 * @param[in] obj The object.
 *
 * @return The gesture type to recognize.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer
 */
EVAS_API EVAS_API_WEAK const Efl_Class *efl_gesture_recognizer_type_get(const Eo *obj);

/**
 * @brief Analyzes the given @c event and the current state of the @c gesture
 * object to see if the state has to be modified. For example, to signal a
 * complete gesture detection.
 *
 * Updates the state of the gesture object as required, and returns a suitable
 * result for the current recognition step.
 *
 * This method must be implemented for the recognizer to function.
 *
 * @param[in] obj The object.
 * @param[in] gesture The gesture object.
 * @param[in] watched The target canvas object.
 * @param[in] event The pointer event being analyzed.
 *
 * @return Returns the result of the analysis.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Gesture_Recognizer_Result efl_gesture_recognizer_recognize(Eo *obj, Efl_Canvas_Gesture *gesture, Efl_Object *watched, Efl_Canvas_Gesture_Touch *event);

/**
 * @brief This property determines whether a gesture recognizer should continue
 * to try processing events after returning
 * @ref EFL_GESTURE_RECOGNIZER_RESULT_FINISH or
 * @ref EFL_GESTURE_RECOGNIZER_RESULT_CANCEL.
 *
 * @param[in] obj The object.
 * @param[in] value Value of the property.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer
 */
EVAS_API EVAS_API_WEAK void efl_gesture_recognizer_continues_set(Eo *obj, Eina_Bool value);

/**
 * @brief This property determines whether a gesture recognizer should continue
 * to try processing events after returning
 * @ref EFL_GESTURE_RECOGNIZER_RESULT_FINISH or
 * @ref EFL_GESTURE_RECOGNIZER_RESULT_CANCEL.
 *
 * @param[in] obj The object.
 *
 * @return Value of the property.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_gesture_recognizer_continues_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
