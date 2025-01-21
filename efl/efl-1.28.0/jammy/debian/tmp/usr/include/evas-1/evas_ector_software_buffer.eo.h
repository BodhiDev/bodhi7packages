#ifndef _EVAS_ECTOR_SOFTWARE_BUFFER_EO_H_
#define _EVAS_ECTOR_SOFTWARE_BUFFER_EO_H_

#ifndef _EVAS_ECTOR_SOFTWARE_BUFFER_EO_CLASS_TYPE
#define _EVAS_ECTOR_SOFTWARE_BUFFER_EO_CLASS_TYPE

typedef Eo Evas_Ector_Software_Buffer;

#endif

#ifndef _EVAS_ECTOR_SOFTWARE_BUFFER_EO_TYPES
#define _EVAS_ECTOR_SOFTWARE_BUFFER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** A buffer object wrapping an existing Evas Image_Entry.
 *
 * @ingroup Evas_Ector_Software_Buffer
 */
#define EVAS_ECTOR_SOFTWARE_BUFFER_CLASS evas_ector_software_buffer_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *evas_ector_software_buffer_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
