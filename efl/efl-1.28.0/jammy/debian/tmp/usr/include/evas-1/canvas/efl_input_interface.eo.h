#ifndef _EFL_INPUT_INTERFACE_EO_H_
#define _EFL_INPUT_INTERFACE_EO_H_

#ifndef _EFL_INPUT_INTERFACE_EO_CLASS_TYPE
#define _EFL_INPUT_INTERFACE_EO_CLASS_TYPE

typedef Eo Efl_Input_Interface;

#endif

#ifndef _EFL_INPUT_INTERFACE_EO_TYPES
#define _EFL_INPUT_INTERFACE_EO_TYPES


#endif
/**
 * @brief An object implementing this interface can send pointer events.
 *
 * Windows and canvas objects may send input events.
 *
 * A "pointer" refers to the main pointing device, which could be a mouse,
 * trackpad, finger, pen, etc... In other words, the finger id in any pointer
 * event will always be 0.
 *
 * A "finger" refers to a single point of input, usually in an absolute
 * coordinates input device, and that can support more than one input position
 * at at time (think multi-touch screens). The first finger (id 0) is sent
 * along with a pointer event, so be careful to not handle those events twice.
 * Note that if the input device can support "hovering", it is entirely
 * possible to receive move events without down coming first.
 *
 * A "key" is a key press from a keyboard or equivalent type of input device.
 * Long, repeated, key presses will always happen like this:
 * down...up,down...up,down...up (not down...up or down...down...down...up).
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_INPUT_INTERFACE_INTERFACE efl_input_interface_interface_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_input_interface_interface_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Whether input events from a given seat are enabled. If the filter
 * list is empty (no seat is disabled) this object will report mouse, keyboard
 * and focus events from any seat, otherwise those events will only be reported
 * if the event comes from a seat that is not in the list.
 *
 * @param[in] obj The object.
 * @param[in] seat The seat to act on.
 * @param[in] enable @c true to enable events for a seat or @c false otherwise.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
EVAS_API EVAS_API_WEAK void efl_input_seat_event_filter_set(Eo *obj, Efl_Input_Device *seat, Eina_Bool enable);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Whether input events from a given seat are enabled. If the filter
 * list is empty (no seat is disabled) this object will report mouse, keyboard
 * and focus events from any seat, otherwise those events will only be reported
 * if the event comes from a seat that is not in the list.
 *
 * @param[in] obj The object.
 * @param[in] seat The seat to act on.
 *
 * @return @c true to enable events for a seat or @c false otherwise.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_seat_event_filter_get(const Eo *obj, Efl_Input_Device *seat);
#endif /* EFL_BETA_API_SUPPORT */

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_POINTER_MOVE;

/** Main pointer move (current and previous positions are known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_MOVE (&(_EFL_EVENT_POINTER_MOVE))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_POINTER_DOWN;

/** Main pointer button pressed (button id is known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_DOWN (&(_EFL_EVENT_POINTER_DOWN))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_POINTER_UP;

/** Main pointer button released (button id is known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_UP (&(_EFL_EVENT_POINTER_UP))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_POINTER_CANCEL;

/** Main pointer button press was cancelled (button id is known). This can
 * happen in rare cases when the window manager passes the focus to a more
 * urgent window, for instance. You probably don't need to listen to this
 * event, as it will be accompanied by an up event.
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_CANCEL (&(_EFL_EVENT_POINTER_CANCEL))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_POINTER_IN;

/** Pointer entered a window or a widget.
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_IN (&(_EFL_EVENT_POINTER_IN))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_POINTER_OUT;

/** Pointer left a window or a widget.
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_OUT (&(_EFL_EVENT_POINTER_OUT))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_POINTER_WHEEL;

/** Mouse wheel event.
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_WHEEL (&(_EFL_EVENT_POINTER_WHEEL))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_POINTER_AXIS;

/** Pen or other axis event update.
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_AXIS (&(_EFL_EVENT_POINTER_AXIS))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_FINGER_MOVE;

/** Finger moved (current and previous positions are known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_FINGER_MOVE (&(_EFL_EVENT_FINGER_MOVE))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_FINGER_DOWN;

/** Finger pressed (finger id is known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_FINGER_DOWN (&(_EFL_EVENT_FINGER_DOWN))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_FINGER_UP;

/** Finger released (finger id is known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_FINGER_UP (&(_EFL_EVENT_FINGER_UP))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_KEY_DOWN;

/** Keyboard key press.
 * @return Efl_Input_Key *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_KEY_DOWN (&(_EFL_EVENT_KEY_DOWN))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_KEY_UP;

/** Keyboard key release.
 * @return Efl_Input_Key *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_KEY_UP (&(_EFL_EVENT_KEY_UP))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_HOLD;

/** All input events are on hold or resumed.
 * @return Efl_Input_Hold *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_HOLD (&(_EFL_EVENT_HOLD))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_FOCUS_IN;

/** A focus in event.
 * @return Efl_Input_Focus *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_FOCUS_IN (&(_EFL_EVENT_FOCUS_IN))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_EVENT_FOCUS_OUT;

/** A focus out event.
 * @return Efl_Input_Focus *
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_FOCUS_OUT (&(_EFL_EVENT_FOCUS_OUT))

#endif
