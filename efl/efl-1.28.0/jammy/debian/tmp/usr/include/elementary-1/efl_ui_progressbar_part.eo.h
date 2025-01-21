#ifndef _EFL_UI_PROGRESSBAR_PART_EO_H_
#define _EFL_UI_PROGRESSBAR_PART_EO_H_

#ifndef _EFL_UI_PROGRESSBAR_PART_EO_CLASS_TYPE
#define _EFL_UI_PROGRESSBAR_PART_EO_CLASS_TYPE

typedef Eo Efl_Ui_Progressbar_Part;

#endif

#ifndef _EFL_UI_PROGRESSBAR_PART_EO_TYPES
#define _EFL_UI_PROGRESSBAR_PART_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary progressbar internal part class
 *
 * @ingroup Efl_Ui_Progressbar_Part
 */
#define EFL_UI_PROGRESSBAR_PART_CLASS efl_ui_progressbar_part_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_progressbar_part_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
