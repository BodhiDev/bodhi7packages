#ifndef _ELM_ENTRY_PART_EO_H_
#define _ELM_ENTRY_PART_EO_H_

#ifndef _ELM_ENTRY_PART_EO_CLASS_TYPE
#define _ELM_ENTRY_PART_EO_CLASS_TYPE

typedef Eo Elm_Entry_Part;

#endif

#ifndef _ELM_ENTRY_PART_EO_TYPES
#define _ELM_ENTRY_PART_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary entry internal part class
 *
 * @ingroup Elm_Entry_Part
 */
#define ELM_ENTRY_PART_CLASS elm_entry_part_class_get()

EAPI EAPI_WEAK const Efl_Class *elm_entry_part_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
