#ifndef _EFL_GFX_FRAME_CONTROLLER_EO_H_
#define _EFL_GFX_FRAME_CONTROLLER_EO_H_

#ifndef _EFL_GFX_FRAME_CONTROLLER_EO_CLASS_TYPE
#define _EFL_GFX_FRAME_CONTROLLER_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Frame_Controller;

#endif

#ifndef _EFL_GFX_FRAME_CONTROLLER_EO_TYPES
#define _EFL_GFX_FRAME_CONTROLLER_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Frame loop modes
 *
 * @ingroup Efl_Gfx_Frame_Controller_Loop_Hint
 */
typedef enum
{
  EFL_GFX_FRAME_CONTROLLER_LOOP_HINT_NONE = 0, /**< No looping order specified.
                                                */
  EFL_GFX_FRAME_CONTROLLER_LOOP_HINT_LOOP = 1, /**< Standard loop:
                                                * 1->2->3->1->2->3->1 */
  EFL_GFX_FRAME_CONTROLLER_LOOP_HINT_PINGPONG = 2 /**< Ping-pong bouncing loop:
                                                   * 1->2->3->2->1->2->3->1 */
} Efl_Gfx_Frame_Controller_Loop_Hint;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl frame controller of frame based animated object interface.
 *
 * @ingroup Efl_Gfx_Frame_Controller
 */
#define EFL_GFX_FRAME_CONTROLLER_INTERFACE efl_gfx_frame_controller_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_frame_controller_interface_get(void) EINA_CONST;

/**
 * @brief Whether an object can be animated (has multiple frames).
 *
 * This will be @c true for animated object for instance but @c false for a
 * single frame object.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the object is animated
 *
 * @ingroup Efl_Gfx_Frame_Controller
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_frame_controller_animated_get(const Eo *obj);

/**
 * @brief Index of the current frame of an animated object.
 *
 * Ranges from 1 to @ref efl_gfx_frame_controller_frame_count_get. Valid only
 * if @ref efl_gfx_frame_controller_animated_get is @c true.
 *
 * @param[in] obj The object.
 * @param[in] frame_index The index of current frame.
 *
 * @return Returns @c true if the frame index is valid.
 *
 * @ingroup Efl_Gfx_Frame_Controller
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_frame_controller_frame_set(Eo *obj, int frame_index);

/**
 * @brief Index of the current frame of an animated object.
 *
 * Ranges from 1 to @ref efl_gfx_frame_controller_frame_count_get. Valid only
 * if @ref efl_gfx_frame_controller_animated_get is @c true.
 *
 * @param[in] obj The object.
 *
 * @return The index of current frame.
 *
 * @ingroup Efl_Gfx_Frame_Controller
 */
EAPI EAPI_WEAK int efl_gfx_frame_controller_frame_get(const Eo *obj);

/**
 * @brief The total number of frames of the object, if animated.
 *
 * Returns -1 if not animated.
 *
 * @param[in] obj The object.
 *
 * @return The number of frames in the animated object.
 *
 * @ingroup Efl_Gfx_Frame_Controller
 */
EAPI EAPI_WEAK int efl_gfx_frame_controller_frame_count_get(const Eo *obj);

/**
 * @brief The kind of looping the animated object does.
 *
 * If it returns @ref EFL_GFX_FRAME_CONTROLLER_LOOP_HINT_LOOP, you should
 * display frames in a sequence like: 1->2->3->1->2->3->1...
 *
 * If it returns @ref EFL_GFX_FRAME_CONTROLLER_LOOP_HINT_PINGPONG, it is better
 * to display frames in a sequence like: 1->2->3->2->1->2->3->1...
 *
 * The default type is @ref EFL_GFX_FRAME_CONTROLLER_LOOP_HINT_LOOP.
 *
 * @param[in] obj The object.
 *
 * @return Loop type of the animated object.
 *
 * @ingroup Efl_Gfx_Frame_Controller
 */
EAPI EAPI_WEAK Efl_Gfx_Frame_Controller_Loop_Hint efl_gfx_frame_controller_loop_type_get(const Eo *obj);

/**
 * @brief The number times the animation of the object loops.
 *
 * This returns loop count of animated object. The loop count is the number of
 * times the animation will play fully from first to last frame until the
 * animation should stop (at the final frame).
 *
 * If 0 is returned, then looping should happen indefinitely (no limit to the
 * number of times it loops).
 *
 * @param[in] obj The object.
 *
 * @return The number of loop of an animated object.
 *
 * @ingroup Efl_Gfx_Frame_Controller
 */
EAPI EAPI_WEAK int efl_gfx_frame_controller_loop_count_get(const Eo *obj);

/**
 * @brief The duration of a sequence of frames.
 *
 * This returns total duration in seconds that the specified sequence of frames
 * should take.
 *
 * If @c start_frame is 1 and @c frame_num is 0, this returns the duration of
 * frame 1. If @c start_frame is 1 and @c frame_num is 1, this returns the
 * total duration of frame 1 + frame 2.
 *
 * @param[in] obj The object.
 * @param[in] start_frame The first frame, rangers from 1 to
 * @ref efl_gfx_frame_controller_frame_count_get.
 * @param[in] frame_num Number of frames in the sequence, starts from 0.
 *
 * @return Duration in seconds
 *
 * @ingroup Efl_Gfx_Frame_Controller
 */
EAPI EAPI_WEAK double efl_gfx_frame_controller_frame_duration_get(const Eo *obj, int start_frame, int frame_num);

/**
 * @brief The sector for playing section.
 *
 * Returns the start and end frame of the sector specified by the name.
 *
 * @param[in] obj The object.
 * @param[in] name The name of sector
 * @param[in] startframe The start frame of sector
 * @param[in] endframe The end frame of sector
 *
 * @return Returns @c true if sector and frame set success.
 *
 * @ingroup Efl_Gfx_Frame_Controller
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_frame_controller_sector_set(Eo *obj, const char *name, int startframe, int endframe);

/**
 * @brief The sector for playing section.
 *
 * Returns the start and end frame of the sector specified by the name.
 *
 * @param[in] obj The object.
 * @param[in] name The name of sector
 * @param[out] startframe The start frame of sector
 * @param[out] endframe The end frame of sector
 *
 * @return Returns @c true if frames get success.
 *
 * @ingroup Efl_Gfx_Frame_Controller
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_frame_controller_sector_get(const Eo *obj, const char *name, int *startframe, int *endframe);
#endif /* EFL_BETA_API_SUPPORT */

#endif
