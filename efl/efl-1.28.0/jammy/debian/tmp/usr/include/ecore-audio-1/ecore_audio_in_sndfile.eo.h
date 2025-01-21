#ifndef _ECORE_AUDIO_IN_SNDFILE_EO_H_
#define _ECORE_AUDIO_IN_SNDFILE_EO_H_

#ifndef _ECORE_AUDIO_IN_SNDFILE_EO_CLASS_TYPE
#define _ECORE_AUDIO_IN_SNDFILE_EO_CLASS_TYPE

typedef Eo Ecore_Audio_In_Sndfile;

#endif

#ifndef _ECORE_AUDIO_IN_SNDFILE_EO_TYPES
#define _ECORE_AUDIO_IN_SNDFILE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Ecore Audio sndfile input.
 *
 * @ingroup Ecore_Audio_In_Sndfile
 */
#define ECORE_AUDIO_IN_SNDFILE_CLASS ecore_audio_in_sndfile_class_get()

ECORE_AUDIO_API ECORE_AUDIO_API_WEAK const Efl_Class *ecore_audio_in_sndfile_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
