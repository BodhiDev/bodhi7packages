#ifndef _EFL_UI_WIDGET_FOCUS_MANAGER_EO_H_
#define _EFL_UI_WIDGET_FOCUS_MANAGER_EO_H_

#ifndef _EFL_UI_WIDGET_FOCUS_MANAGER_EO_CLASS_TYPE
#define _EFL_UI_WIDGET_FOCUS_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Widget_Focus_Manager;

#endif

#ifndef _EFL_UI_WIDGET_FOCUS_MANAGER_EO_TYPES
#define _EFL_UI_WIDGET_FOCUS_MANAGER_EO_TYPES


#endif
/** Helper mixin for widgets which also can act as focus managers.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget_Focus_Manager
 */
#define EFL_UI_WIDGET_FOCUS_MANAGER_MIXIN efl_ui_widget_focus_manager_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_widget_focus_manager_mixin_get(void) EINA_CONST;

#ifdef EFL_UI_WIDGET_FOCUS_MANAGER_PROTECTED
/**
 * @brief If the widget needs a focus manager, this function will be called.
 *
 * It can be used and overridden to inject your own manager or set custom
 * options on the focus manager.
 *
 * @param[in] obj The object.
 * @param[in] root The logical root object for focus.
 *
 * @return The focus manager.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget_Focus_Manager
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Manager *efl_ui_widget_focus_manager_create(Eo *obj, Efl_Ui_Focus_Object *root);
#endif

#endif
