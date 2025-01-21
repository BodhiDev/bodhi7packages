#ifndef _EFL_CANVAS_SCENE_EO_H_
#define _EFL_CANVAS_SCENE_EO_H_

#ifndef _EFL_CANVAS_SCENE_EO_CLASS_TYPE
#define _EFL_CANVAS_SCENE_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Scene;

#endif

#ifndef _EFL_CANVAS_SCENE_EO_TYPES
#define _EFL_CANVAS_SCENE_EO_TYPES


#endif
/** Interface containing basic canvas-related methods and events.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
#define EFL_CANVAS_SCENE_INTERFACE efl_canvas_scene_interface_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_scene_interface_get(void) EINA_CONST;

/**
 * @brief The maximum image size the canvas can possibly handle.
 *
 * This function returns the largest image or surface size that the canvas can
 * handle in pixels, and if there is one, returns @c true. It returns @c false
 * if no extra constraint on maximum image size exists.
 *
 * The default limit is 65535x65535.
 *
 * @param[in] obj The object.
 * @param[out] max The maximum image size (in pixels).
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_scene_image_max_size_get(const Eo *obj, Eina_Size2D *max);

/** Call user-provided @c calculate group functions and unset the flag
 * signalling that the object needs to get recalculated to all group objects in
 * the canvas.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK void efl_canvas_scene_group_objects_calculate(Eo *obj);

/**
 * @brief Get if the canvas is currently calculating group objects.
 *
 * @param[in] obj The object.
 *
 * @return @c true if currently calculating group objects.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_scene_group_objects_calculating_get(const Eo *obj);

/**
 * @brief Retrieve a list of objects at a given position in a canvas.
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas covering the given position. The
 * user can exclude from the query objects which are hidden and/or which are
 * set to pass events.
 *
 * @warning This function will only evaluate top-level objects; child or "sub"
 * objects will be skipped.
 *
 * @param[in] obj The object.
 * @param[in] pos The pixel position.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return The list of objects that are over the given position in @c e.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Eina_Iterator *efl_canvas_scene_objects_at_xy_get(Eo *obj, Eina_Position2D pos, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Retrieve the object stacked at the top of a given position in a
 * canvas.
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas covering the given position. The
 * user can exclude from the query objects which are hidden and/or which are
 * set to pass events.
 *
 * @warning This function will only evaluate top-level objects; child or "sub"
 * objects will be skipped.
 *
 * @param[in] obj The object.
 * @param[in] pos The pixel position.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return The canvas object that is over all other objects at the given
 * position.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Efl_Gfx_Entity *efl_canvas_scene_object_top_at_xy_get(const Eo *obj, Eina_Position2D pos, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Retrieve a list of objects overlapping a given rectangular region in
 * a canvas.
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas overlapping with the given
 * rectangular region. The user can exclude from the query objects which are
 * hidden and/or which are set to pass events.
 *
 * @warning This function will only evaluate top-level objects; child or "sub"
 * objects will be skipped.
 *
 * @param[in] obj The object.
 * @param[in] rect The rectangular region.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return Iterator to objects
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Eina_Iterator *efl_canvas_scene_objects_in_rectangle_get(Eo *obj, Eina_Rect rect, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Retrieve the canvas object stacked at the top of a given rectangular
 * region in a canvas
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas overlapping with the given
 * rectangular region. The user can exclude from the query objects which are
 * hidden and/or which are set to pass events.
 *
 * @warning This function will only evaluate top-level objects; child or "sub"
 * objects will be skipped.
 *
 * @param[in] obj The object.
 * @param[in] rect The rectangular region.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return The object that is over all other objects at the given rectangular
 * region.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Efl_Gfx_Entity *efl_canvas_scene_object_top_in_rectangle_get(const Eo *obj, Eina_Rect rect, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects) EINA_WARN_UNUSED_RESULT;

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Iterate over the available input device seats for the canvas.
 *
 * A "seat" is the term used for a group of input devices, typically including
 * a pointer and a keyboard. A seat object is the parent of the individual
 * input devices.
 *
 * @param[in] obj The object.
 *
 * @return An iterator over the attached seats.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Eina_Iterator *efl_canvas_scene_seats(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief An input device attached to this canvas, found by name.
 *
 * @note This function is meant to find seats and not individual input devices.
 *
 * See also @ref efl_canvas_scene_seat_get to find a seat by id instead of by
 * name.
 *
 * Get a device by name.
 *
 * @param[in] obj The object.
 * @param[in] name The name of the seat to find.
 *
 * @return The device or seat, @c null if not found.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Efl_Input_Device *efl_canvas_scene_device_get(const Eo *obj, const char *name);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Get a seat attached to this canvas using the seat's id property.
 *
 * Seats are associated with an arbitrary integer id. The id is not a
 * persistent value and should never be hardcoded, as it may change between
 * runs of an application depending on the environment.
 *
 * See also @ref efl_canvas_scene_device_get to find a seat by name instead of
 * by id.
 *
 * Get a seat by id.
 *
 * @param[in] obj The object.
 * @param[in] id The id of the seat to find.
 *
 * @return The seat or @c null if not found.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Efl_Input_Device *efl_canvas_scene_seat_get(const Eo *obj, int id);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Get the default seat attached to this canvas.
 *
 * A canvas may have exactly one default seat.
 *
 * See also @ref efl_canvas_scene_device_get to find a seat by name. See also
 * @ref efl_canvas_scene_seat_get to find a seat by id.
 *
 * Get the default seat.
 *
 * @param[in] obj The object.
 *
 * @return The default seat or @c null if one does not exist.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Efl_Input_Device *efl_canvas_scene_seat_default_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The current known pointer coordinates.
 *
 * This function returns the current position of the main input pointer (mouse,
 * pen, etc...).
 *
 * @param[in] obj The object.
 * @param[in] seat The seat, or @c null to use the default.
 * @param[out] pos The pointer position in pixels.
 *
 * @return @c true if a pointer exists for the given seat, otherwise @c false.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_scene_pointer_position_get(const Eo *obj, Efl_Input_Device *seat, Eina_Position2D *pos);
#endif /* EFL_BETA_API_SUPPORT */

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_SCENE_EVENT_SCENE_FOCUS_IN;

