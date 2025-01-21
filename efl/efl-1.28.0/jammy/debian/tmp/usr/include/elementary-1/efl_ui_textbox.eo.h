#ifndef _EFL_UI_TEXTBOX_EO_H_
#define _EFL_UI_TEXTBOX_EO_H_

#ifndef _EFL_UI_TEXTBOX_EO_CLASS_TYPE
#define _EFL_UI_TEXTBOX_EO_CLASS_TYPE

typedef Eo Efl_Ui_Textbox;

#endif

#ifndef _EFL_UI_TEXTBOX_EO_TYPES
#define _EFL_UI_TEXTBOX_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief What kind of content can be pasted into this widget using Copy &
 * Paste or Drag & Drop functionality.
 *
 * Multiple options can be OR-ed together.
 *
 * @ingroup Efl_Ui_Textbox_Cnp_Content
 */
typedef enum
{
  EFL_UI_TEXTBOX_CNP_CONTENT_NOTHING = 0, /**< Nothing can be pasted or dropped
                                           * into this widget. */
  EFL_UI_TEXTBOX_CNP_CONTENT_TEXT = 1, /**< Plain text can be pasted or dropped
                                        * into this widget. */
  EFL_UI_TEXTBOX_CNP_CONTENT_MARKUP = 3, /**< Markup text can be pasted or
                                          * dropped into this widget (This
                                          * includes Plain text). */
  EFL_UI_TEXTBOX_CNP_CONTENT_IMAGE = 4 /**< Images can be pasted or dropped into
                                        * this widget. */
} Efl_Ui_Textbox_Cnp_Content;
#endif /* EFL_BETA_API_SUPPORT */


#endif
/** A flexible text widget which can be static (as a label) or editable by the
 * user (as a text entry). It provides all sorts of editing facilities like
 * automatic scrollbars, virtual keyboard, clipboard, configurable context
 * menus or auto-capitalization, for example.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
#define EFL_UI_TEXTBOX_CLASS efl_ui_textbox_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_textbox_class_get(void) EINA_CONST;

/**
 * @brief Enable or disable scrolling in the widget.
 *
 * When scrolling is enabled scrollbars will appear if the text does not fit
 * the widget size.
 *
 * Direct control of the scroll through the @ref Efl_Ui_Scrollable interface is
 * only possible when this property is enabled.
 *
 * @param[in] obj The object.
 * @param[in] scroll @c true to enable scrolling.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK void efl_ui_textbox_scrollable_set(Eo *obj, Eina_Bool scroll);

/**
 * @brief Enable or disable scrolling in the widget.
 *
 * When scrolling is enabled scrollbars will appear if the text does not fit
 * the widget size.
 *
 * Direct control of the scroll through the @ref Efl_Ui_Scrollable interface is
 * only possible when this property is enabled.
 *
 * @param[in] obj The object.
 *
 * @return @c true to enable scrolling.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_textbox_scrollable_get(const Eo *obj);

/**
 * @brief This enables or disables the widget's contextual menu, typically
 * accessible through a long-press or a right-button click.
 *
 * @param[in] obj The object.
 * @param[in] enabled @c true to enable the contextual menu.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK void efl_ui_textbox_context_menu_enabled_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief This enables or disables the widget's contextual menu, typically
 * accessible through a long-press or a right-button click.
 *
 * @param[in] obj The object.
 *
 * @return @c true to enable the contextual menu.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_textbox_context_menu_enabled_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Controls the type of content which can be pasted into the widget.
 *
 * By default, both text and images are allowed..
 *
 * @param[in] obj The object.
 * @param[in] allowed_formats Allowed content types.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK void efl_ui_textbox_cnp_dnd_mode_set(Eo *obj, Efl_Ui_Textbox_Cnp_Content allowed_formats);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Controls the type of content which can be pasted into the widget.
 *
 * By default, both text and images are allowed..
 *
 * @param[in] obj The object.
 *
 * @return Allowed content types.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK Efl_Ui_Textbox_Cnp_Content efl_ui_textbox_cnp_dnd_mode_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief This enables or disables the visual handles around selected text, to
 * allow simpler modification on touch screens.
 *
 * @param[in] obj The object.
 * @param[in] enabled @c true to enable the selection handles.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK void efl_ui_textbox_selection_handles_enabled_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief This enables or disables the visual handles around selected text, to
 * allow simpler modification on touch screens.
 *
 * @param[in] obj The object.
 *
 * @return @c true to enable the selection handles.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_textbox_selection_handles_enabled_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The factory that provides item in the text e.g. "emoticon/happy" or
 * "href=file://image.jpg" etc.
 *
 * @param[in] obj The object.
 * @param[in] item_factory Factory to create items
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK void efl_ui_textbox_item_factory_set(Eo *obj, Efl_Canvas_Textblock_Factory *item_factory);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The factory that provides item in the text e.g. "emoticon/happy" or
 * "href=file://image.jpg" etc.
 *
 * @param[in] obj The object.
 *
 * @return Factory to create items
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK Efl_Canvas_Textblock_Factory *efl_ui_textbox_item_factory_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Creates and returns a new cursor for the text.
 *
 * @param[in] obj The object.
 *
 * @return Text cursor.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK Efl_Text_Cursor_Object *efl_ui_textbox_cursor_create(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/** This executes a "copy" action on the selected text in the widget.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK void efl_ui_textbox_selection_copy(Eo *obj);

/** This executes a "paste" action in the widget.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK void efl_ui_textbox_selection_paste(Eo *obj);

/** This executes a "cut" action on the selected text in the widget.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
EAPI EAPI_WEAK void efl_ui_textbox_selection_cut(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_TEXTBOX_EVENT_SELECTION_PASTE;

/** Called when selection is pasted.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
#define EFL_UI_TEXTBOX_EVENT_SELECTION_PASTE (&(_EFL_UI_TEXTBOX_EVENT_SELECTION_PASTE))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_TEXTBOX_EVENT_SELECTION_COPY;

/** Called when selection is copied.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
#define EFL_UI_TEXTBOX_EVENT_SELECTION_COPY (&(_EFL_UI_TEXTBOX_EVENT_SELECTION_COPY))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_TEXTBOX_EVENT_SELECTION_CUT;

/** Called when selection is cut.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
#define EFL_UI_TEXTBOX_EVENT_SELECTION_CUT (&(_EFL_UI_TEXTBOX_EVENT_SELECTION_CUT))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_TEXTBOX_EVENT_CHANGED;

/** Called when entry changes
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
#define EFL_UI_TEXTBOX_EVENT_CHANGED (&(_EFL_UI_TEXTBOX_EVENT_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_TEXTBOX_EVENT_CONTEXT_OPEN;

/** Called when context menu was opened
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Textbox
 */
#define EFL_UI_TEXTBOX_EVENT_CONTEXT_OPEN (&(_EFL_UI_TEXTBOX_EVENT_CONTEXT_OPEN))

#endif
