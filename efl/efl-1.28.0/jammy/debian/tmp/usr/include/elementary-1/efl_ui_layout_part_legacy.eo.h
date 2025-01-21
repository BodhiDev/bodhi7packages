#ifndef _EFL_UI_LAYOUT_PART_LEGACY_EO_H_
#define _EFL_UI_LAYOUT_PART_LEGACY_EO_H_

#ifndef _EFL_UI_LAYOUT_PART_LEGACY_EO_CLASS_TYPE
#define _EFL_UI_LAYOUT_PART_LEGACY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Layout_Part_Legacy;

#endif

#ifndef _EFL_UI_LAYOUT_PART_LEGACY_EO_TYPES
#define _EFL_UI_LAYOUT_PART_LEGACY_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary layout internal part class
 *
 * @ingroup Efl_Ui_Layout_Part_Legacy
 */
#define EFL_UI_LAYOUT_PART_LEGACY_CLASS efl_ui_layout_part_legacy_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_layout_part_legacy_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
