#ifndef _ECORE_AUDIO_EO_H_
#define _ECORE_AUDIO_EO_H_

#ifndef _ECORE_AUDIO_EO_CLASS_TYPE
#define _ECORE_AUDIO_EO_CLASS_TYPE

typedef Eo Ecore_Audio;

#endif

#ifndef _ECORE_AUDIO_EO_TYPES
#define _ECORE_AUDIO_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Ecore audio format type
 *
 * @ingroup Ecore_Audio_Format
 */
typedef enum
{
  ECORE_AUDIO_FORMAT_AUTO = 0, /**< Automatically detect the format (for inputs)
                                */
  ECORE_AUDIO_FORMAT_RAW, /**< RAW samples (float) */
  ECORE_AUDIO_FORMAT_WAV, /**< WAV format */
  ECORE_AUDIO_FORMAT_OGG, /**< OGG */
  ECORE_AUDIO_FORMAT_FLAC, /**< FLAC, the Free Lossless Audio Codec */
  ECORE_AUDIO_FORMAT_MP3, /**< MP3 (not supported) */
  ECORE_AUDIO_FORMAT_LAST /**< Sentinel value to indicate last enum field during
                           * iteration */
} Ecore_Audio_Format;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Convenience audio class.
 *
 * @ingroup Ecore_Audio
 */
#define ECORE_AUDIO_CLASS ecore_audio_class_get()

ECORE_AUDIO_API ECORE_AUDIO_API_WEAK const Efl_Class *ecore_audio_class_get(void) EINA_CONST;

/**
 * @brief Pauses state of the object
 *
 * @param[in] obj The object.
 * @param[in] paused @c true if object is paused, @c false otherwise
 *
 * @ingroup Ecore_Audio
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK void ecore_audio_obj_paused_set(Eo *obj, Eina_Bool paused);

/**
 * @brief Pauses state of the object
 *
 * @param[in] obj The object.
 *
 * @return @c true if object is paused, @c false otherwise
 *
 * @ingroup Ecore_Audio
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK Eina_Bool ecore_audio_obj_paused_get(const Eo *obj);

/**
 * @brief Volume of the object
 *
 * @param[in] obj The object.
 * @param[in] volume The volume
 *
 * @ingroup Ecore_Audio
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK void ecore_audio_obj_volume_set(Eo *obj, double volume);

/**
 * @brief Volume of the object
 *
 * @param[in] obj The object.
 *
 * @return The volume
 *
 * @ingroup Ecore_Audio
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK double ecore_audio_obj_volume_get(const Eo *obj);

/**
 * @brief Source of the object
 *
 * What sources are supported depends on the actual object. For example, the
 * libsndfile class accepts WAV, OGG, FLAC files as source.
 *
 * @param[in] obj The object.
 * @param[in] source The source to set to (i.e. file, URL, device)
 *
 * @return @c true if the source was set correctly (i.e. the file was opened),
 * @c false otherwise
 *
 * @ingroup Ecore_Audio
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK Eina_Bool ecore_audio_obj_source_set(Eo *obj, const char *source);

/**
 * @brief Source of the object
 *
 * What sources are supported depends on the actual object. For example, the
 * libsndfile class accepts WAV, OGG, FLAC files as source.
 *
 * @param[in] obj The object.
 *
 * @return The source to set to (i.e. file, URL, device)
 *
 * @ingroup Ecore_Audio
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK const char *ecore_audio_obj_source_get(const Eo *obj);

/**
 * @brief Format of the object.
 *
 * Sets the format of the object
 *
 * What formats are supported depends on the actual object. Default is
 * ECORE_AUDIO_FORMAT_AUTO
 *
 * @param[in] obj The object.
 * @param[in] format The audio format of the object
 *
 * @return @c true if the format was supported, @c false otherwise
 *
 * @ingroup Ecore_Audio
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK Eina_Bool ecore_audio_obj_format_set(Eo *obj, Ecore_Audio_Format format);

/**
 * @brief Format of the object.
 *
 * Gets the format of the object
 *
 * After setting the source if the format was ECORE_AUDIO_FORMAT_AUTO this
 * function will now return the actual format.
 *
 * @param[in] obj The object.
 *
 * @return The audio format of the object
 *
 * @ingroup Ecore_Audio
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK Ecore_Audio_Format ecore_audio_obj_format_get(const Eo *obj);

/**
 * @brief Sets the virtual IO functions
 *
 * @param[in] obj The object.
 * @param[in] vio The @ref Ecore_Audio_Vio struct with the function callbacks
 * @param[in] data User data to pass to the VIO functions
 * @param[in] free_func This function takes care to clean up @c data when he
 * VIO is destroyed. @c NULL means do nothing.
 *
 * @ingroup Ecore_Audio
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK void ecore_audio_obj_vio_set(Eo *obj, Ecore_Audio_Vio *vio, void *data, efl_key_data_free_func free_func);
#endif /* EFL_BETA_API_SUPPORT */

#endif
