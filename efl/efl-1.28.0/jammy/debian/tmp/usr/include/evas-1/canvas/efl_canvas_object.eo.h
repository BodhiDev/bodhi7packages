#ifndef _EFL_CANVAS_OBJECT_EO_H_
#define _EFL_CANVAS_OBJECT_EO_H_

#ifndef _EFL_CANVAS_OBJECT_EO_CLASS_TYPE
#define _EFL_CANVAS_OBJECT_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Object;

#endif

#ifndef _EFL_CANVAS_OBJECT_EO_TYPES
#define _EFL_CANVAS_OBJECT_EO_TYPES

/** EFL event animator tick data structure
 *
 * @since 1.22
 *
 * @ingroup Efl_Event_Animator_Tick
 */
typedef struct _Efl_Event_Animator_Tick
{
  Eina_Rect update_area; /**< Area of the canvas that will be pushed to screen.
                          *
                          * @since 1.22 */
} Efl_Event_Animator_Tick;


#endif
/** Efl canvas object abstract class
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
#define EFL_CANVAS_OBJECT_CLASS efl_canvas_object_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_object_class_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Low-level pointer behaviour by device. See
 * @ref efl_canvas_object_pointer_mode_get and
 * @ref efl_canvas_object_pointer_mode_set for more explanation.
 *
 * @param[in] obj The object.
 * @param[in] dev The pointer device to set/get the mode. Use @c null for the
 * default pointer.
 * @param[in] pointer_mode The pointer mode
 *
 * @return @c true if pointer mode was set, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_pointer_mode_by_device_set(Eo *obj, Efl_Input_Device *dev, Efl_Input_Object_Pointer_Mode pointer_mode);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Low-level pointer behaviour by device. See
 * @ref efl_canvas_object_pointer_mode_get and
 * @ref efl_canvas_object_pointer_mode_set for more explanation.
 *
 * @param[in] obj The object.
 * @param[in] dev The pointer device to set/get the mode. Use @c null for the
 * default pointer.
 *
 * @return The pointer mode
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Efl_Input_Object_Pointer_Mode efl_canvas_object_pointer_mode_by_device_get(const Eo *obj, Efl_Input_Device *dev);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Low-level pointer behaviour.
 *
 * This function has a direct effect on event callbacks related to pointers
 * (mouse, ...).
 *
 * If the value is @ref EFL_INPUT_OBJECT_POINTER_MODE_AUTO_GRAB (default), then
 * when mouse is pressed down over this object, events will be restricted to it
 * as source, mouse moves, for example, will be emitted even when the pointer
 * goes outside this objects geometry.
 *
 * If the value is @ref EFL_INPUT_OBJECT_POINTER_MODE_NO_GRAB, then events will
 * be emitted just when inside this object area.
 *
 * See also: @ref efl_canvas_object_pointer_mode_by_device_get and
 * @ref efl_canvas_object_pointer_mode_by_device_set Note: This function will
 * only set/get the mode for the default pointer.
 *
 * @param[in] obj The object.
 * @param[in] pointer_mode Input pointer mode
 *
 * @return @c true if pointer behaviour was set, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_pointer_mode_set(Eo *obj, Efl_Input_Object_Pointer_Mode pointer_mode);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Low-level pointer behaviour.
 *
 * This function has a direct effect on event callbacks related to pointers
 * (mouse, ...).
 *
 * If the value is @ref EFL_INPUT_OBJECT_POINTER_MODE_AUTO_GRAB (default), then
 * when mouse is pressed down over this object, events will be restricted to it
 * as source, mouse moves, for example, will be emitted even when the pointer
 * goes outside this objects geometry.
 *
 * If the value is @ref EFL_INPUT_OBJECT_POINTER_MODE_NO_GRAB, then events will
 * be emitted just when inside this object area.
 *
 * See also: @ref efl_canvas_object_pointer_mode_by_device_get and
 * @ref efl_canvas_object_pointer_mode_by_device_set Note: This function will
 * only set/get the mode for the default pointer.
 *
 * @param[in] obj The object.
 *
 * @return Input pointer mode
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Efl_Input_Object_Pointer_Mode efl_canvas_object_pointer_mode_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Render mode to be used for compositing the Evas object.
 *
 * Only two modes are supported: - @ref EFL_GFX_RENDER_OP_BLEND means the
 * object will be merged on top of objects below it using simple alpha
 * compositing. - @ref EFL_GFX_RENDER_OP_COPY means this object's pixels will
 * replace everything that is below, making this object opaque.
 *
 * Please do not assume that @ref EFL_GFX_RENDER_OP_COPY mode can be used to
 * "poke" holes in a window (to see through it), as only the compositor can
 * ensure that. Copy mode should only be used with otherwise opaque widgets or
 * inside non-window surfaces (e.g. a transparent background inside a buffer
 * canvas).
 *
 * @param[in] obj The object.
 * @param[in] render_op Blend or copy.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_render_op_set(Eo *obj, Efl_Gfx_Render_Op render_op);

/**
 * @brief Render mode to be used for compositing the Evas object.
 *
 * Only two modes are supported: - @ref EFL_GFX_RENDER_OP_BLEND means the
 * object will be merged on top of objects below it using simple alpha
 * compositing. - @ref EFL_GFX_RENDER_OP_COPY means this object's pixels will
 * replace everything that is below, making this object opaque.
 *
 * Please do not assume that @ref EFL_GFX_RENDER_OP_COPY mode can be used to
 * "poke" holes in a window (to see through it), as only the compositor can
 * ensure that. Copy mode should only be used with otherwise opaque widgets or
 * inside non-window surfaces (e.g. a transparent background inside a buffer
 * canvas).
 *
 * @param[in] obj The object.
 *
 * @return Blend or copy.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Efl_Gfx_Render_Op efl_canvas_object_render_op_get(const Eo *obj);

/**
 * @brief Clip one object to another.
 *
 * This property will clip the object @c obj to the area occupied by the object
 * @c clip. This means the object @c obj will only be visible within the area
 * occupied by the clipping object ($clip).
 *
 * The color of the object being clipped will be multiplied by the color of the
 * clipping one, so the resulting color for the former will be "RESULT = (OBJ *
 * CLIP) / (255 * 255)", per color element (red, green, blue and alpha).
 *
 * Clipping is recursive, so clipping objects may be clipped by others, and
 * their color will in term be multiplied. You may not set up circular clipping
 * lists (i.e. object 1 clips object 2, which clips object 1): the behavior of
 * Evas is undefined in this case.
 *
 * Objects which do not clip others are visible in the canvas as normal; those
 * that clip one or more objects become invisible themselves, only affecting
 * what they clip. If an object ceases to have other objects being clipped by
 * it, it will become visible again.
 *
 * The visibility of an object affects the objects that are clipped by it, so
 * if the object clipping others is not shown (as in
 * @ref efl_gfx_entity_visible_get), the objects clipped by it will not be
 * shown  either.
 *
 * If @c obj was being clipped by another object when this function is  called,
 * it gets implicitly removed from the old clipper's domain and is made now to
 * be clipped by its new clipper.
 *
 * If @c clip is @c null, this call will disable clipping for the object i.e.
 * its visibility and color get detached from the previous clipper. If it
 * wasn't, this has no effect.
 *
 * @note Only rectangle and image (masks) objects can be used as clippers.
 * Anything else will result in undefined behaviour.
 *
 * @param[in] obj The object.
 * @param[in] clipper The object to clip @c obj by.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_clipper_set(Eo *obj, Efl_Canvas_Object *clipper);

/**
 * @brief Clip one object to another.
 *
 * This property will clip the object @c obj to the area occupied by the object
 * @c clip. This means the object @c obj will only be visible within the area
 * occupied by the clipping object ($clip).
 *
 * The color of the object being clipped will be multiplied by the color of the
 * clipping one, so the resulting color for the former will be "RESULT = (OBJ *
 * CLIP) / (255 * 255)", per color element (red, green, blue and alpha).
 *
 * Clipping is recursive, so clipping objects may be clipped by others, and
 * their color will in term be multiplied. You may not set up circular clipping
 * lists (i.e. object 1 clips object 2, which clips object 1): the behavior of
 * Evas is undefined in this case.
 *
 * Objects which do not clip others are visible in the canvas as normal; those
 * that clip one or more objects become invisible themselves, only affecting
 * what they clip. If an object ceases to have other objects being clipped by
 * it, it will become visible again.
 *
 * The visibility of an object affects the objects that are clipped by it, so
 * if the object clipping others is not shown (as in
 * @ref efl_gfx_entity_visible_get), the objects clipped by it will not be
 * shown  either.
 *
 * If @c obj was being clipped by another object when this function is  called,
 * it gets implicitly removed from the old clipper's domain and is made now to
 * be clipped by its new clipper.
 *
 * If @c clip is @c null, this call will disable clipping for the object i.e.
 * its visibility and color get detached from the previous clipper. If it
 * wasn't, this has no effect.
 *
 * @note Only rectangle and image (masks) objects can be used as clippers.
 * Anything else will result in undefined behaviour.
 *
 * @param[in] obj The object.
 *
 * @return The object to clip @c obj by.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Object *efl_canvas_object_clipper_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A hint for an object that its size will not change.
 *
 * When this flag is set, various optimizations may be employed by the renderer
 * based on the fixed size of the object.
 *
 * It is a user error to change the size of an object while this flag is set.
 *
 * @param[in] obj The object.
 * @param[in] enable Whether the object size is known to be static.
 *
 * @since 1.23
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_has_fixed_size_set(Eo *obj, Eina_Bool enable);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A hint for an object that its size will not change.
 *
 * When this flag is set, various optimizations may be employed by the renderer
 * based on the fixed size of the object.
 *
 * It is a user error to change the size of an object while this flag is set.
 *
 * @param[in] obj The object.
 *
 * @return Whether the object size is known to be static.
 *
 * @since 1.23
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_has_fixed_size_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Whether an Evas object is to repeat events to objects below it.
 *
 * If @c repeat is @c true, it will make events on @c obj to also be repeated
 * for the next lower object in the objects' stack (see see
 * @ref efl_gfx_stack_below_get).
 *
 * If @c repeat is @c false, events occurring on @c obj will be processed only
 * on it.
 *
 * @param[in] obj The object.
 * @param[in] repeat Whether @c obj is to repeat events ($true) or not
 * ($false).
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_repeat_events_set(Eo *obj, Eina_Bool repeat);

/**
 * @brief Whether an Evas object is to repeat events to objects below it.
 *
 * If @c repeat is @c true, it will make events on @c obj to also be repeated
 * for the next lower object in the objects' stack (see see
 * @ref efl_gfx_stack_below_get).
 *
 * If @c repeat is @c false, events occurring on @c obj will be processed only
 * on it.
 *
 * @param[in] obj The object.
 *
 * @return Whether @c obj is to repeat events ($true) or not ($false).
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_repeat_events_get(const Eo *obj);

/**
 * @brief Indicates that this object is the keyboard event receiver on its
 * canvas.
 *
 * Changing focus only affects where (key) input events go. There can be only
 * one object focused at any time. If @c focus is @c true, @c obj will be set
 * as the currently focused object and it will receive all keyboard events that
 * are not exclusive key grabs on other objects. See also
 * @ref efl_canvas_object_seat_focus_check,
 * @ref efl_canvas_object_seat_focus_add,
 * @ref efl_canvas_object_seat_focus_del.
 *
 * @param[in] obj The object.
 * @param[in] focus @c true when set as focused or @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_key_focus_set(Eo *obj, Eina_Bool focus);

/**
 * @brief Indicates that this object is the keyboard event receiver on its
 * canvas.
 *
 * Changing focus only affects where (key) input events go. There can be only
 * one object focused at any time. If @c focus is @c true, @c obj will be set
 * as the currently focused object and it will receive all keyboard events that
 * are not exclusive key grabs on other objects. See also
 * @ref efl_canvas_object_seat_focus_check,
 * @ref efl_canvas_object_seat_focus_add,
 * @ref efl_canvas_object_seat_focus_del.
 *
 * @param[in] obj The object.
 *
 * @return @c true when set as focused or @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_key_focus_get(const Eo *obj);

/**
 * @brief Check if this object is focused.
 *
 * @param[in] obj The object.
 *
 * @return @c true if focused by at least one seat or @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_seat_focus_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Check if this object is focused by a given seat
 *
 * @param[in] obj The object.
 * @param[in] seat The seat to check if the object is focused. Use @c null for
 * the default seat.
 *
 * @return @c true if focused or @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_seat_focus_check(Eo *obj, Efl_Input_Device *seat);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Add a seat to the focus list.
 *
 * Evas allows the Efl.Canvas.Object to be focused by multiple seats at the
 * same time. This function adds a new seat to the focus list. In other words,
 * after the seat is added to the list this object will now be also focused by
 * this new seat.
 *
 * @note The old focus APIs still work, however they will only act on the
 * default seat.
 *
 * @param[in] obj The object.
 * @param[in] seat The seat that should be added to the focus list. Use @c null
 * for the default seat.
 *
 * @return @c true if the focus has been set or @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_seat_focus_add(Eo *obj, Efl_Input_Device *seat);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Remove a seat from the focus list.
 *
 * @param[in] obj The object.
 * @param[in] seat The seat that should be removed from the focus list. Use
 * @c null for the default seat.
 *
 * @return @c true if the seat was removed from the focus list or @c false
 * otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_seat_focus_del(Eo *obj, Efl_Input_Device *seat);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Whether to use precise (usually expensive) point collision detection
 * for a given Evas object.
 *
 * Use this property to make Evas treat objects' transparent areas as not
 * belonging to it with regard to mouse pointer events. By default, all of the
 * object's boundary rectangle will be taken in account for them.
 *
 * @warning By using precise point collision detection you'll be making Evas
 * more resource intensive.
 *
 * @param[in] obj The object.
 * @param[in] precise Whether to use precise point collision detection.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_precise_is_inside_set(Eo *obj, Eina_Bool precise);

/**
 * @brief Whether to use precise (usually expensive) point collision detection
 * for a given Evas object.
 *
 * Use this property to make Evas treat objects' transparent areas as not
 * belonging to it with regard to mouse pointer events. By default, all of the
 * object's boundary rectangle will be taken in account for them.
 *
 * @warning By using precise point collision detection you'll be making Evas
 * more resource intensive.
 *
 * @param[in] obj The object.
 *
 * @return Whether to use precise point collision detection.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_precise_is_inside_get(const Eo *obj);

/**
 * @brief Whether events on a smart object's member should be propagated up to
 * its parent.
 *
 * This function has no effect if @c obj is not a member of a smart object.
 *
 * If @c prop is @c true, events occurring on this object will be propagated on
 * to the smart object of which @c obj is a member. If @c prop is @c false,
 * events occurring on this object will not be propagated on to the smart
 * object of which @c obj is a member.
 *
 * See also @ref efl_canvas_object_repeat_events_set,
 * @ref efl_canvas_object_pass_events_set.
 *
 * @param[in] obj The object.
 * @param[in] propagate Whether to propagate events.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_propagate_events_set(Eo *obj, Eina_Bool propagate);

/**
 * @brief Whether events on a smart object's member should be propagated up to
 * its parent.
 *
 * This function has no effect if @c obj is not a member of a smart object.
 *
 * If @c prop is @c true, events occurring on this object will be propagated on
 * to the smart object of which @c obj is a member. If @c prop is @c false,
 * events occurring on this object will not be propagated on to the smart
 * object of which @c obj is a member.
 *
 * See also @ref efl_canvas_object_repeat_events_set,
 * @ref efl_canvas_object_pass_events_set.
 *
 * @param[in] obj The object.
 *
 * @return Whether to propagate events.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_propagate_events_get(const Eo *obj);

/**
 * @brief Whether an Evas object is to pass (ignore) events.
 *
 * If @c pass is @c true, it will make events on @c obj to be ignored. They
 * will be triggered on the next lower object (that is not set to pass events),
 * instead (see @ref efl_gfx_stack_below_get).
 *
 * If @c pass is @c false events will be processed on that object as normal.
 *
 * See also @ref efl_canvas_object_repeat_events_set,
 * @ref efl_canvas_object_propagate_events_set
 *
 * @param[in] obj The object.
 * @param[in] pass Whether @c obj is to pass events ($true) or not ($false).
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_pass_events_set(Eo *obj, Eina_Bool pass);

/**
 * @brief Whether an Evas object is to pass (ignore) events.
 *
 * If @c pass is @c true, it will make events on @c obj to be ignored. They
 * will be triggered on the next lower object (that is not set to pass events),
 * instead (see @ref efl_gfx_stack_below_get).
 *
 * If @c pass is @c false events will be processed on that object as normal.
 *
 * See also @ref efl_canvas_object_repeat_events_set,
 * @ref efl_canvas_object_propagate_events_set
 *
 * @param[in] obj The object.
 *
 * @return Whether @c obj is to pass events ($true) or not ($false).
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_pass_events_get(const Eo *obj);

/**
 * @brief Whether or not the given Evas object is to be drawn anti-aliased.
 *
 * @param[in] obj The object.
 * @param[in] anti_alias @c true if the object is to be anti_aliased, @c false
 * otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_anti_alias_set(Eo *obj, Eina_Bool anti_alias);

/**
 * @brief Whether or not the given Evas object is to be drawn anti-aliased.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the object is to be anti_aliased, @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_anti_alias_get(const Eo *obj);

/**
 * @brief List of objects currently clipped by @c obj.
 *
 * This returns the internal list handle containing all objects clipped by the
 * object @c obj. If none are clipped by it, the call returns @c null. This
 * list is only valid until the clip list is changed and should be fetched
 * again with another call to this function if any objects being clipped by
 * this object are unclipped, clipped by a new object, deleted or get the
 * clipper deleted. These operations will invalidate the list returned, so it
 * should not be used anymore after that point. Any use of the list after this
 * may have undefined results, possibly leading to crashes.
 *
 * See also @ref efl_canvas_object_clipper_get.
 *
 * @param[in] obj The object.
 *
 * @return An iterator over the list of objects clipped by @c obj.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Iterator *efl_canvas_object_clipped_objects_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

#ifdef EFL_CANVAS_OBJECT_PROTECTED
/**
 * @brief Gets the parent smart object of a given Evas object, if it has one.
 *
 * This can be different from @ref efl_parent_get because this one is used
 * internally for rendering and the normal parent is what the user expects to
 * be the parent.
 *
 * @param[in] obj The object.
 *
 * @return The parent smart object of @c obj or @c null.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Object *efl_canvas_object_render_parent_get(const Eo *obj);
#endif

/**
 * @brief This handles text paragraph direction of the given object. Even if
 * the given object is not textblock or text, its smart child objects can
 * inherit the paragraph direction from the given object. The default paragraph
 * direction is @c inherit.
 *
 * @param[in] obj The object.
 * @param[in] dir Paragraph direction for the given object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_paragraph_direction_set(Eo *obj, Efl_Text_Bidirectional_Type dir);

/**
 * @brief This handles text paragraph direction of the given object. Even if
 * the given object is not textblock or text, its smart child objects can
 * inherit the paragraph direction from the given object. The default paragraph
 * direction is @c inherit.
 *
 * @param[in] obj The object.
 *
 * @return Paragraph direction for the given object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Efl_Text_Bidirectional_Type efl_canvas_object_paragraph_direction_get(const Eo *obj);

/**
 * @brief Returns the number of objects clipped by @c obj
 *
 * @param[in] obj The object.
 *
 * @return The number of objects clipped by @c obj
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK unsigned int efl_canvas_object_clipped_objects_count(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Requests @c keyname key events be directed to @c obj.
 *
 * Key grabs allow one or more objects to receive key events for specific key
 * strokes even if other objects have focus. Whenever a key is grabbed, only
 * the objects grabbing it will get the events for the given keys.
 *
 * @c keyname is a platform dependent symbolic name for the key pressed.
 *
 * @c modifiers and @c not_modifiers are bit masks of all the modifiers that
 * must and mustn't, respectively, be pressed along with @c keyname key in
 * order to trigger this new key grab. Modifiers can be things such as Shift
 * and Ctrl as well as user defined types via @ref evas_key_modifier_add.
 * @c exclusive will make the given object the only one permitted to grab the
 * given key. If given @c true, subsequent calls on this function with
 * different @c obj arguments will fail, unless the key is ungrabbed again.
 *
 * @warning Providing impossible modifier sets creates undefined behavior.
 *
 * @param[in] obj The object.
 * @param[in] keyname The key to request events for.
 * @param[in] modifiers A combination of modifier keys that must be present to
 * trigger the event.
 * @param[in] not_modifiers A combination of modifier keys that must not be
 * present to trigger the event.
 * @param[in] exclusive Request that the @c obj is the only object receiving
 * the @c keyname events.
 *
 * @return @c true if the call succeeded, @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_key_grab(Eo *obj, const char *keyname, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers, Eina_Bool exclusive) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Removes the grab on @c keyname key events by @c obj.
 *
 * Removes a key grab on @c obj if @c keyname, @c modifiers, and
 * @c not_modifiers match.
 *
 * See also @ref efl_canvas_object_key_grab,
 * @ref efl_canvas_object_key_focus_get, @ref efl_canvas_object_key_focus_set,
 * and the legacy API evas_focus_get.
 *
 * @param[in] obj The object.
 * @param[in] keyname The key the grab is set for.
 * @param[in] modifiers A mask of modifiers that must be present to trigger the
 * event.
 * @param[in] not_modifiers A mask of modifiers that must not not be present to
 * trigger the event.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_key_ungrab(Eo *obj, const char *keyname, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers);

/**
 * @brief Disables all rendering on the canvas.
 *
 * This flag will be used to indicate to Evas that this object should never be
 * rendered on the canvas under any circumstances. In particular, this is
 * useful to avoid drawing clipper objects (or masks) even when they don't clip
 * any object. This can also be used to replace the old source_visible flag
 * with proxy objects.
 *
 * This is different to the visible property, as even visible objects marked as
 * "no-render" will never appear on screen. But those objects can still be used
 * as proxy sources or clippers. When hidden, all "no-render" objects will
 * completely disappear from the canvas, and hide their clippees or be
 * invisible when used as proxy sources.
 *
 * @param[in] obj The object.
 * @param[in] enable Enable "no-render" mode.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK void efl_canvas_object_no_render_set(Eo *obj, Eina_Bool enable);

/**
 * @brief Disables all rendering on the canvas.
 *
 * This flag will be used to indicate to Evas that this object should never be
 * rendered on the canvas under any circumstances. In particular, this is
 * useful to avoid drawing clipper objects (or masks) even when they don't clip
 * any object. This can also be used to replace the old source_visible flag
 * with proxy objects.
 *
 * This is different to the visible property, as even visible objects marked as
 * "no-render" will never appear on screen. But those objects can still be used
 * as proxy sources or clippers. When hidden, all "no-render" objects will
 * completely disappear from the canvas, and hide their clippees or be
 * invisible when used as proxy sources.
 *
 * @param[in] obj The object.
 *
 * @return Enable "no-render" mode.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_no_render_get(const Eo *obj);

/**
 * @brief Whether the coordinates are logically inside the object.
 *
 * A value of @c true indicates the position is logically inside the object,
 * and @c false implies it is logically outside the object.
 *
 * If @c obj is not a valid object, the return value is undefined.
 *
 * @param[in] obj The object.
 * @param[in] pos The coordinates in pixels.
 *
 * @return @c true if the coordinates are inside the object, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_object_coords_inside_get(const Eo *obj, Eina_Position2D pos);

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_OBJECT_EVENT_ANIMATOR_TICK;

/** Animator tick synchronized with screen vsync if possible.
 * @return Efl_Event_Animator_Tick
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Object
 */
#define EFL_CANVAS_OBJECT_EVENT_ANIMATOR_TICK (&(_EFL_CANVAS_OBJECT_EVENT_ANIMATOR_TICK))

#endif
