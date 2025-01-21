#ifndef _EFL_INPUT_CLICKABLE_EO_H_
#define _EFL_INPUT_CLICKABLE_EO_H_

#ifndef _EFL_INPUT_CLICKABLE_EO_CLASS_TYPE
#define _EFL_INPUT_CLICKABLE_EO_CLASS_TYPE

typedef Eo Efl_Input_Clickable;

#endif

#ifndef _EFL_INPUT_CLICKABLE_EO_TYPES
#define _EFL_INPUT_CLICKABLE_EO_TYPES

/** A struct that expresses a click in elementary.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable_Clicked
 */
typedef struct _Efl_Input_Clickable_Clicked
{
  unsigned int repeated; /**< The amount of how often the clicked event was
                          * repeated in a certain amount of time
                          *
                          * @since 1.23 */
  unsigned int button; /**< The Button that is pressed
                        *
                        * @since 1.23 */
} Efl_Input_Clickable_Clicked;


#endif
/** Efl input clickable interface.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
#define EFL_INPUT_CLICKABLE_MIXIN efl_input_clickable_mixin_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_input_clickable_mixin_get(void) EINA_CONST;

#ifdef EFL_INPUT_CLICKABLE_PROTECTED
/**
 * @brief Change internal states that a button got pressed.
 *
 * When the button is already pressed, this is silently ignored.
 *
 * @param[in] obj The object.
 * @param[in] button The number of the button. FIXME ensure to have the right
 * interval of possible input
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
EVAS_API EVAS_API_WEAK void efl_input_clickable_press(Eo *obj, unsigned int button);
#endif

#ifdef EFL_INPUT_CLICKABLE_PROTECTED
/**
 * @brief Change internal states that a button got unpressed.
 *
 * When the button is not pressed, this is silently ignored.
 *
 * @param[in] obj The object.
 * @param[in] button The number of the button. FIXME ensure to have the right
 * interval of possible input
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
EVAS_API EVAS_API_WEAK void efl_input_clickable_unpress(Eo *obj, unsigned int button);
#endif

#ifdef EFL_INPUT_CLICKABLE_PROTECTED
/**
 * @brief This aborts the internal state after a press call.
 *
 * This will stop the timer for longpress and set the state of the clickable
 * mixin back into the unpressed state.
 *
 * @param[in] obj The object.
 * @param[in] button
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
EVAS_API EVAS_API_WEAK void efl_input_clickable_button_state_reset(Eo *obj, unsigned int button);
#endif

#ifdef EFL_INPUT_CLICKABLE_PROTECTED
/**
 * @brief This aborts ongoing longpress event.
 *
 * That is, this will stop the timer for longpress.
 *
 * @param[in] obj The object.
 * @param[in] button
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
EVAS_API EVAS_API_WEAK void efl_input_clickable_longpress_abort(Eo *obj, unsigned int button);
#endif

/** This returns true if the given object is currently in event emission
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_clickable_interaction_get(const Eo *obj);

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_INPUT_EVENT_CLICKED;

/** Called when object is in sequence pressed and unpressed by the primary
 * button
 * @return Efl_Input_Clickable_Clicked
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
#define EFL_INPUT_EVENT_CLICKED (&(_EFL_INPUT_EVENT_CLICKED))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_INPUT_EVENT_CLICKED_ANY;

/** Called when object is in sequence pressed and unpressed by any button. The
 * button that triggered the event can be found in the event information.
 * @return Efl_Input_Clickable_Clicked
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
#define EFL_INPUT_EVENT_CLICKED_ANY (&(_EFL_INPUT_EVENT_CLICKED_ANY))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_INPUT_EVENT_PRESSED;

/** Called when the object is pressed, event_info is the button that got
 * pressed
 * @return int
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
#define EFL_INPUT_EVENT_PRESSED (&(_EFL_INPUT_EVENT_PRESSED))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_INPUT_EVENT_UNPRESSED;

/** Called when the object is no longer pressed, event_info is the button that
 * got pressed
 * @return int
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
#define EFL_INPUT_EVENT_UNPRESSED (&(_EFL_INPUT_EVENT_UNPRESSED))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_INPUT_EVENT_LONGPRESSED;

/** Called when the object receives a long press, event_info is the button that
 * got pressed
 * @return int
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Clickable
 */
#define EFL_INPUT_EVENT_LONGPRESSED (&(_EFL_INPUT_EVENT_LONGPRESSED))

#endif
