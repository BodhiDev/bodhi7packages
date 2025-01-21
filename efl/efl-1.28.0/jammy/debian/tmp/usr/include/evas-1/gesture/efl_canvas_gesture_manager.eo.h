#ifndef _EFL_CANVAS_GESTURE_MANAGER_EO_H_
#define _EFL_CANVAS_GESTURE_MANAGER_EO_H_

#ifndef _EFL_CANVAS_GESTURE_MANAGER_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Manager;

#endif

#ifndef _EFL_CANVAS_GESTURE_MANAGER_EO_TYPES
#define _EFL_CANVAS_GESTURE_MANAGER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This class keeps track of active @ref Efl_Canvas_Gesture_Recognizer
 * objects. For internal use only.
 *
 * This class defines methods to manage gesture recognizers and handles passing
 * input events to the recognizers that it manages.
 *
 * @ingroup Efl_Canvas_Gesture_Manager
 */
#define EFL_CANVAS_GESTURE_MANAGER_CLASS efl_canvas_gesture_manager_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_manager_class_get(void) EINA_CONST;

/**
 * @brief Registers a new @ref Efl_Canvas_Gesture_Recognizer.
 *
 * @param[in] obj The object.
 * @param[in] recognizer The gesture recognizer object.
 *
 * @ingroup Efl_Canvas_Gesture_Manager
 */
EVAS_API EVAS_API_WEAK void efl_gesture_manager_recognizer_register(Eo *obj, Efl_Canvas_Gesture_Recognizer *recognizer);

/**
 * @brief Unregisters an existing @ref Efl_Canvas_Gesture_Recognizer.
 *
 * @param[in] obj The object.
 * @param[in] recognizer The gesture recognizer object.
 *
 * @ingroup Efl_Canvas_Gesture_Manager
 */
EVAS_API EVAS_API_WEAK void efl_gesture_manager_recognizer_unregister(Eo *obj, Efl_Canvas_Gesture_Recognizer *recognizer);

/**
 * @brief Perform cleanup for a gesture which ends after a delay.
 *
 * @param[in] obj The object.
 * @param[in] recognizer The gesture recognizer object.
 * @param[in] target The target object being processed by the recognizer.
 *
 * @ingroup Efl_Canvas_Gesture_Manager
 */
EVAS_API EVAS_API_WEAK void efl_gesture_manager_recognizer_cleanup(Eo *obj, const Efl_Canvas_Gesture_Recognizer *recognizer, const Efl_Canvas_Object *target);
#endif /* EFL_BETA_API_SUPPORT */

#endif
