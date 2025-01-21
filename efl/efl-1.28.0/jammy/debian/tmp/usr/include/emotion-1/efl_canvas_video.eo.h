#ifndef _EFL_CANVAS_VIDEO_EO_H_
#define _EFL_CANVAS_VIDEO_EO_H_

#ifndef _EFL_CANVAS_VIDEO_EO_CLASS_TYPE
#define _EFL_CANVAS_VIDEO_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Video;

#endif

#ifndef _EFL_CANVAS_VIDEO_EO_TYPES
#define _EFL_CANVAS_VIDEO_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl canvas video class
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_CLASS efl_canvas_video_class_get()

EMOTION_API EMOTION_API_WEAK const Efl_Class *efl_canvas_video_class_get(void) EINA_CONST;

/**
 * @brief Sets options for the current module.
 *
 * This function allows one to mute the video or audio of the emotion object.
 *
 * Please don't use this function, consider using
 * @ref efl_audio_control_mute_get instead.
 *
 * @param[in] obj The object.
 * @param[in] opt The option that is being set. Currently supported options:
 * "video" and "audio".
 * @param[in] val The value of the option. Currently only supports "off"
 * (?!?!?!)
 *
 * @ingroup Efl_Canvas_Video
 */
EMOTION_API EMOTION_API_WEAK void efl_canvas_video_option_set(Eo *obj, const char *opt, const char *val);

/**
 * @brief Initializes an emotion object with the specified module.
 *
 * This function is required after creating the emotion object, in order to
 * specify which module will be used with this object. Different objects can
 * use different modules to play a media file. The current supported modules
 * are gstreamer and xine.
 *
 * To use any of them, you need to make sure that support for them was compiled
 * correctly.
 *
 * It's possible to disable the build of a module with --disable-module_name.
 *
 * See also @ref efl_file_get.
 *
 * @param[in] obj The object.
 * @param[in] module_filename The name of the module to be used (gstreamer or
 * xine).
 *
 * @return @c true if the specified module was successfully initialized for
 * this object, @c false otherwise.
 *
 * @ingroup Efl_Canvas_Video
 */
EMOTION_API EMOTION_API_WEAK Eina_Bool efl_canvas_video_engine_set(Eo *obj, const char *module_filename);

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_FRAME_DECODE;

/** Called when the frame was decoded
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_FRAME_DECODE (&(_EFL_CANVAS_VIDEO_EVENT_FRAME_DECODE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_CHANGE;

/** Called when the position changed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_POSITION_CHANGE (&(_EFL_CANVAS_VIDEO_EVENT_POSITION_CHANGE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_LENGTH_CHANGE;

/** Called when the length changed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_LENGTH_CHANGE (&(_EFL_CANVAS_VIDEO_EVENT_LENGTH_CHANGE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_FRAME_RESIZE;

/** Called when the frame was resized
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_FRAME_RESIZE (&(_EFL_CANVAS_VIDEO_EVENT_FRAME_RESIZE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_PLAYBACK_START;

/** Called when playback started
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_PLAYBACK_START (&(_EFL_CANVAS_VIDEO_EVENT_PLAYBACK_START))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_PLAYBACK_STOP;

/** Called when playback stopped
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_PLAYBACK_STOP (&(_EFL_CANVAS_VIDEO_EVENT_PLAYBACK_STOP))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_VOLUME_CHANGE;

/** Called when volume changed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_VOLUME_CHANGE (&(_EFL_CANVAS_VIDEO_EVENT_VOLUME_CHANGE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_CHANNELS_CHANGE;

/** Called when the channels changed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_CHANNELS_CHANGE (&(_EFL_CANVAS_VIDEO_EVENT_CHANNELS_CHANGE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_TITLE_CHANGE;

/** Called when the title changed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_TITLE_CHANGE (&(_EFL_CANVAS_VIDEO_EVENT_TITLE_CHANGE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_PROGRESS_CHANGE;

/** Called when the progress changed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_PROGRESS_CHANGE (&(_EFL_CANVAS_VIDEO_EVENT_PROGRESS_CHANGE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_REF_CHANGE;

/** Called when ref changed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_REF_CHANGE (&(_EFL_CANVAS_VIDEO_EVENT_REF_CHANGE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_BUTTON_NUM_CHANGE;

/** Called when button number changed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_BUTTON_NUM_CHANGE (&(_EFL_CANVAS_VIDEO_EVENT_BUTTON_NUM_CHANGE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_BUTTON_CHANGE;

/** Called when button changed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_BUTTON_CHANGE (&(_EFL_CANVAS_VIDEO_EVENT_BUTTON_CHANGE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_OPEN_DONE;

/** Called when the files was opened
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_OPEN_DONE (&(_EFL_CANVAS_VIDEO_EVENT_OPEN_DONE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_DONE;

/** Called when the position was saved
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_DONE (&(_EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_DONE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_FAIL;

/** Called when saving the position failed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_FAIL (&(_EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_FAIL))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_DONE;

/** Called when the position loaded
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_DONE (&(_EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_DONE))

EMOTION_API EMOTION_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_FAIL;

/** Called when loading the position failed
 *
 * @ingroup Efl_Canvas_Video
 */
#define EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_FAIL (&(_EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_FAIL))
#endif /* EFL_BETA_API_SUPPORT */

#endif
