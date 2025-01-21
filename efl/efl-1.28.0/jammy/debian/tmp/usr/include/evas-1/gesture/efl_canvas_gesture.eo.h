#ifndef _EFL_CANVAS_GESTURE_EO_H_
#define _EFL_CANVAS_GESTURE_EO_H_

#ifndef _EFL_CANVAS_GESTURE_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture;

#endif

#ifndef _EFL_CANVAS_GESTURE_EO_TYPES
#define _EFL_CANVAS_GESTURE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Base abstract class to support gesture-specific classes.
 *
 * A gesture object holds the current state of that gesture (i.e. whether the
 * gesture has just been started, it is in progress or it has finished) along
 * with any gesture-specific information it needs (like the number of taps so
 * far, to detect triple-taps, for example).
 *
 * Typically this class is not used directly, instead, some sub-class of it
 * (like @ref Efl_Canvas_Gesture_Tap or @ref Efl_Canvas_Gesture_Zoom) is
 * retrieved from gesture events (like @[Efl.Canvas.Gesture_Events.gesture,tap]
 * or @[Efl.Canvas.Gesture_Events.gesture,zoom]).
 *
 * @ingroup Efl_Canvas_Gesture
 */
#define EFL_CANVAS_GESTURE_CLASS efl_canvas_gesture_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_class_get(void) EINA_CONST;

/**
 * @brief Current state of the gesture, from initial detection to successful
 * recognition.
 *
 * @param[in] obj The object.
 * @param[in] state State.
 *
 * @ingroup Efl_Canvas_Gesture
 */
EVAS_API EVAS_API_WEAK void efl_gesture_state_set(Eo *obj, Efl_Canvas_Gesture_State state);

/**
 * @brief Current state of the gesture, from initial detection to successful
 * recognition.
 *
 * @param[in] obj The object.
 *
 * @return State.
 *
 * @ingroup Efl_Canvas_Gesture
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Gesture_State efl_gesture_state_get(const Eo *obj);

/**
 * @brief Hotspot of the gesture currently being analyzed. The exact meaning
 * depends on the gesture type, but by default it reflects the current position
 * of the last touch event.
 *
 * @param[in] obj The object.
 * @param[in] hotspot Hotspot coordinates.
 *
 * @ingroup Efl_Canvas_Gesture
 */
EVAS_API EVAS_API_WEAK void efl_gesture_hotspot_set(Eo *obj, Eina_Position2D hotspot);

/**
 * @brief Hotspot of the gesture currently being analyzed. The exact meaning
 * depends on the gesture type, but by default it reflects the current position
 * of the last touch event.
 *
 * @param[in] obj The object.
 *
 * @return Hotspot coordinates.
 *
 * @ingroup Efl_Canvas_Gesture
 */
EVAS_API EVAS_API_WEAK Eina_Position2D efl_gesture_hotspot_get(const Eo *obj);

/**
 * @brief Moment when the gesture currently being analyzed started.
 *
 * @param[in] obj The object.
 * @param[in] timestamp The time-stamp, valued in milliseconds.
 *
 * @ingroup Efl_Canvas_Gesture
 */
EVAS_API EVAS_API_WEAK void efl_gesture_timestamp_set(Eo *obj, unsigned int timestamp);

/**
 * @brief Moment when the gesture currently being analyzed started.
 *
 * @param[in] obj The object.
 *
 * @return The time-stamp, valued in milliseconds.
 *
 * @ingroup Efl_Canvas_Gesture
 */
EVAS_API EVAS_API_WEAK unsigned int efl_gesture_timestamp_get(const Eo *obj);

#ifdef EFL_CANVAS_GESTURE_PROTECTED
/**
 * @brief The current number of touch points recorded in the gesture.
 *
 * @param[in] obj The object.
 * @param[in] touch_count The count of the touch points.
 *
 * @ingroup Efl_Canvas_Gesture
 */
EVAS_API EVAS_API_WEAK void efl_gesture_touch_count_set(Eo *obj, unsigned int touch_count);
#endif

/**
 * @brief The current number of touch points recorded in the gesture.
 *
 * @param[in] obj The object.
 *
 * @return The count of the touch points.
 *
 * @ingroup Efl_Canvas_Gesture
 */
EVAS_API EVAS_API_WEAK unsigned int efl_gesture_touch_count_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
