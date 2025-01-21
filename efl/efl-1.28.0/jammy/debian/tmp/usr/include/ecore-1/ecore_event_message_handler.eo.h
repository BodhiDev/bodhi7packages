#ifndef _ECORE_EVENT_MESSAGE_HANDLER_EO_H_
#define _ECORE_EVENT_MESSAGE_HANDLER_EO_H_

#ifndef _ECORE_EVENT_MESSAGE_HANDLER_EO_CLASS_TYPE
#define _ECORE_EVENT_MESSAGE_HANDLER_EO_CLASS_TYPE

typedef Eo Ecore_Event_Message_Handler;

#endif

#ifndef _ECORE_EVENT_MESSAGE_HANDLER_EO_TYPES
#define _ECORE_EVENT_MESSAGE_HANDLER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** For Legacy API usage Only This class is rather hacky/messy as it's really
 * internal glue to handle legacy ecore events alongside the new loop message
 * stuff merged together. This is ugly as it's internal only to quickly glue
 * things together and is destined for death in EFL 2.0 or when we dump legacy.
 *
 * @ingroup Ecore_Event_Message_Handler
 */
#define ECORE_EVENT_MESSAGE_HANDLER_CLASS ecore_event_message_handler_class_get()

EAPI EAPI_WEAK const Efl_Class *ecore_event_message_handler_class_get(void) EINA_CONST;

/**
 * @brief No description supplied.
 *
 * @param[in] obj The object.
 *
 * @return No description supplied.
 *
 * @ingroup Ecore_Event_Message_Handler
 */
EAPI EAPI_WEAK Ecore_Event_Message *ecore_event_message_handler_message_type_add(Eo *obj);

/**
 * @brief No description supplied.
 *
 * @param[in] obj The object.
 *
 * @return No description supplied.
 *
 * @ingroup Ecore_Event_Message_Handler
 */
EAPI EAPI_WEAK int ecore_event_message_handler_type_new(Eo *obj);

/**
 * @brief Legacy list of callback handlers so they can return false
 *
 * @param[in] obj The object.
 * @param[in] type
 * @param[in] func
 * @param[in] data
 *
 * @return Lazy return handle
 *
 * @ingroup Ecore_Event_Message_Handler
 */
EAPI EAPI_WEAK void *ecore_event_message_handler_add(Eo *obj, int type, void *func, void *data);

/**
 * @brief Legacy list of callback handlers so they can return false
 *
 * @param[in] obj The object.
 * @param[in] type
 * @param[in] func
 * @param[in] data
 *
 * @return Lazy return handle
 *
 * @ingroup Ecore_Event_Message_Handler
 */
EAPI EAPI_WEAK void *ecore_event_message_handler_prepend(Eo *obj, int type, void *func, void *data);

EAPI EAPI_WEAK void *ecore_event_message_handler_del(Eo *obj, void *handler);

EAPI EAPI_WEAK void *ecore_event_message_handler_data_get(Eo *obj, void *handler);

EAPI EAPI_WEAK void *ecore_event_message_handler_data_set(Eo *obj, void *handler, void *data);

/**
 * @brief Legacy event filter
 *
 * @param[in] obj The object.
 * @param[in] func_start
 * @param[in] func_filter
 * @param[in] func_end
 * @param[in] data
 *
 * @return Lazy return filter handle
 *
 * @ingroup Ecore_Event_Message_Handler
 */
EAPI EAPI_WEAK void *ecore_event_message_handler_filter_add(Eo *obj, void *func_start, void *func_filter, void *func_end, void *data);

EAPI EAPI_WEAK void *ecore_event_message_handler_filter_del(Eo *obj, void *filter);

EAPI EAPI_WEAK int ecore_event_message_handler_current_type_get(Eo *obj);

EAPI EAPI_WEAK void *ecore_event_message_handler_current_event_get(Eo *obj);

EAPI EAPI_WEAK void ecore_event_message_handler_type_flush(Eo *obj, int type);

EAPI EAPI_WEAK extern const Efl_Event_Description _ECORE_EVENT_MESSAGE_HANDLER_EVENT_MESSAGE_ECORE_EVENT;

/** Sample - override this
 * @return Ecore_Event_Message *
 *
 * @ingroup Ecore_Event_Message_Handler
 */
#define ECORE_EVENT_MESSAGE_HANDLER_EVENT_MESSAGE_ECORE_EVENT (&(_ECORE_EVENT_MESSAGE_HANDLER_EVENT_MESSAGE_ECORE_EVENT))
#endif /* EFL_BETA_API_SUPPORT */

#endif
