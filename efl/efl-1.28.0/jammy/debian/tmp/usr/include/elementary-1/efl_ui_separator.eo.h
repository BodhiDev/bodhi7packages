#ifndef _EFL_UI_SEPARATOR_EO_H_
#define _EFL_UI_SEPARATOR_EO_H_

#ifndef _EFL_UI_SEPARATOR_EO_CLASS_TYPE
#define _EFL_UI_SEPARATOR_EO_CLASS_TYPE

typedef Eo Efl_Ui_Separator;

#endif

#ifndef _EFL_UI_SEPARATOR_EO_TYPES
#define _EFL_UI_SEPARATOR_EO_TYPES


#endif
/**
 * @brief Vertical or horizontal separator line.
 *
 * Use it to separate groups of buttons in a toolbar, for example, or items on
 * a list. The length of the line adapts to the size of the container, and its
 * width is controlled by the theme.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Separator
 */
#define EFL_UI_SEPARATOR_CLASS efl_ui_separator_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_separator_class_get(void) EINA_CONST;

#endif
