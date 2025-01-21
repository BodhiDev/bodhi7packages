#ifndef _EFL_UI_WIDGET_PART_EO_H_
#define _EFL_UI_WIDGET_PART_EO_H_

#ifndef _EFL_UI_WIDGET_PART_EO_CLASS_TYPE
#define _EFL_UI_WIDGET_PART_EO_CLASS_TYPE

typedef Eo Efl_Ui_Widget_Part;

#endif

#ifndef _EFL_UI_WIDGET_PART_EO_TYPES
#define _EFL_UI_WIDGET_PART_EO_TYPES


#endif
/**
 * @brief This is the base class for all "Part" handles in Efl.Ui widgets.
 *
 * Since objects of this type are returned by @ref efl_part_get, their lifetime
 * is limited to exactly one function call only. Each widget class should
 * expose more specific types for their API-defined parts.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Widget_Part
 */
#define EFL_UI_WIDGET_PART_CLASS efl_ui_widget_part_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_widget_part_class_get(void) EINA_CONST;

#endif
