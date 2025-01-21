#ifndef _EFL_CANVAS_GESTURE_EVENTS_EO_H_
#define _EFL_CANVAS_GESTURE_EVENTS_EO_H_

#ifndef _EFL_CANVAS_GESTURE_EVENTS_EO_CLASS_TYPE
#define _EFL_CANVAS_GESTURE_EVENTS_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Gesture_Events;

#endif

#ifndef _EFL_CANVAS_GESTURE_EVENTS_EO_TYPES
#define _EFL_CANVAS_GESTURE_EVENTS_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Interface for objects capable of emitting gesture events, like
 * @ref Efl_Canvas_Object.
 *
 * @ingroup Efl_Canvas_Gesture_Events
 */
#define EFL_CANVAS_GESTURE_EVENTS_INTERFACE efl_canvas_gesture_events_interface_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_gesture_events_interface_get(void) EINA_CONST;

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_GESTURE_TAP;

/** Emitted when a Tap gesture has been detected. A Tap gesture consists of a
 * touch of the screen (or click of the mouse) quickly followed by a release.
 * If the release happens too late a
 * @[Efl.Canvas.Gesture_Events.gesture,long_press] event will be emitted
 * instead.
 * @return Efl_Canvas_Gesture_Tap *
 *
 * @ingroup Efl_Canvas_Gesture_Events
 */
#define EFL_EVENT_GESTURE_TAP (&(_EFL_EVENT_GESTURE_TAP))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_GESTURE_DOUBLE_TAP;

/** Emitted when a Double-tap gesture has been detected. A Double-tap gesture
 * consists of two taps on the screen (or clicks of the mouse) in quick
 * succession. If the second one is delayed for too long they will be detected
 * as two independent @[Efl.Canvas.Gesture_Events.gesture,tap] events.
 * @return Efl_Canvas_Gesture_Double_Tap *
 *
 * @ingroup Efl_Canvas_Gesture_Events
 */
#define EFL_EVENT_GESTURE_DOUBLE_TAP (&(_EFL_EVENT_GESTURE_DOUBLE_TAP))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_GESTURE_TRIPLE_TAP;

/** Emitted when a Triple-tap gesture has been detected. A Triple-tap gesture
 * consists of three taps on the screen (or clicks of the mouse) in quick
 * succession. If any of them is delayed for too long they will be detected as
 * independent @[Efl.Canvas.Gesture_Events.gesture,tap] or
 * @[Efl.Canvas.Gesture_Events.gesture,double_tap] events.
 * @return Efl_Canvas_Gesture_Triple_Tap *
 *
 * @ingroup Efl_Canvas_Gesture_Events
 */
#define EFL_EVENT_GESTURE_TRIPLE_TAP (&(_EFL_EVENT_GESTURE_TRIPLE_TAP))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_GESTURE_LONG_PRESS;

/** Emitted when a Long-tap gesture has been detected. A Long-tap gesture
 * consists of a touch of the screen (or click of the mouse) followed by a
 * release after some time. If the release happens too quickly a
 * @[Efl.Canvas.Gesture_Events.gesture,tap] event will be emitted instead.
 * @return Efl_Canvas_Gesture_Long_Press *
 *
 * @ingroup Efl_Canvas_Gesture_Events
 */
#define EFL_EVENT_GESTURE_LONG_PRESS (&(_EFL_EVENT_GESTURE_LONG_PRESS))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_GESTURE_MOMENTUM;

/** Emitted when a Momentum gesture has been detected. A Momentum gesture is
 * any motion of the finger while touching the screen (or while holding down a
 * mouse button). This gesture is also known as swipe.
 * @return Efl_Canvas_Gesture_Momentum *
 *
 * @ingroup Efl_Canvas_Gesture_Events
 */
#define EFL_EVENT_GESTURE_MOMENTUM (&(_EFL_EVENT_GESTURE_MOMENTUM))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_GESTURE_FLICK;

/** Emitted when a Flick gesture has been detected. A Flick gesture consists of
 * a quick motion of the finger while touching the screen (or while holding
 * down a mouse button) with the release occurring before slowing down.
 * @return Efl_Canvas_Gesture_Flick *
 *
 * @ingroup Efl_Canvas_Gesture_Events
 */
#define EFL_EVENT_GESTURE_FLICK (&(_EFL_EVENT_GESTURE_FLICK))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_GESTURE_ROTATE;

/** Emitted when a Rotate gesture has been detected. A Rotate gesture consists
 * of two fingers touching the screen and performing a motion such that one
 * finger rotates around the other. This gesture cannot be performed with a
 * mouse as it requires more than one pointer.
 * @return Efl_Canvas_Gesture_Rotate *
 *
 * @ingroup Efl_Canvas_Gesture_Events
 */
#define EFL_EVENT_GESTURE_ROTATE (&(_EFL_EVENT_GESTURE_ROTATE))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_GESTURE_ZOOM;

/** Emitted when a Zoom gesture has been detected. A Zoom gesture consists of
 * two fingers touching the screen and separating ("zoom in") or getting closer
 * ("zoom out" or "pinch"). This gesture cannot be performed with a mouse as it
 * requires more than one pointer.
 * @return Efl_Canvas_Gesture_Zoom *
 *
 * @ingroup Efl_Canvas_Gesture_Events
 */
#define EFL_EVENT_GESTURE_ZOOM (&(_EFL_EVENT_GESTURE_ZOOM))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_GESTURE_CUSTOM;

/** Emitted when a Custom gesture has been detected. A Custom gesture is one
 * which is custom-written for use in an application or toolkit and is not
 * shipped with EFL.
 * @return Efl_Canvas_Gesture_Custom *
 *
 * @ingroup Efl_Canvas_Gesture_Events
 */
#define EFL_EVENT_GESTURE_CUSTOM (&(_EFL_EVENT_GESTURE_CUSTOM))
#endif /* EFL_BETA_API_SUPPORT */

#endif
