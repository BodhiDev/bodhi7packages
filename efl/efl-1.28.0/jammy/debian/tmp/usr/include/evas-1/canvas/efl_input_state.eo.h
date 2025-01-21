#ifndef _EFL_INPUT_STATE_EO_H_
#define _EFL_INPUT_STATE_EO_H_

#ifndef _EFL_INPUT_STATE_EO_CLASS_TYPE
#define _EFL_INPUT_STATE_EO_CLASS_TYPE

typedef Eo Efl_Input_State;

#endif

#ifndef _EFL_INPUT_STATE_EO_TYPES
#define _EFL_INPUT_STATE_EO_TYPES


#endif
/** Efl input state interface.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_State
 */
#define EFL_INPUT_STATE_INTERFACE efl_input_state_interface_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_input_state_interface_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Indicates whether a key modifier is on, such as Ctrl, Shift, ...
 *
 * @param[in] obj The object.
 * @param[in] mod The modifier key to test.
 * @param[in] seat The seat device, may be @c null
 *
 * @return @c true if the key modifier is pressed.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_State
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_modifier_enabled_get(const Eo *obj, Efl_Input_Modifier mod, const Efl_Input_Device *seat);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Indicates whether a key lock is on, such as NumLock, CapsLock, ...
 *
 * @param[in] obj The object.
 * @param[in] lock The lock key to test.
 * @param[in] seat The seat device, may be @c null
 *
 * @return @c true if the key lock is on.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_State
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_lock_enabled_get(const Eo *obj, Efl_Input_Lock lock, const Efl_Input_Device *seat);
#endif /* EFL_BETA_API_SUPPORT */

#endif
