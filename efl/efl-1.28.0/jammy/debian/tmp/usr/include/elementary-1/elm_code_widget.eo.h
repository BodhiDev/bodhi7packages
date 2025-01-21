#ifndef _ELM_CODE_WIDGET_EO_H_
#define _ELM_CODE_WIDGET_EO_H_

#ifndef _ELM_CODE_WIDGET_EO_CLASS_TYPE
#define _ELM_CODE_WIDGET_EO_CLASS_TYPE

typedef Eo Elm_Code_Widget;

#endif

#ifndef _ELM_CODE_WIDGET_EO_TYPES
#define _ELM_CODE_WIDGET_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Type that controls when scrollbars should appear.
 *
 * See also @ref elm_interface_scrollable_policy_set.
 *
 * @ingroup Elm_Code_Widget_Scroller_Policy
 */
typedef enum
{
  ELM_CODE_WIDGET_SCROLLER_POLICY_AUTO = 0, /**< Show scrollbars as needed */
  ELM_CODE_WIDGET_SCROLLER_POLICY_ON, /**< Always show scrollbars */
  ELM_CODE_WIDGET_SCROLLER_POLICY_OFF, /**< Never show scrollbars */
  ELM_CODE_WIDGET_SCROLLER_POLICY_LAST /**< Sentinel value to indicate last enum
                                        * field during iteration */
} Elm_Code_Widget_Scroller_Policy;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary code widget
 *
 * @ingroup Elm_Code_Widget
 */
#define ELM_CODE_WIDGET_CLASS elm_code_widget_class_get()

EAPI EAPI_WEAK const Efl_Class *elm_code_widget_class_get(void) EINA_CONST;

