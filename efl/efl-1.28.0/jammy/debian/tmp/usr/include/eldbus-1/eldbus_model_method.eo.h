#ifndef _ELDBUS_MODEL_METHOD_EO_H_
#define _ELDBUS_MODEL_METHOD_EO_H_

#ifndef _ELDBUS_MODEL_METHOD_EO_CLASS_TYPE
#define _ELDBUS_MODEL_METHOD_EO_CLASS_TYPE

typedef Eo Eldbus_Model_Method;

#endif

#ifndef _ELDBUS_MODEL_METHOD_EO_TYPES
#define _ELDBUS_MODEL_METHOD_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Eldbus model method class
 *
 * @ingroup Eldbus_Model_Method
 */
#define ELDBUS_MODEL_METHOD_CLASS eldbus_model_method_class_get()

EAPI EAPI_WEAK const Efl_Class *eldbus_model_method_class_get(void) EINA_CONST;

/**
 * @brief Custom Eldbus_Model_Method constructor.
 *
 * @param[in] obj The object.
 * @param[in] proxy Eldbus proxy
 *
 * @since 1.21
 *
 * @ingroup Eldbus_Model_Method
 */
EAPI EAPI_WEAK void eldbus_model_method_proxy_set(Eo *obj, Eldbus_Proxy *proxy);

/**
 * @brief Object
 *
 * @param[in] obj The object.
 * @param[in] method The introspected interface
 *
 * @ingroup Eldbus_Model_Method
 */
EAPI EAPI_WEAK void eldbus_model_method_set(Eo *obj, const Eldbus_Introspection_Method *method);

/**
 * @brief Calls the method. The properties must have been set.
 *
 * The event EMODEL_EVENT_PROPERTIES_CHANGED is raised for output arguments
 * (properties).
 *
 * The event ELDBUS_MODEL_METHOD_EVENT_METHOD_CALLED is raised for a successful
 * call. Otherwise
 *
 * @param[in] obj The object.
 *
 * @since 1.16
 *
 * @ingroup Eldbus_Model_Method
 */
EAPI EAPI_WEAK void eldbus_model_method_call(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _ELDBUS_MODEL_METHOD_EVENT_SUCCESSFUL_CALL;

/** Event dispatched for a successful method call.
 *
 * @ingroup Eldbus_Model_Method
 */
#define ELDBUS_MODEL_METHOD_EVENT_SUCCESSFUL_CALL (&(_ELDBUS_MODEL_METHOD_EVENT_SUCCESSFUL_CALL))
#endif /* EFL_BETA_API_SUPPORT */

#endif
