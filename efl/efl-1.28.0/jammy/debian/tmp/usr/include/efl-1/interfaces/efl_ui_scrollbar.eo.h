#ifndef _EFL_UI_SCROLLBAR_EO_H_
#define _EFL_UI_SCROLLBAR_EO_H_

#ifndef _EFL_UI_SCROLLBAR_EO_CLASS_TYPE
#define _EFL_UI_SCROLLBAR_EO_CLASS_TYPE

typedef Eo Efl_Ui_Scrollbar;

#endif

#ifndef _EFL_UI_SCROLLBAR_EO_TYPES
#define _EFL_UI_SCROLLBAR_EO_TYPES

/** When should the scrollbar be shown.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar_Mode
 */
typedef enum
{
  EFL_UI_SCROLLBAR_MODE_AUTO = 0, /**< Visible if necessary.
                                   *
                                   * @since 1.23 */
  EFL_UI_SCROLLBAR_MODE_ON, /**< Always visible.
                             *
                             * @since 1.23 */
  EFL_UI_SCROLLBAR_MODE_OFF, /**< Always invisible.
                              *
                              * @since 1.23 */
  EFL_UI_SCROLLBAR_MODE_LAST /**< For internal use only.
                              *
                              * @since 1.23 */
} Efl_Ui_Scrollbar_Mode;


