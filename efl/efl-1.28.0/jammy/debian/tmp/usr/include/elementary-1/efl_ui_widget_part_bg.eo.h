#ifndef _EFL_UI_WIDGET_PART_BG_EO_H_
#define _EFL_UI_WIDGET_PART_BG_EO_H_

#ifndef _EFL_UI_WIDGET_PART_BG_EO_CLASS_TYPE
#define _EFL_UI_WIDGET_PART_BG_EO_CLASS_TYPE

typedef Eo Efl_Ui_Widget_Part_Bg;

#endif

#ifndef _EFL_UI_WIDGET_PART_BG_EO_TYPES
#define _EFL_UI_WIDGET_PART_BG_EO_TYPES


#endif
/**
 * @brief Elementary widget internal part background class
 *
 * This part will proxy the calls on it to the @ref Efl_Ui_Bg internal object
 * of this widget. This internal object is stacked below the
 * @ref efl_ui_widget_resize_object_set and co-located with the widget.
 *
 * All @ref Efl_Ui_Widget objects have this part, allowing the background of
 * the widget to be customized.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Widget_Part_Bg
 */
#define EFL_UI_WIDGET_PART_BG_CLASS efl_ui_widget_part_bg_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_widget_part_bg_class_get(void) EINA_CONST;

#endif
