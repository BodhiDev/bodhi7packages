#ifndef _EFL_UI_VIDEO_EO_H_
#define _EFL_UI_VIDEO_EO_H_

#ifndef _EFL_UI_VIDEO_EO_CLASS_TYPE
#define _EFL_UI_VIDEO_EO_CLASS_TYPE

typedef Eo Efl_Ui_Video;

#endif

#ifndef _EFL_UI_VIDEO_EO_TYPES
#define _EFL_UI_VIDEO_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl UI video class
 *
 * @ingroup Efl_Ui_Video
 */
#define EFL_UI_VIDEO_CLASS efl_ui_video_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_video_class_get(void) EINA_CONST;

/**
 * @brief Whether the object can remember the last played position.
 *
 * @note This API only serves as indication. System support is required.
 *
 * @param[in] obj The object.
 * @param[in] remember @c true when the object can remember the last position,
 * @c false otherwise
 *
 * @ingroup Efl_Ui_Video
 */
EAPI EAPI_WEAK void efl_ui_video_remember_position_set(Eo *obj, Eina_Bool remember);

/**
 * @brief Whether the object can remember the last played position.
 *
 * @note This API only serves as indication. System support is required.
 *
 * @param[in] obj The object.
 *
 * @return @c true when the object can remember the last position, @c false
 * otherwise
 *
 * @ingroup Efl_Ui_Video
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_video_remember_position_get(const Eo *obj);

/**
 * @brief The underlying Emotion object.
 *
 * @param[in] obj The object.
 *
 * @return The underlying Emotion object.
 *
 * @ingroup Efl_Ui_Video
 */
EAPI EAPI_WEAK Efl_Canvas_Object *efl_ui_video_emotion_get(const Eo *obj);

/**
 * @brief The title (for instance DVD title) from this emotion object.
 *
 * This function is only useful when playing a DVD.
 *
 * @note Don't change or free the string returned by this function.
 *
 * @param[in] obj The object.
 *
 * @return A string containing the title.
 *
 * @ingroup Efl_Ui_Video
 */
EAPI EAPI_WEAK const char *efl_ui_video_title_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