#endif
/** Interface used by widgets which can display scrollbars, enabling them to
 * hold more content than actually visible through the viewport. A scrollbar
 * contains a draggable part (thumb) which allows the user to move the viewport
 * around the content. The size of the thumb relates to the size of the
 * viewport compared to the whole content.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
#define EFL_UI_SCROLLBAR_INTERFACE efl_ui_scrollbar_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_scrollbar_interface_get(void) EINA_CONST;

/**
 * @brief Scrollbar visibility mode, for each of the scrollbars.
 *
 * @param[in] obj The object.
 * @param[in] hbar Horizontal scrollbar mode.
 * @param[in] vbar Vertical scrollbar mode.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
EAPI EAPI_WEAK void efl_ui_scrollbar_bar_mode_set(Eo *obj, Efl_Ui_Scrollbar_Mode hbar, Efl_Ui_Scrollbar_Mode vbar);

/**
 * @brief Scrollbar visibility mode, for each of the scrollbars.
 *
 * @param[in] obj The object.
 * @param[out] hbar Horizontal scrollbar mode.
 * @param[out] vbar Vertical scrollbar mode.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
EAPI EAPI_WEAK void efl_ui_scrollbar_bar_mode_get(const Eo *obj, Efl_Ui_Scrollbar_Mode *hbar, Efl_Ui_Scrollbar_Mode *vbar);

/**
 * @brief This returns the relative size the thumb should have, given the
 * current size of the viewport and the content. <tt>0.0</tt> means the
 * viewport is much smaller than the content: the thumb will have its minimum
 * size. <tt>1.0</tt> means the viewport has the same size as the content
 * (or bigger): the thumb will have the same size as the scrollbar and cannot
 * move.
 *
 * @param[in] obj The object.
 * @param[out] width Value between <tt>0.0</tt> and <tt>1.0</tt>.
 * @param[out] height Value between <tt>0.0</tt> and <tt>1.0</tt>.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
EAPI EAPI_WEAK void efl_ui_scrollbar_bar_size_get(const Eo *obj, double *width, double *height);

/**
 * @brief Position of the thumb (the draggable zone) inside the scrollbar. It
 * is calculated based on current position of the viewport inside the total
 * content.
 *
 * @param[in] obj The object.
 * @param[in] posx Value between <tt>0.0</tt> (the left side of the thumb
 * is touching the left edge of the widget) and <tt>1.0</tt> (the right
 * side of the thumb is touching the right edge of the widget).
 * @param[in] posy Value between <tt>0.0</tt> (the top side of the thumb
 * is touching the top edge of the widget) and <tt>1.0</tt> (the bottom
 * side of the thumb is touching the bottom edge of the widget).
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
EAPI EAPI_WEAK void efl_ui_scrollbar_bar_position_set(Eo *obj, double posx, double posy);

/**
 * @brief Position of the thumb (the draggable zone) inside the scrollbar. It
 * is calculated based on current position of the viewport inside the total
 * content.
 *
 * @param[in] obj The object.
 * @param[out] posx Value between <tt>0.0</tt> (the left side of the thumb
 * is touching the left edge of the widget) and <tt>1.0</tt> (the right
 * side of the thumb is touching the right edge of the widget).
 * @param[out] posy Value between <tt>0.0</tt> (the top side of the thumb
 * is touching the top edge of the widget) and <tt>1.0</tt> (the bottom
 * side of the thumb is touching the bottom edge of the widget).
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
EAPI EAPI_WEAK void efl_ui_scrollbar_bar_position_get(const Eo *obj, double *posx, double *posy);

/**
 * @brief Current visibility state of the scrollbars. This is useful in
 * @ref EFL_UI_SCROLLBAR_MODE_AUTO mode where EFL decides if the scrollbars are
 * shown or hidden. See also the @[.bar,show] and @[.bar,hide] events.
 *
 * @param[in] obj The object.
 * @param[out] hbar Whether the horizontal scrollbar is currently visible.
 * @param[out] vbar Whether the vertical scrollbar is currently visible.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
EAPI EAPI_WEAK void efl_ui_scrollbar_bar_visibility_get(const Eo *obj, Eina_Bool *hbar, Eina_Bool *vbar);

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_SCROLLBAR_PROTECTED
/**
 * @brief Update bar visibility.
 *
 * The object will call this function whenever the bar needs to be shown or
 * hidden.
 *
 * @param[in] obj The object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
EAPI EAPI_WEAK void efl_ui_scrollbar_bar_visibility_update(Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SCROLLBAR_EVENT_BAR_PRESSED;

/** Emitted when thumb is pressed.
 * @return Efl_Ui_Layout_Orientation
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
#define EFL_UI_SCROLLBAR_EVENT_BAR_PRESSED (&(_EFL_UI_SCROLLBAR_EVENT_BAR_PRESSED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SCROLLBAR_EVENT_BAR_UNPRESSED;

/** Emitted when thumb is unpressed.
 * @return Efl_Ui_Layout_Orientation
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
#define EFL_UI_SCROLLBAR_EVENT_BAR_UNPRESSED (&(_EFL_UI_SCROLLBAR_EVENT_BAR_UNPRESSED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SCROLLBAR_EVENT_BAR_DRAGGED;

/** Emitted when thumb is dragged.
 * @return Efl_Ui_Layout_Orientation
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
#define EFL_UI_SCROLLBAR_EVENT_BAR_DRAGGED (&(_EFL_UI_SCROLLBAR_EVENT_BAR_DRAGGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SCROLLBAR_EVENT_BAR_SIZE_CHANGED;

/** Emitted when thumb size has changed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
#define EFL_UI_SCROLLBAR_EVENT_BAR_SIZE_CHANGED (&(_EFL_UI_SCROLLBAR_EVENT_BAR_SIZE_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SCROLLBAR_EVENT_BAR_POS_CHANGED;

/** Emitted when thumb position has changed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
#define EFL_UI_SCROLLBAR_EVENT_BAR_POS_CHANGED (&(_EFL_UI_SCROLLBAR_EVENT_BAR_POS_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SCROLLBAR_EVENT_BAR_SHOW;

/** Emitted when scrollbar is shown.
 * @return Efl_Ui_Layout_Orientation
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
#define EFL_UI_SCROLLBAR_EVENT_BAR_SHOW (&(_EFL_UI_SCROLLBAR_EVENT_BAR_SHOW))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SCROLLBAR_EVENT_BAR_HIDE;

/** Emitted when scrollbar is hidden.
 * @return Efl_Ui_Layout_Orientation
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Scrollbar
 */
#define EFL_UI_SCROLLBAR_EVENT_BAR_HIDE (&(_EFL_UI_SCROLLBAR_EVENT_BAR_HIDE))

#endif
