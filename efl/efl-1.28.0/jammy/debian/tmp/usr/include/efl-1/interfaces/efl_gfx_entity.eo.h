#ifndef _EFL_GFX_ENTITY_EO_H_
#define _EFL_GFX_ENTITY_EO_H_

#ifndef _EFL_GFX_ENTITY_EO_CLASS_TYPE
#define _EFL_GFX_ENTITY_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Entity;

#endif

#ifndef _EFL_GFX_ENTITY_EO_TYPES
#define _EFL_GFX_ENTITY_EO_TYPES


#endif
/** Efl graphics interface
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
#define EFL_GFX_ENTITY_INTERFACE efl_gfx_entity_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_entity_interface_get(void) EINA_CONST;

/**
 * @brief The 2D position of a canvas object.
 *
 * The position is absolute, in pixels, relative to the top-left corner of the
 * window, within its border decorations (application space).
 *
 * Moves the given canvas object to the given location inside its canvas'
 * viewport. If unchanged this call may be entirely skipped, but if changed
 * this will trigger move events, as well as potential pointer,in or
 * pointer,out events.
 *
 * @param[in] obj The object.
 * @param[in] pos A 2D coordinate in pixel units.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
EAPI EAPI_WEAK void efl_gfx_entity_position_set(Eo *obj, Eina_Position2D pos);

/**
 * @brief The 2D position of a canvas object.
 *
 * The position is absolute, in pixels, relative to the top-left corner of the
 * window, within its border decorations (application space).
 *
 * Retrieves the position of the given canvas object.
 *
 * @param[in] obj The object.
 *
 * @return A 2D coordinate in pixel units.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
EAPI EAPI_WEAK Eina_Position2D efl_gfx_entity_position_get(const Eo *obj);

/**
 * @brief The 2D size of a canvas object.
 *
 * Changes the size of the given object.
 *
 * Note that setting the actual size of an object might be the job of its
 * container, so this function might have no effect. Look at @ref Efl_Gfx_Hint
 * instead, when manipulating widgets.
 *
 * @param[in] obj The object.
 * @param[in] size A 2D size in pixel units.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
EAPI EAPI_WEAK void efl_gfx_entity_size_set(Eo *obj, Eina_Size2D size);

/**
 * @brief The 2D size of a canvas object.
 *
 * Retrieves the (rectangular) size of the given Evas object.
 *
 * @param[in] obj The object.
 *
 * @return A 2D size in pixel units.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_entity_size_get(const Eo *obj);

/**
 * @brief Rectangular geometry that combines both position and size.
 *
 * @param[in] obj The object.
 * @param[in] rect The X,Y position and W,H size, in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
EAPI EAPI_WEAK void efl_gfx_entity_geometry_set(Eo *obj, Eina_Rect rect);

/**
 * @brief Rectangular geometry that combines both position and size.
 *
 * @param[in] obj The object.
 *
 * @return The X,Y position and W,H size, in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
EAPI EAPI_WEAK Eina_Rect efl_gfx_entity_geometry_get(const Eo *obj);

/**
 * @brief The visibility of a canvas object.
 *
 * All canvas objects will become visible by default just before render. This
 * means that it is not required to call @ref efl_gfx_entity_visible_set after
 * creating an object unless you want to create it without showing it. Note
 * that this behavior is new since 1.21, and only applies to canvas objects
 * created with the EO API (i.e. not the legacy C-only API). Other types of Gfx
 * objects may or may not be visible by default.
 *
 * Note that many other parameters can prevent a visible object from actually
 * being "visible" on screen. For instance if its color is fully transparent,
 * or its parent is hidden, or it is clipped out, etc...
 *
 * Shows or hides this object.
 *
 * @param[in] obj The object.
 * @param[in] v @c true if to make the object visible, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
EAPI EAPI_WEAK void efl_gfx_entity_visible_set(Eo *obj, Eina_Bool v);

/**
 * @brief The visibility of a canvas object.
 *
 * All canvas objects will become visible by default just before render. This
 * means that it is not required to call @ref efl_gfx_entity_visible_set after
 * creating an object unless you want to create it without showing it. Note
 * that this behavior is new since 1.21, and only applies to canvas objects
 * created with the EO API (i.e. not the legacy C-only API). Other types of Gfx
 * objects may or may not be visible by default.
 *
 * Note that many other parameters can prevent a visible object from actually
 * being "visible" on screen. For instance if its color is fully transparent,
 * or its parent is hidden, or it is clipped out, etc...
 *
 * Retrieves whether or not the given canvas object is visible.
 *
 * @param[in] obj The object.
 *
 * @return @c true if to make the object visible, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_entity_visible_get(const Eo *obj);

/**
 * @brief The scaling factor of an object.
 *
 * This property is an individual scaling factor on the object (Edje or UI
 * widget). This property (or Edje's global scaling factor, when applicable),
 * will affect this object's part sizes. If scale is not zero, then the
 * individual scaling will override any global scaling set, for the object
 * obj's parts. Set it back to zero to get the effects of the global scaling
 * again.
 *
 * @warning In Edje, only parts which, at EDC level, had the "scale" property
 * set to 1, will be affected by this function. Check the complete "syntax
 * reference" for EDC files.
 *
 * Sets the scaling factor of an object.
 *
 * @param[in] obj The object.
 * @param[in] scale The scaling factor.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
EAPI EAPI_WEAK void efl_gfx_entity_scale_set(Eo *obj, double scale);

/**
 * @brief The scaling factor of an object.
 *
 * This property is an individual scaling factor on the object (Edje or UI
 * widget). This property (or Edje's global scaling factor, when applicable),
 * will affect this object's part sizes. If scale is not zero, then the
 * individual scaling will override any global scaling set, for the object
 * obj's parts. Set it back to zero to get the effects of the global scaling
 * again.
 *
 * @warning In Edje, only parts which, at EDC level, had the "scale" property
 * set to 1, will be affected by this function. Check the complete "syntax
 * reference" for EDC files.
 *
 * Gets an object's scaling factor.
 *
 * @param[in] obj The object.
 *
 * @return The scaling factor.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
EAPI EAPI_WEAK double efl_gfx_entity_scale_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_GFX_ENTITY_EVENT_VISIBILITY_CHANGED;

/** Object's visibility state changed, the event value is the new state.
 * @return Eina_Bool
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
#define EFL_GFX_ENTITY_EVENT_VISIBILITY_CHANGED (&(_EFL_GFX_ENTITY_EVENT_VISIBILITY_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_GFX_ENTITY_EVENT_POSITION_CHANGED;

/** Object was moved, its position during the event is the new one.
 * @return Eina_Position2D
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
#define EFL_GFX_ENTITY_EVENT_POSITION_CHANGED (&(_EFL_GFX_ENTITY_EVENT_POSITION_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_GFX_ENTITY_EVENT_SIZE_CHANGED;

/** Object was resized, its size during the event is the new one.
 * @return Eina_Size2D
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Entity
 */
#define EFL_GFX_ENTITY_EVENT_SIZE_CHANGED (&(_EFL_GFX_ENTITY_EVENT_SIZE_CHANGED))

#endif
