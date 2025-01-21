#ifndef _EFL_UI_POPUP_EO_H_
#define _EFL_UI_POPUP_EO_H_

#ifndef _EFL_UI_POPUP_EO_CLASS_TYPE
#define _EFL_UI_POPUP_EO_CLASS_TYPE

typedef Eo Efl_Ui_Popup;

#endif

#ifndef _EFL_UI_POPUP_EO_TYPES
#define _EFL_UI_POPUP_EO_TYPES

/** This is the alignment method for positioning Popup widgets.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup_Align
 */
typedef enum
{
  EFL_UI_POPUP_ALIGN_NONE = 0, /**< Popup not aligned.
                                *
                                * @since 1.23 */
  EFL_UI_POPUP_ALIGN_CENTER, /**< Popup is aligned to the center of its anchor
                              * object.
                              *
                              * @since 1.23 */
  EFL_UI_POPUP_ALIGN_LEFT, /**< Popup's left edge is aligned to the left side of
                            * its anchor object.
                            *
                            * @since 1.23 */
  EFL_UI_POPUP_ALIGN_RIGHT, /**< Popup's right edge is aligned to the right side
                             * of its anchor object.
                             *
                             * @since 1.23 */
  EFL_UI_POPUP_ALIGN_TOP, /**< Popup's top is aligned to the top of its anchor
                           * object.
                           *
                           * @since 1.23 */
  EFL_UI_POPUP_ALIGN_BOTTOM /**< Popup's bottom is aligned to the bottom of its
                             * anchor object.
                             *
                             * @since 1.23 */
} Efl_Ui_Popup_Align;


