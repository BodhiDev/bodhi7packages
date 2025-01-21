#ifndef _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_H_
#define _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_H_

#ifndef _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Manager_Root_Focus;

#endif

#ifndef _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_TYPES
#define _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This class ensures that the root is at least focusable, if nothing else is
 * focusable.
 *
 * @ingroup Efl_Ui_Focus_Manager_Root_Focus
 */
#define EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_CLASS efl_ui_focus_manager_root_focus_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_focus_manager_root_focus_class_get(void) EINA_CONST;

/**
 * @brief The default replacement object to use when there is no focusable
 * object inside the manager. You can change this object by setting this value
 * to something else. @c null means that the same value as
 * @ref efl_ui_focus_manager_root_get will be used.
 *
 * @param[in] obj The object.
 * @param[in] canvas_object Canvas object.
 *
 * @ingroup Efl_Ui_Focus_Manager_Root_Focus
 */
EAPI EAPI_WEAK void efl_ui_focus_manager_root_focus_canvas_object_set(Eo *obj, Efl_Canvas_Object *canvas_object);

/**
 * @brief The default replacement object to use when there is no focusable
 * object inside the manager. You can change this object by setting this value
 * to something else. @c null means that the same value as
 * @ref efl_ui_focus_manager_root_get will be used.
 *
 * @param[in] obj The object.
 *
 * @return Canvas object.
 *
 * @ingroup Efl_Ui_Focus_Manager_Root_Focus
 */
EAPI EAPI_WEAK Efl_Canvas_Object *efl_ui_focus_manager_root_focus_canvas_object_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
