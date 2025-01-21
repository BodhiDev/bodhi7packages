#ifndef _EFL_AUDIO_CONTROL_EO_H_
#define _EFL_AUDIO_CONTROL_EO_H_

#ifndef _EFL_AUDIO_CONTROL_EO_CLASS_TYPE
#define _EFL_AUDIO_CONTROL_EO_CLASS_TYPE

typedef Eo Efl_Audio_Control;

#endif

#ifndef _EFL_AUDIO_CONTROL_EO_TYPES
#define _EFL_AUDIO_CONTROL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Player interface for audio related properties
 *
 * @ingroup Efl_Audio_Control
 */
#define EFL_AUDIO_CONTROL_INTERFACE efl_audio_control_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_audio_control_interface_get(void) EINA_CONST;

/**
 * @brief Control the audio volume.
 *
 * Controls the audio volume of the stream being played. This has nothing to do
 * with the system volume. This volume will be multiplied by the system volume.
 * e.g.: if the current volume level is 0.5, and the system volume is 50%, it
 * will be 0.5 * 0.5 = 0.25.
 *
 * @param[in] obj The object.
 * @param[in] volume The volume level
 *
 * @ingroup Efl_Audio_Control
 */
EAPI EAPI_WEAK void efl_audio_control_volume_set(Eo *obj, double volume);

/**
 * @brief Control the audio volume.
 *
 * Controls the audio volume of the stream being played. This has nothing to do
 * with the system volume. This volume will be multiplied by the system volume.
 * e.g.: if the current volume level is 0.5, and the system volume is 50%, it
 * will be 0.5 * 0.5 = 0.25.
 *
 * @param[in] obj The object.
 *
 * @return The volume level
 *
 * @ingroup Efl_Audio_Control
 */
EAPI EAPI_WEAK double efl_audio_control_volume_get(const Eo *obj);

/**
 * @brief This property controls the audio mute state.
 *
 * @param[in] obj The object.
 * @param[in] mute The mute state. @c true or @c false.
 *
 * @ingroup Efl_Audio_Control
 */
EAPI EAPI_WEAK void efl_audio_control_mute_set(Eo *obj, Eina_Bool mute);

/**
 * @brief This property controls the audio mute state.
 *
 * @param[in] obj The object.
 *
 * @return The mute state. @c true or @c false.
 *
 * @ingroup Efl_Audio_Control
 */
EAPI EAPI_WEAK Eina_Bool efl_audio_control_mute_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
