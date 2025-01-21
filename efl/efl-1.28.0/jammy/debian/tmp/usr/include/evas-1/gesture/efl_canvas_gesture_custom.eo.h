#ifndef _EFL_CANVAS_GESTURE_CUSTOM_EO_H_
#define _EFL_CANVAS_GESTURE_CUSTOM_EO_H_

#ifndef _EFL_CANVAS_GESTURE_CUSTOM_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_CUSTOM_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Custom;

#endif

#ifndef _EFL_CANVAS_GESTURE_CUSTOM_EO_TYPES
#define _EFL_CANVAS_GESTURE_CUSTOM_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Custom gesture class holding state information. See
 * @ref Efl_Canvas_Gesture to see what this state is and
 * @[Efl.Canvas.Gesture_Events.gesture,custom] for a description of the Custom
 * gesture.
 *
 * Application developers receive these objects inside a gesture event and do
 * not typically need to create their own.
 *
 * Custom gesture recognizers which implement their own gesture properties
 * (e.g., gesture momentum or angle) must inherit this class, and their
 * recognizers must implement the @ref efl_gesture_recognizer_type_get property
 * to return this class.
 *
 * @ingroup Efl_Canvas_Gesture_Custom
 */
#define EFL_CANVAS_GESTURE_CUSTOM_CLASS efl_canvas_gesture_custom_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_custom_class_get(void) EINA_CONST;

#ifdef EFL_CANVAS_GESTURE_CUSTOM_PROTECTED
/**
 * @brief This is the name of the custom gesture.
 *
 * @param[in] obj The object.
 * @param[in] gesture_name The name of the custom gesture.
 *
 * @ingroup Efl_Canvas_Gesture_Custom
 */
EVAS_API EVAS_API_WEAK void efl_gesture_custom_gesture_name_set(Eo *obj, const char *gesture_name);
#endif

/**
 * @brief This is the name of the custom gesture.
 *
 * @param[in] obj The object.
 *
 * @return The name of the custom gesture.
 *
 * @ingroup Efl_Canvas_Gesture_Custom
 */
EVAS_API EVAS_API_WEAK const char *efl_gesture_custom_gesture_name_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
