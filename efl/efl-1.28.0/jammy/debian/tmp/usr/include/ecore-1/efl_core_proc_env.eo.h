#ifndef _EFL_CORE_PROC_ENV_EO_H_
#define _EFL_CORE_PROC_ENV_EO_H_

#ifndef _EFL_CORE_PROC_ENV_EO_CLASS_TYPE
#define _EFL_CORE_PROC_ENV_EO_CLASS_TYPE

typedef Eo Efl_Core_Proc_Env;

#endif

#ifndef _EFL_CORE_PROC_ENV_EO_TYPES
#define _EFL_CORE_PROC_ENV_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
#define EFL_CORE_PROC_ENV_CLASS efl_core_proc_env_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_core_proc_env_class_get(void) EINA_CONST;

/**
 * @brief Get a instance of this object
 *
 * The object will apply the environment operations onto this process.
 *
 * @ingroup Efl_Core_Proc_Env
 */
EAPI EAPI_WEAK Efl_Core_Env *efl_env_self(void);
#endif /* EFL_BETA_API_SUPPORT */

#endif
