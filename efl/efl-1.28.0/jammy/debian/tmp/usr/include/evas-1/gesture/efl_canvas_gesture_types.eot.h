#ifndef _EFL_CANVAS_GESTURE_TYPES_EOT_H_
#define _EFL_CANVAS_GESTURE_TYPES_EOT_H_

#ifndef _EFL_CANVAS_GESTURE_TYPES_EOT_TYPES
#define _EFL_CANVAS_GESTURE_TYPES_EOT_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** This enum type describes the state of a touch event.
 *
 * @ingroup Efl_Canvas_Gesture_Touch_State
 */
typedef enum
{
  EFL_GESTURE_TOUCH_STATE_UNKNOWN = 0, /**< Touch state is unset. */
  EFL_GESTURE_TOUCH_STATE_BEGIN, /**< First touch point has just been added. */
  EFL_GESTURE_TOUCH_STATE_UPDATE, /**< A touch point position has updated or
                                   * other touch points were added. */
  EFL_GESTURE_TOUCH_STATE_END /**< A touch point has been released. */
} Efl_Canvas_Gesture_Touch_State;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** This enum type describes the state of a gesture.
 *
 * @ingroup Efl_Canvas_Gesture_State
 */
typedef enum
{
  EFL_GESTURE_STATE_NONE = 0, /**< No gesture state. */
  EFL_GESTURE_STATE_STARTED = 1, /**< A gesture has started. */
  EFL_GESTURE_STATE_UPDATED, /**< A gesture has triggered. */
  EFL_GESTURE_STATE_FINISHED, /**< A gesture has ended and has triggered. */
  EFL_GESTURE_STATE_CANCELED /**< A gesture has ended without triggering. */
} Efl_Canvas_Gesture_State;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** This enum type describes the state of a gesture recognizer.
 *
 * @ingroup Efl_Canvas_Gesture_Recognizer_Result
 */
typedef enum
{
  EFL_GESTURE_RECOGNIZER_RESULT_IGNORE = 1, /**< The event does not change the
                                             * state of the recognizer. */
  EFL_GESTURE_RECOGNIZER_RESULT_MAYBE = 2, /**< The event changed the internal
                                            * state of the recognizer, but it
                                            * isn't clear yet if it is a
                                            * gesture or not. The recognizer
                                            * needs to filter more events to
                                            * decide. */
  EFL_GESTURE_RECOGNIZER_RESULT_TRIGGER = 4, /**< The gesture has been triggered
                                              */
  EFL_GESTURE_RECOGNIZER_RESULT_FINISH = 8, /**< The gesture has been finished
                                             * successfully and the gesture
                                             * triggered. */
  EFL_GESTURE_RECOGNIZER_RESULT_CANCEL = 16, /**< The event made it clear that
                                              * it is not a gesture. If the
                                              * gesture recognizer was in
                                              * Triggered state before, then
                                              * the gesture is canceled. */
  EFL_GESTURE_RECOGNIZER_RESULT_RESULT_MASK = 255 /**< The gesture result mask
                                                   */
} Efl_Canvas_Gesture_Recognizer_Result;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** This struct represents the underlying data of a touch point.
 *
 * @ingroup Efl_Gesture_Touch_Point_Info
 */
typedef struct _Efl_Gesture_Touch_Point_Info
{
  Eina_Position2D pos; /**< The canvas position of the touch point data. */
  Eina_Bool pressed; /**< Whether this touch point is currently being pressed
                      * down. */
  unsigned int timestamp; /**< The timestamp of the touch point data in
                           * milliseconds. */
} Efl_Gesture_Touch_Point_Info;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** This struct represents the state of a touch point.
 *
 * @ingroup Efl_Gesture_Touch_Point_Data
 */
typedef struct _Efl_Gesture_Touch_Point_Data
{
  int id; /**< Touch id of the point, where the first point is $0. */
  Efl_Pointer_Action action; /**< The last event with this point. */
  Efl_Gesture_Touch_Point_Info start; /**< The start data for the touch point.
                                       */
  Efl_Gesture_Touch_Point_Info prev; /**< The previous data for the touch point.
                                      */
  Efl_Gesture_Touch_Point_Info cur; /**< The current data for the touch point.
                                     */
} Efl_Gesture_Touch_Point_Data;
#endif /* EFL_BETA_API_SUPPORT */


#endif

#endif