/** Called when scene got focus
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
#define EFL_CANVAS_SCENE_EVENT_SCENE_FOCUS_IN (&(_EFL_CANVAS_SCENE_EVENT_SCENE_FOCUS_IN))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_SCENE_EVENT_SCENE_FOCUS_OUT;

/** Called when scene lost focus
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
#define EFL_CANVAS_SCENE_EVENT_SCENE_FOCUS_OUT (&(_EFL_CANVAS_SCENE_EVENT_SCENE_FOCUS_OUT))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_SCENE_EVENT_OBJECT_FOCUS_IN;

/** Called when object got focus
 * @return Efl_Input_Focus *
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
#define EFL_CANVAS_SCENE_EVENT_OBJECT_FOCUS_IN (&(_EFL_CANVAS_SCENE_EVENT_OBJECT_FOCUS_IN))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_SCENE_EVENT_OBJECT_FOCUS_OUT;

/** Called when object lost focus
 * @return Efl_Input_Focus *
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
#define EFL_CANVAS_SCENE_EVENT_OBJECT_FOCUS_OUT (&(_EFL_CANVAS_SCENE_EVENT_OBJECT_FOCUS_OUT))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_SCENE_EVENT_RENDER_PRE;

/** Called when pre render happens
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
#define EFL_CANVAS_SCENE_EVENT_RENDER_PRE (&(_EFL_CANVAS_SCENE_EVENT_RENDER_PRE))
#ifdef EFL_BETA_API_SUPPORT
EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_SCENE_EVENT_RENDER_POST;

/** Called when post render happens
 * @return Efl_Gfx_Event_Render_Post
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
#define EFL_CANVAS_SCENE_EVENT_RENDER_POST (&(_EFL_CANVAS_SCENE_EVENT_RENDER_POST))
#endif /* EFL_BETA_API_SUPPORT */
#ifdef EFL_BETA_API_SUPPORT
EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_SCENE_EVENT_DEVICE_CHANGED;

/** Called when input device changed
 * @return Efl_Input_Device *
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
#define EFL_CANVAS_SCENE_EVENT_DEVICE_CHANGED (&(_EFL_CANVAS_SCENE_EVENT_DEVICE_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */
#ifdef EFL_BETA_API_SUPPORT
EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_SCENE_EVENT_DEVICE_ADDED;

/** Called when input device was added
 * @return Efl_Input_Device *
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
#define EFL_CANVAS_SCENE_EVENT_DEVICE_ADDED (&(_EFL_CANVAS_SCENE_EVENT_DEVICE_ADDED))
#endif /* EFL_BETA_API_SUPPORT */
#ifdef EFL_BETA_API_SUPPORT
EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_SCENE_EVENT_DEVICE_REMOVED;

/** Called when input device was removed
 * @return Efl_Input_Device *
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Scene
 */
#define EFL_CANVAS_SCENE_EVENT_DEVICE_REMOVED (&(_EFL_CANVAS_SCENE_EVENT_DEVICE_REMOVED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
