#ifndef _EFL_UI_FOCUS_MANAGER_SUB_EO_H_
#define _EFL_UI_FOCUS_MANAGER_SUB_EO_H_

#ifndef _EFL_UI_FOCUS_MANAGER_SUB_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_MANAGER_SUB_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Manager_Sub;

#endif

#ifndef _EFL_UI_FOCUS_MANAGER_SUB_EO_TYPES
#define _EFL_UI_FOCUS_MANAGER_SUB_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A class that automatically registers its border elements in the
 * parent manager.
 *
 * This sub manager will register its border elements on the parent manager.
 * The parent manager is found with the @ref Efl_Ui_Focus_Object interface of
 * the @ref efl_parent_get.
 *
 * Each sub manager also has to be a focus object, the object itself will be
 * registered into the parent manager. It will be used as logical parent while
 * registering the border elements.
 *
 * You can filter the border elements by overriding the property
 * @ref efl_ui_focus_manager_border_elements_get.
 *
 * @ingroup Efl_Ui_Focus_Manager_Sub
 */
#define EFL_UI_FOCUS_MANAGER_SUB_MIXIN efl_ui_focus_manager_sub_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_focus_manager_sub_mixin_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
