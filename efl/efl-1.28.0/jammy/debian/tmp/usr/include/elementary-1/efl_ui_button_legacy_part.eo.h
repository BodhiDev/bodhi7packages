#ifndef _EFL_UI_BUTTON_LEGACY_PART_EO_H_
#define _EFL_UI_BUTTON_LEGACY_PART_EO_H_

#ifndef _EFL_UI_BUTTON_LEGACY_PART_EO_CLASS_TYPE
#define _EFL_UI_BUTTON_LEGACY_PART_EO_CLASS_TYPE

typedef Eo Efl_Ui_Button_Legacy_Part;

#endif

#ifndef _EFL_UI_BUTTON_LEGACY_PART_EO_TYPES
#define _EFL_UI_BUTTON_LEGACY_PART_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary button internal part class
 *
 * @ingroup Efl_Ui_Button_Legacy_Part
 */
#define EFL_UI_BUTTON_LEGACY_PART_CLASS efl_ui_button_legacy_part_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_button_legacy_part_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
