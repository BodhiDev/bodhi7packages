#ifndef _EFL_UI_CLOCK_LEGACY_EO_H_
#define _EFL_UI_CLOCK_LEGACY_EO_H_

#ifndef _EFL_UI_CLOCK_LEGACY_EO_CLASS_TYPE
#define _EFL_UI_CLOCK_LEGACY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Clock_Legacy;

#endif

#ifndef _EFL_UI_CLOCK_LEGACY_EO_TYPES
#define _EFL_UI_CLOCK_LEGACY_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl UI clock class
 *
 * @ingroup Efl_Ui_Clock_Legacy
 */
#define EFL_UI_CLOCK_LEGACY_CLASS efl_ui_clock_legacy_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_clock_legacy_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
