#ifndef _EFL_LOOP_MESSAGE_EO_H_
#define _EFL_LOOP_MESSAGE_EO_H_

#ifndef _EFL_LOOP_MESSAGE_EO_CLASS_TYPE
#define _EFL_LOOP_MESSAGE_EO_CLASS_TYPE

typedef Eo Efl_Loop_Message;

#endif

#ifndef _EFL_LOOP_MESSAGE_EO_TYPES
#define _EFL_LOOP_MESSAGE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Base message payload object class. Inherit this and extend for specific
 * message types.
 *
 * @ingroup Efl_Loop_Message
 */
#define EFL_LOOP_MESSAGE_CLASS efl_loop_message_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_loop_message_class_get(void) EINA_CONST;

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_MESSAGE_EVENT_MESSAGE;

/** The message payload data
 * @return Efl_Loop_Message *
 *
 * @ingroup Efl_Loop_Message
 */
#define EFL_LOOP_MESSAGE_EVENT_MESSAGE (&(_EFL_LOOP_MESSAGE_EVENT_MESSAGE))
#endif /* EFL_BETA_API_SUPPORT */

#endif
