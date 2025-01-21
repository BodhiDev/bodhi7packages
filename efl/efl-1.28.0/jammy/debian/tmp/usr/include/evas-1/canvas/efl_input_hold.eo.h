#ifndef _EFL_INPUT_HOLD_EO_H_
#define _EFL_INPUT_HOLD_EO_H_

#ifndef _EFL_INPUT_HOLD_EO_CLASS_TYPE
#define _EFL_INPUT_HOLD_EO_CLASS_TYPE

typedef Eo Efl_Input_Hold;

#endif

#ifndef _EFL_INPUT_HOLD_EO_TYPES
#define _EFL_INPUT_HOLD_EO_TYPES


#endif
/** Event data sent when inputs are put on hold or resumed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Hold
 */
#define EFL_INPUT_HOLD_CLASS efl_input_hold_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_input_hold_class_get(void) EINA_CONST;

/**
 * @brief Property to show if inputs are now on hold.
 *
 * @param[in] obj The object.
 * @param[in] val @c true if inputs are on hold, @c false otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Hold
 */
EVAS_API EVAS_API_WEAK void efl_input_hold_set(Eo *obj, Eina_Bool val);

/**
 * @brief Property to show if inputs are now on hold.
 *
 * @param[in] obj The object.
 *
 * @return @c true if inputs are on hold, @c false otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Hold
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_hold_get(const Eo *obj);

#endif
