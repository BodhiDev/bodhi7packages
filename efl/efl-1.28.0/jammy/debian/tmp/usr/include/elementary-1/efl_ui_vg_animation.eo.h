#ifndef _EFL_UI_VG_ANIMATION_EO_H_
#define _EFL_UI_VG_ANIMATION_EO_H_

#ifndef _EFL_UI_VG_ANIMATION_EO_CLASS_TYPE
#define _EFL_UI_VG_ANIMATION_EO_CLASS_TYPE

typedef Eo Efl_Ui_Vg_Animation;

#endif

#ifndef _EFL_UI_VG_ANIMATION_EO_TYPES
#define _EFL_UI_VG_ANIMATION_EO_TYPES

/** State of vg_animation
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation_State
 */
typedef enum
{
  EFL_UI_VG_ANIMATION_STATE_NOT_READY = 0, /**< Animation is not ready to play.
                                            * (Probably, it didn't file set yet
                                            * or failed to read file.
                                            *
                                            * @since 1.24 */
  EFL_UI_VG_ANIMATION_STATE_PLAYING, /**< Animation is playing.
                                      *
                                      * @since 1.24 */
  EFL_UI_VG_ANIMATION_STATE_PLAYING_BACKWARDS, /**< Animation is playing
                                                * backwards (rewinding).
                                                *
                                                * @since 1.24 */
  EFL_UI_VG_ANIMATION_STATE_PAUSED, /**< Animation has been paused.
                                     *
                                     * @since 1.24 */
  EFL_UI_VG_ANIMATION_STATE_STOPPED /**< Vg Animation successfully loaded a file
                                     * then readied for playing. Otherwise
                                     * after finished animation or stopped
                                     * forcibly by request.
                                     *
                                     * @since 1.24 */
} Efl_Ui_Vg_Animation_State;


