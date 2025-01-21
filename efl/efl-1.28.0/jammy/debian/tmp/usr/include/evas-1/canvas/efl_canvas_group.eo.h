#ifndef _EFL_CANVAS_GROUP_EO_H_
#define _EFL_CANVAS_GROUP_EO_H_

#ifndef _EFL_CANVAS_GROUP_EO_CLASS_TYPE
#define _EFL_CANVAS_GROUP_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Group;

#endif

#ifndef _EFL_CANVAS_GROUP_EO_TYPES
#define _EFL_CANVAS_GROUP_EO_TYPES


#endif
/**
 * @brief A group object is a container for other canvas objects. Its children
 * move along their parent and are often clipped with a common clipper. This is
 * part of the legacy smart object concept.
 *
 * A group is not necessarily a container (see @ref Efl_Container) in the sense
 * that a standard widget may not have any empty slots for content. However
 * it's still a group of low-level canvas objects (clipper, raw objects, etc.).
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
#define EFL_CANVAS_GROUP_CLASS efl_canvas_group_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_group_class_get(void) EINA_CONST;

/**
 * @brief Indicates that the group's layout needs to be recalculated.
 *
 * If this flag is set, then the @ref efl_canvas_group_calculate function will
 * be called, during rendering phase of the canvas. After that, this flag will
 * be automatically unset.
 *
 * @note setting this flag alone will not make the canvas' whole scene dirty.
 * Using evas_render() will have no effect. To force this, use
 * @ref efl_canvas_group_change, which will also call this function
 * automatically, with the parameter set to @c true.
 *
 * See also @ref efl_canvas_group_calculate.
 *
 * @param[in] obj The object.
 * @param[in] value @c true if the group layout needs to be recalculated,
 * @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
EVAS_API EVAS_API_WEAK void efl_canvas_group_need_recalculate_set(Eo *obj, Eina_Bool value);

/**
 * @brief Indicates that the group's layout needs to be recalculated.
 *
 * If this flag is set, then the @ref efl_canvas_group_calculate function will
 * be called, during rendering phase of the canvas. After that, this flag will
 * be automatically unset.
 *
 * @note setting this flag alone will not make the canvas' whole scene dirty.
 * Using evas_render() will have no effect. To force this, use
 * @ref efl_canvas_group_change, which will also call this function
 * automatically, with the parameter set to @c true.
 *
 * See also @ref efl_canvas_group_calculate.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the group layout needs to be recalculated, @c false
 * otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_group_need_recalculate_get(const Eo *obj);

/**
 * @brief Marks the object as dirty.
 *
 * This also forcefully marks the given object as needing recalculation. As an
 * effect, on the next rendering cycle its @ref efl_canvas_group_calculate
 * method will be called.
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
EVAS_API EVAS_API_WEAK void efl_canvas_group_change(Eo *obj);

/**
 * @brief Triggers an immediate recalculation of this object's geometry.
 *
 * This will also reset the flag @ref efl_canvas_group_need_recalculate_get.
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
EVAS_API EVAS_API_WEAK void efl_canvas_group_calculate(Eo *obj);

/**
 * @brief Returns an iterator over the children of this object, which are
 * canvas objects.
 *
 * This returns the list of "smart" children. This might be different from both
 * the @ref Efl_Object children list as well as the @ref Efl_Container content
 * list.
 *
 * @param[in] obj The object.
 *
 * @return Iterator to object children
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
EVAS_API EVAS_API_WEAK Eina_Iterator *efl_canvas_group_members_iterate(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Set a canvas object as a member of a given group (or smart object).
 *
 * Members will automatically be stacked and layered together with the smart
 * object. The various stacking functions will operate on members relative to
 * the other members instead of the entire canvas, since they now live on an
 * exclusive layer (see @ref efl_gfx_stack_above(), for more details).
 *
 * Subclasses inheriting from this one may override this function to ensure the
 * proper stacking of special objects, such as clippers, event rectangles,
 * etc...
 *
 * See also @ref efl_canvas_group_member_remove. See also
 * @ref efl_canvas_group_member_is.
 *
 * @param[in] obj The object.
 * @param[in] sub_obj The member object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
EVAS_API EVAS_API_WEAK void efl_canvas_group_member_add(Eo *obj, Efl_Canvas_Object *sub_obj);

/**
 * @brief Removes a member object from a given smart object.
 *
 * This removes a member object from a smart object, if it was added to any.
 * The object will still be on the canvas, but no longer associated with
 * whichever smart object it was associated with.
 *
 * See also @ref efl_canvas_group_member_add. See also
 * @ref efl_canvas_group_member_is.
 *
 * @param[in] obj The object.
 * @param[in] sub_obj The member object to remove.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
EVAS_API EVAS_API_WEAK void efl_canvas_group_member_remove(Eo *obj, Efl_Canvas_Object *sub_obj);

/**
 * @brief Finds out if a given object is a member of this group.
 *
 * @param[in] obj The object.
 * @param[in] sub_obj A potential sub object.
 *
 * @return @c true if @c sub_obj is a member of this group.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_group_member_is(const Eo *obj, const Efl_Canvas_Object *sub_obj);

#ifdef EFL_CANVAS_GROUP_PROTECTED
/**
 * @brief The internal clipper object used by this group.
 *
 * This is the object clipping all the child objects. Do not delete or
 * otherwise modify this clipper!
 *
 * @param[in] obj The object.
 *
 * @return A clipper rectangle.
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
EVAS_API EVAS_API_WEAK const Efl_Canvas_Object *efl_canvas_group_clipper_get(const Eo *obj);
#endif

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_GROUP_EVENT_MEMBER_ADDED;

/** Called when a member is added to the group.
 * @return Efl_Gfx_Entity *
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
#define EFL_CANVAS_GROUP_EVENT_MEMBER_ADDED (&(_EFL_CANVAS_GROUP_EVENT_MEMBER_ADDED))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_GROUP_EVENT_MEMBER_REMOVED;

/** Called when a member is removed from the group.
 * @return Efl_Gfx_Entity *
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Group
 */
#define EFL_CANVAS_GROUP_EVENT_MEMBER_REMOVED (&(_EFL_CANVAS_GROUP_EVENT_MEMBER_REMOVED))

#endif