/**
 * @brief The underlying code object that this widget renders. This can only be
 * set during construction, once the widget is created the backing code object
 * cannot be changed.
 *
 * @param[in] obj The object.
 * @param[in] code Our underlying Elm.Code object
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_code_set(Eo *obj, Elm_Code *code);

/**
 * @brief The underlying code object that this widget renders. This can only be
 * set during construction, once the widget is created the backing code object
 * cannot be changed.
 *
 * @param[in] obj The object.
 *
 * @return Our underlying Elm.Code object
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Elm_Code *efl_ui_code_widget_code_get(const Eo *obj);

/**
 * @brief Set the font that this widget uses, the font should be a monospaced
 * scalable font. Passing @c NULL will load the default system monospaced font.
 * When reading, the font name is a copy and should be freed once it is no
 * longer needed.
 *
 * @param[in] obj The object.
 * @param[in] name The name of the font to load
 * @param[in] size The font size for the widget
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_font_set(Eo *obj, const char *name, int size);

/**
 * @brief Set the font that this widget uses, the font should be a monospaced
 * scalable font. Passing @c NULL will load the default system monospaced font.
 * When reading, the font name is a copy and should be freed once it is no
 * longer needed.
 *
 * @param[in] obj The object.
 * @param[out] name The name of the font to load
 * @param[out] size The font size for the widget
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_font_get(const Eo *obj, const char **name, int *size);

/**
 * @brief The number of columns in the widget currently. This will be the max
 * of the number of columns to represent the longest line and the minimum
 * required to fill the visible widget width.
 *
 * @param[in] obj The object.
 *
 * @return The number of columns required to render the widget
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK unsigned int efl_ui_code_widget_columns_get(const Eo *obj);

/**
 * @brief Set how this widget's scroller should respond to new lines being
 * added.
 *
 * An x value of 0.0 will maintain the distance from the left edge, 1.0 will
 * ensure the rightmost edge (of the longest line) is respected With 0.0 for y
 * the view will keep it's position relative to the top whereas 1.0 will scroll
 * downward as lines are added.
 *
 * @param[in] obj The object.
 * @param[in] x The horizontal value of the scroller gravity - valid values are
 * 0.0 and 1.0
 * @param[in] y The vertical gravity of the widget's scroller - valid values
 * are 0.0 and 1.0
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_gravity_set(Eo *obj, double x, double y);

/**
 * @brief Set how this widget's scroller should respond to new lines being
 * added.
 *
 * An x value of 0.0 will maintain the distance from the left edge, 1.0 will
 * ensure the rightmost edge (of the longest line) is respected With 0.0 for y
 * the view will keep it's position relative to the top whereas 1.0 will scroll
 * downward as lines are added.
 *
 * @param[in] obj The object.
 * @param[out] x The horizontal value of the scroller gravity - valid values
 * are 0.0 and 1.0
 * @param[out] y The vertical gravity of the widget's scroller - valid values
 * are 0.0 and 1.0
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_gravity_get(const Eo *obj, double *x, double *y);

/**
 * @brief The widget's policy for scrollbar visibility.
 *
 * @param[in] obj The object.
 * @param[in] policy_h The horizontal scrollbar visibility policy
 * @param[in] policy_v The vertical scrollbar visibility policy
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_policy_set(Eo *obj, Elm_Code_Widget_Scroller_Policy policy_h, Elm_Code_Widget_Scroller_Policy policy_v);

/**
 * @brief The widget's policy for scrollbar visibility.
 *
 * @param[in] obj The object.
 * @param[out] policy_h The horizontal scrollbar visibility policy
 * @param[out] policy_v The vertical scrollbar visibility policy
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_policy_get(const Eo *obj, Elm_Code_Widget_Scroller_Policy *policy_h, Elm_Code_Widget_Scroller_Policy *policy_v);

/**
 * @brief The width of a tab stop, used purely for visual layout of tab
 * characters.
 *
 * Recommended value is between 2 and 8.
 *
 * @param[in] obj The object.
 * @param[in] tabstop Maximum width of a tab character
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_tabstop_set(Eo *obj, unsigned int tabstop);

/**
 * @brief The width of a tab stop, used purely for visual layout of tab
 * characters.
 *
 * Recommended value is between 2 and 8.
 *
 * @param[in] obj The object.
 *
 * @return Maximum width of a tab character
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK unsigned int efl_ui_code_widget_tabstop_get(const Eo *obj);

/**
 * @brief Whether this widget allows editing.
 *
 * If editable then the widget will allow user input to manipulate the
 * underlying Elm.Code_File of this Elm.Code instance. Any other
 * Elm.Code_Widget's connected to this Elm.Code will update to reflect the
 * changes.
 *
 * @param[in] obj The object.
 * @param[in] editable The editable state of the widget
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_editable_set(Eo *obj, Eina_Bool editable);

/**
 * @brief Whether this widget allows editing.
 *
 * If editable then the widget will allow user input to manipulate the
 * underlying Elm.Code_File of this Elm.Code instance. Any other
 * Elm.Code_Widget's connected to this Elm.Code will update to reflect the
 * changes.
 *
 * Returns EINA_TRUE if the widget is editable, EINA_FALSE otherwise. If this
 * widget is not editable the underlying Elm.Code_File could still be
 * manipulated by a different widget or the filesystem.
 *
 * @param[in] obj The object.
 *
 * @return The editable state of the widget
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_code_widget_editable_get(const Eo *obj);

/**
 * @brief Whether line numbers should be displayed in the left gutter.
 *
 * Passing EINA_TRUE will reserve a space for showing line numbers, EINA_FALSE
 * will turn this off.
 *
 * @param[in] obj The object.
 * @param[in] line_numbers Whether or not line numbers (or their placeholder)
 * should be shown
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_line_numbers_set(Eo *obj, Eina_Bool line_numbers);

/**
 * @brief Whether line numbers should be displayed in the left gutter.
 *
 * Passing EINA_TRUE will reserve a space for showing line numbers, EINA_FALSE
 * will turn this off.
 *
 * @param[in] obj The object.
 *
 * @return Whether or not line numbers (or their placeholder) should be shown
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_code_widget_line_numbers_get(const Eo *obj);

/**
 * @brief Where the line width market should be shown.
 *
 * Passing a non-zero value will set which line width to mark with a vertical
 * line. Passing 0 will hide this marker.
 *
 * @param[in] obj The object.
 * @param[in] line_width_marker Where to display a line width marker, if at all
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_line_width_marker_set(Eo *obj, unsigned int line_width_marker);

/**
 * @brief Where the line width market should be shown.
 *
 * Passing a non-zero value will set which line width to mark with a vertical
 * line. Passing 0 will hide this marker.
 *
 * @param[in] obj The object.
 *
 * @return Where to display a line width marker, if at all
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK unsigned int efl_ui_code_widget_line_width_marker_get(const Eo *obj);

/**
 * @brief Whether white space should be shown.
 *
 * @param[in] obj The object.
 * @param[in] show_whitespace Whether or not we show whitespace characters
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_show_whitespace_set(Eo *obj, Eina_Bool show_whitespace);

/**
 * @brief Whether white space should be shown.
 *
 * @param[in] obj The object.
 *
 * @return Whether or not we show whitespace characters
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_code_widget_show_whitespace_get(const Eo *obj);

/**
 * @brief Set an alpha color value for this widget (0 - 255) default is fully
 * opaque (255).
 *
 * @param[in] obj The object.
 * @param[in] alpha Alpha value
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_alpha_set(Eo *obj, int alpha);

/**
 * @brief Set an alpha color value for this widget (0 - 255) default is fully
 * opaque (255).
 *
 * @param[in] obj The object.
 *
 * @return Alpha value
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK int efl_ui_code_widget_alpha_get(const Eo *obj);

/**
 * @brief Whether syntax highlighting should be use for this widget.
 *
 * @param[in] obj The object.
 * @param[in] syntax_enabled Whether or not to enable syntax highlighting
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_syntax_enabled_set(Eo *obj, Eina_Bool syntax_enabled);

/**
 * @brief Whether syntax highlighting should be use for this widget.
 *
 * @param[in] obj The object.
 *
 * @return Whether or not to enable syntax highlighting
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_code_widget_syntax_enabled_get(const Eo *obj);

/**
 * @brief Whether space characters should be inserted instead of tabs.
 *
 * @param[in] obj The object.
 * @param[in] tab_inserts_spaces @c true if we should insert space characters
 * instead of a tab when the Tab key is pressed
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_tab_inserts_spaces_set(Eo *obj, Eina_Bool tab_inserts_spaces);

/**
 * @brief Whether space characters should be inserted instead of tabs.
 *
 * @param[in] obj The object.
 *
 * @return @c true if we should insert space characters instead of a tab when
 * the Tab key is pressed
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_code_widget_tab_inserts_spaces_get(const Eo *obj);

/**
 * @brief The current location of the text cursor.
 *
 * @param[in] obj The object.
 * @param[in] row The vertical position ov the cursur - the fist row is 1
 * @param[in] col The horizontal position of the cursor, starting from column 1
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_cursor_position_set(Eo *obj, unsigned int row, unsigned int col);

/**
 * @brief The current location of the text cursor.
 *
 * @param[in] obj The object.
 * @param[out] row The vertical position ov the cursur - the fist row is 1
 * @param[out] col The horizontal position of the cursor, starting from column
 * 1
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_cursor_position_get(const Eo *obj, unsigned int *row, unsigned int *col);

/** Update and refresh theme for widget.
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_theme_refresh(Eo *obj);

/**
 * @brief Refresh code line in widget
 *
 * @param[in] obj The object.
 * @param[in] line The line to refresh.
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_line_refresh(Eo *obj, Elm_Code_Line *line);

/**
 * @brief Check if the code line is currently visible
 *
 * @param[in] obj The object.
 * @param[in] line The line to test for visibility.
 *
 * @return @c true if the line specified is currently visible within the scroll
 * region.
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_code_widget_line_visible_get(Eo *obj, Elm_Code_Line *line);

/**
 * @brief Get the number of code lines currently visible in the widget
 *
 * @param[in] obj The object.
 *
 * @return the number of lines currently visible in the widget.
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK unsigned int efl_ui_code_widget_lines_visible_get(Eo *obj);

/**
 * @brief Get the row, col position for a given coordinate on the widget.
 *
 * @param[in] obj The object.
 * @param[in] x The x coordinate in the widget
 * @param[in] y The y coordinate in the widget
 * @param[in] row The row for the coordinates
 * @param[in] col The column for the coordinates
 *
 * @return @c true if a line exists at these coordinates
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_code_widget_position_at_coordinates_get(Eo *obj, int x, int y, unsigned int *row, int *col);

/**
 * @brief Get the geometry for the cell at the specified position.
 *
 * @param[in] obj The object.
 * @param[in] row The row for the requested position
 * @param[in] col The column for the requested position
 * @param[in] x The x coordinate of the cell at specified position
 * @param[in] y The y coordinate of the cell at specified position
 * @param[in] w The width of the cell at specified position
 * @param[in] h The height of the cell at specified position
 *
 * @return @c true if a cell exists at the specified position
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_code_widget_geometry_for_position_get(Eo *obj, unsigned int row, int col, int *x, int *y, int *w, int *h);

/**
 * @brief Get the column width of the gutter
 *
 * @param[in] obj The object.
 *
 * @return The current column width of the gutter for the widget.
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK int efl_ui_code_widget_text_left_gutter_width_get(Eo *obj);

/**
 * @brief Get text between given positions
 *
 * @param[in] obj The object.
 * @param[in] start_line The line of the first character to get
 * @param[in] start_col The widget column of the first character to get
 * @param[in] end_line The line of the last character to get
 * @param[in] end_col The widget column of the last character to get
 *
 * @return The text content between start and end positions
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK char *efl_ui_code_widget_text_between_positions_get(Eo *obj, unsigned int start_line, unsigned int start_col, unsigned int end_line, unsigned int end_col);

/**
 * @brief Insert the provided text at the cursor position. This will add the
 * operation to the widget's undo list.
 *
 * @param[in] obj The object.
 * @param[in] text The text to insert
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_text_at_cursor_insert(Eo *obj, const char *text);

/**
 * @brief Get text column width at given position
 *
 * @param[in] obj The object.
 * @param[in] line Code line
 * @param[in] position Code position
 *
 * @return Text column width
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK unsigned int efl_ui_code_widget_line_text_column_width_to_position(Eo *obj, Elm_Code_Line *line, unsigned int position);

/**
 * @brief Get text column width for code line
 *
 * @param[in] obj The object.
 * @param[in] line Code line
 *
 * @return Text column width
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK unsigned int efl_ui_code_widget_line_text_column_width_get(Eo *obj, Elm_Code_Line *line);

/**
 * @brief Get position from column
 *
 * @param[in] obj The object.
 * @param[in] line Code line
 * @param[in] column Column
 *
 * @return Position
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK unsigned int efl_ui_code_widget_line_text_position_for_column_get(Eo *obj, Elm_Code_Line *line, unsigned int column);

/**
 * @brief Get tabwidth for column
 *
 * @param[in] obj The object.
 * @param[in] column Column
 *
 * @return Tabwidth
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK unsigned int efl_ui_code_widget_text_tabwidth_at_column_get(Eo *obj, unsigned int column);

/**
 * @brief Toggle the display of the line status widget
 *
 * @param[in] obj The object.
 * @param[in] line Code line
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_line_status_toggle(Eo *obj, Elm_Code_Line *line);

/** Undo last action
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_undo(Eo *obj);

/**
 * @brief Determine if there are any available undo operations
 *
 * @param[in] obj The object.
 *
 * @return @c true if there are undo operations
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_code_widget_can_undo_get(Eo *obj);

/** Redo last action
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK void efl_ui_code_widget_redo(Eo *obj);

/**
 * @brief Determine if there are any available redo operations
 *
 * @param[in] obj The object.
 *
 * @return @c true if there are redo operations
 *
 * @ingroup Elm_Code_Widget
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_code_widget_can_redo_get(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CODE_WIDGET_EVENT_LINE_CLICKED;

/** Called when text line was clicked
 * @return Elm_Code_Line
 *
 * @ingroup Elm_Code_Widget
 */