#endif
/**
 * @brief Elementary Vector Graphcis Animation class. Vg Animation is designed
 * to show and play animation of vector graphics based content. It hides all
 * @ref Efl_Canvas_Vg_Object details but just open an API to read vector data
 * from file. Also, it implements details of animation control methods of
 * Vector.
 *
 * Vector data could contain static or animatable vector elements including
 * animation information. Available vector data file formats are SVG, JSON and
 * EET. @ref Efl_Ui_Vg_Animation currently only supports the animation
 * information contained in JSON (known as Lottie file as well) and EET files.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
#define EFL_UI_VG_ANIMATION_CLASS efl_ui_vg_animation_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_vg_animation_class_get(void) EINA_CONST;

/**
 * @brief Number of current frame.
 *
 * Ranges from 0 to @ref efl_ui_vg_animation_frame_count_get - 1.
 *
 * @param[in] obj The object.
 * @param[in] frame_num Current frame number.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK void efl_ui_vg_animation_frame_set(Eo *obj, int frame_num);

/**
 * @brief Number of current frame.
 *
 * Ranges from 0 to @ref efl_ui_vg_animation_frame_count_get - 1.
 *
 * @param[in] obj The object.
 *
 * @return Current frame number.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK int efl_ui_vg_animation_frame_get(const Eo *obj);

/** The default view size that specified from vector resource.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK Eina_Size2D efl_ui_vg_animation_default_view_size_get(const Eo *obj);

/**
 * @brief Current vg animation state. See @ref Efl_Ui_Vg_Animation_State
 *
 * @param[in] obj The object.
 *
 * @return Current vg animation state
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK Efl_Ui_Vg_Animation_State efl_ui_vg_animation_state_get(const Eo *obj);

/**
 * @brief The index of end frame of the vg animation, if it's animated. Note :
 * frame number starts with 0.
 *
 * @param[in] obj The object.
 *
 * @return The number of frames. 0, if it's not animated.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK int efl_ui_vg_animation_frame_count_get(const Eo *obj);

/**
 * @brief The start progress of the play.
 *
 * @param[in] obj The object.
 * @param[in] min_progress The minimum progress. Value must be 0 ~ 1.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK void efl_ui_vg_animation_min_progress_set(Eo *obj, double min_progress);

/**
 * @brief The start progress of the play.
 *
 * @param[in] obj The object.
 *
 * @return The minimum progress. Value must be 0 ~ 1.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK double efl_ui_vg_animation_min_progress_get(const Eo *obj);

/**
 * @brief The last progress of the play.
 *
 * @param[in] obj The object.
 * @param[in] max_progress The maximum progress. Value must be 0 ~ 1.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK void efl_ui_vg_animation_max_progress_set(Eo *obj, double max_progress);

/**
 * @brief The last progress of the play.
 *
 * @param[in] obj The object.
 *
 * @return The maximum progress. Value must be 0 ~ 1.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK double efl_ui_vg_animation_max_progress_get(const Eo *obj);

/**
 * @brief The start frame of the play.
 *
 * @param[in] obj The object.
 * @param[in] min_frame The minimum frame for play. Value must be 0 ~
 * @ref efl_ui_vg_animation_max_frame_get
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK void efl_ui_vg_animation_min_frame_set(Eo *obj, int min_frame);

/**
 * @brief The start frame of the play.
 *
 * @param[in] obj The object.
 *
 * @return The minimum frame for play. Value must be 0 ~
 * @ref efl_ui_vg_animation_max_frame_get
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK int efl_ui_vg_animation_min_frame_get(const Eo *obj);

/**
 * @brief The last frame of the play.
 *
 * @param[in] obj The object.
 * @param[in] max_frame The maximum frame for play. Value must be
 * @ref efl_ui_vg_animation_min_frame_get ~ (@Efl.Ui.Vg_Animation.frame_count -
 * 1). The default value is @ref efl_ui_vg_animation_frame_count_get - 1.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK void efl_ui_vg_animation_max_frame_set(Eo *obj, int max_frame);

/**
 * @brief The last frame of the play.
 *
 * @param[in] obj The object.
 *
 * @return The maximum frame for play. Value must be
 * @ref efl_ui_vg_animation_min_frame_get ~ (@Efl.Ui.Vg_Animation.frame_count -
 * 1). The default value is @ref efl_ui_vg_animation_frame_count_get - 1.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK int efl_ui_vg_animation_max_frame_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Play animation of sector one time instantly when it's available.
 *
 * If end sector is NULL, only start sector is referenced. If both the start
 * and end sectors are valid, Play is played and stoped at starting point of
 * each sector.
 *
 * If start is null and end is valid, playback starts from 0 frame to the start
 * frame of the end sector. If both sectors start and end are invalid. Play
 * from 0 frame to the last frame of vg animation object.
 *
 * @note This method use to @ref efl_ui_vg_animation_min_frame_get,
 * @ref efl_ui_vg_animation_max_frame_get (@Efl.Ui.Vg_Animation.min_progress,
 * @ref efl_ui_vg_animation_max_progress_get) internally. So if you have
 * changed the min or max frame(progress) it can be changed to the sector
 * frame.
 *
 * @param[in] obj The object.
 * @param[in] start The name of start sector
 * @param[in] end The name of end sector
 *
 * @return @c true when it's successful. @c false otherwise.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_vg_animation_playing_sector(Eo *obj, const char *start, const char *end);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Override each value of the animation object. Values can be properties
 * of Efl.Gfx.Vg.Value_provider such as color and matrix information.
 *
 * Example: Eo *vp = efl_add(EFL_GFX_VG_VALUE_PROVIDER_CLASS, NULL);
 * @ref efl_gfx_vg_value_provider_keypath_set(vp,
 * "SomeLayer:SomeObject:SomeContents"); // Set vp property
 * @ref efl_ui_vg_animation_value_provider_override(target_vg_animation, vg);
 * See @ref Efl_Gfx_Vg_Value_Provider
 *
 * @param[in] obj The object.
 * @param[in] value_provider Override the values of the animation object. this
 * should have keypath infomation. See @ref Efl_Gfx_Vg_Value_Provider
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Vg_Animation
 */
EAPI EAPI_WEAK void efl_ui_vg_animation_value_provider_override(Eo *obj, Efl_Gfx_Vg_Value_Provider *value_provider);
#endif /* EFL_BETA_API_SUPPORT */

#endif
