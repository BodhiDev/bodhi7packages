#ifndef _EFL_TEXT_CURSOR_OBJECT_EO_H_
#define _EFL_TEXT_CURSOR_OBJECT_EO_H_

#ifndef _EFL_TEXT_CURSOR_OBJECT_EO_CLASS_TYPE
#define _EFL_TEXT_CURSOR_OBJECT_EO_CLASS_TYPE

typedef Eo Efl_Text_Cursor_Object;

#endif

#ifndef _EFL_TEXT_CURSOR_OBJECT_EO_TYPES
#define _EFL_TEXT_CURSOR_OBJECT_EO_TYPES

/** Shape of the text cursor. This is normally used in
 * @ref Efl_Text_Cursor_Object methods to retrieve the cursor's geometry.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Type
 */
typedef enum
{
  EFL_TEXT_CURSOR_TYPE_BEFORE = 0, /**< Cursor is a vertical bar (I-beam) placed
                                    * before the selected character.
                                    *
                                    * @since 1.24 */
  EFL_TEXT_CURSOR_TYPE_UNDER /**< Cursor is an horizontal line (underscore)
                              * placed under the selected character.
                              *
                              * @since 1.24 */
} Efl_Text_Cursor_Type;

/** Text cursor movement types.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Move_Type
 */
typedef enum
{
  EFL_TEXT_CURSOR_MOVE_TYPE_CHARACTER_NEXT = 0, /**< Advances to the next
                                                 * character.
                                                 *
                                                 * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_CHARACTER_PREVIOUS, /**< Advances to the previous
                                                 * character.
                                                 *
                                                 * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_CLUSTER_NEXT, /**< Advances to the next grapheme
                                           * cluster (A character sequence
                                           * rendered together. See
                                           * https://unicode.org/reports/tr29/).
                                           *
                                           * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_CLUSTER_PREVIOUS, /**< Advances to the previous
                                               * grapheme cluster (A character
                                               * sequence rendered together.
                                               * See
                                               * https://unicode.org/reports/tr29/).
                                               *
                                               * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_PARAGRAPH_START, /**< Advances to the first
                                              * character in current paragraph.
                                              *
                                              * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_PARAGRAPH_END, /**< Advances to the last character
                                            * in current paragraph.
                                            *
                                            * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_WORD_START, /**< Advance to current word start.
                                         *
                                         * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_WORD_END, /**< Advance to current word end.
                                       *
                                       * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_LINE_START, /**< Advance to current line first
                                         * character.
                                         *
                                         * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_LINE_END, /**< Advance to current line last
                                       * character.
                                       *
                                       * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_FIRST, /**< Advance to first character in the first
                                    * paragraph.
                                    *
                                    * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_LAST, /**< Advance to last character in the  last
                                   *  paragraph.
                                   *
                                   * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_PARAGRAPH_NEXT, /**< Advances to the start of the
                                             * next paragraph.
                                             *
                                             * @since 1.24 */
  EFL_TEXT_CURSOR_MOVE_TYPE_PARAGRAPH_PREVIOUS /**< Advances to the end of the
                                                * previous paragraph.
                                                *
                                                * @since 1.24 */
} Efl_Text_Cursor_Move_Type;


