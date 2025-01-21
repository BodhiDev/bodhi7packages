#ifndef _EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_EO_H_
#define _EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_EO_H_

#ifndef _EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_EO_CLASS_TYPE
#define _EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Collection_View_Focus_Manager;

#endif

#ifndef _EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_EO_TYPES
#define _EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Internal class which implements collection specific behaviour, cannot be
 * used outside of collection
 *
 * @ingroup Efl_Ui_Collection_View_Focus_Manager
 */
#define EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_CLASS efl_ui_collection_view_focus_manager_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_collection_view_focus_manager_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
