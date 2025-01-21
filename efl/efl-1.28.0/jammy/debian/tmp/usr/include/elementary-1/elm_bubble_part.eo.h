#ifndef _ELM_BUBBLE_PART_EO_H_
#define _ELM_BUBBLE_PART_EO_H_

#ifndef _ELM_BUBBLE_PART_EO_CLASS_TYPE
#define _ELM_BUBBLE_PART_EO_CLASS_TYPE

typedef Eo Elm_Bubble_Part;

#endif

#ifndef _ELM_BUBBLE_PART_EO_TYPES
#define _ELM_BUBBLE_PART_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary Bubble internal part class
 *
 * @ingroup Elm_Bubble_Part
 */
#define ELM_BUBBLE_PART_CLASS elm_bubble_part_class_get()

EAPI EAPI_WEAK const Efl_Class *elm_bubble_part_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
