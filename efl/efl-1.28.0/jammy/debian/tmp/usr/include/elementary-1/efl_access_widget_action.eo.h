#ifndef _EFL_ACCESS_WIDGET_ACTION_EO_H_
#define _EFL_ACCESS_WIDGET_ACTION_EO_H_

#ifndef _EFL_ACCESS_WIDGET_ACTION_EO_CLASS_TYPE
#define _EFL_ACCESS_WIDGET_ACTION_EO_CLASS_TYPE

typedef Eo Efl_Access_Widget_Action;

#endif

#ifndef _EFL_ACCESS_WIDGET_ACTION_EO_TYPES
#define _EFL_ACCESS_WIDGET_ACTION_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Access widget action mixin
 *
 * @ingroup Efl_Access_Widget_Action
 */
#define EFL_ACCESS_WIDGET_ACTION_MIXIN efl_access_widget_action_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_access_widget_action_mixin_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_WIDGET_ACTION_PROTECTED
/**
 * @brief Elementary actions
 *
 * @param[in] obj The object.
 *
 * @return NULL-terminated array of Efl.Access.Action_Data.
 *
 * @ingroup Efl_Access_Widget_Action
 */
EAPI EAPI_WEAK const Efl_Access_Action_Data *efl_access_widget_action_elm_actions_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */
#endif /* EFL_BETA_API_SUPPORT */

#endif
