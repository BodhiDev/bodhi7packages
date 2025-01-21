#ifndef _ELDBUS_MODEL_SIGNAL_EO_H_
#define _ELDBUS_MODEL_SIGNAL_EO_H_

#ifndef _ELDBUS_MODEL_SIGNAL_EO_CLASS_TYPE
#define _ELDBUS_MODEL_SIGNAL_EO_CLASS_TYPE

typedef Eo Eldbus_Model_Signal;

#endif

#ifndef _ELDBUS_MODEL_SIGNAL_EO_TYPES
#define _ELDBUS_MODEL_SIGNAL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Eldbus model signal class
 *
 * @ingroup Eldbus_Model_Signal
 */
#define ELDBUS_MODEL_SIGNAL_CLASS eldbus_model_signal_class_get()

EAPI EAPI_WEAK const Efl_Class *eldbus_model_signal_class_get(void) EINA_CONST;

/**
 * @brief Custom Eldbus_Model_Signal constructor.
 *
 * @param[in] obj The object.
 * @param[in] proxy Eldbus proxy
 * @param[in] signal The introspected method
 *
 * @since 1.16
 *
 * @ingroup Eldbus_Model_Signal
 */
EAPI EAPI_WEAK void eldbus_model_signal_constructor(Eo *obj, Eldbus_Proxy *proxy, const Eldbus_Introspection_Signal *signal);
#endif /* EFL_BETA_API_SUPPORT */

#endif
