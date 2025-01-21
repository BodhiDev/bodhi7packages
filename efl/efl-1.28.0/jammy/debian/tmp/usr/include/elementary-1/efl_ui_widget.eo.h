#ifndef _EFL_UI_WIDGET_EO_H_
#define _EFL_UI_WIDGET_EO_H_

#ifndef _EFL_UI_WIDGET_EO_CLASS_TYPE
#define _EFL_UI_WIDGET_EO_CLASS_TYPE

typedef Eo Efl_Ui_Widget;

#endif

#ifndef _EFL_UI_WIDGET_EO_TYPES
#define _EFL_UI_WIDGET_EO_TYPES

/** All relevant fields needed for the current state of focus registration
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget_Focus_State
 */
typedef struct _Efl_Ui_Widget_Focus_State
{
  Efl_Ui_Focus_Manager *manager; /**< The manager where the widget is registered
                                  * in
                                  *
                                  * @since 1.22 */
  Efl_Ui_Focus_Object *parent; /**< The parent the widget is using as logical
                                * parent
                                *
                                * @since 1.22 */
  Eina_Bool logical; /**< @c true if this is registered as logical currently
                      *
                      * @since 1.22 */
} Efl_Ui_Widget_Focus_State;


#endif
/**
 * @brief Base class for all Efl.Ui.* widgets
 *
 * The class here is designed in a way that widgets can be expressed as a tree.
 * The parent relation in the tree can be fetched via
 * @ref efl_ui_widget_parent_get . The parent relation should never be modified
 * directly, instead you should use the APIs of the widgets (Typically
 * @ref Efl_Pack_Linear, @ref Efl_Pack_Table or @ref Efl_Content).
 *
 * Properties implemented here should be treated with extra care, some are
 * defined for the sub-tree, others are defined for the widget itself,
 * additional information for this can be fetched from the documentation in the
 * implements section.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
#define EFL_UI_WIDGET_CLASS efl_ui_widget_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_widget_class_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The cursor to be shown when mouse is over the object
 *
 * This is the cursor that will be displayed when mouse is over the object. The
 * object can have only one cursor set to it so if
 * @ref efl_ui_widget_cursor_set is called twice for an object, the previous
 * set will be unset.
 *
 * If using X cursors, a definition of all the valid cursor names is listed on
 * Elementary_Cursors.h. If an invalid name is set the default cursor will be
 * used.
 *
 * If @c cursor is set to @c null it will be reset to the default one.
 *
 * @param[in] obj The object.
 * @param[in] cursor The cursor name, defined either by the display system or
 * the theme.
 *
 * @return @c true if successful.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_cursor_set(Eo *obj, const char *cursor);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The cursor to be shown when mouse is over the object
 *
 * This is the cursor that will be displayed when mouse is over the object. The
 * object can have only one cursor set to it so if
 * @ref efl_ui_widget_cursor_set is called twice for an object, the previous
 * set will be unset.
 *
 * If using X cursors, a definition of all the valid cursor names is listed on
 * Elementary_Cursors.h. If an invalid name is set the default cursor will be
 * used.
 *
 * If @c cursor is set to @c null it will be reset to the default one.
 *
 * @param[in] obj The object.
 *
 * @return The cursor name, defined either by the display system or the theme.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK const char *efl_ui_widget_cursor_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A different style for the cursor.
 *
 * This only makes sense if theme cursors are used. The cursor should be set
 * with @ref efl_ui_widget_cursor_set first before setting its style with this
 * property.
 *
 * @param[in] obj The object.
 * @param[in] style A specific style to use, e.g. default, transparent, ....
 *
 * @return @c true if successful.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_cursor_style_set(Eo *obj, const char *style);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A different style for the cursor.
 *
 * This only makes sense if theme cursors are used. The cursor should be set
 * with @ref efl_ui_widget_cursor_set first before setting its style with this
 * property.
 *
 * @param[in] obj The object.
 *
 * @return A specific style to use, e.g. default, transparent, ....
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK const char *efl_ui_widget_cursor_style_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Whether the cursor may be looked in the theme or not.
 *
 * If @c false, the cursor may only come from the render engine, i.e. from the
 * display manager.
 *
 * @param[in] obj The object.
 * @param[in] allow Whether to use theme cursors.
 *
 * @return @c true if successful.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_cursor_theme_search_enabled_set(Eo *obj, Eina_Bool allow);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Whether the cursor may be looked in the theme or not.
 *
 * If @c false, the cursor may only come from the render engine, i.e. from the
 * display manager.
 *
 * @param[in] obj The object.
 *
 * @return Whether to use theme cursors.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_cursor_theme_search_enabled_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief This is the internal canvas object managed by a widget.
 *
 * This property is protected as it is meant for widget implementations only,
 * to set and access the internal canvas object. Do use this function unless
 * you're implementing a widget.
 *
 * @param[in] obj The object.
 * @param[in] sobj A canvas object (often a @ref Efl_Canvas_Layout object).
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_resize_object_set(Eo *obj, Efl_Canvas_Object *sobj);
#endif

/**
 * @brief Whether the widget is enabled (accepts and reacts to user inputs).
 *
 * Each widget may handle the disabled state differently, but overall disabled
 * widgets shall not respond to any input events. This is @c false by default,
 * meaning the widget is enabled.
 *
 * Disabling a widget will disable all its children recursively, but only this
 * widget will be marked as disabled internally.
 *
 * This will return @c true if any widget in the parent hierarchy is disabled.
 * Re-enabling that parent may in turn change the disabled state of this
 * widget.
 *
 * @param[in] obj The object.
 * @param[in] disabled @c true if the widget is disabled.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_disabled_set(Eo *obj, Eina_Bool disabled);

/**
 * @brief Whether the widget is enabled (accepts and reacts to user inputs).
 *
 * Each widget may handle the disabled state differently, but overall disabled
 * widgets shall not respond to any input events. This is @c false by default,
 * meaning the widget is enabled.
 *
 * Disabling a widget will disable all its children recursively, but only this
 * widget will be marked as disabled internally.
 *
 * This will return @c true if any widget in the parent hierarchy is disabled.
 * Re-enabling that parent may in turn change the disabled state of this
 * widget.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the widget is disabled.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_disabled_get(const Eo *obj);

/**
 * @brief The widget style to use.
 *
 * Styles define different look and feel for widgets, and may provide different
 * parts for layout-based widgets. Styles vary from widget to widget and may be
 * defined by other themes by means of extensions and overlays.
 *
 * The style can only be set before @ref efl_finalize, which means at
 * construction time of the object (inside @c efl_add in C).
 *
 * @param[in] obj The object.
 * @param[in] style Name of the style to use. Refer to each widget's
 * documentation for the available style names, or to the themes in use.
 *
 * @return Whether the style was successfully applied or not, see the
 * Efl.Ui.Theme.Apply_Error subset of @ref Eina_Error for more information.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Error efl_ui_widget_style_set(Eo *obj, const char *style);

/**
 * @brief The widget style to use.
 *
 * Styles define different look and feel for widgets, and may provide different
 * parts for layout-based widgets. Styles vary from widget to widget and may be
 * defined by other themes by means of extensions and overlays.
 *
 * The style can only be set before @ref efl_finalize, which means at
 * construction time of the object (inside @c efl_add in C).
 *
 * @param[in] obj The object.
 *
 * @return Name of the style to use. Refer to each widget's documentation for
 * the available style names, or to the themes in use.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK const char *efl_ui_widget_style_get(const Eo *obj);

#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief Virtual function handling input events on the widget.
 *
 * This method should return @c true if the event has been processed. Only key
 * down, key up and pointer wheel events will be propagated through this
 * function.
 *
 * It is common for the event to be also marked as processed as in
 * @ref efl_input_processed_get, if this operation was successful. This makes
 * sure other widgets will not also process this input event.
 *
 * @param[in] obj The object.
 * @param[in] eo_event EO event struct with an Efl.Input.Event as info.
 * @param[in] source Source object where the event originated. Often same as
 * this.
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_input_event_handler(Eo *obj, const Efl_Event *eo_event, Efl_Canvas_Object *source);
#endif

/**
 * @brief The ability for a widget to be focused.
 *
 * Unfocusable objects do nothing when programmatically focused. The nearest
 * focusable parent object the one really getting focus. Also, when they
 * receive mouse input, they will get the event, but not take away the focus
 * from where it was previously.
 *
 * @note Objects which are meant to be interacted with by input events are
 * created able to be focused, by default. All the others are not.
 *
 * This property's default value depends on the widget (e.g. a box is not
 * focusable, but a button is).
 *
 * @param[in] obj The object.
 * @param[in] can_focus Whether the object is focusable.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_focus_allow_set(Eo *obj, Eina_Bool can_focus);

/**
 * @brief The ability for a widget to be focused.
 *
 * Unfocusable objects do nothing when programmatically focused. The nearest
 * focusable parent object the one really getting focus. Also, when they
 * receive mouse input, they will get the event, but not take away the focus
 * from where it was previously.
 *
 * @note Objects which are meant to be interacted with by input events are
 * created able to be focused, by default. All the others are not.
 *
 * This property's default value depends on the widget (e.g. a box is not
 * focusable, but a button is).
 *
 * @param[in] obj The object.
 *
 * @return Whether the object is focusable.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_focus_allow_get(const Eo *obj);

#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief The internal parent of this widget.
 *
 * @ref Efl_Ui_Widget objects have a parent hierarchy that may differ slightly
 * from their @ref Efl_Object or @ref Efl_Canvas_Object hierarchy. This is
 * meant for internal handling.
 *
 * @param[in] obj The object.
 * @param[in] parent Widget parent object
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_parent_set(Eo *obj, Efl_Ui_Widget *parent);
#endif

#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief The internal parent of this widget.
 *
 * @ref Efl_Ui_Widget objects have a parent hierarchy that may differ slightly
 * from their @ref Efl_Object or @ref Efl_Canvas_Object hierarchy. This is
 * meant for internal handling.
 *
 * @param[in] obj The object.
 *
 * @return Widget parent object
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Efl_Ui_Widget *efl_ui_widget_parent_get(const Eo *obj);
#endif

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Accessibility information.
 *
 * This is a replacement string to be read by the accessibility text-to-speech
 * engine, if accessibility is enabled by configuration. This will take
 * precedence over the default text for this object, which means for instance
 * that the label of a button won't be read out loud, instead @c txt will be
 * read out.
 *
 * @param[in] obj The object.
 * @param[in] txt Accessibility text description.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_access_info_set(Eo *obj, const char *txt);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Accessibility information.
 *
 * This is a replacement string to be read by the accessibility text-to-speech
 * engine, if accessibility is enabled by configuration. This will take
 * precedence over the default text for this object, which means for instance
 * that the label of a button won't be read out loud, instead @c txt will be
 * read out.
 *
 * @param[in] obj The object.
 *
 * @return Accessibility text description.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK const char *efl_ui_widget_access_info_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief Hook function called when widget is activated through accessibility.
 *
 * This meant to be overridden by subclasses to support accessibility. This is
 * an unstable API.
 *
 * @param[in] obj The object.
 * @param[in] act Type of activation.
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_on_access_activate(Eo *obj, Efl_Ui_Activate act);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief Hook function called when accessibility is changed on the widget.
 *
 * This meant to be overridden by subclasses to support accessibility. This is
 * an unstable API.
 *
 * @param[in] obj The object.
 * @param[in] enable @c true if accessibility is enabled.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_on_access_update(Eo *obj, Eina_Bool enable);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief Virtual function customizing sub objects being added.
 *
 * When a widget is added as a sub-object of another widget (like list elements
 * inside a list container, for example) some of its properties are
 * automatically adapted to the parent's current values (like focus, access,
 * theme, scale, mirror, scrollable child get, translate, display mode set,
 * tree dump). Override this method if you want to customize differently
 * sub-objects being added to this object.
 *
 * Sub objects can be any canvas object, not necessarily widgets.
 *
 * See also @ref efl_ui_widget_parent_get.
 *
 * @param[in] obj The object.
 * @param[in] sub_obj Sub object to be added. Not necessarily a widget itself.
 *
 * @return Indicates if the operation succeeded.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_sub_object_add(Eo *obj, Efl_Canvas_Object *sub_obj);
#endif

#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief Virtual function customizing sub objects being removed.
 *
 * When a widget is removed as a sub-object from another widget
 * (@Efl.Pack.unpack, @ref efl_content_unset, for example) some of its
 * properties are automatically adjusted.(like focus, access, tree dump)
 * Override this method if you want to customize differently sub-objects being
 * removed to this object.
 *
 * Sub objects can be any canvas object, not necessarily widgets.
 *
 * See also @ref efl_ui_widget_parent_get and
 * @ref efl_ui_widget_sub_object_add.
 *
 * @param[in] obj The object.
 * @param[in] sub_obj Sub object to be removed. Should be a child of this
 * widget.
 *
 * @return Indicates if the operation succeeded.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_sub_object_del(Eo *obj, Efl_Canvas_Object *sub_obj);
#endif

#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief Virtual function called when the widget needs to re-apply its theme.
 *
 * This may be called when the object is first created, or whenever the widget
 * is modified in any way that may require a reload of the theme. This may
 * include but is not limited to scale, theme, or mirrored mode changes.
 *
 * @note even widgets not based on layouts may override this method to handle
 * widget updates (scale, mirrored mode, etc...).
 *
 * @param[in] obj The object.
 *
 * @return Indicates success, and if the current theme or default theme was
 * used.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Error efl_ui_widget_theme_apply(Eo *obj);
#endif

#ifdef EFL_BETA_API_SUPPORT
/** Push scroll hold
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_scroll_hold_push(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Pop scroller hold
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_scroll_hold_pop(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Push scroller freeze
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_scroll_freeze_push(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Pop scroller freeze
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_scroll_freeze_pop(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief Region of interest inside this widget, that should be given priority
 * to be visible inside a scroller.
 *
 * When this widget or one of its subwidgets is given focus, this region should
 * be shown, which means any parent scroller should attempt to display the
 * given area of this widget. For instance, an entry given focus should scroll
 * to show the text cursor if that cursor moves. In this example, this region
 * defines the relative geometry of the cursor within the widget.
 *
 * @note The region is relative to the top-left corner of the widget, i.e. X,Y
 * start from 0,0 to indicate the top-left corner of the widget. W,H must be
 * greater or equal to 1 for this region to be taken into account, otherwise it
 * is ignored.
 *
 * @param[in] obj The object.
 *
 * @return The relative region to show. If width or height is <= 0 it will be
 * ignored, and no action will be taken.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Rect efl_ui_widget_interest_region_get(const Eo *obj);
#endif

#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief The rectangle region to be highlighted on focus.
 *
 * This is a rectangle region where the focus highlight should be displayed.
 *
 * @param[in] obj The object.
 *
 * @return The rectangle area.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Rect efl_ui_widget_focus_highlight_geometry_get(const Eo *obj);
#endif

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The widget's focus move policy.
 *
 * @param[in] obj The object.
 * @param[in] policy Focus move policy
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_focus_move_policy_set(Eo *obj, Efl_Ui_Focus_Move_Policy policy);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The widget's focus move policy.
 *
 * @param[in] obj The object.
 *
 * @return Focus move policy
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Move_Policy efl_ui_widget_focus_move_policy_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Control the widget's focus_move_policy mode setting.
 *
 * @param[in] obj The object.
 * @param[in] automatic @c true to follow system focus move policy change,
 * @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK void efl_ui_widget_focus_move_policy_automatic_set(Eo *obj, Eina_Bool automatic);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Control the widget's focus_move_policy mode setting.
 *
 * @param[in] obj The object.
 *
 * @return @c true to follow system focus move policy change, @c false
 * otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_focus_move_policy_automatic_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_UI_WIDGET_PROTECTED
/**
 * @brief Apply a new focus state on the widget.
 *
 * This method is called internally by @ref Efl_Ui_Widget. Override it to
 * change how a widget interacts with its focus manager. If a widget desires to
 * change the applied configuration, it has to modify @c configured_state in
 * addition to any internal changes.
 *
 * The default implementation (when this method is not overridden) applies
 * @c configured_state using the @c manager contained inside.
 *
 * @param[in] obj The object.
 * @param[in] current_state The current focus configuration of the widget.
 * @param[in,out] configured_state The new configuration being set on the
 * widget.
 * @param[in] redirect A redirect object if there is any
 *
 * @return Returns @c true if the widget is registered in the focus manager,
 * @c false if not.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_widget_focus_state_apply(Eo *obj, Efl_Ui_Widget_Focus_State current_state, Efl_Ui_Widget_Focus_State *configured_state, Efl_Ui_Widget *redirect);
#endif
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIDGET_EVENT_LANGUAGE_CHANGED;

/** Called when widget language changed
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
#define EFL_UI_WIDGET_EVENT_LANGUAGE_CHANGED (&(_EFL_UI_WIDGET_EVENT_LANGUAGE_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIDGET_EVENT_ACCESS_CHANGED;

/** Called when accessibility changed
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Widget
 */
#define EFL_UI_WIDGET_EVENT_ACCESS_CHANGED (&(_EFL_UI_WIDGET_EVENT_ACCESS_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
