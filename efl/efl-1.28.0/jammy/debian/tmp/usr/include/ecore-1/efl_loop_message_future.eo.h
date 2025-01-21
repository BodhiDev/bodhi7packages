#ifndef _EFL_LOOP_MESSAGE_FUTURE_EO_H_
#define _EFL_LOOP_MESSAGE_FUTURE_EO_H_

#ifndef _EFL_LOOP_MESSAGE_FUTURE_EO_CLASS_TYPE
#define _EFL_LOOP_MESSAGE_FUTURE_EO_CLASS_TYPE

typedef Eo Efl_Loop_Message_Future;

#endif

#ifndef _EFL_LOOP_MESSAGE_FUTURE_EO_TYPES
#define _EFL_LOOP_MESSAGE_FUTURE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Used internally for futures on the loop
 *
 * @ingroup Efl_Loop_Message_Future
 */
#define EFL_LOOP_MESSAGE_FUTURE_CLASS efl_loop_message_future_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_loop_message_future_class_get(void) EINA_CONST;

/**
 * @brief No description supplied.
 *
 * @param[in] obj The object.
 * @param[in] data No description supplied.
 *
 * @ingroup Efl_Loop_Message_Future
 */
EAPI EAPI_WEAK void efl_loop_message_future_data_set(Eo *obj, void *data);

/**
 * @brief No description supplied.
 *
 * @param[in] obj The object.
 *
 * @return No description supplied.
 *
 * @ingroup Efl_Loop_Message_Future
 */
EAPI EAPI_WEAK void *efl_loop_message_future_data_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
