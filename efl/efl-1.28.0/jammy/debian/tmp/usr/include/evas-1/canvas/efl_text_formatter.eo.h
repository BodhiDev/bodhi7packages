#ifndef _EFL_TEXT_FORMATTER_EO_H_
#define _EFL_TEXT_FORMATTER_EO_H_

#ifndef _EFL_TEXT_FORMATTER_EO_CLASS_TYPE
#define _EFL_TEXT_FORMATTER_EO_CLASS_TYPE

typedef Eo Efl_Text_Formatter;

#endif

#ifndef _EFL_TEXT_FORMATTER_EO_TYPES
#define _EFL_TEXT_FORMATTER_EO_TYPES


#endif
/**
 * @brief Text Formatter API to manage text formatting(attributes). Use it to
 * insert and remove style attributes (font, size, color, ...) using
 * @ref Efl_Text_Cursor_Object on EFL Widgets.
 *
 * Attributes can be assigned to character ranges, selected using two
 * @ref Efl_Text_Cursor_Object instances. Cursor instances are already bound to
 * a text object so there's no need to provide it to this class. Style is
 * specified using format strings as described in
 * @ref efl_canvas_textblock_style_apply.
 *
 * There is no need to instantiate this class. Use directly the
 * @ref efl_text_formatter_attribute_insert and
 * @ref efl_text_formatter_attribute_clear static methods.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Formatter
 */
#define EFL_TEXT_FORMATTER_CLASS efl_text_formatter_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_text_formatter_class_get(void) EINA_CONST;

/**
 * @brief Inserts an attribute format in a specified range [$start, @c end -
 * 1].
 *
 * The @c format will be applied to the given range. The passed cursors must
 * belong to same text object, otherwise insertion will be ignored.
 *
 * @param[in] start Start of range.
 * @param[in] end End of range.
 * @param[in] format Format string. Uses same format as @c style in
 * @ref efl_canvas_textblock_style_apply.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Formatter
 */
EVAS_API EVAS_API_WEAK void efl_text_formatter_attribute_insert(const Efl_Text_Cursor_Object *start, const Efl_Text_Cursor_Object *end, const char *format);

/**
 * @brief Clear (remove) attributes in the specified range [$start, @c end -
 * 1].
 *
 * @param[in] start Start of range.
 * @param[in] end End of range.
 *
 * @return Number of removed attributes.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Formatter
 */
EVAS_API EVAS_API_WEAK unsigned int efl_text_formatter_attribute_clear(const Efl_Text_Cursor_Object *start, const Efl_Text_Cursor_Object *end);

#endif
