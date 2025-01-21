#ifndef _EFL_CONFIG_EO_H_
#define _EFL_CONFIG_EO_H_

#ifndef _EFL_CONFIG_EO_CLASS_TYPE
#define _EFL_CONFIG_EO_CLASS_TYPE

typedef Eo Efl_Config;

#endif

#ifndef _EFL_CONFIG_EO_TYPES
#define _EFL_CONFIG_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** A generic configuration interface, that holds key-value pairs.
 *
 * @ingroup Efl_Config
 */
#define EFL_CONFIG_INTERFACE efl_config_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_config_interface_get(void) EINA_CONST;

/**
 * @brief A generic configuration value, referred to by name.
 *
 * @param[in] obj The object.
 * @param[in] name Configuration option name.
 * @param[in] value Configuration option value. May be @c null if not found.
 *
 * @return @c false in case of error: value type was invalid, the config can't
 * be changed, config does not exist...
 *
 * @ingroup Efl_Config
 */
EAPI EAPI_WEAK Eina_Bool efl_config_set(Eo *obj, const char *name, const Eina_Value *value);

/**
 * @brief A generic configuration value, referred to by name.
 *
 * @param[in] obj The object.
 * @param[in] name Configuration option name.
 *
 * @return The value. It will be empty if it doesn't exist. The caller must
 * free it after use (using @c eina_value_free() in C).
 *
 * @ingroup Efl_Config
 */
EAPI EAPI_WEAK Eina_Value *efl_config_get(const Eo *obj, const char *name) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_CONFIG_EVENT_CONFIG_CHANGED;

/** Called when a config value has been changed for the manager object. Passed
 * string is the name of the value or NULL if all values were changed.
 * @return const char *
 *
 * @ingroup Efl_Config
 */
#define EFL_CONFIG_EVENT_CONFIG_CHANGED (&(_EFL_CONFIG_EVENT_CONFIG_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
