#ifndef _EFL_CANVAS_GESTURE_ZOOM_EO_H_
#define _EFL_CANVAS_GESTURE_ZOOM_EO_H_

#ifndef _EFL_CANVAS_GESTURE_ZOOM_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_ZOOM_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Zoom;

#endif

#ifndef _EFL_CANVAS_GESTURE_ZOOM_EO_TYPES
#define _EFL_CANVAS_GESTURE_ZOOM_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Zoom gesture class holding state information. See
 * @ref Efl_Canvas_Gesture to see what this state is and
 * @[Efl.Canvas.Gesture_Events.gesture,zoom] for a description of the Zoom
 * gesture.
 *
 * Application developers receive these objects inside a gesture event and do
 * not typically need to create their own.
 *
 * @ingroup Efl_Canvas_Gesture_Zoom
 */
#define EFL_CANVAS_GESTURE_ZOOM_CLASS efl_canvas_gesture_zoom_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_zoom_class_get(void) EINA_CONST;

/**
 * @brief The current radius (i.e. the distance between the two fingers) of the
 * gesture.
 *
 * @param[in] obj The object.
 *
 * @return The radius value in pixels.
 *
 * @ingroup Efl_Canvas_Gesture_Zoom
 */
EVAS_API EVAS_API_WEAK double efl_gesture_zoom_radius_get(const Eo *obj);

/**
 * @brief The current zoom value of the gesture. When the gesture begins, the
 * finger distance is recorded. When the distance becomes greater than the
 * initial one, a zoom value greater than <tt>1.0</tt> is reported. When
 * it becomes smaller, a zoom value lesser than <tt>1.0</tt> is reported.
 *
 * @param[in] obj The object.
 *
 * @return The zoom value. <tt>1.0</tt> means no zoom.
 *
 * @ingroup Efl_Canvas_Gesture_Zoom
 */
EVAS_API EVAS_API_WEAK double efl_gesture_zoom_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
