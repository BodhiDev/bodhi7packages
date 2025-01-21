#ifndef _EFL_CANVAS_TEXTBLOCK_EO_H_
#define _EFL_CANVAS_TEXTBLOCK_EO_H_

#ifndef _EFL_CANVAS_TEXTBLOCK_EO_CLASS_TYPE
#define _EFL_CANVAS_TEXTBLOCK_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Textblock;

#endif

#ifndef _EFL_CANVAS_TEXTBLOCK_EO_TYPES
#define _EFL_CANVAS_TEXTBLOCK_EO_TYPES


#endif
/**
 * @brief This is the Canvas-level text class. This class only takes care of
 * rendering text, if you need user interaction consider the classes in
 * <tt>Efl.Ui</tt>.
 *
 * @note No text will be rendered until a font, a font size and a font color
 * are specified. This can be accomplished using @ref efl_text_font_family_get,
 * @ref efl_text_font_size_get and @ref efl_text_color_get. Alternatively,
 * @ref efl_canvas_textblock_style_apply can be used providing the attributes
 * @c font, @c font_size and @c color.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
#define EFL_CANVAS_TEXTBLOCK_CLASS efl_canvas_textblock_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_textblock_class_get(void) EINA_CONST;

/**
 * @brief Whether the object is empty (no text) or not.
 *
 * @param[in] obj The object.
 *
 * @return @c true if empty.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_textblock_is_empty_get(const Eo *obj);

/**
 * @brief Creates a new cursor and adds it to the text object. This cursor can
 * be used to manipulate and iterate the content of the text object.
 *
 * @param[in] obj The object.
 *
 * @return The created text cursor.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK Efl_Text_Cursor_Object *efl_canvas_textblock_cursor_create(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Returns the currently visible range.
 *
 * The given @c start and @c end cursors are output variables: they are set to
 * the positions of the start and the end of the visible range in the text,
 * respectively.
 *
 * @param[in] obj The object.
 * @param[in] start Range start position.
 * @param[in] end Range end position.
 *
 * @return @c true on success.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_textblock_visible_range_get(Eo *obj, Efl_Text_Cursor_Object *start, Efl_Text_Cursor_Object *end);

/**
 * @brief Gets the left, right, top and bottom insets of the text.
 *
 * The inset is any applied padding on the text (which is calculated internally
 * by styling applied to Textblock).
 *
 * @param[in] obj The object.
 * @param[out] l Left padding.
 * @param[out] r Right padding.
 * @param[out] t Top padding.
 * @param[out] b Bottom padding.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK void efl_canvas_textblock_style_insets_get(const Eo *obj, int *l, int *r, int *t, int *b);

/**
 * @brief BiDi delimiters are used for in-paragraph separation of bidirectional
 * segments. This is useful, for example, in the recipient fields of e-mail
 * clients where bidi oddities can occur when mixing RTL (right-to-left) and
 * LTR (left-to-right) text.
 *
 * @param[in] obj The object.
 * @param[in] delim A null terminated string of delimiters, e.g ",|" or @c null
 * if empty.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK void efl_canvas_textblock_bidi_delimiters_set(Eo *obj, const char *delim);

/**
 * @brief BiDi delimiters are used for in-paragraph separation of bidirectional
 * segments. This is useful, for example, in the recipient fields of e-mail
 * clients where bidi oddities can occur when mixing RTL (right-to-left) and
 * LTR (left-to-right) text.
 *
 * @param[in] obj The object.
 *
 * @return A null terminated string of delimiters, e.g ",|" or @c null if
 * empty.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK const char *efl_canvas_textblock_bidi_delimiters_get(const Eo *obj);

/**
 * @brief When @c true, the newline character will behave as a paragraph
 * separator. Paragraph separator equal U+2029, and new line equal U+000A. This
 * will effect a lot of text behaviour like @ref efl_text_cursor_object_move
 * method.
 *
 * @param[in] obj The object.
 * @param[in] mode @c true to treat new line as paragraph separator, @c false
 * otherwise.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK void efl_canvas_textblock_newline_as_paragraph_separator_set(Eo *obj, Eina_Bool mode);

/**
 * @brief When @c true, the newline character will behave as a paragraph
 * separator. Paragraph separator equal U+2029, and new line equal U+000A. This
 * will effect a lot of text behaviour like @ref efl_text_cursor_object_move
 * method.
 *
 * @param[in] obj The object.
 *
 * @return @c true to treat new line as paragraph separator, @c false
 * otherwise.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_textblock_newline_as_paragraph_separator_get(const Eo *obj);

/**
 * @brief Applies several style attributes at once using a formatting string.
 * Given style attributes override previous values, leaving other attributes
 * unaffected. This is akin to setting individual style attributes using
 * properties like @ref efl_text_font_slant_get or @ref efl_text_wrap_get, for
 * example.
 *
 * The formatting string is a whitespace-separated list of
 * <tt>attribute=value</tt> pairs.
 *
 * The following attributes are accepted:
 *
 * - @c font: Name of the font to use. Default value is empty, meaning that no
 * text will be rendered. Requires @c font_size and @c font_color. See
 * @ref efl_text_font_family_get.
 *
 * - @c font_fallbacks: Comma-delimited list of fonts to try if finding the
 * primary font fails. Example:
 * <tt>font_fallbacks=consolas,courier,monospace</tt>. Default value is empty.
 * See @ref efl_text_font_fallbacks_get.
 *
 * - @c font_size: Height of font, in points. Default value is 0. Requires
 * @c font and @c font_color. See @ref efl_text_font_size_get.
 *
 * - @c font_source: Path to the file containing the font to use. Example:
 * <tt>font_source=/usr/share/fonts/Sans.ttf</tt>. Default value is empty. See
 * @ref efl_text_font_source_get.
 *
 * - @c font_weight: Thickness of the font. The value must be one of:
 * @c normal, @c thin, @c ultralight, @c extralight, @c light, @c book,
 * @c medium, @c semibold, @c bold, @c ultrabold, @c extrabold, @c black and
 * @c extrablack. Default value is @c normal. See
 * @ref efl_text_font_weight_get.
 *
 * - @c font_style: Style of the font. The value must be one of: @c normal,
 * @c oblique and @c italic. Default value is @c normal. See
 * @ref efl_text_font_slant_get.
 *
 * - @c font_width: How wide the font is, relative to its height. The value
 * must be one of: @c normal, @c ultracondensed, @c extracondensed,
 * @c condensed, @c semicondensed, @c semiexpanded, @c expanded,
 * @c extraexpanded and @c ultraexpanded. Default value is @c normal. See
 * @ref efl_text_font_weight_get.
 *
 * - @c lang: A 2-letter ISO 639-1 language code, @c auto (to use the system
 * locale setting) or @c none (to disable language support). Example:
 * <tt>lang=he</tt>. Default value is empty. See @ref efl_text_font_lang_get.
 *
 * - @c color: Color code for the text (See bottom for the complete list of
 * supported codes). Default value is <tt>rgba(0,0,0,0)</tt> meaning that
 * no text will be rendered. Requires @c font and @c font_size. See
 * @ref efl_text_color_get.
 *
 * - @c underline_color: Color code for the text underline (See bottom for the
 * complete list of supported codes). Default value is
 * <tt>rgba(0,0,0,0)</tt> meaning that no underline will be rendered. Requires
 * @c underline_type. See @ref efl_text_underline_color_get.
 *
 * - @c secondary_underline_color: Color code for the secondary text underline
 * (See bottom for the complete list of supported codes). Only valid when
 * <tt>underline_type=double</tt>. Default value is <tt>rgba(0,0,0,0)</tt>
 * meaning that secondary underline will not be rendered. See
 * @ref efl_text_secondary_underline_color_get.
 *
 * - @c underline_dashed_color: Color code for the dashed underline (See bottom
 * for the complete list of supported codes). Only valid when
 * <tt>underline_type=dashed</tt>. Default value is <tt>rgba(0,0,0,0)</tt>
 * meaning that dashed underline will not be rendered. See
 * @ref efl_text_underline_dashed_color_get.
 *
 * - @c outline_color: Color code for the text outline (See bottom for the
 * complete list of supported codes). Only valid when the @c effect_type
 * attribute includes an outline. Default value is <tt>rgba(0,0,0,0)</tt>
 * meaning that no outline will be rendered. See
 * @ref efl_text_outline_color_get.
 *
 * - @c shadow_color: Color code for the text shadow (See bottom for the
 * complete list of supported codes). Only valid when the @c effect_type
 * attribute includes a shadow. Default value is <tt>rgba(0,0,0,0)</tt>
 * meaning that no shadow will be rendered. See @ref efl_text_shadow_color_get.
 *
 * - @c glow_color: Color code for the glow component of the text (See bottom
 * for the complete list of supported codes). Only valid when the
 * @c effect_type attribute includes a glow. Default value is
 * <tt>rgba(0,0,0,0)</tt> meaning that no glow will be rendered. See
 * @ref efl_text_glow_color_get.
 *
 * - @c secondary_glow_color: Color code for the secondary (inner) glow
 * component of the text (See bottom for the complete list of supported codes).
 * Only valid when the @c effect_type attribute includes a glow. Default value
 * is <tt>rgba(0,0,0,0)</tt> meaning that only the primary @c glow_color
 * will be used. See @ref efl_text_secondary_glow_color_get.
 *
 * - @c background_color: Color code for the background of the text (See bottom
 * for the complete list of supported codes). Use a fully transparent color to
 * disable the background. Default value is <tt>rgba(0,0,0,0)</tt> meaning
 * that no background will be rendered. Requires @c background_type. See
 * @ref efl_text_background_color_get.
 *
 * - @c strikethrough_color: Color code for the line striking through the text
 * (See bottom for the complete list of supported codes). Only valid when
 * <tt>strikethrough_type=single</tt> Default value is
 * <tt>rgba(0,0,0,0)</tt> meaning that no strike-through line will be rendered.
 * See @ref efl_text_strikethrough_color_get.
 *
 * - @c align: Horizontal alignment of the text. The value can either be a
 * decimal number ($[0.0] means "left" and <tt>1.0</tt> means "right"), a
 * percentage ($[0%] means "left" and <tt>100%</tt> means "right") or one
 * of: @c auto (Respects LTR/RTL settings), @c locale (Respects language
 * direction settings), @c center (Centers the text in the line), @c middle
 * (Alias for @c center), @c left (Puts the text at the left of the line),
 * @c right (Puts the text at the right of the line), @c start (Alias for
 * @c auto), @c end (Puts the text at the opposite side of LTR/RTL settings).
 * Default value is @c auto. See @ref efl_text_horizontal_align_get.
 *
 * - @c valign: Vertical alignment of the text. The value can either be a
 * decimal number ($[0.0] means "top" and <tt>1.0</tt> means "bottom"), a
 * percentage ($[0%] means "top" and <tt>100%</tt> means "bottom") or one
 * of: @c top (Puts the text at the top of the text box), @c center (Puts the
 * text at the middle of the text box), @c middle (Alias for @c center),
 * @c bottom (Puts the text at the bottom of the text box), @c baseline (Puts
 * the text's baseline at the middle of the text box), @c base (Alias for
 * @c baseline). Default value is @c baseline. See
 * @ref efl_text_vertical_align_get.
 *
 * - @c wrap: Wrapping policy of the text. The value must be one of the
 * following: @c word (Only wraps lines at word boundaries), @c char (Wraps at
 * any character), @c mixed (Wraps at word boundaries if possible, at any
 * character if not), @c hyphenation (Hyphenate if possible, otherwise try
 * wrapping at word boundaries or at any character) or @c none to disable
 * wrapping. Default value is @c none. See @ref efl_text_wrap_get.
 *
 * - @c left_margin: Distance in pixels from the left side of the text block to
 * the beginning of the text (inner margin). The value can be a number (to set
 * the margin), or a number preceded by <tt>+</tt> or <tt>-</tt> to
 * increment or decrement the existing margin value. @c reset is also accepted,
 * to set the margin to 0 pixels. Default value is <tt>0</tt>. Examples:
 * <tt>left_margin=10</tt>, <tt>left_margin=+10</tt>,
 * <tt>left_margin=reset</tt>.
 *
 * - @c right_margin: Distance in pixels from the right side of the text block
 * to the beginning of the text (inner margin). The value can be a number (to
 * set the margin), or a number preceded by <tt>+</tt> or <tt>-</tt>
 * to increment or decrement the existing margin value. @c reset is also
 * accepted, to set the margin to 0 pixels. Default value is <tt>0</tt>.
 * Examples: <tt>right_margin=10</tt>, <tt>right_margin=+10</tt>,
 * <tt>right_margin=reset</tt>.
 *
 * - @c underline_type: Style of the underline. The value must be one of
 * @c none (No underlining), @c single (A single line under the text) ,
 * @c double (Two lines under the text), @c dashed (A dashed line under the
 * text). Default value is @c none. Requires either @c underline_color,
 * @c secondary_underline_color or @c underline_dashed_color. See
 * @ref efl_text_underline_type_get.
 *
 * - @c strikethrough_type: Enables crossed-out text. Possible values are
 * @c single and @c none. Default value is @c none. Requires
 * @c strikethrough_color. See @ref efl_text_strikethrough_type_get.
 *
 * - @c background_type: Enables background color for the text. Possible values
 * are @c solid and @c none. Default value is @c none. Requires
 * @c background_color. See @ref efl_text_background_type_get.
 *
 * - @c effect_type: Controls a number of decorations around the text, like
 * shadow, outline and glow, including combinations of them. Possible values
 * are @c none (No decoration), @c shadow, @c outline, @c soft_outline,
 * @c outline_shadow, @c outline_soft_shadow, @c glow (alias for
 * @c soft_outline), @c far_shadow, @c soft_shadow and @c far_soft_shadow.
 * Default value is @c none. Requires either @c shadow_color, @c glow_color or
 * @c outline_color. See @ref efl_text_effect_type_get
 *
 * - @c shadow_direction: Indicate the shadow direction. Valid positions are
 * @c bottom_right, @c bottom, @c bottom_left, @c left, @c top_left, @c top,
 * @c top_right and @c right. Requires either @c effect_type. See
 * @ref efl_text_shadow_direction_get.
 *
 * - @c tab_stops: Size (in pixels) of the tab character. The value must be a
 * number greater than one. Default value is <tt>32</tt>. See
 * @ref efl_text_tab_stops_get.
 *
 * - @c line_size: Distance (in pixels) from the baseline of one line of text
 * to the next. This is, a value of <tt>0</tt> would render all lines on
 * top of each other (However, this value will be ignored if it results in
 * overlapping lines of text). Setting this value sets @c line_rel_size to
 * <tt>0%</tt> (disables it). Default value is <tt>0</tt>.
 *
 * - @c line_rel_size: Distance (in percentage over the natural line height)
 * from the baseline of one line of text to the next. A value of
 * <tt>100%</tt> does not have any impact, smaller values render lines closer
 * together and bigger values render them further apart. Setting this value
 * sets @c line_size to <tt>0</tt> (disables it). Default value is
 * <tt>0%</tt>.
 *
 * - @c line_gap: Additional empty space (in pixels) between the bottom of one
 * line of text and the top of the next. Setting this value sets
 * @c line_rel_gap to <tt>0%</tt> (disables it). Default value is
 * <tt>0</tt>. See @ref efl_text_line_gap_get.
 *
 * - @c line_rel_gap: Additional empty space (in percentage over the natural
 * line height) between the bottom of one line of text and the top of the next.
 * Setting this value sets @c line_gap to <tt>0</tt> (disables it).
 * Default value is <tt>0%</tt>. See @ref efl_text_line_rel_gap_get.
 *
 * - @c line_fill: An alternate way to specify the @c line_size as a percentage
 * of the canvas height. A value of <tt>100%</tt> means that a single line
 * fills the canvas, whereas <tt>25%</tt> means that 4 lines fit in the
 * same height. When both @c line_fill and @c line_size are specified the one
 * resulting in the smallest line size is used. Default value is
 * <tt>0</tt>.
 *
 * - @c ellipsis: Controls automatic addition of ellipsis "..." to replace text
 * which cannot be shown. The value must be a number indicating the position of
 * the ellipsis inside the visible text. <tt>0.0</tt> means the beginning
 * of the text, <tt>1.0</tt> means the end of the text, and values in
 * between mean the proportional position inside the text. Any value smaller
 * than 0 or greater than 1 disables ellipsis. Default value is
 * <tt>-1</tt>. Examples: <tt>ellipsis=0.5 See 
 * @Efl.Text_Format.ellipsis.</tt>
 *
 * - @c password: Enabling this causes all characters to be replaced by
 * @c replacement_char. This is useful for password input boxes. Value must be
 * either @c on or @c off. Default value is <tt>off</tt>. Requires
 * @c replacement_char. See @ref efl_text_password_get.
 *
 * - @c replacement_char: Character to use instead of the actual characters
 * when @c password is @c on. Default value is empty, meaning that no
 * replacement will take place. Requires @c password. Examples:
 * <tt>replacement_char=*</tt>. See @ref efl_text_replacement_char_get.
 *
 * - @c underline_dashed_width: Length (in pixels) of the dashes when
 * @c underline_type is @c dashed. Default value is <tt>6</tt>. See
 * @ref efl_text_underline_dashed_width_get.
 *
 * - @c underline_dashed_gap: Length (in pixels) of the gaps between the dashes
 * when @c underline_type is @c dashed. Default value is <tt>2</tt>. See
 * @ref efl_text_underline_dashed_gap_get.
 *
 * - @c underline_height: Width (in pixels) of the single underline when
 * @c underline_type is @c single. Default value is <tt>1</tt>. See
 * @ref efl_text_underline_height_get.
 *
 * - @c gfx_filter: Experimental filter name. See @ref Efl_Gfx_Filter for more
 * information.
 *
 * Color codes: Colors can be specified using any of the following formats:
 * <tt>#RRGGBB</tt>, <tt>#RRGGBBAA</tt>, <tt>#RGB</tt>,
 * <tt>#RGBA</tt>, <tt>rgb(r,g,b)</tt>, <tt>rgba(r,g,b,a)</tt>.
 * Additionally, X11 color names like @c red or @c blanchedalmond can be used.
 * See https://en.wikipedia.org/wiki/X11_color_names for the full list.
 *
 * @param[in] obj The object.
 * @param[in] style A whitespace-separated list of
 * <tt>attribute=value</tt> pairs, for example, <tt>font=sans font_size=30 
 * color=white</tt>.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK void efl_canvas_textblock_style_apply(Eo *obj, const char *style);

/**
 * @brief A string representing the complete set of attributes applied to this
 * text object. This includes the default attributes plus any additional style
 * applied with @ref efl_canvas_textblock_style_apply or individual style
 * properties like @ref efl_text_font_slant_get or @ref efl_text_wrap_get.
 *
 * See @ref efl_canvas_textblock_style_apply for the description of all
 * attributes.
 *
 * @param[in] obj The object.
 *
 * @return A whitespace-separated list of <tt>attribute=value</tt> pairs,
 * for example, <tt>font=sans font_size=30 color=white</tt>.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK const char *efl_canvas_textblock_all_styles_get(const Eo *obj);

/**
 * @brief The formatted width and height of this text block.
 *
 * This calculates the actual size after restricting the text block to the
 * current size of the object.
 *
 * The main difference between this and
 * @ref efl_canvas_textblock_size_native_get is that the "native" function does
 * not take wrapping into account: it just calculates the real width of the
 * object as if it was placed on an infinite canvas, while
 * @ref efl_canvas_textblock_size_formatted_get gives the size after wrapping
 * text according to the size restrictions of the object.
 *
 * The formatted width and height do not include padding size. To get the total
 * size of text with style, you need to query padding size from
 * @ref efl_canvas_textblock_style_insets_get.
 *
 * For example a text block containing the text: "You shall not pass!" with no
 * margins or padding and assuming a monospace font and a size of 7x10 char
 * widths (for simplicity) has a native size of 19x1 and a formatted size of
 * 5x4.
 *
 * @param[in] obj The object.
 *
 * @return The formatted size of the object (after wrapping).
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK Eina_Size2D efl_canvas_textblock_size_formatted_get(const Eo *obj);

/**
 * @brief The native width and height of this text block.
 *
 * This calculates the actual size without taking account the current size of
 * the object.
 *
 * The main difference between this and
 * @ref efl_canvas_textblock_size_formatted_get is that the "native" function
 * does not take wrapping into account: it just calculates the real width of
 * the object as if it was placed on an infinite canvas, while
 * @ref efl_canvas_textblock_size_formatted_get gives the size after wrapping
 * text according to the size restrictions of the object.
 *
 * The native width and height do not include padding size. To get the total
 * size of text with style, you need to query padding size from
 * @ref efl_canvas_textblock_style_insets_get.
 *
 * For example a text block containing the text: "You shall not pass!" with no
 * margins or padding and assuming a monospace font and a size of 7x10 char
 * widths (for simplicity) has a native size of 19x1 and a formatted size of
 * 5x4.
 *
 * @param[in] obj The object.
 *
 * @return The native size of the object (without wrapping).
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK Eina_Size2D efl_canvas_textblock_size_native_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Add obstacle object @c eo_obs to be avoided during layout of text.
 *
 * The textblock does the layout of the text according to the position of the
 * obstacle.
 *
 * @param[in] obj The object.
 * @param[in] eo_obs Obstacle object.
 *
 * @return @c true on success.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_textblock_obstacle_add(Eo *obj, Efl_Canvas_Object *eo_obs);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Removes @c eo_obs from observation during text layout.
 *
 * @param[in] obj The object.
 * @param[in] eo_obs Obstacle object.
 *
 * @return @c true on success.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_textblock_obstacle_del(Eo *obj, Efl_Canvas_Object *eo_obs);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Triggers for relayout due to obstacles' state change.
 *
 * The obstacles alone don't affect the layout, until this is called. Use this
 * after doing changes (moving, positioning etc.) in the obstacles that you
 *  would like to be considered in the layout.
 *
 * For example: if you have just repositioned the obstacles to different
 * coordinates relative to the text block, you need to call this so it will
 * consider this new state and will relayout the text.
 *
 * @param[in] obj The object.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK void efl_canvas_textblock_obstacles_update(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Requests to layout the text off the mainloop.
 *
 * Once layout is complete, the result is returned as @ref Eina_Rect, with the
 * @c w and @c h fields set.
 *
 * This can be used to layout Textblock before it is required to layout
 * internally in back thread, which can enhance application performance.
 *
 * @param[in] obj The object.
 *
 * @return Future for layout result.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
EVAS_API EVAS_API_WEAK Eina_Future *efl_canvas_textblock_async_layout(Eo *obj);

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_TEXTBLOCK_EVENT_CHANGED;

/** Called when canvas text changed
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
#define EFL_CANVAS_TEXTBLOCK_EVENT_CHANGED (&(_EFL_CANVAS_TEXTBLOCK_EVENT_CHANGED))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_TEXTBLOCK_EVENT_LAYOUT_FINISHED;

/** Called when the object has been layed out
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
#define EFL_CANVAS_TEXTBLOCK_EVENT_LAYOUT_FINISHED (&(_EFL_CANVAS_TEXTBLOCK_EVENT_LAYOUT_FINISHED))

EVAS_API EVAS_API_WEAK extern const Efl_Event_Description _EFL_CANVAS_TEXTBLOCK_EVENT_STYLE_INSETS_CHANGED;

/** Called when the property @ref efl_canvas_textblock_style_insets_get
 * changed.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Textblock
 */
#define EFL_CANVAS_TEXTBLOCK_EVENT_STYLE_INSETS_CHANGED (&(_EFL_CANVAS_TEXTBLOCK_EVENT_STYLE_INSETS_CHANGED))

#endif