#define EFL_UI_CODE_WIDGET_EVENT_LINE_CLICKED (&(_EFL_UI_CODE_WIDGET_EVENT_LINE_CLICKED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CODE_WIDGET_EVENT_LINE_GUTTER_CLICKED;

/** Called when gutter was clicked
 * @return Elm_Code_Line
 *
 * @ingroup Elm_Code_Widget
 */
#define EFL_UI_CODE_WIDGET_EVENT_LINE_GUTTER_CLICKED (&(_EFL_UI_CODE_WIDGET_EVENT_LINE_GUTTER_CLICKED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CODE_WIDGET_EVENT_CHANGED_USER;

/** Called when object changed due to user interaction
 *
 * @ingroup Elm_Code_Widget
 */
#define EFL_UI_CODE_WIDGET_EVENT_CHANGED_USER (&(_EFL_UI_CODE_WIDGET_EVENT_CHANGED_USER))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CODE_WIDGET_EVENT_CURSOR_CHANGED;

/** Called when cursor changed
 * @return Elm_Code_Widget *
 *
 * @ingroup Elm_Code_Widget
 */
#define EFL_UI_CODE_WIDGET_EVENT_CURSOR_CHANGED (&(_EFL_UI_CODE_WIDGET_EVENT_CURSOR_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_START;

