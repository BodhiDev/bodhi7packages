#ifndef _EFL_UI_TEXTBOX_PART_EO_H_
#define _EFL_UI_TEXTBOX_PART_EO_H_

#ifndef _EFL_UI_TEXTBOX_PART_EO_CLASS_TYPE
#define _EFL_UI_TEXTBOX_PART_EO_CLASS_TYPE

typedef Eo Efl_Ui_Textbox_Part;

#endif

#ifndef _EFL_UI_TEXTBOX_PART_EO_TYPES
#define _EFL_UI_TEXTBOX_PART_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl UI Textbox internal part class
 *
 * @ingroup Efl_Ui_Textbox_Part
 */
#define EFL_UI_TEXTBOX_PART_CLASS efl_ui_textbox_part_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_textbox_part_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
