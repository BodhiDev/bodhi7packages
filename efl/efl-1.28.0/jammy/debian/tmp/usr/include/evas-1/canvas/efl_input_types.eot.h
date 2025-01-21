#ifndef _EFL_INPUT_TYPES_EOT_H_
#define _EFL_INPUT_TYPES_EOT_H_

#ifndef _EFL_INPUT_TYPES_EOT_TYPES
#define _EFL_INPUT_TYPES_EOT_TYPES

/** Pointer event type. Represents which kind of event this is.
 *
 * @since 1.24
 *
 * @ingroup Efl_Pointer_Action
 */
typedef enum
{
  EFL_POINTER_ACTION_NONE = 0, /**< Not a valid event, or nothing new happened
                                * (eg. when querying current state of touch
                                * points).
                                *
                                * @since 1.24 */
  EFL_POINTER_ACTION_MOVE, /**< Mouse or equivalent pointer moved.
                            *
                            * @since 1.24 */
  EFL_POINTER_ACTION_DOWN, /**< Mouse button or equivalent pointer pressed down.
                            * Always followed by up or cancel.
                            *
                            * @since 1.24 */
  EFL_POINTER_ACTION_UP, /**< Mouse button or equivalent pointer released. See
                          * also cancel.
                          *
                          * @since 1.24 */
  EFL_POINTER_ACTION_CANCEL, /**< Special event happening after a down if the up
                              * counterpart can not happen (eg. another window
                              * forcibly stole the focus).
                              *
                              * @since 1.24 */
  EFL_POINTER_ACTION_IN, /**< Mouse or pointer entered the object.
                          *
                          * @since 1.24 */
  EFL_POINTER_ACTION_OUT, /**< Mouse or pointer exited the object.
                           *
                           * @since 1.24 */
  EFL_POINTER_ACTION_WHEEL, /**< Mouse wheel scroll, horizontally or vertically.
                             *
                             * @since 1.24 */
  EFL_POINTER_ACTION_AXIS /**< Axis event (pen, stick, ...).
                           *
                           * @since 1.24 */
} Efl_Pointer_Action;

/** Pointer flags indicating whether a double or triple click is under way.
 *
 * @since 1.22
 *
 * @ingroup Efl_Pointer_Flags
 */
typedef enum
{
  EFL_POINTER_FLAGS_NONE = 0, /**< No extra mouse button data
                               *
                               * @since 1.22 */
  EFL_POINTER_FLAGS_DOUBLE_CLICK = 1 /* 1 >> 0 */, /**< This mouse button press
                                                    * was the 2nd press of a
                                                    * double click
                                                    *
                                                    * @since 1.22 */
  EFL_POINTER_FLAGS_TRIPLE_CLICK = 2 /* 1 >> 1 */ /**< This mouse button press
                                                   * was the 3rd press of a
                                                   * triple click
                                                   *
                                                   * @since 1.22 */
} Efl_Pointer_Flags;

/** Special flags set during an input event propagation.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_Flags
 */
typedef enum
{
  EFL_INPUT_FLAGS_NONE = 0, /**< No fancy flags set
                             *
                             * @since 1.22 */
  EFL_INPUT_FLAGS_PROCESSED = 1 /* 1 >> 0 */, /**< This event is being delivered
                                               * and has been processed, so it
                                               * should be put "on hold" until
                                               * the flag is unset. The event
                                               * should be used for
                                               * informational purposes and
                                               * maybe some indications
                                               * visually, but not actually
                                               * perform anything.
                                               *
                                               * @since 1.22 */
  EFL_INPUT_FLAGS_SCROLLING = 2 /* 1 >> 1 */ /**< This event flag indicates the
                                              * event occurs while scrolling;
                                              * for example, DOWN event occurs
                                              * during scrolling. The event
                                              * should be used for
                                              * informational purposes and
                                              * maybe some indications
                                              * visually, but not actually
                                              * perform anything.
                                              *
                                              * @since 1.22 */
} Efl_Input_Flags;

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief How the mouse pointer should be handled by EFL.
 *
 * In the mode @c autograb, when a mouse button is pressed down over an object
 * and held down, with the mouse pointer being moved outside of it, the pointer
 * still behaves as being bound to that object, albeit out of its drawing
 * region. When the button is released, the event will be fed to the object,
 * that may check if the final position is over it or not and do something
 * about it.
 *
 * In the mode @c nograb, the pointer will always be bound to the object right
 * below it.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_Object_Pointer_Mode
 */
