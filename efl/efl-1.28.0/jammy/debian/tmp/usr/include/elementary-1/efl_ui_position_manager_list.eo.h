#ifndef _EFL_UI_POSITION_MANAGER_LIST_EO_H_
#define _EFL_UI_POSITION_MANAGER_LIST_EO_H_

#ifndef _EFL_UI_POSITION_MANAGER_LIST_EO_CLASS_TYPE
#define _EFL_UI_POSITION_MANAGER_LIST_EO_CLASS_TYPE

typedef Eo Efl_Ui_Position_Manager_List;

#endif

#ifndef _EFL_UI_POSITION_MANAGER_LIST_EO_TYPES
#define _EFL_UI_POSITION_MANAGER_LIST_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Implementation of @ref Efl_Ui_Position_Manager_Entity for a list
 *
 * Every item in the list will get at least his min size applied, changes to
 * the min size are listened to and change the layout of all items. This
 * supports the vertical and horizontal orientation.
 *
 * @ingroup Efl_Ui_Position_Manager_List
 */
#define EFL_UI_POSITION_MANAGER_LIST_CLASS efl_ui_position_manager_list_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_position_manager_list_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