/** Called when a selection is started
 * @return Elm_Code_Widget *
 *
 * @ingroup Elm_Code_Widget
 */
#define EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_START (&(_EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_START))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_CHANGED;

/** Called when selection changed
 * @return Elm_Code_Widget *
 *
 * @ingroup Elm_Code_Widget
 */
#define EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_CHANGED (&(_EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_CLEARED;

/** Called when selection was cleared
 * @return Elm_Code_Widget *
 *
 * @ingroup Elm_Code_Widget
 */
#define EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_CLEARED (&(_EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_CLEARED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_CUT;

/** Called when a cut action is performed
 * @return Elm_Code_Widget *
 *
 * @ingroup Elm_Code_Widget
 */
#define EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_CUT (&(_EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_CUT))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_COPY;

/** Called when a copy action is performed
 * @return Elm_Code_Widget *
 *
 * @ingroup Elm_Code_Widget
 */
#define EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_COPY (&(_EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_COPY))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_PASTE;

/** Called when a paste action is performed
 * @return Elm_Code_Widget *
 *
 * @ingroup Elm_Code_Widget
 */
#define EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_PASTE (&(_EFL_UI_CODE_WIDGET_EVENT_CODE_SELECTION_PASTE))
#endif /* EFL_BETA_API_SUPPORT */

#endif