#endif
/** Cursor API.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
#define EFL_TEXT_CURSOR_OBJECT_CLASS efl_text_cursor_object_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_text_cursor_object_class_get(void) EINA_CONST;

/**
 * @brief Cursor position.
 *
 * @param[in] obj The object.
 * @param[in] position Cursor position.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK void efl_text_cursor_object_position_set(Eo *obj, int position);

/**
 * @brief Cursor position.
 *
 * @param[in] obj The object.
 *
 * @return Cursor position.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK int efl_text_cursor_object_position_get(const Eo *obj);

/**
 * @brief The content of the cursor (the character under the cursor).
 *
 * @param[in] obj The object.
 *
 * @return The unicode codepoint of the character.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK Eina_Unicode efl_text_cursor_object_content_get(const Eo *obj);

/**
 * @brief The geometry of the item/char pointed by the cursor.
 *
 * @param[in] obj The object.
 *
 * @return The geometry in pixels.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK Eina_Rect efl_text_cursor_object_content_geometry_get(const Eo *obj);

/**
 * @brief The line the cursor is on.
 *
 * @param[in] obj The object.
 * @param[in] line_number The line number.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK void efl_text_cursor_object_line_number_set(Eo *obj, int line_number);

/**
 * @brief The line the cursor is on.
 *
 * @param[in] obj The object.
 *
 * @return The line number.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK int efl_text_cursor_object_line_number_get(const Eo *obj);

/**
 * @brief Returns the geometry of cursor, if cursor is shown for the text of
 * the same direction as paragraph,else  ("split cursor") will return and you
 * need to consider the lower ("split cursor")
 * @ref efl_text_cursor_object_lower_cursor_geometry_get
 *
 * Split cursor geometry is valid only  in @ref EFL_TEXT_CURSOR_TYPE_BEFORE
 * cursor mode.
 *
 * @param[in] obj The object.
 * @param[in] ctype The type of the cursor.
 *
 * @return The geometry of the cursor (or upper cursor) in pixels.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK Eina_Rect efl_text_cursor_object_cursor_geometry_get(const Eo *obj, Efl_Text_Cursor_Type ctype);

/**
 * @brief Returns the geometry of the lower ("split cursor"), if logical cursor
 * is between LTR/RTL text.
 *
 * To get the upper ("split cursor")
 * @ref efl_text_cursor_object_cursor_geometry_get with
 * @ref EFL_TEXT_CURSOR_TYPE_BEFORE cursor mode.
 *
 * @param[in] obj The object.
 * @param[out] geometry The geometry of the lower cursor in pixels.
 *
 * @return @c true if split cursor, @c false otherwise.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_text_cursor_object_lower_cursor_geometry_get(const Eo *obj, Eina_Rect *geometry);

/**
 * @brief Check if two cursors are equal - faster than compare if all you want
 * is equality.
 *
 * @param[in] obj The object.
 * @param[in] dst Destination Cursor.
 *
 * @return @c true if cursors are equal, @c false otherwise.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_text_cursor_object_equal(const Eo *obj, const Efl_Text_Cursor_Object *dst);

/**
 * @brief Compare two cursors Return <0 if cursor position less than dst, 0 if
 * cursor == dest and >0 otherwise.
 *
 * @param[in] obj The object.
 * @param[in] dst Destination Cursor.
 *
 * @return Difference between cursors.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK int efl_text_cursor_object_compare(const Eo *obj, const Efl_Text_Cursor_Object *dst);

/**
 * @brief Move the cursor.
 *
 * @param[in] obj The object.
 * @param[in] type The type of movement.
 *
 * @return True if actually moved.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_text_cursor_object_move(Eo *obj, Efl_Text_Cursor_Move_Type type);

/** Deletes a single character from position pointed by given cursor.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK void efl_text_cursor_object_char_delete(Eo *obj);

/**
 * @brief Jump the cursor by the given number of lines.
 *
 * @param[in] obj The object.
 * @param[in] by Number of lines.
 *
 * @return True if actually moved.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_text_cursor_object_line_jump_by(Eo *obj, int by);

/**
 * @brief Set cursor coordinates.
 *
 * @param[in] obj The object.
 * @param[in] coord The coordinates to set to.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK void efl_text_cursor_object_char_coord_set(Eo *obj, Eina_Position2D coord);

/**
 * @brief Set cursor coordinates according to grapheme clusters. It does not
 * allow to put a cursor to the middle of a grapheme cluster.
 *
 * @param[in] obj The object.
 * @param[in] coord The coordinates to set to.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK void efl_text_cursor_object_cluster_coord_set(Eo *obj, Eina_Position2D coord);

/**
 * @brief Adds text to the current cursor position and set the cursor to
 * *after* the start of the text just added.
 *
 * @param[in] obj The object.
 * @param[in] text Text to append (UTF-8 format).
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK void efl_text_cursor_object_text_insert(Eo *obj, const char *text);

/**
 * @brief Inserts a markup text at cursor position.
 *
 * @param[in] obj The object.
 * @param[in] markup Text to append (UTF-8 format).
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK void efl_text_cursor_object_markup_insert(Eo *obj, const char *markup);

/**
 * @brief Markup of a given range in the text.
 *
 * @param[in] obj The object.
 * @param[in] cur2 End of range.
 *
 * @return The markup in the given range.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK char *efl_text_cursor_object_range_markup_get(const Eo *obj, Efl_Text_Cursor_Object *cur2) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Returns the text in the range between cursor and @c cur2.
 *
 * @param[in] obj The object.
 * @param[in] cur2 End of range.
 *
 * @return The text in the given range.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK char *efl_text_cursor_object_range_text_get(const Eo *obj, Efl_Text_Cursor_Object *cur2) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Get the simple geometry in pixels of a range in the text.
 *
 * The geometry is the geometry in which rectangles in middle lines of range
 * are merged into one big rectangle. This is an optimized version of
 * @ref efl_text_cursor_object_range_precise_geometry_get.
 *
 * @param[in] obj The object.
 * @param[in] cur2 End of range.
 *
 * @return Iterator on all geometries of the given range.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK Eina_Iterator *efl_text_cursor_object_range_geometry_get(Eo *obj, Efl_Text_Cursor_Object *cur2) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Get the "precise" geometry in pixels of a range.
 *
 * The geometry is represented as rectangles for each of the line segments in
 * the given range [$cur1, @c cur2].
 *
 * @param[in] obj The object.
 * @param[in] cur2 End of range.
 *
 * @return Iterator on all simple geometries of the given range.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK Eina_Iterator *efl_text_cursor_object_range_precise_geometry_get(Eo *obj, Efl_Text_Cursor_Object *cur2) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Deletes the range between given cursors.
 *
 * This removes all the text in given range [$start,$end].
 *
 * @param[in] obj The object.
 * @param[in] cur2 Range end position.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK void efl_text_cursor_object_range_delete(Eo *obj, Efl_Text_Cursor_Object *cur2);

/**
 * @brief The text object this cursor is associated with.
 *
 * @param[in] obj The object.
 *
 * @return The text object.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Object *efl_text_cursor_object_text_object_get(const Eo *obj);

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_TEXT_CURSOR_OBJECT_EVENT_CHANGED;

/** Called when its position has changed.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Cursor_Object
 */
#define EFL_TEXT_CURSOR_OBJECT_EVENT_CHANGED (&(_EFL_TEXT_CURSOR_OBJECT_EVENT_CHANGED))

#endif