typedef enum
{
  EFL_INPUT_OBJECT_POINTER_MODE_AUTO_GRAB = 0, /**< Default, X11-like.
                                                *
                                                * @since 1.22 */
  EFL_INPUT_OBJECT_POINTER_MODE_NO_GRAB, /**< Pointer always bound to the object
                                          * right below it.
                                          *
                                          * @since 1.22 */
  EFL_INPUT_OBJECT_POINTER_MODE_NO_GRAB_NO_REPEAT_UPDOWN /**< Useful on object
                                                          * with "repeat
                                                          * events" enabled,
                                                          * where mouse/touch
                                                          * up and down events
                                                          * WON'T be repeated
                                                          * to objects and
                                                          * these objects wont
                                                          * be auto-grabbed.
                                                          *
                                                          * @since 1.22 */
} Efl_Input_Object_Pointer_Mode;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Keys for the generic values of all events.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_Value
 */
typedef enum
{
  EFL_INPUT_VALUE_NONE = 0, /**< Not a valid value type.
                             *
                             * @since 1.22 */
  EFL_INPUT_VALUE_TIMESTAMP, /**< Timestamp of this event in seconds.
                              *
                              * @since 1.22 */
  EFL_INPUT_VALUE_BUTTON, /**< ID of the button that triggered this event
                           * (unsigned int). Prefer the method @c button to
                           * read this value. Default: 0.
                           *
                           * @since 1.22 */
  EFL_INPUT_VALUE_BUTTONS_PRESSED, /**< 32-bit bit mask (unsigned int). Prefer
                                    * the method @c buttons_pressed to read
                                    * this value. Default: 0.
                                    *
                                    * @since 1.22 */
  EFL_INPUT_VALUE_TOUCH_ID, /**< ID of the finger or tool (eg. pen) that
                             * triggered this event. Prefer the property
                             * @c touch_id to read this value. Default: 0.
                             *
                             * @since 1.22 */
  EFL_INPUT_VALUE_X, /**< Absolute X position where this event occurred, in
                      * pixels. Relative to the window. Default: last known
                      * position. This value may be smoothed out or even
                      * extrapolated by EFL.
                      *
                      * @since 1.22 */
  EFL_INPUT_VALUE_Y, /**< Absolute Y position where this event occurred, in
                      * pixels. Relative to the window. Default: last known
                      * position. This value may be smoothed out or even
                      * extrapolated by EFL.
                      *
                      * @since 1.22 */
  EFL_INPUT_VALUE_DX, /**< Relative X movement, in pixels. Range: unbounded.
                       * Default: 0.
                       *
                       * @since 1.22 */
  EFL_INPUT_VALUE_DY, /**< Relative Y movement, in pixels. Range: unbounded.
                       * Default: 0.
                       *
                       * @since 1.22 */
  EFL_INPUT_VALUE_PREVIOUS_X, /**< Previous X position of the pointer, in
                               * pixels. Default: last known position, may be
                               * equal to x.
                               *
                               * @since 1.22 */
  EFL_INPUT_VALUE_PREVIOUS_Y, /**< Previous Y position of the pointer, in
                               * pixels. Default: last known position, may be
                               * equal to y.
                               *
                               * @since 1.22 */
  EFL_INPUT_VALUE_RAW_X, /**< Absolute X position where this event occurred.
                          * Default: 0. This value will be set from the
                          * hardware input without any smoothing or
                          * extrapolation. For an axis input event, this is the
                          * raw value set by the driver (undefined range and
                          * unit).
                          *
                          * @since 1.22 */
  EFL_INPUT_VALUE_RAW_Y, /**< Absolute X position where this event occurred.
                          * Default: 0. This value will be set from the
                          * hardware input without any smoothing or
                          * extrapolation. For an axis input event, this is the
                          * raw value set by the driver (undefined range and
                          * unit).
                          *
                          * @since 1.22 */
  EFL_INPUT_VALUE_RADIUS, /**< Average radius of the pressed area under a finger
                           * or tool, in pixels. Default is 1.
                           *
                           * @since 1.22 */
  EFL_INPUT_VALUE_RADIUS_X, /**< Spread over X of the pressed area under a
                             * finger or tool, in pixels. Default is 1.
                             *
                             * @since 1.22 */
  EFL_INPUT_VALUE_RADIUS_Y, /**< Spread over Y of the pressed area under a
                             * finger or tool, in pixels. Default is 1.
                             *
                             * @since 1.22 */
  EFL_INPUT_VALUE_PRESSURE, /**< Pressure applied to the button, touch or pen
                             * tip. Range: [0, 1]. Default is 1.
                             *
                             * @since 1.22 */
  EFL_INPUT_VALUE_DISTANCE, /**< Relative distance along physical Z axis. Range:
                             * [0, 1]. Default is 0.
                             *
                             * @since 1.22 */
  EFL_INPUT_VALUE_AZIMUTH, /**< Angle of tool about the Z axis from positive X
                            * axis. Range: [-PI, PI]. Unit: Radians.
                            *
                            * @since 1.22 */
  EFL_INPUT_VALUE_TILT, /**< Angle of tool about plane of sensor from positive Z
                         * axis. Range: [0.0, PI]. Unit: Radians.
                         *
                         * @since 1.22 */
  EFL_INPUT_VALUE_TILT_X, /**< Current tilt along the X axis of the tablet's
                           * current logical orientation, in radians off the
                           * tablet's Z axis. Range: [-PI, PI]. Unit: Radians.
                           *
                           * @since 1.22 */
  EFL_INPUT_VALUE_TILT_Y, /**< Current tilt along the Y axis of the tablet's
                           * current logical orientation, in radians off the
                           * tablet's Z axis. Range: [-PI, PI]. Unit: Radians.
                           *
                           * @since 1.22 */
  EFL_INPUT_VALUE_TWIST, /**< Rotation of tool about its major axis from its
                          * "natural" position. Range: [-PI, PI] Unit: Radians.
                          *
                          * @since 1.22 */
  EFL_INPUT_VALUE_WHEEL_DELTA, /**< Delta movement of the wheel in discrete
                                * steps (int). Default: 0.
                                *
                                * @since 1.22 */
  EFL_INPUT_VALUE_WHEEL_ANGLE, /**< Delta movement of the wheel in radians.
                                * Default: 0.
                                *
                                * @since 1.22 */
  EFL_INPUT_VALUE_WHEEL_HORIZONTAL, /**< Direction of the wheel (horizontal = 1
                                     * or vertical = 0). Default: 0. Prefer the
                                     * property @c wheel_horizontal to read.
                                     *
                                     * @since 1.22 */
  EFL_INPUT_VALUE_SLIDER /**< Current position of the slider on the tool. Range:
                          * [-1, 1]. Default: 0.
                          *
                          * @since 1.22 */
} Efl_Input_Value;
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Key modifiers such as Control, Alt, etc...
 *
 * This enum may be used as a bitmask with OR operations, depending on the API.
 *
 * The available keys may vary depending on the physical keyboard layout, or
 * language and keyboard settings, or depending on the platform.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_Modifier
 */
