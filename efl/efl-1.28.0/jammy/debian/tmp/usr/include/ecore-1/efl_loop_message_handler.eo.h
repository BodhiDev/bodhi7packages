#ifndef _EFL_LOOP_MESSAGE_HANDLER_EO_H_
#define _EFL_LOOP_MESSAGE_HANDLER_EO_H_

#ifndef _EFL_LOOP_MESSAGE_HANDLER_EO_CLASS_TYPE
#define _EFL_LOOP_MESSAGE_HANDLER_EO_CLASS_TYPE

typedef Eo Efl_Loop_Message_Handler;

#endif

#ifndef _EFL_LOOP_MESSAGE_HANDLER_EO_TYPES
#define _EFL_LOOP_MESSAGE_HANDLER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Message handlers represent a single message type on the Efl.Loop parent
 * object. These message handlers can be used to listen for that message type
 * by listening to the message event for the generic case or a class specific
 * event type to get specific message object typing correct.
 *
 * @ingroup Efl_Loop_Message_Handler
 */
#define EFL_LOOP_MESSAGE_HANDLER_CLASS efl_loop_message_handler_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_loop_message_handler_class_get(void) EINA_CONST;

/**
 * @brief Creates a new message object of the correct type for this message
 * type.
 *
 * @param[in] obj The object.
 *
 * @return The new message payload object.
 *
 * @ingroup Efl_Loop_Message_Handler
 */
EAPI EAPI_WEAK Efl_Loop_Message *efl_loop_message_handler_message_add(Eo *obj);

/**
 * @brief Place the message on the queue to be called later when
 * message_process() is called on the loop object.
 *
 * @param[in] obj The object.
 * @param[in] message The message to place on the queue.
 *
 * @ingroup Efl_Loop_Message_Handler
 */
EAPI EAPI_WEAK void efl_loop_message_handler_message_send(Eo *obj, Efl_Loop_Message *message);

/**
 * @brief Overide me (implement) then call super after calling the right
 * callback type if you specialize the message type.
 *
 * @param[in] obj The object.
 * @param[in] message Generic message event type
 *
 * @ingroup Efl_Loop_Message_Handler
 */
EAPI EAPI_WEAK void efl_loop_message_handler_message_call(Eo *obj, Efl_Loop_Message *message);

/**
 * @brief Delete all queued messages belonging to this message handler that are
 * pending on the queue so they are not processed later.
 *
 * @param[in] obj The object.
 *
 * @return True if any messages of this type were cleared.
 *
 * @ingroup Efl_Loop_Message_Handler
 */
EAPI EAPI_WEAK Eina_Bool efl_loop_message_handler_message_clear(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_MESSAGE_HANDLER_EVENT_MESSAGE;

/** The message payload data
 * @return Efl_Loop_Message *
 *
 * @ingroup Efl_Loop_Message_Handler
 */
#define EFL_LOOP_MESSAGE_HANDLER_EVENT_MESSAGE (&(_EFL_LOOP_MESSAGE_HANDLER_EVENT_MESSAGE))
#endif /* EFL_BETA_API_SUPPORT */

#endif
