#ifndef _EFL_ACCESS_ACTION_EO_H_
#define _EFL_ACCESS_ACTION_EO_H_

#ifndef _EFL_ACCESS_ACTION_EO_CLASS_TYPE
#define _EFL_ACCESS_ACTION_EO_CLASS_TYPE

typedef Eo Efl_Access_Action;

#endif

#ifndef _EFL_ACCESS_ACTION_EO_TYPES
#define _EFL_ACCESS_ACTION_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Accessible action mixin
 *
 * @ingroup Efl_Access_Action
 */
#define EFL_ACCESS_ACTION_MIXIN efl_access_action_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_access_action_mixin_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
/**
 * @brief Gets action name for given id
 *
 * @param[in] obj The object.
 * @param[in] id ID to get action name for
 *
 * @return Action name
 *
 * @ingroup Efl_Access_Action
 */
EAPI EAPI_WEAK const char *efl_access_action_name_get(const Eo *obj, int id);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
/**
 * @brief Gets localized action name for given id
 *
 * @param[in] obj The object.
 * @param[in] id ID to get localized name for
 *
 * @return Localized name
 *
 * @ingroup Efl_Access_Action
 */
EAPI EAPI_WEAK const char *efl_access_action_localized_name_get(const Eo *obj, int id);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
/**
 * @brief Action description for given id
 *
 * @param[in] obj The object.
 * @param[in] id ID to set or get description for
 * @param[in] description Action description
 *
 * @return @c true if description was set, @c false otherwise
 *
 * @ingroup Efl_Access_Action
 */
EAPI EAPI_WEAK Eina_Bool efl_access_action_description_set(Eo *obj, int id, const char *description);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
/**
 * @brief Action description for given id
 *
 * @param[in] obj The object.
 * @param[in] id ID to set or get description for
 *
 * @return Action description
 *
 * @ingroup Efl_Access_Action
 */
EAPI EAPI_WEAK const char *efl_access_action_description_get(const Eo *obj, int id);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
/**
 * @brief Get list of available widget actions
 *
 * @param[in] obj The object.
 *
 * @return Contains statically allocated strings.
 *
 * @ingroup Efl_Access_Action
 */
EAPI EAPI_WEAK Eina_List *efl_access_action_actions_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
/**
 * @brief Performs action on given widget.
 *
 * @param[in] obj The object.
 * @param[in] id ID for widget
 *
 * @return @c true if action was performed, @c false otherwise
 *
 * @ingroup Efl_Access_Action
 */
EAPI EAPI_WEAK Eina_Bool efl_access_action_do(Eo *obj, int id);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
/**
 * @brief Gets configured keybinding for specific action and widget.
 *
 * @param[in] obj The object.
 * @param[in] id ID for widget
 *
 * @return Should be freed by the user.
 *
 * @ingroup Efl_Access_Action
 */
EAPI EAPI_WEAK char *efl_access_action_keybinding_get(Eo *obj, int id) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif
#endif /* EFL_BETA_API_SUPPORT */
#endif /* EFL_BETA_API_SUPPORT */

#endif
