#ifndef _EFL_CONFIG_GLOBAL_EO_H_
#define _EFL_CONFIG_GLOBAL_EO_H_

#ifndef _EFL_CONFIG_GLOBAL_EO_CLASS_TYPE
#define _EFL_CONFIG_GLOBAL_EO_CLASS_TYPE

typedef Eo Efl_Config_Global;

#endif

#ifndef _EFL_CONFIG_GLOBAL_EO_TYPES
#define _EFL_CONFIG_GLOBAL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This class is a singleton representing the global configuration for the
 * running application.
 *
 * @ingroup Efl_Config_Global
 */
#define EFL_CONFIG_GLOBAL_CLASS efl_config_global_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_config_global_class_get(void) EINA_CONST;

#ifdef EFL_CONFIG_GLOBAL_PROTECTED
/**
 * @brief Saves Elementary configuration to disk.
 *
 * This function will take effect (does I/O) immediately. Use it when you want
 * to save all configuration changes at once. The current configuration set
 * will get saved onto the current profile configuration file.
 *
 * If @c profile is @c null, this will flush all settings to all applications
 * running on the same profile.
 *
 * If @c profile is not @c null, this will take the current in-memory config
 * and write it out to the named @c profile. This will not change profile for
 * the application or make other processes switch profile.
 *
 * @param[in] obj The object.
 * @param[in] profile The profile name.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Config_Global
 */
EAPI EAPI_WEAK Eina_Bool efl_config_save(Eo *obj, const char *profile);
#endif

/**
 * @brief The profile for the running application.
 *
 * Profiles are pre-set options that affect the whole look-and-feel of
 * Elementary-based applications. There are, for example, profiles aimed at
 * desktop computer applications and others aimed at mobile, touchscreen-based
 * ones. You most probably don't want to use the functions in this group unless
 * you're writing an elementary configuration manager.
 *
 * This gets or sets the global profile that is applied to all Elementary
 * applications.
 *
 * @param[in] obj The object.
 * @param[in] profile Profile name
 *
 * @ingroup Efl_Config_Global
 */
EAPI EAPI_WEAK void efl_config_profile_set(Eo *obj, const char *profile);

/**
 * @brief The profile for the running application.
 *
 * Profiles are pre-set options that affect the whole look-and-feel of
 * Elementary-based applications. There are, for example, profiles aimed at
 * desktop computer applications and others aimed at mobile, touchscreen-based
 * ones. You most probably don't want to use the functions in this group unless
 * you're writing an elementary configuration manager.
 *
 * This gets or sets the global profile that is applied to all Elementary
 * applications.
 *
 * @param[in] obj The object.
 *
 * @return Profile name
 *
 * @ingroup Efl_Config_Global
 */
EAPI EAPI_WEAK const char *efl_config_profile_get(const Eo *obj);

/**
 * @brief Returns the list of available profiles.
 *
 * @param[in] obj The object.
 * @param[in] hidden If @c true, gets the full list of profiles, including
 * those stored in hidden files.
 *
 * @return Iterator to profiles
 *
 * @ingroup Efl_Config_Global
 */
EAPI EAPI_WEAK Eina_Iterator *efl_config_profile_iterate(Eo *obj, Eina_Bool hidden) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Returns whether a profile exists or not.
 *
 * @param[in] obj The object.
 * @param[in] profile Profile name
 *
 * @return @c true if profile exists, @c false otherwise
 *
 * @ingroup Efl_Config_Global
 */
EAPI EAPI_WEAK Eina_Bool efl_config_profile_exists(Eo *obj, const char *profile);

/**
 * @brief Returns the directory where a profile is stored.
 *
 * @param[in] obj The object.
 * @param[in] profile Profile name
 * @param[in] is_user @c true to lookup for a user profile or @c false for a
 * system one.
 *
 * @return Directory of the profile, free after use.
 *
 * @ingroup Efl_Config_Global
 */
EAPI EAPI_WEAK Eina_Stringshare *efl_config_profile_dir_get(Eo *obj, const char *profile, Eina_Bool is_user) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

#ifdef EFL_CONFIG_GLOBAL_PROTECTED
/**
 * @brief Add a new profile of the given name to be derived from the current
 * profile.
 *
 * This creates a new profile of name @c profile that will be derived from the
 * currently used profile using the modification commands encoded in the
 * @c options string.
 *
 * At this point it is not expected that anyone would generally use this API
 * except if you are a desktop environment and so the user base of this API
 * will be enlightenment itself.
 *
 * @param[in] obj The object.
 * @param[in] profile The new profile's name.
 * @param[in] options Derive options detailing how to modify.
 *
 * @ingroup Efl_Config_Global
 */
EAPI EAPI_WEAK void efl_config_profile_derived_add(Eo *obj, const char *profile, const char *options);
#endif

#ifdef EFL_CONFIG_GLOBAL_PROTECTED
/**
 * @brief Deletes a profile that is derived from the current one.
 *
 * This deletes a derived profile added by @ref efl_config_profile_derived_add.
 * This will delete the profile of the given name @c profile that is derived
 * from the current profile.
 *
 * At this point it is not expected that anyone would generally use this API
 * except if you are a desktop environment and so the user base of this API
 * will be enlightenment itself.
 *
 * @param[in] obj The object.
 * @param[in] profile The name of the profile that is to be deleted.
 *
 * @ingroup Efl_Config_Global
 */
EAPI EAPI_WEAK void efl_config_profile_derived_del(Eo *obj, const char *profile);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#endif
