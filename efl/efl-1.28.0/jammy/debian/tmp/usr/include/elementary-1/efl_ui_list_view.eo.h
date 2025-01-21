#ifndef _EFL_UI_LIST_VIEW_EO_H_
#define _EFL_UI_LIST_VIEW_EO_H_

#ifndef _EFL_UI_LIST_VIEW_EO_CLASS_TYPE
#define _EFL_UI_LIST_VIEW_EO_CLASS_TYPE

typedef Eo Efl_Ui_List_View;

#endif

#ifndef _EFL_UI_LIST_VIEW_EO_TYPES
#define _EFL_UI_LIST_VIEW_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A scrollable list of @ref Efl_Ui_Item objects, typically
 * @ref Efl_Ui_List_Default_Item objects.
 *
 * Items are added asynchronously by an @ref Efl_Ui_Factory from the definition
 * of an @ref Efl_Model.
 *
 * The orientation (vertical or horizontal) of the list can be set with
 * @ref efl_ui_layout_orientation_get.
 *
 * Items inside this widget can be selected according to the
 * @ref efl_ui_multi_selectable_select_mode_get policy, and the selection can
 * be retrieved with @ref efl_ui_multi_selectable_selected_ndx_iterator_new.
 *
 * @ingroup Efl_Ui_List_View
 */
#define EFL_UI_LIST_VIEW_CLASS efl_ui_list_view_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_list_view_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