#endif
/**
 * @brief A styled container widget which overlays a window's contents.
 *
 * The Popup widget is a theme-capable container which can be used for various
 * purposes. Regular contents can be set using the @ref Efl_Content interface,
 * or basic scrollable contents can be set through the
 * @ref Efl_Ui_Widget_Scrollable_Content mixin API. For contents which should
 * be scrollable but require more fine-grained tuning, it may be necessary for
 * users to set up and provide their own scroller object such as
 * @ref Efl_Ui_Scroller.
 *
 * A Popup widget will create an overlay for the window contents. This overlay
 * is an @ref Efl_Ui_Popup_Part_Backwall object, which provides functionality
 * for passing events through to the main window while the Popup is active as
 * well as the ability to set background images for the Popup.
 *
 * By default, a Popup is positioned by the user through the
 * @ref efl_gfx_entity_position_get property. This behavior can be altered by
 * using the @ref efl_ui_popup_align_get and @ref efl_ui_popup_anchor_get
 * properties. Setting the @ref efl_gfx_entity_position_get property directly
 * will unset both the @ref efl_ui_popup_align_get and
 * @ref efl_ui_popup_anchor_get properties, and vice versa.
 *
 * By default, a Popup will size itself based on the minimum size of its
 * contents through the @ref Efl_Gfx_Hint interface. A Popup will never size
 * itself smaller than the minimum size of its contents, but by manually
 * setting the @ref efl_gfx_entity_size_get property or the
 * @ref efl_gfx_hint_size_min_get property, a larger size can be specified.
 *
 * Users can set a given Popup widget to close automatically after a specified
 * time using the @ref efl_ui_popup_closing_timeout_get property.
 *
 * For a Popup with a more specialized purpose, see @ref Efl_Ui_Alert_Popup.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
#define EFL_UI_POPUP_CLASS efl_ui_popup_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_popup_class_get(void) EINA_CONST;

/**
 * @brief The align property specifies a Popup's current positioning relative
 * to its anchor.
 *
 * When set, this property will override any user-provided value for the
 * widget's @ref efl_gfx_entity_position_get property.
 *
 * @param[in] obj The object.
 * @param[in] type Alignment of the Popup relative to its anchor. The default
 * is @ref EFL_UI_POPUP_ALIGN_NONE.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
EAPI EAPI_WEAK void efl_ui_popup_align_set(Eo *obj, Efl_Ui_Popup_Align type);

/**
 * @brief The align property specifies a Popup's current positioning relative
 * to its anchor.
 *
 * When set, this property will override any user-provided value for the
 * widget's @ref efl_gfx_entity_position_get property.
 *
 * @param[in] obj The object.
 *
 * @return Alignment of the Popup relative to its anchor. The default is
 * @ref EFL_UI_POPUP_ALIGN_NONE.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
EAPI EAPI_WEAK Efl_Ui_Popup_Align efl_ui_popup_align_get(const Eo *obj);

/**
 * @brief The closing_timeout property is the time after which the Popup widget
 * will be automatically deleted.
 *
 * The timer is initiated at the time when the popup is shown. If the value is
 * changed prior to the timer expiring, the existing timer will be deleted. If
 * the new value is greater than $0, a new timer will be created.
 *
 * @param[in] obj The object.
 * @param[in] time If greater than $0, the Popup will close automatically after
 * the value in seconds. The default is to not automatically delete the Popup.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
EAPI EAPI_WEAK void efl_ui_popup_closing_timeout_set(Eo *obj, double time);

/**
 * @brief The closing_timeout property is the time after which the Popup widget
 * will be automatically deleted.
 *
 * The timer is initiated at the time when the popup is shown. If the value is
 * changed prior to the timer expiring, the existing timer will be deleted. If
 * the new value is greater than $0, a new timer will be created.
 *
 * @param[in] obj The object.
 *
 * @return If greater than $0, the Popup will close automatically after the
 * value in seconds. The default is to not automatically delete the Popup.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
EAPI EAPI_WEAK double efl_ui_popup_closing_timeout_get(const Eo *obj);

/**
 * @brief The anchor object is the reference object for positioning a Popup
 * using the @ref efl_ui_popup_align_get and
 * @ref efl_ui_popup_align_priority_get properties.
 *
 * A Popup will recalculate its alignment relative to its anchor and change its
 * position when: - the anchor object is moved (unless the anchor is a window)
 * - the anchor object is resized - the Popup is resized - the parent window is
 * resized
 *
 * If @ref efl_ui_popup_anchor_get returns @c NULL, the anchor is the parent
 * window of the Popup. If the anchor object is set to @c NULL, the Popup will
 * no longer recalculate its alignment or change its position under any
 * circumstance. If the Popup is moved by using
 * @ref efl_gfx_entity_position_set, @c anchor is set @c NULL.
 *
 * @param[in] obj The object.
 * @param[in] anchor The object which Popup is following. By default this is
 * @c NULL.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
EAPI EAPI_WEAK void efl_ui_popup_anchor_set(Eo *obj, Efl_Canvas_Object *anchor);

/**
 * @brief The anchor object is the reference object for positioning a Popup
 * using the @ref efl_ui_popup_align_get and
 * @ref efl_ui_popup_align_priority_get properties.
 *
 * A Popup will recalculate its alignment relative to its anchor and change its
 * position when: - the anchor object is moved (unless the anchor is a window)
 * - the anchor object is resized - the Popup is resized - the parent window is
 * resized
 *
 * If @ref efl_ui_popup_anchor_get returns @c NULL, the anchor is the parent
 * window of the Popup. If the anchor object is set to @c NULL, the Popup will
 * no longer recalculate its alignment or change its position under any
 * circumstance. If the Popup is moved by using
 * @ref efl_gfx_entity_position_set, @c anchor is set @c NULL.
 *
 * @param[in] obj The object.
 *
 * @return The object which Popup is following. By default this is @c NULL.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
EAPI EAPI_WEAK Efl_Canvas_Object *efl_ui_popup_anchor_get(const Eo *obj);

/**
 * @brief This is the priority in which alignments will be tested using the
 * anchor object if the value of @ref efl_ui_popup_align_get is determined to
 * be invalid. If a given alignment would result in the popup being partially
 * or fully outside the visible area of the window, it is deemed invalid, and
 * the next alignment is tested until either the priority list is exhausted or
 * a usable alignment is found.
 *
 * An alignment will also be deemed invalid if the popup occludes its anchor
 * object, except if @ref EFL_UI_POPUP_ALIGN_CENTER is specified.
 *
 * @param[in] obj The object.
 * @param[in] first First alignment. The default is
 * @ref EFL_UI_POPUP_ALIGN_TOP.
 * @param[in] second Second alignment. The default is
 * @ref EFL_UI_POPUP_ALIGN_LEFT.
 * @param[in] third Third alignment. The default is
 * @ref EFL_UI_POPUP_ALIGN_RIGHT.
 * @param[in] fourth Fourth alignment. The default is
 * @ref EFL_UI_POPUP_ALIGN_BOTTOM.
 * @param[in] fifth Fifth alignment. The default is
 * @ref EFL_UI_POPUP_ALIGN_CENTER.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
EAPI EAPI_WEAK void efl_ui_popup_align_priority_set(Eo *obj, Efl_Ui_Popup_Align first, Efl_Ui_Popup_Align second, Efl_Ui_Popup_Align third, Efl_Ui_Popup_Align fourth, Efl_Ui_Popup_Align fifth);

/**
 * @brief This is the priority in which alignments will be tested using the
 * anchor object if the value of @ref efl_ui_popup_align_get is determined to
 * be invalid. If a given alignment would result in the popup being partially
 * or fully outside the visible area of the window, it is deemed invalid, and
 * the next alignment is tested until either the priority list is exhausted or
 * a usable alignment is found.
 *
 * An alignment will also be deemed invalid if the popup occludes its anchor
 * object, except if @ref EFL_UI_POPUP_ALIGN_CENTER is specified.
 *
 * @param[in] obj The object.
 * @param[out] first First alignment. The default is
 * @ref EFL_UI_POPUP_ALIGN_TOP.
 * @param[out] second Second alignment. The default is
 * @ref EFL_UI_POPUP_ALIGN_LEFT.
 * @param[out] third Third alignment. The default is
 * @ref EFL_UI_POPUP_ALIGN_RIGHT.
 * @param[out] fourth Fourth alignment. The default is
 * @ref EFL_UI_POPUP_ALIGN_BOTTOM.
 * @param[out] fifth Fifth alignment. The default is
 * @ref EFL_UI_POPUP_ALIGN_CENTER.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
EAPI EAPI_WEAK void efl_ui_popup_align_priority_get(const Eo *obj, Efl_Ui_Popup_Align *first, Efl_Ui_Popup_Align *second, Efl_Ui_Popup_Align *third, Efl_Ui_Popup_Align *fourth, Efl_Ui_Popup_Align *fifth);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_POPUP_EVENT_BACKWALL_CLICKED;

/** This is called whenever the user clicks the backwall part of the Popup.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
#define EFL_UI_POPUP_EVENT_BACKWALL_CLICKED (&(_EFL_UI_POPUP_EVENT_BACKWALL_CLICKED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_POPUP_EVENT_TIMEOUT;

/** This is called when Popup times out.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup
 */
#define EFL_UI_POPUP_EVENT_TIMEOUT (&(_EFL_UI_POPUP_EVENT_TIMEOUT))

#endif
