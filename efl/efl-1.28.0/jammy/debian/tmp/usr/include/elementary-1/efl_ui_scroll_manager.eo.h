#ifndef _EFL_UI_SCROLL_MANAGER_EO_H_
#define _EFL_UI_SCROLL_MANAGER_EO_H_

#ifndef _EFL_UI_SCROLL_MANAGER_EO_CLASS_TYPE
#define _EFL_UI_SCROLL_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Scroll_Manager;

#endif

#ifndef _EFL_UI_SCROLL_MANAGER_EO_TYPES
#define _EFL_UI_SCROLL_MANAGER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl ui scroll manager class
 *
 * @ingroup Efl_Ui_Scroll_Manager
 */
#define EFL_UI_SCROLL_MANAGER_CLASS efl_ui_scroll_manager_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_scroll_manager_class_get(void) EINA_CONST;

#ifdef EFL_UI_SCROLL_MANAGER_PROTECTED
/**
 * @brief This is the internal pan object managed by scroll manager.
 *
 * This property is protected as it is meant for scrollable object
 * implementations only, to set and access the internal pan object. If pan is
 * set to @c NULL, scrolling does not work.
 *
 * @param[in] obj The object.
 * @param[in] pan Pan object.
 *
 * @ingroup Efl_Ui_Scroll_Manager
 */
EAPI EAPI_WEAK void efl_ui_scroll_manager_pan_set(Eo *obj, Efl_Ui_Pan *pan);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#endif
