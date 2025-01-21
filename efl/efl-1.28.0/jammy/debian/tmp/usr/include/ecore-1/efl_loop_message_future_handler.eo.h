#ifndef _EFL_LOOP_MESSAGE_FUTURE_HANDLER_EO_H_
#define _EFL_LOOP_MESSAGE_FUTURE_HANDLER_EO_H_

#ifndef _EFL_LOOP_MESSAGE_FUTURE_HANDLER_EO_CLASS_TYPE
#define _EFL_LOOP_MESSAGE_FUTURE_HANDLER_EO_CLASS_TYPE

typedef Eo Efl_Loop_Message_Future_Handler;

#endif

#ifndef _EFL_LOOP_MESSAGE_FUTURE_HANDLER_EO_TYPES
#define _EFL_LOOP_MESSAGE_FUTURE_HANDLER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Internal use for future on an efl loop - replacing legacy ecore events
 *
 * @ingroup Efl_Loop_Message_Future_Handler
 */
#define EFL_LOOP_MESSAGE_FUTURE_HANDLER_CLASS efl_loop_message_future_handler_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_loop_message_future_handler_class_get(void) EINA_CONST;

/**
 * @brief No description supplied.
 *
 * @param[in] obj The object.
 *
 * @return No description supplied.
 *
 * @ingroup Efl_Loop_Message_Future_Handler
 */
EAPI EAPI_WEAK Efl_Loop_Message_Future *efl_loop_message_future_handler_message_type_add(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_MESSAGE_FUTURE_HANDLER_EVENT_MESSAGE_FUTURE;

/** No description supplied.
 * @return Efl_Loop_Message_Future *
 *
 * @ingroup Efl_Loop_Message_Future_Handler
 */
#define EFL_LOOP_MESSAGE_FUTURE_HANDLER_EVENT_MESSAGE_FUTURE (&(_EFL_LOOP_MESSAGE_FUTURE_HANDLER_EVENT_MESSAGE_FUTURE))
#endif /* EFL_BETA_API_SUPPORT */

#endif
