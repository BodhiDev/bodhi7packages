#ifndef _ELDBUS_MODEL_ARGUMENTS_EO_H_
#define _ELDBUS_MODEL_ARGUMENTS_EO_H_

#ifndef _ELDBUS_MODEL_ARGUMENTS_EO_CLASS_TYPE
#define _ELDBUS_MODEL_ARGUMENTS_EO_CLASS_TYPE

typedef Eo Eldbus_Model_Arguments;

#endif

#ifndef _ELDBUS_MODEL_ARGUMENTS_EO_TYPES
#define _ELDBUS_MODEL_ARGUMENTS_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Eldbus model arguments class
 *
 * @ingroup Eldbus_Model_Arguments
 */
#define ELDBUS_MODEL_ARGUMENTS_CLASS eldbus_model_arguments_class_get()

EAPI EAPI_WEAK const Efl_Class *eldbus_model_arguments_class_get(void) EINA_CONST;

/**
 * @brief Custom Eldbus_Model_Arguments constructor.
 *
 * @param[in] obj The object.
 * @param[in] proxy Eldbus proxy
 * @param[in] name Name
 * @param[in] arguments The introspected arguments
 *
 * @since 1.16
 *
 * @ingroup Eldbus_Model_Arguments
 */
EAPI EAPI_WEAK void eldbus_model_arguments_custom_constructor(Eo *obj, Eldbus_Proxy *proxy, const char *name, const Eina_List *arguments);

/**
 * @brief Name of the argument
 *
 * @param[in] obj The object.
 *
 * @return Argument name
 *
 * @ingroup Eldbus_Model_Arguments
 */
EAPI EAPI_WEAK const char *eldbus_model_arguments_arg_name_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
