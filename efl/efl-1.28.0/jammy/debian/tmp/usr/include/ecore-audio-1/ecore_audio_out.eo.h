#ifndef _ECORE_AUDIO_OUT_EO_H_
#define _ECORE_AUDIO_OUT_EO_H_

#ifndef _ECORE_AUDIO_OUT_EO_CLASS_TYPE
#define _ECORE_AUDIO_OUT_EO_CLASS_TYPE

typedef Eo Ecore_Audio_Out;

#endif

#ifndef _ECORE_AUDIO_OUT_EO_TYPES
#define _ECORE_AUDIO_OUT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Ecore Audio output object.
 *
 * @ingroup Ecore_Audio_Out
 */
#define ECORE_AUDIO_OUT_CLASS ecore_audio_out_class_get()

ECORE_AUDIO_API ECORE_AUDIO_API_WEAK const Efl_Class *ecore_audio_out_class_get(void) EINA_CONST;

/**
 * @brief Attaches an input to an output
 *
 * @param[in] obj The object.
 * @param[in] input The input to attach to the output
 *
 * @return @c true if the input was attached, @c false otherwise
 *
 * @ingroup Ecore_Audio_Out
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK Eina_Bool ecore_audio_obj_out_input_attach(Eo *obj, Ecore_Audio_In *input);

/**
 * @brief Detaches an input from an output
 *
 * @param[in] obj The object.
 * @param[in] input The input to detach to the output
 *
 * @return @c true if the input was detached, @c false otherwise
 *
 * @ingroup Ecore_Audio_Out
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK Eina_Bool ecore_audio_obj_out_input_detach(Eo *obj, Ecore_Audio_In *input);

/**
 * @brief Returns the list of all attached inputs
 *
 * @param[in] obj The object.
 *
 * @return A list of the inputs that are attached to the output
 *
 * @ingroup Ecore_Audio_Out
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK Eina_List *ecore_audio_obj_out_inputs_get(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
