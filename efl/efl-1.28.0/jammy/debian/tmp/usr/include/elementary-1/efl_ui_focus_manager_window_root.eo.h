#ifndef _EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_EO_H_
#define _EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_EO_H_

#ifndef _EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Manager_Window_Root;

#endif

#ifndef _EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_EO_TYPES
#define _EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_EO_TYPES


#endif
/**
 * @brief An interface to indicate the end of a focus chain.
 *
 * Focus managers are ensuring that if they give focus to something, that is
 * registered in the upper focus manager. The uppermost focus manager does not
 * need to do that, and can implement this interface to indicate so.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager_Window_Root
 */
#define EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_INTERFACE efl_ui_focus_manager_window_root_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_focus_manager_window_root_interface_get(void) EINA_CONST;

#endif
