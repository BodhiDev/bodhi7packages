#ifndef _ECORE_EVENT_MESSAGE_EO_H_
#define _ECORE_EVENT_MESSAGE_EO_H_

#ifndef _ECORE_EVENT_MESSAGE_EO_CLASS_TYPE
#define _ECORE_EVENT_MESSAGE_EO_CLASS_TYPE

typedef Eo Ecore_Event_Message;

#endif

#ifndef _ECORE_EVENT_MESSAGE_EO_TYPES
#define _ECORE_EVENT_MESSAGE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** For Legacy API usage Only. Legacy Ecore Events
 *
 * @ingroup Ecore_Event_Message
 */
#define ECORE_EVENT_MESSAGE_CLASS ecore_event_message_class_get()

EAPI EAPI_WEAK const Efl_Class *ecore_event_message_class_get(void) EINA_CONST;

/**
 * @brief Property of the legacy event - set and get it
 *
 * @param[in] obj The object.
 * @param[in] type The event type
 * @param[in] data The event data
 * @param[in] free_func Being lazy for legacy
 * @param[in] free_data Free func data
 *
 * @ingroup Ecore_Event_Message
 */
EAPI EAPI_WEAK void ecore_event_message_data_set(Eo *obj, int type, void *data, void *free_func, void *free_data);

/**
 * @brief Property of the legacy event - set and get it
 *
 * @param[in] obj The object.
 * @param[out] type The event type
 * @param[out] data The event data
 * @param[out] free_func Being lazy for legacy
 * @param[out] free_data Free func data
 *
 * @ingroup Ecore_Event_Message
 */
EAPI EAPI_WEAK void ecore_event_message_data_get(const Eo *obj, int *type, void **data, void **free_func, void **free_data);

/**
 * @brief Steal the data out and set internal values to -1 for type and @c NULL
 * for other vals
 *
 * @param[in] obj The object.
 * @param[out] type The event type
 * @param[out] data The event data
 * @param[out] free_func Being lazy for legacy
 * @param[out] free_data Free func data
 *
 * @ingroup Ecore_Event_Message
 */
EAPI EAPI_WEAK void ecore_event_message_data_steal(Eo *obj, int *type, void **data, void **free_func, void **free_data);
#endif /* EFL_BETA_API_SUPPORT */

#endif
