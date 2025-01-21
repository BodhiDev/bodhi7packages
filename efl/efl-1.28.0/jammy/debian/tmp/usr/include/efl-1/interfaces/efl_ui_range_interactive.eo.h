#ifndef _EFL_UI_RANGE_INTERACTIVE_EO_H_
#define _EFL_UI_RANGE_INTERACTIVE_EO_H_

#ifndef _EFL_UI_RANGE_INTERACTIVE_EO_CLASS_TYPE
#define _EFL_UI_RANGE_INTERACTIVE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Range_Interactive;

#endif

#ifndef _EFL_UI_RANGE_INTERACTIVE_EO_TYPES
#define _EFL_UI_RANGE_INTERACTIVE_EO_TYPES


#endif
/**
 * @brief Interface that extends the normal displaying properties with usage
 * properties.
 *
 * The properties defined here are used to manipulate the way a user interacts
 * with a displayed range.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Interactive
 */
#define EFL_UI_RANGE_INTERACTIVE_INTERFACE efl_ui_range_interactive_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_range_interactive_interface_get(void) EINA_CONST;

/**
 * @brief Control the step used to increment or decrement values for given
 * widget.
 *
 * This value will be incremented or decremented to the displayed value.
 *
 * By default step value is equal to 1.
 *
 * @warning The step value should be bigger than 0.
 *
 * @param[in] obj The object.
 * @param[in] step The step value.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Interactive
 */
EAPI EAPI_WEAK void efl_ui_range_step_set(Eo *obj, double step);

/**
 * @brief Control the step used to increment or decrement values for given
 * widget.
 *
 * This value will be incremented or decremented to the displayed value.
 *
 * By default step value is equal to 1.
 *
 * @warning The step value should be bigger than 0.
 *
 * @param[in] obj The object.
 *
 * @return The step value.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Interactive
 */
EAPI EAPI_WEAK double efl_ui_range_step_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_RANGE_EVENT_STEADY;

/** Called when the widget's value has changed and has remained unchanged for
 * 0.2s. This allows filtering out unwanted "noise" from the widget if you are
 * only interested in its final position. Use this event instead of
 * @[Efl.Ui.Range_Display.changed] if you are going to perform a costly
 * operation on its handler.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Interactive
 */
#define EFL_UI_RANGE_EVENT_STEADY (&(_EFL_UI_RANGE_EVENT_STEADY))

#endif
