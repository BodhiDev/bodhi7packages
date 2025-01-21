#ifndef _EFL_CANVAS_LAYOUT_EO_H_
#define _EFL_CANVAS_LAYOUT_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout;

#endif

#ifndef _EFL_CANVAS_LAYOUT_EO_TYPES
#define _EFL_CANVAS_LAYOUT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Edje object class
 *
 * The @ref efl_player_autoplay_get and @ref efl_player_playback_loop_get
 * properties both default to @c true in this class.
 *
 * @ingroup Efl_Canvas_Layout
 */
#define EFL_CANVAS_LAYOUT_CLASS efl_canvas_layout_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_canvas_layout_class_get(void) EINA_CONST;

/**
 * @brief Whether this object is animating or not.
 *
 * This property indicates whether animations are stopped or not. Animations
 * here refer to transitions between states.
 *
 * If animations are disabled, transitions between states (as defined in EDC)
 * are then instantaneous. This is conceptually similar to setting the
 * @ref efl_player_playback_speed_get to an infinitely high value.
 *
 * @param[in] obj The object.
 * @param[in] on The animation state, @c true by default.
 *
 * @ingroup Efl_Canvas_Layout
 */
EAPI EAPI_WEAK void efl_canvas_layout_animated_set(Eo *obj, Eina_Bool on);

/**
 * @brief Whether this object is animating or not.
 *
 * This property indicates whether animations are stopped or not. Animations
 * here refer to transitions between states.
 *
 * If animations are disabled, transitions between states (as defined in EDC)
 * are then instantaneous. This is conceptually similar to setting the
 * @ref efl_player_playback_speed_get to an infinitely high value.
 *
 * @param[in] obj The object.
 *
 * @return The animation state, @c true by default.
 *
 * @ingroup Efl_Canvas_Layout
 */
EAPI EAPI_WEAK Eina_Bool efl_canvas_layout_animated_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Iterates over all accessibility-enabled part names.
 *
 * @param[in] obj The object.
 *
 * @return Part name iterator
 *
 * @ingroup Efl_Canvas_Layout
 */
EAPI EAPI_WEAK Eina_Iterator *efl_canvas_layout_access_part_iterate(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief The seat device given its Edje's name.
 *
 * Edje references seats by a name that differs from Evas. Edje naming follows
 * a incrementional convention: first registered name is "seat1", second is
 * "seat2", differently from Evas.
 *
 * @param[in] obj The object.
 * @param[in] name The name's character string.
 *
 * @return The seat device or @c null if not found.
 *
 * @ingroup Efl_Canvas_Layout
 */
EAPI EAPI_WEAK Efl_Input_Device *efl_canvas_layout_seat_get(const Eo *obj, Eina_Stringshare *name);

/**
 * @brief The name given to a set by Edje.
 *
 * Edje references seats by a name that differs from Evas. Edje naming follows
 * a incrementional convention: first registered name is "seat1", second is
 * "seat2", differently from Evas.
 *
 * @param[in] obj The object.
 * @param[in] device The seat device
 *
 * @return The name's character string or @c null if not found.
 *
 * @ingroup Efl_Canvas_Layout
 */
EAPI EAPI_WEAK Eina_Stringshare *efl_canvas_layout_seat_name_get(const Eo *obj, Efl_Input_Device *device);

/**
 * @brief The (last) file loading error for a given object.
 *
 * @param[in] obj The object.
 *
 * @return The load error code.
 *
 * @ingroup Efl_Canvas_Layout
 */
EAPI EAPI_WEAK Eina_Error efl_canvas_layout_load_error_get(const Eo *obj);

/**
 * @brief Unswallow an object from this Edje.
 *
 * @param[in] obj The object.
 * @param[in] content To be removed content.
 *
 * @return @c false if @c content was not a child or can not be removed.
 *
 * @ingroup Efl_Canvas_Layout
 */
EAPI EAPI_WEAK Eina_Bool efl_canvas_layout_content_remove(Eo *obj, Efl_Gfx_Entity *content);
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LAYOUT_EVENT_PART_INVALID;

/** Emitted when trying to use an invalid part. The value passed is the part
 * name.
 * @return const char *
 *
 * @ingroup Efl_Canvas_Layout
 */
#define EFL_LAYOUT_EVENT_PART_INVALID (&(_EFL_LAYOUT_EVENT_PART_INVALID))
#endif /* EFL_BETA_API_SUPPORT */
#endif /* EFL_BETA_API_SUPPORT */

#endif
