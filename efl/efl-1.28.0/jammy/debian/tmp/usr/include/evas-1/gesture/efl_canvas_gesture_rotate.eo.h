#ifndef _EFL_CANVAS_GESTURE_ROTATE_EO_H_
#define _EFL_CANVAS_GESTURE_ROTATE_EO_H_

#ifndef _EFL_CANVAS_GESTURE_ROTATE_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_ROTATE_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Rotate;

#endif

#ifndef _EFL_CANVAS_GESTURE_ROTATE_EO_TYPES
#define _EFL_CANVAS_GESTURE_ROTATE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Rotate gesture class holding state information. See
 * @ref Efl_Canvas_Gesture to see what this state is and
 * @[Efl.Canvas.Gesture_Events.gesture,rotate] for a description of the Rotate
 * gesture.
 *
 * Application developers receive these objects inside a gesture event and do
 * not typically need to create their own.
 *
 * @ingroup Efl_Canvas_Gesture_Rotate
 */
#define EFL_CANVAS_GESTURE_ROTATE_CLASS efl_canvas_gesture_rotate_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_rotate_class_get(void) EINA_CONST;

/**
 * @brief The current radius (i.e. the distance between the two fingers) of the
 * gesture.
 *
 * @param[in] obj The object.
 *
 * @return The radius value in pixels.
 *
 * @ingroup Efl_Canvas_Gesture_Rotate
 */
EVAS_API EVAS_API_WEAK unsigned int efl_gesture_rotate_radius_get(const Eo *obj);

/**
 * @brief The current angle of rotation for this gesture.
 *
 * @param[in] obj The object.
 *
 * @return The angle of the rotation. <tt>0.0</tt> means no rotation has
 * occurred.
 *
 * @ingroup Efl_Canvas_Gesture_Rotate
 */
EVAS_API EVAS_API_WEAK double efl_gesture_rotate_angle_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
