#ifndef _EFL_UI_CHECK_EO_H_
#define _EFL_UI_CHECK_EO_H_

#ifndef _EFL_UI_CHECK_EO_CLASS_TYPE
#define _EFL_UI_CHECK_EO_CLASS_TYPE

typedef Eo Efl_Ui_Check;

#endif

#ifndef _EFL_UI_CHECK_EO_TYPES
#define _EFL_UI_CHECK_EO_TYPES


#endif
/**
 * @brief Check widget.
 *
 * The check widget allows for toggling a value between @c true and @c false.
 * Check objects are a lot like @ref Efl_Ui_Radio objects in layout and
 * functionality, except they do not work as a group, but independently, and
 * only toggle the value of a boolean between @c false and @c true. The boolean
 * value of the check can be retrieved using the
 * @ref efl_ui_selectable_selected_get property. Changes to
 * @ref efl_ui_selectable_selected_get can be listed to using the
 * @[Efl.Ui.Selectable.selected,changed] event.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Check
 */
#define EFL_UI_CHECK_CLASS efl_ui_check_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_check_class_get(void) EINA_CONST;

#endif
