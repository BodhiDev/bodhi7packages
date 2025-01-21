#ifndef _ELDBUS_MODEL_PROXY_EO_H_
#define _ELDBUS_MODEL_PROXY_EO_H_

#ifndef _ELDBUS_MODEL_PROXY_EO_CLASS_TYPE
#define _ELDBUS_MODEL_PROXY_EO_CLASS_TYPE

typedef Eo Eldbus_Model_Proxy;

#endif

#ifndef _ELDBUS_MODEL_PROXY_EO_TYPES
#define _ELDBUS_MODEL_PROXY_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Eldbus model proxy class
 *
 * @ingroup Eldbus_Model_Proxy
 */
#define ELDBUS_MODEL_PROXY_CLASS eldbus_model_proxy_class_get()

EAPI EAPI_WEAK const Efl_Class *eldbus_model_proxy_class_get(void) EINA_CONST;

/**
 * @brief Object
 *
 * @param[in] obj The object.
 * @param[in] object Eldbus object
 *
 * @ingroup Eldbus_Model_Proxy
 */
EAPI EAPI_WEAK void eldbus_model_proxy_object_set(Eo *obj, Eldbus_Object *object);

/**
 * @brief Object
 *
 * @param[in] obj The object.
 * @param[in] interface The introspected interface
 *
 * @ingroup Eldbus_Model_Proxy
 */
EAPI EAPI_WEAK void eldbus_model_proxy_interface_set(Eo *obj, const Eldbus_Introspection_Interface *interface);

/**
 * @brief Proxy name
 *
 * @param[in] obj The object.
 *
 * @return Proxy name
 *
 * @ingroup Eldbus_Model_Proxy
 */
EAPI EAPI_WEAK const char *eldbus_model_proxy_name_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
