#ifndef _EFL_CANVAS_GESTURE_TOUCH_EO_H_
#define _EFL_CANVAS_GESTURE_TOUCH_EO_H_

#ifndef _EFL_CANVAS_GESTURE_TOUCH_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_TOUCH_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Touch;

#endif

#ifndef _EFL_CANVAS_GESTURE_TOUCH_EO_TYPES
#define _EFL_CANVAS_GESTURE_TOUCH_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief EFL Gesture Touch class
 *
 * This gesture class defines a method that records touch points and supports
 * properties - first touch point, current touch point, timestamp, multi-touch
 *  and state information.
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
#define EFL_CANVAS_GESTURE_TOUCH_CLASS efl_canvas_gesture_touch_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_touch_class_get(void) EINA_CONST;

/**
 * @brief Touch point record method
 *
 * @param[in] obj The object.
 * @param[in] event The pointer information
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK void efl_gesture_touch_point_record(Eo *obj, Efl_Input_Pointer *event);

/**
 * @brief Compute the distance between the last two events
 *
 * @param[in] obj The object.
 * @param[in] tool The finger id
 *
 * @return The distance vector.
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK Eina_Vector2 efl_gesture_touch_delta(const Eo *obj, int tool);

/**
 * @brief Compute the distance between the first touch and the last event.
 *
 * @param[in] obj The object.
 * @param[in] tool The finger id
 *
 * @return The distance vector.
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK Eina_Vector2 efl_gesture_touch_distance(const Eo *obj, int tool);

/**
 * @brief Returns the first touch point.
 *
 * @param[in] obj The object.
 *
 * @return The start position.
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK Eina_Position2D efl_gesture_touch_start_point_get(const Eo *obj);

/**
 * @brief Returns the current touch point.
 *
 * @param[in] obj The object.
 *
 * @return The current position.
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK Eina_Position2D efl_gesture_touch_current_point_get(const Eo *obj);

/**
 * @brief Returns the timestamp.
 *
 * @param[in] obj The object.
 *
 * @return The timestamp.
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK unsigned int efl_gesture_touch_current_timestamp_get(const Eo *obj);

/**
 * @brief This provides the number of touch points active.
 *
 * @param[in] obj The object.
 *
 * @return The number of active touch points.
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK unsigned int efl_gesture_touch_points_count_get(const Eo *obj);

/**
 * @brief This property holds the state of the touch event.
 *
 * @param[in] obj The object.
 *
 * @return touch event state
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Gesture_Touch_State efl_gesture_touch_state_get(const Eo *obj);

/**
 * @brief This property holds the data struct of the most recent touch point.
 *
 * @param[in] obj The object.
 *
 * @return The current data.
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK const Efl_Gesture_Touch_Point_Data *efl_gesture_touch_current_data_get(const Eo *obj);

/**
 * @brief This property holds the data struct of the second-most recent touch
 * point. If there is only one touch point active, it will return NULL.
 *
 * @param[in] obj The object.
 *
 * @return The previous touch point's data.
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK const Efl_Gesture_Touch_Point_Data *efl_gesture_touch_previous_data_get(const Eo *obj);

/**
 * @brief This fetches the data for a specified touch point.
 *
 * @param[in] obj The object.
 * @param[in] id The id of the touch point to return.
 *
 * @return The specified data if it exists.
 *
 * @ingroup Efl_Canvas_Gesture_Touch
 */
EVAS_API EVAS_API_WEAK const Efl_Gesture_Touch_Point_Data *efl_gesture_touch_data_get(const Eo *obj, unsigned int id);
#endif /* EFL_BETA_API_SUPPORT */

#endif
