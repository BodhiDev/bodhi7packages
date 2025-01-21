#ifndef _EFL_TEXT_INTERACTIVE_EO_H_
#define _EFL_TEXT_INTERACTIVE_EO_H_

#ifndef _EFL_TEXT_INTERACTIVE_EO_CLASS_TYPE
#define _EFL_TEXT_INTERACTIVE_EO_CLASS_TYPE

typedef Eo Efl_Text_Interactive;

#endif

#ifndef _EFL_TEXT_INTERACTIVE_EO_TYPES
#define _EFL_TEXT_INTERACTIVE_EO_TYPES


#endif
/**
 * @brief Interface for interactive (editable) text inputs (text entries).
 *
 * It handles cursors, edition and selection.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
#define EFL_TEXT_INTERACTIVE_INTERFACE efl_text_interactive_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_text_interactive_interface_get(void) EINA_CONST;

/**
 * @brief The cursor used to insert new text, the one that's visible to the
 * user.
 *
 * @param[in] obj The object.
 *
 * @return The cursor visible to the user.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
EAPI EAPI_WEAK Efl_Text_Cursor_Object *efl_text_interactive_main_cursor_get(const Eo *obj);

/**
 * @brief Whether or not text selection is allowed on this object.
 *
 * @param[in] obj The object.
 * @param[in] allowed @c true if enabled.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
EAPI EAPI_WEAK void efl_text_interactive_selection_allowed_set(Eo *obj, Eina_Bool allowed);

/**
 * @brief Whether or not text selection is allowed on this object.
 *
 * @param[in] obj The object.
 *
 * @return @c true if enabled.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
EAPI EAPI_WEAK Eina_Bool efl_text_interactive_selection_allowed_get(const Eo *obj);

/**
 * @brief The cursors used for selection handling. If the cursors are equal
 * there's no selection.
 *
 * The positions of passed cursors will be used to set selection cursors
 * positions. Further modification for passed @ref Efl_Text_Cursor_Object
 * objects, will not affect selection. Setter is recommended to set new range
 * for selection.
 *
 * @param[in] obj The object.
 * @param[in] start The start of the selection.
 * @param[in] end The end of the selection.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
EAPI EAPI_WEAK void efl_text_interactive_selection_cursors_set(Eo *obj, Efl_Text_Cursor_Object *start, Efl_Text_Cursor_Object *end);

/**
 * @brief The cursors used for selection handling. If the cursors are equal
 * there's no selection.
 *
 * You are allowed to retain and modify them. Modifying them modifies the
 * selection of the object (recommended to extend selection range).
 *
 * @param[in] obj The object.
 * @param[out] start The start of the selection.
 * @param[out] end The end of the selection.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
EAPI EAPI_WEAK void efl_text_interactive_selection_cursors_get(const Eo *obj, Efl_Text_Cursor_Object **start, Efl_Text_Cursor_Object **end);

/**
 * @brief Whether the entry is editable.
 *
 * By default interactive text objects are editable. Setting this property to
 * @c false will disregard all keyboard input.
 *
 * @param[in] obj The object.
 * @param[in] editable If @c true, user input can modify the text. Otherwise,
 * the entry is read-only and no user input is allowed.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
EAPI EAPI_WEAK void efl_text_interactive_editable_set(Eo *obj, Eina_Bool editable);

/**
 * @brief Whether the entry is editable.
 *
 * By default interactive text objects are editable. Setting this property to
 * @c false will disregard all keyboard input.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, user input can modify the text. Otherwise, the entry is
 * read-only and no user input is allowed.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
EAPI EAPI_WEAK Eina_Bool efl_text_interactive_editable_get(const Eo *obj);

/** Clears the selection.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
EAPI EAPI_WEAK void efl_text_interactive_all_unselect(Eo *obj);

/** Select all the content.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
EAPI EAPI_WEAK void efl_text_interactive_all_select(Eo *obj);

/**
 * @brief Whether the entry has a selected text.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, entry has selected text.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
EAPI EAPI_WEAK Eina_Bool efl_text_interactive_have_selection_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_TEXT_INTERACTIVE_EVENT_PREEDIT_CHANGED;

/** Emitted when key presses do not result in a new character being added.
 * Multiple key presses are needed to produce a character in some languages
 * like Korean, for example. Each of these key presses will emit a
 * @[.preedit,changed] event but only the last one will emit a @[.changed,user]
 * event.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
#define EFL_TEXT_INTERACTIVE_EVENT_PREEDIT_CHANGED (&(_EFL_TEXT_INTERACTIVE_EVENT_PREEDIT_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_TEXT_INTERACTIVE_EVENT_HAVE_SELECTION_CHANGED;

/** Emitted when the @ref efl_text_interactive_have_selection_get property
 * value changes.
 * @return Eina_Bool
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
#define EFL_TEXT_INTERACTIVE_EVENT_HAVE_SELECTION_CHANGED (&(_EFL_TEXT_INTERACTIVE_EVENT_HAVE_SELECTION_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_TEXT_INTERACTIVE_EVENT_SELECTION_CHANGED;

/** Emitted when selection has changed. Query using
 * @ref efl_text_interactive_selection_cursors_get.
 * @return Eina_Range
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
#define EFL_TEXT_INTERACTIVE_EVENT_SELECTION_CHANGED (&(_EFL_TEXT_INTERACTIVE_EVENT_SELECTION_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_TEXT_INTERACTIVE_EVENT_REDO_REQUEST;

/** Emitted when a redo operation is requested.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
#define EFL_TEXT_INTERACTIVE_EVENT_REDO_REQUEST (&(_EFL_TEXT_INTERACTIVE_EVENT_REDO_REQUEST))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_TEXT_INTERACTIVE_EVENT_UNDO_REQUEST;

/** Emitted when a undo operation is requested.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
#define EFL_TEXT_INTERACTIVE_EVENT_UNDO_REQUEST (&(_EFL_TEXT_INTERACTIVE_EVENT_UNDO_REQUEST))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_TEXT_INTERACTIVE_EVENT_CHANGED_USER;

/** Emitted when the text content has changed due to user interaction.
 * @return Efl_Text_Change_Info
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Interactive
 */
#define EFL_TEXT_INTERACTIVE_EVENT_CHANGED_USER (&(_EFL_TEXT_INTERACTIVE_EVENT_CHANGED_USER))

#endif
