#ifndef _EFL_CORE_ENV_EO_H_
#define _EFL_CORE_ENV_EO_H_

#ifndef _EFL_CORE_ENV_EO_CLASS_TYPE
#define _EFL_CORE_ENV_EO_CLASS_TYPE

typedef Eo Efl_Core_Env;

#endif

#ifndef _EFL_CORE_ENV_EO_TYPES
#define _EFL_CORE_ENV_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This object can maintain a set of key value pairs
 *
 * A object of this type alone does not apply the object to the system. For
 * getting the value into the system, see @ref Efl_Core_Proc_Env.
 *
 * A object can be forked, which will only copy its values, changes to the
 * returned object will not change the object where it is forked off.
 *
 * @ingroup Efl_Core_Env
 */
#define EFL_CORE_ENV_CLASS efl_core_env_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_core_env_class_get(void) EINA_CONST;

/**
 * @brief Stored var value pairs of this object.
 *
 * Var must contain only: underscores ('_'), letters ('a-z', 'A-Z'), numbers
 * ('0-9'), but the first character may not be a number.
 *
 * Add a new pair to this object
 *
 * @param[in] obj The object.
 * @param[in] var The name of the variable
 * @param[in] value Set var to this value if not @c NULL, otherwise clear this
 * env value if value is @c NULL or if it is an empty string
 *
 * @ingroup Efl_Core_Env
 */
EAPI EAPI_WEAK void efl_core_env_set(Eo *obj, const char *var, const char *value);

/**
 * @brief Stored var value pairs of this object.
 *
 * Var must contain only: underscores ('_'), letters ('a-z', 'A-Z'), numbers
 * ('0-9'), but the first character may not be a number.
 *
 * Get the value of the @c var, or @c null if no such @c var exists in the
 * object
 *
 * @param[in] obj The object.
 * @param[in] var The name of the variable
 *
 * @return Set var to this value if not @c NULL, otherwise clear this env value
 * if value is @c NULL or if it is an empty string
 *
 * @ingroup Efl_Core_Env
 */
EAPI EAPI_WEAK const char *efl_core_env_get(const Eo *obj, const char *var);

/**
 * @brief Remove the pair with the matching @c var from this object
 *
 * @param[in] obj The object.
 * @param[in] var The name of the variable
 *
 * @ingroup Efl_Core_Env
 */
EAPI EAPI_WEAK void efl_core_env_unset(Eo *obj, const char *var);

/** Remove all pairs from this object
 *
 * @ingroup Efl_Core_Env
 */
EAPI EAPI_WEAK void efl_core_env_clear(Eo *obj);

/**
 * @brief Get the content of this object.
 *
 * This will return a iterator that contains all keys that are part of this
 * object.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Core_Env
 */
EAPI EAPI_WEAK Eina_Iterator *efl_core_env_content_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif /* EFL_BETA_API_SUPPORT */

#endif
