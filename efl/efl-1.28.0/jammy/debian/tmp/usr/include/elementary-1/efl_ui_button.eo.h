#ifndef _EFL_UI_BUTTON_EO_H_
#define _EFL_UI_BUTTON_EO_H_

#ifndef _EFL_UI_BUTTON_EO_CLASS_TYPE
#define _EFL_UI_BUTTON_EO_CLASS_TYPE

typedef Eo Efl_Ui_Button;

#endif

#ifndef _EFL_UI_BUTTON_EO_TYPES
#define _EFL_UI_BUTTON_EO_TYPES


#endif
/**
 * @brief Push-button widget
 *
 * Press it and run some function. It can contain a simple label and icon
 * object and it also has an autorepeat feature.
 *
 * The icon can be set using @ref efl_content_get, the text can be set using
 * @ref efl_text_get.
 *
 * The events of @ref Efl_Input_Clickable can be used to listen to a click
 * event from the user.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Button
 */
#define EFL_UI_BUTTON_CLASS efl_ui_button_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_button_class_get(void) EINA_CONST;

#endif
