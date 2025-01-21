#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_ZOOM_EO_H_
#define _EFL_CANVAS_GESTURE_RECOGNIZER_ZOOM_EO_H_

#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_ZOOM_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_RECOGNIZER_ZOOM_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Recognizer_Zoom;

#endif

#ifndef _EFL_CANVAS_GESTURE_RECOGNIZER_ZOOM_EO_TYPES
#define _EFL_CANVAS_GESTURE_RECOGNIZER_ZOOM_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This is the recognizer for Zoom gestures. See @ref Efl_Canvas_Gesture_Zoom
 * and @ref Efl_Canvas_Gesture_Recognizer. For internal use only.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer_Zoom
 */
#define EFL_CANVAS_GESTURE_RECOGNIZER_ZOOM_CLASS efl_canvas_gesture_recognizer_zoom_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_recognizer_zoom_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
