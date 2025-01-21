#ifndef _EFL_UI_SCROLLABLE_EO_H_
#define _EFL_UI_SCROLLABLE_EO_H_

#ifndef _EFL_UI_SCROLLABLE_EO_CLASS_TYPE
#define _EFL_UI_SCROLLABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Scrollable;

#endif

#ifndef _EFL_UI_SCROLLABLE_EO_TYPES
#define _EFL_UI_SCROLLABLE_EO_TYPES


#endif
/**
 * @brief Interface for widgets capable of displaying content through a
 * viewport, which might be smaller than the actual content. This interface
 * does not control how the content is added. This is typically done through
 * @ref Efl_Content.
 *
 * When the content does not fit inside the viewport, typically
 * @ref Efl_Ui_Scrollbar widgets will be used, but this is beyond the scope of
 * this interface.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_SCROLLABLE_INTERFACE efl_ui_scrollable_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_scrollable_interface_get(void) EINA_CONST;

/**
 * @brief Position of the content inside the scroller.
 *
 * @param[in] obj The object.
 * @param[in] pos The position is a virtual value, where <tt>0,0</tt>
 * means the top-left corner.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_content_pos_set(Eo *obj, Eina_Position2D pos);

/**
 * @brief Position of the content inside the scroller.
 *
 * @param[in] obj The object.
 *
 * @return The position is a virtual value, where <tt>0,0</tt> means the
 * top-left corner.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK Eina_Position2D efl_ui_scrollable_content_pos_get(const Eo *obj);

/**
 * @brief Current size of the content, for convenience.
 *
 * @param[in] obj The object.
 *
 * @return The content size in pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK Eina_Size2D efl_ui_scrollable_content_size_get(const Eo *obj);

/**
 * @brief Current position and size of the viewport (or scroller window), for
 * convenience.
 *
 * This is the viewport through which the content is displayed.
 *
 * @param[in] obj The object.
 *
 * @return It is absolute geometry.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK Eina_Rect efl_ui_scrollable_viewport_geometry_get(const Eo *obj);

/**
 * @brief When scrolling, the scroller may "bounce" when reaching the edge of
 * the content object. This is a visual way to indicate the end has been
 * reached. This is enabled by default for both axes. This property determines
 * if bouncing is enabled in each axis. When bouncing is disabled, scrolling
 * just stops upon reaching the end of the content.
 *
 * @param[in] obj The object.
 * @param[in] horiz Horizontal bouncing is enabled.
 * @param[in] vert Vertical bouncing is enabled.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_bounce_enabled_set(Eo *obj, Eina_Bool horiz, Eina_Bool vert);

/**
 * @brief When scrolling, the scroller may "bounce" when reaching the edge of
 * the content object. This is a visual way to indicate the end has been
 * reached. This is enabled by default for both axes. This property determines
 * if bouncing is enabled in each axis. When bouncing is disabled, scrolling
 * just stops upon reaching the end of the content.
 *
 * @param[in] obj The object.
 * @param[out] horiz Horizontal bouncing is enabled.
 * @param[out] vert Vertical bouncing is enabled.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_bounce_enabled_get(const Eo *obj, Eina_Bool *horiz, Eina_Bool *vert);

/**
 * @brief Freezes scrolling movement (by input of a user). Unlike
 * @ref efl_ui_scrollable_movement_block_get, this property freezes
 * bidirectionally. If you want to freeze in only one direction, see
 * @ref efl_ui_scrollable_movement_block_get.
 *
 * @param[in] obj The object.
 * @param[in] freeze @c true if freeze.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_scroll_freeze_set(Eo *obj, Eina_Bool freeze);

/**
 * @brief Freezes scrolling movement (by input of a user). Unlike
 * @ref efl_ui_scrollable_movement_block_get, this property freezes
 * bidirectionally. If you want to freeze in only one direction, see
 * @ref efl_ui_scrollable_movement_block_get.
 *
 * @param[in] obj The object.
 *
 * @return @c true if freeze.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_scrollable_scroll_freeze_get(const Eo *obj);

/**
 * @brief When hold turns on, it only scrolls by holding action.
 *
 * @param[in] obj The object.
 * @param[in] hold @c true if hold.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_scroll_hold_set(Eo *obj, Eina_Bool hold);

/**
 * @brief When hold turns on, it only scrolls by holding action.
 *
 * @param[in] obj The object.
 *
 * @return @c true if hold.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_scrollable_scroll_hold_get(const Eo *obj);

/**
 * @brief Controls infinite looping for a scroller.
 *
 * @param[in] obj The object.
 * @param[in] loop_h Scroll horizontal looping is enabled.
 * @param[in] loop_v Scroll vertical looping is enabled.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_looping_set(Eo *obj, Eina_Bool loop_h, Eina_Bool loop_v);

/**
 * @brief Controls infinite looping for a scroller.
 *
 * @param[in] obj The object.
 * @param[out] loop_h Scroll horizontal looping is enabled.
 * @param[out] loop_v Scroll vertical looping is enabled.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_looping_get(const Eo *obj, Eina_Bool *loop_h, Eina_Bool *loop_v);

/**
 * @brief Blocking of scrolling (per axis).
 *
 * This function will block scrolling movement (by input of a user) in a given
 * direction. You can disable movements in the X axis, the Y axis or both. The
 * default value is @ref EFL_UI_LAYOUT_ORIENTATION_DEFAULT meaning that
 * movements are allowed in both directions.
 *
 * @param[in] obj The object.
 * @param[in] block Which axis (or axes) to block.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_movement_block_set(Eo *obj, Efl_Ui_Layout_Orientation block);

/**
 * @brief Blocking of scrolling (per axis).
 *
 * This function will block scrolling movement (by input of a user) in a given
 * direction. You can disable movements in the X axis, the Y axis or both. The
 * default value is @ref EFL_UI_LAYOUT_ORIENTATION_DEFAULT meaning that
 * movements are allowed in both directions.
 *
 * @param[in] obj The object.
 *
 * @return Which axis (or axes) to block.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK Efl_Ui_Layout_Orientation efl_ui_scrollable_movement_block_get(const Eo *obj);

/**
 * @brief Control scrolling gravity on the scrollable.
 *
 * The gravity defines how the scroller will adjust its view when the size of
 * the scroller contents increases.
 *
 * The scroller will adjust the view to glue itself as follows:
 * <tt>x=0.0</tt> to stay where it is relative to the left edge of the content.
 * <tt>x=1.0</tt> to stay where it is relative to the right edge of the
 * content. <tt>y=0.0</tt> to stay where it is relative to the top edge of
 * the content. <tt>y=1.0</tt> to stay where it is relative to the bottom
 * edge of the content.
 *
 * @param[in] obj The object.
 * @param[in] x Horizontal scrolling gravity.
 * @param[in] y Vertical scrolling gravity.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_gravity_set(Eo *obj, double x, double y);

/**
 * @brief Control scrolling gravity on the scrollable.
 *
 * The gravity defines how the scroller will adjust its view when the size of
 * the scroller contents increases.
 *
 * The scroller will adjust the view to glue itself as follows:
 * <tt>x=0.0</tt> to stay where it is relative to the left edge of the content.
 * <tt>x=1.0</tt> to stay where it is relative to the right edge of the
 * content. <tt>y=0.0</tt> to stay where it is relative to the top edge of
 * the content. <tt>y=1.0</tt> to stay where it is relative to the bottom
 * edge of the content.
 *
 * @param[in] obj The object.
 * @param[out] x Horizontal scrolling gravity.
 * @param[out] y Vertical scrolling gravity.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_gravity_get(const Eo *obj, double *x, double *y);

/**
 * @brief Prevent the scrollable from being smaller than the minimum size of
 * the content.
 *
 * By default the scroller will be as small as its design allows, irrespective
 * of its content. This will make the scroller minimum size the right size
 * horizontally and/or vertically to perfectly fit its content in that
 * direction.
 *
 * @param[in] obj The object.
 * @param[in] w Whether to limit the minimum horizontal size.
 * @param[in] h Whether to limit the minimum vertical size.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_match_content_set(Eo *obj, Eina_Bool w, Eina_Bool h);

/**
 * @brief Amount to scroll in response to cursor key presses.
 *
 * @param[in] obj The object.
 * @param[in] step The step size in pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_step_size_set(Eo *obj, Eina_Position2D step);

/**
 * @brief Amount to scroll in response to cursor key presses.
 *
 * @param[in] obj The object.
 *
 * @return The step size in pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK Eina_Position2D efl_ui_scrollable_step_size_get(const Eo *obj);

/**
 * @brief Show a specific virtual region within the scroller content object.
 *
 * This will ensure all (or part if it does not fit) of the designated region
 * in the virtual content object ($[0,0] starting at the top-left of the
 * virtual content object) is shown within the scroller. This allows the
 * scroller to "smoothly slide" to this location (if configuration in general
 * calls for transitions). It may not jump immediately to the new location and
 * make take a while and show other content along the way.
 *
 * @param[in] obj The object.
 * @param[in] rect The position where to scroll and the size user want to see.
 * @param[in] animation Whether to scroll with animation or not.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
EAPI EAPI_WEAK void efl_ui_scrollable_scroll(Eo *obj, Eina_Rect rect, Eina_Bool animation);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_STARTED;

/** Called when scroll operation starts.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_STARTED (&(_EFL_UI_EVENT_SCROLL_STARTED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_CHANGED;

/** Called when scrolling.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_CHANGED (&(_EFL_UI_EVENT_SCROLL_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_FINISHED;

/** Called when scroll operation finishes.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_FINISHED (&(_EFL_UI_EVENT_SCROLL_FINISHED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_UP;

/** Called when scrolling upwards.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_UP (&(_EFL_UI_EVENT_SCROLL_UP))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_DOWN;

/** Called when scrolling downwards.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_DOWN (&(_EFL_UI_EVENT_SCROLL_DOWN))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_LEFT;

/** Called when scrolling left.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_LEFT (&(_EFL_UI_EVENT_SCROLL_LEFT))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_RIGHT;

/** Called when scrolling right.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_RIGHT (&(_EFL_UI_EVENT_SCROLL_RIGHT))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_EDGE_UP;

/** Called when hitting the top edge.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_EDGE_UP (&(_EFL_UI_EVENT_EDGE_UP))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_EDGE_DOWN;

/** Called when hitting the bottom edge.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_EDGE_DOWN (&(_EFL_UI_EVENT_EDGE_DOWN))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_EDGE_LEFT;

/** Called when hitting the left edge.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_EDGE_LEFT (&(_EFL_UI_EVENT_EDGE_LEFT))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_EDGE_RIGHT;

/** Called when hitting the right edge.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_EDGE_RIGHT (&(_EFL_UI_EVENT_EDGE_RIGHT))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_ANIM_STARTED;

/** Called when scroll animation starts.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_ANIM_STARTED (&(_EFL_UI_EVENT_SCROLL_ANIM_STARTED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_ANIM_FINISHED;

/** Called when scroll animation finishes.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_ANIM_FINISHED (&(_EFL_UI_EVENT_SCROLL_ANIM_FINISHED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_DRAG_STARTED;

/** Called when scroll drag starts.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_DRAG_STARTED (&(_EFL_UI_EVENT_SCROLL_DRAG_STARTED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_DRAG_FINISHED;

/** Called when scroll drag finishes.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_DRAG_FINISHED (&(_EFL_UI_EVENT_SCROLL_DRAG_FINISHED))

#endif