typedef enum
{
  EFL_INPUT_MODIFIER_NONE = 0, /**< No key modifier
                                *
                                * @since 1.22 */
  EFL_INPUT_MODIFIER_ALT = 1 /* 1 >> 0 */, /**< Alt key modifier
                                            *
                                            * @since 1.22 */
  EFL_INPUT_MODIFIER_CONTROL = 2 /* 1 >> 1 */, /**< Control key modifier ("Ctrl"
                                                * key)
                                                *
                                                * @since 1.22 */
  EFL_INPUT_MODIFIER_SHIFT = 4 /* 1 >> 2 */, /**< Shift key modifier
                                              *
                                              * @since 1.22 */
  EFL_INPUT_MODIFIER_META = 8 /* 1 >> 3 */, /**< Meta key modifier (often the
                                             * "Windows" key)
                                             *
                                             * @since 1.22 */
  EFL_INPUT_MODIFIER_ALTGR = 16 /* 1 >> 4 */, /**< AltGr key modifier (not
                                               * present on all keyboards)
                                               *
                                               * @since 1.22 */
  EFL_INPUT_MODIFIER_HYPER = 32 /* 1 >> 5 */, /**< Hyper key modifier (may be
                                               * "Windows" key)
                                               *
                                               * @since 1.22 */
  EFL_INPUT_MODIFIER_SUPER = 64 /* 1 >> 6 */ /**< Super key modifier (may be
                                              * "Windows" key)
                                              *
                                              * @since 1.22 */
} Efl_Input_Modifier;

/**
 * @brief Key locks such as Num Lock, Scroll Lock and Caps Lock.
 *
 * This enum may be used as a bitmask with OR operations, depending on the API.
 *
 * The available keys may vary depending on the physical keyboard layout, or
 * language and keyboard settings, or depending on the platform.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_Lock
 */
typedef enum
{
  EFL_INPUT_LOCK_NONE = 0, /**< No key modifier
                            *
                            * @since 1.22 */
  EFL_INPUT_LOCK_NUM = 1 /* 1 >> 0 */, /**< Num Lock for numeric key pad use
                                        *
                                        * @since 1.22 */
  EFL_INPUT_LOCK_CAPS = 2 /* 1 >> 1 */, /**< Caps Lock for writing in all caps
                                         *
                                         * @since 1.22 */
  EFL_INPUT_LOCK_SCROLL = 4 /* 1 >> 2 */, /**< Scroll Lock
                                           *
                                           * @since 1.22 */
  EFL_INPUT_LOCK_SHIFT = 8 /* 1 >> 3 */ /**< Shift Lock
                                         *
                                         * @since 1.22 */
} Efl_Input_Lock;


#endif

#endif
