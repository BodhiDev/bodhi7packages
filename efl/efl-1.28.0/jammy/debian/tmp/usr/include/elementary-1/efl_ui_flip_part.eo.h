#ifndef _EFL_UI_FLIP_PART_EO_H_
#define _EFL_UI_FLIP_PART_EO_H_

#ifndef _EFL_UI_FLIP_PART_EO_CLASS_TYPE
#define _EFL_UI_FLIP_PART_EO_CLASS_TYPE

typedef Eo Efl_Ui_Flip_Part;

#endif

#ifndef _EFL_UI_FLIP_PART_EO_TYPES
#define _EFL_UI_FLIP_PART_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl UI flip internal class
 *
 * @ingroup Efl_Ui_Flip_Part
 */
#define EFL_UI_FLIP_PART_CLASS efl_ui_flip_part_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_flip_part_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
