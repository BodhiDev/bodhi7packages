#ifndef _EFL_UI_LIST_EO_H_
#define _EFL_UI_LIST_EO_H_

#ifndef _EFL_UI_LIST_EO_CLASS_TYPE
#define _EFL_UI_LIST_EO_CLASS_TYPE

typedef Eo Efl_Ui_List;

#endif

#ifndef _EFL_UI_LIST_EO_TYPES
#define _EFL_UI_LIST_EO_TYPES


#endif
/**
 * @brief A scrollable list of @ref Efl_Ui_Item objects, typically
 * @ref Efl_Ui_List_Default_Item objects.
 *
 * Items are added using the @ref Efl_Pack_Linear interface.
 *
 * The orientation (vertical or horizontal) of the list can be set with
 * @ref efl_ui_layout_orientation_get.
 *
 * Items inside this widget can be selected according to the
 * @ref efl_ui_multi_selectable_select_mode_get policy, and the selection can
 * be retrieved with @ref efl_ui_multi_selectable_selected_iterator_new.
 *
 * @ref Efl_Ui_List supports grouping by using @ref Efl_Ui_Group_Item objects.
 * Group headers are displayed at the top or left side of the viewport if items
 * belonging to the group are visible in the viewport.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_List
 */
#define EFL_UI_LIST_CLASS efl_ui_list_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_list_class_get(void) EINA_CONST;

#endif
