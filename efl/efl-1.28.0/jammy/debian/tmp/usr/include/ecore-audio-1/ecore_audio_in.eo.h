#ifndef _ECORE_AUDIO_IN_EO_H_
#define _ECORE_AUDIO_IN_EO_H_

#ifndef _ECORE_AUDIO_IN_EO_CLASS_TYPE
#define _ECORE_AUDIO_IN_EO_CLASS_TYPE

typedef Eo Ecore_Audio_In;

#endif

#ifndef _ECORE_AUDIO_IN_EO_TYPES
#define _ECORE_AUDIO_IN_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Ecore Audio input object.
 *
 * @ingroup Ecore_Audio_In
 */
#define ECORE_AUDIO_IN_CLASS ecore_audio_in_class_get()

ECORE_AUDIO_API ECORE_AUDIO_API_WEAK const Efl_Class *ecore_audio_in_class_get(void) EINA_CONST;

/**
 * @brief Playback speed of the input.
 *
 * @param[in] obj The object.
 * @param[in] speed The speed, 1.0 is the default
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK void ecore_audio_obj_in_speed_set(Eo *obj, double speed);

/**
 * @brief Playback speed of the input.
 *
 * @param[in] obj The object.
 *
 * @return The speed, 1.0 is the default
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK double ecore_audio_obj_in_speed_get(const Eo *obj);

/**
 * @brief Sample-rate of the input
 *
 * @param[in] obj The object.
 * @param[in] samplerate The samplerate in Hz
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK void ecore_audio_obj_in_samplerate_set(Eo *obj, int samplerate);

/**
 * @brief Sample-rate of the input
 *
 * @param[in] obj The object.
 *
 * @return The samplerate in Hz
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK int ecore_audio_obj_in_samplerate_get(const Eo *obj);

/**
 * @brief Amount of channels the input has
 *
 * @param[in] obj The object.
 * @param[in] channels The number of channels
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK void ecore_audio_obj_in_channels_set(Eo *obj, int channels);

/**
 * @brief Amount of channels the input has
 *
 * @param[in] obj The object.
 *
 * @return The number of channels
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK int ecore_audio_obj_in_channels_get(const Eo *obj);

/**
 * @brief Preloaded state of the input
 *
 * @param[in] obj The object.
 * @param[in] preloaded @c true if the input should be cached, @c false
 * otherwise
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK void ecore_audio_obj_in_preloaded_set(Eo *obj, Eina_Bool preloaded);

/**
 * @brief Preloaded state of the input
 *
 * @param[in] obj The object.
 *
 * @return @c true if the input should be cached, @c false otherwise
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK Eina_Bool ecore_audio_obj_in_preloaded_get(const Eo *obj);

/**
 * @brief Looped state of the input
 *
 * If the input is looped and reaches the end it will start from the beginning
 * again. At the same time the event @ref ECORE_AUDIO_EV_IN_LOOPED will be
 * emitted
 *
 * @param[in] obj The object.
 * @param[in] looped @c true if the input should be looped, @c false otherwise
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK void ecore_audio_obj_in_looped_set(Eo *obj, Eina_Bool looped);

/**
 * @brief Looped state of the input
 *
 * If the input is looped and reaches the end it will start from the beginning
 * again. At the same time the event @ref ECORE_AUDIO_EV_IN_LOOPED will be
 * emitted
 *
 * @param[in] obj The object.
 *
 * @return @c true if the input should be looped, @c false otherwise
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK Eina_Bool ecore_audio_obj_in_looped_get(const Eo *obj);

/**
 * @brief Length of the input
 *
 * This function is only implemented by some classes (i.e.
 * ECORE_AUDIO_OBJ_IN_TONE_CLASS)
 *
 * @param[in] obj The object.
 * @param[in] length The length of the input in seconds
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK void ecore_audio_obj_in_length_set(Eo *obj, double length);

/**
 * @brief Length of the input
 *
 * This function is only implemented by some classes (i.e.
 * ECORE_AUDIO_OBJ_IN_TONE_CLASS)
 *
 * @param[in] obj The object.
 *
 * @return The length of the input in seconds
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK double ecore_audio_obj_in_length_get(const Eo *obj);

/**
 * @brief The output that this input is attached to
 *
 * @param[in] obj The object.
 *
 * @return The output
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK Ecore_Audio *ecore_audio_obj_in_output_get(const Eo *obj);

/**
 * @brief The remaining time of the input
 *
 * @param[in] obj The object.
 *
 * @return The amount of time in seconds left to play
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK double ecore_audio_obj_in_remaining_get(const Eo *obj);

/**
 * @brief Reads from the input
 *
 * @param[in] obj The object.
 * @param[in] buf The buffer to read into
 * @param[in] len The amount of samples to read
 *
 * @return The amount of samples written to buf
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK ssize_t ecore_audio_obj_in_read(Eo *obj, void *buf, size_t len);

/**
 * @brief Internal read function
 *
 * @param[in] obj The object.
 * @param[in] buf The buffer to read into
 * @param[in] len The amount of samples to read
 *
 * @return The amount of samples written to buf
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK ssize_t ecore_audio_obj_in_read_internal(Eo *obj, void *buf, size_t len);

/**
 * @brief Seeks within the input
 *
 * @param[in] obj The object.
 * @param[in] offs The offset in seconds
 * @param[in] mode The seek mode. Is absolute with SEEK_SET, relative to the
 * current position with SEEK_CUR and relative to the end with SEEK_END.
 *
 * @return The current absolute position in seconds within the input
 *
 * @ingroup Ecore_Audio_In
 */
ECORE_AUDIO_API ECORE_AUDIO_API_WEAK double ecore_audio_obj_in_seek(Eo *obj, double offs, int mode);

ECORE_AUDIO_API ECORE_AUDIO_API_WEAK extern const Efl_Event_Description _ECORE_AUDIO_IN_EVENT_IN_LOOPED;

/** Called when an input has looped.
 *
 * @ingroup Ecore_Audio_In
 */
#define ECORE_AUDIO_IN_EVENT_IN_LOOPED (&(_ECORE_AUDIO_IN_EVENT_IN_LOOPED))

ECORE_AUDIO_API ECORE_AUDIO_API_WEAK extern const Efl_Event_Description _ECORE_AUDIO_IN_EVENT_IN_STOPPED;

/** Called when an input has stopped playing.
 *
 * @ingroup Ecore_Audio_In
 */
#define ECORE_AUDIO_IN_EVENT_IN_STOPPED (&(_ECORE_AUDIO_IN_EVENT_IN_STOPPED))

ECORE_AUDIO_API ECORE_AUDIO_API_WEAK extern const Efl_Event_Description _ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED;

/** Called when the input samplerate has changed.
 *
 * @ingroup Ecore_Audio_In
 */
#define ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED (&(_ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
