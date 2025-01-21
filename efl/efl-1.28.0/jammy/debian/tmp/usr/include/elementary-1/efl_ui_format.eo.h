#ifndef _EFL_UI_FORMAT_EO_H_
#define _EFL_UI_FORMAT_EO_H_

#ifndef _EFL_UI_FORMAT_EO_CLASS_TYPE
#define _EFL_UI_FORMAT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Format;

#endif

#ifndef _EFL_UI_FORMAT_EO_TYPES
#define _EFL_UI_FORMAT_EO_TYPES

/** A function taking an @ref Eina_Value and producing its textual
 * representation. See @ref efl_ui_format_func_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format_Func
 */
typedef Eina_Bool (*Efl_Ui_Format_Func)(void *data, Eina_Strbuf *str, const Eina_Value value);

/** A value which should always be displayed as a specific text string. See
 * @ref efl_ui_format_values_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format_Value
 */
typedef struct _Efl_Ui_Format_Value
{
  int value; /**< Input value.
              *
              * @since 1.23 */
  const char *text; /**< Text string to replace it.
                     *
                     * @since 1.23 */
} Efl_Ui_Format_Value;

/** Type of formatting string.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format_String_Type
 */
typedef enum
{
  EFL_UI_FORMAT_STRING_TYPE_SIMPLE = 0, /**< This is the simplest formatting
                                         * mechanism, working pretty much like
                                         * @c printf. Accepted formats are
                                         * @c s, @c f, @c F, @c d, @c u, @c i,
                                         * @c o, @c x and @c X. For example,
                                         * "%1.2f meters", "%.0%%" or "%d
                                         * items".
                                         *
                                         * @since 1.23 */
  EFL_UI_FORMAT_STRING_TYPE_TIME /**< A strftime-style string used to format
                                  * date and time values. For example, "%A" for
                                  * the full name of the day or "%y" for the
                                  * year as a decimal number without a century
                                  * (range 00 to 99). Note that these are not
                                  * the @c printf formats. See the man page for
                                  * the @c strftime function for the complete
                                  * list.
                                  *
                                  * @since 1.23 */
} Efl_Ui_Format_String_Type;


#endif
/**
 * @brief Helper mixin that simplifies converting numerical values to text.
 *
 * A number of widgets represent a numerical value but display a text
 * representation. For example, an @ref Efl_Ui_Progressbar can hold the number
 * 0.75 but display the string "75%", or an @ref Efl_Ui_Spin can hold numbers 1
 * to 7, but display the strings "Monday" thru "Sunday".
 *
 * This conversion can be controlled through the @ref efl_ui_format_func_get,
 * @ref efl_ui_format_values_get and @ref efl_ui_format_string_get properties.
 * Only one of them needs to be set. When more than one is set
 * @ref efl_ui_format_values_get has the highest priority, followed by
 * @ref efl_ui_format_func_get and then @ref efl_ui_format_string_get. If one
 * mechanism fails to produce a valid string the others will be tried (if
 * provided) in descending order of priority. If no user-provided mechanism
 * works, a fallback is used that just displays the value.
 *
 * Widgets including this mixin offer their users different properties to
 * control how @ref Eina_Value's are converted to text.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format
 */
#define EFL_UI_FORMAT_MIXIN efl_ui_format_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_format_mixin_get(void) EINA_CONST;

/**
 * @brief User-provided function which takes care of converting an
 * @ref Eina_Value into a text string. The user is then completely in control
 * of how the string is generated, but it is the most cumbersome method to use.
 * If the conversion fails the other mechanisms will be tried, according to
 * their priorities.
 *
 * @param[in] obj The object.
 * @param[in] func User-provided formatting function.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format
 */
EAPI EAPI_WEAK void efl_ui_format_func_set(Eo *obj, void *func_data, Efl_Ui_Format_Func func, Eina_Free_Cb func_free_cb);

/**
 * @brief User-provided function which takes care of converting an
 * @ref Eina_Value into a text string. The user is then completely in control
 * of how the string is generated, but it is the most cumbersome method to use.
 * If the conversion fails the other mechanisms will be tried, according to
 * their priorities.
 *
 * @param[in] obj The object.
 *
 * @return User-provided formatting function.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format
 */
EAPI EAPI_WEAK Efl_Ui_Format_Func efl_ui_format_func_get(const Eo *obj);

/**
 * @brief User-provided list of values which are to be rendered using specific
 * text strings. This is more convenient to use than
 * @ref efl_ui_format_func_get and is perfectly suited for cases where the
 * strings make more sense than the numerical values. For example, weekday
 * names ("Monday", "Tuesday", ...) are friendlier than numbers 1 to 7. If a
 * value is not found in the list, the other mechanisms will be tried according
 * to their priorities. List members do not need to be in any particular order.
 * They are sorted internally for performance reasons.
 *
 * @param[in] obj The object.
 * @param[in] values Accessor over a list of value-text pairs. The method will
 * dispose of the accessor, but not of its contents. For convenience, Eina
 * offers a range of helper methods to obtain accessors from Eina.Array,
 * Eina.List or even plain C arrays.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format
 */
EAPI EAPI_WEAK void efl_ui_format_values_set(Eo *obj, Eina_Accessor *values EFL_TRANSFER_OWNERSHIP);

/**
 * @brief User-provided list of values which are to be rendered using specific
 * text strings. This is more convenient to use than
 * @ref efl_ui_format_func_get and is perfectly suited for cases where the
 * strings make more sense than the numerical values. For example, weekday
 * names ("Monday", "Tuesday", ...) are friendlier than numbers 1 to 7. If a
 * value is not found in the list, the other mechanisms will be tried according
 * to their priorities. List members do not need to be in any particular order.
 * They are sorted internally for performance reasons.
 *
 * @param[in] obj The object.
 *
 * @return Accessor over a list of value-text pairs. The method will dispose of
 * the accessor, but not of its contents. For convenience, Eina offers a range
 * of helper methods to obtain accessors from Eina.Array, Eina.List or even
 * plain C arrays.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format
 */
EAPI EAPI_WEAK Eina_Accessor *efl_ui_format_values_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief A user-provided, string used to format the numerical value.
 *
 * For example, "%1.2f meters", "%.0%%" or "%d items".
 *
 * This is the simplest formatting mechanism, working pretty much like
 * @c printf.
 *
 * Different format specifiers (the character after the %) are available,
 * depending on the @c type used. Use @ref EFL_UI_FORMAT_STRING_TYPE_SIMPLE for
 * simple numerical values and @ref EFL_UI_FORMAT_STRING_TYPE_TIME for time and
 * date values. For instance, %d means "integer" when the first type is used,
 * but it means "day of the month as a decimal number" in the second.
 *
 * Pass @c NULL to disable this mechanism.
 *
 * @param[in] obj The object.
 * @param[in] string Formatting string containing regular characters and format
 * specifiers.
 * @param[in] type Type of formatting string, which controls how the different
 * format specifiers are to be translated.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format
 */
EAPI EAPI_WEAK void efl_ui_format_string_set(Eo *obj, const char *string, Efl_Ui_Format_String_Type type);

/**
 * @brief A user-provided, string used to format the numerical value.
 *
 * For example, "%1.2f meters", "%.0%%" or "%d items".
 *
 * This is the simplest formatting mechanism, working pretty much like
 * @c printf.
 *
 * Different format specifiers (the character after the %) are available,
 * depending on the @c type used. Use @ref EFL_UI_FORMAT_STRING_TYPE_SIMPLE for
 * simple numerical values and @ref EFL_UI_FORMAT_STRING_TYPE_TIME for time and
 * date values. For instance, %d means "integer" when the first type is used,
 * but it means "day of the month as a decimal number" in the second.
 *
 * Pass @c NULL to disable this mechanism.
 *
 * @param[in] obj The object.
 * @param[out] string Formatting string containing regular characters and
 * format specifiers.
 * @param[out] type Type of formatting string, which controls how the different
 * format specifiers are to be translated.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format
 */
EAPI EAPI_WEAK void efl_ui_format_string_get(const Eo *obj, const char **string, Efl_Ui_Format_String_Type *type);

#ifdef EFL_UI_FORMAT_PROTECTED
/**
 * @brief Internal method to be used by widgets including this mixin to perform
 * the conversion from the internal numerical value into the text
 * representation (Users of these widgets do not need to call this method).
 *
 * @ref efl_ui_format_formatted_value_get uses any user-provided mechanism to
 * perform the conversion, according to their priorities, and implements a
 * simple fallback if all mechanisms fail.
 *
 * @param[in] obj The object.
 * @param[in] str Output formatted string. Its contents will be overwritten by
 * this method.
 * @param[in] value The @ref Eina_Value to convert to text.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format
 */
EAPI EAPI_WEAK void efl_ui_format_formatted_value_get(Eo *obj, Eina_Strbuf *str, const Eina_Value value);
#endif

#ifdef EFL_UI_FORMAT_PROTECTED
/**
 * @brief Internal method to be used by widgets including this mixin. It can
 * only be used when a @ref efl_ui_format_string_get has been supplied, and it
 * returns the number of decimal places that the format string will produce for
 * floating point values.
 *
 * For example, "%.2f" returns 2, and "%d" returns 0;
 *
 * @param[in] obj The object.
 *
 * @return Number of decimal places, or 0 for non-floating point types.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format
 */
EAPI EAPI_WEAK int efl_ui_format_decimal_places_get(Eo *obj);
#endif

#ifdef EFL_UI_FORMAT_PROTECTED
/**
 * @brief Internal method to be implemented by widgets including this mixin.
 *
 * The mixin will call this method to signal the widget that the formatting has
 * changed and therefore the current value should be converted and rendered
 * again. Widgets must typically call @ref efl_ui_format_formatted_value_get
 * and display the returned string. This is something they are already doing
 * (whenever the value changes, for example) so there should be no extra code
 * written to implement this method.
 *
 * @param[in] obj The object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Format
 */
EAPI EAPI_WEAK void efl_ui_format_apply_formatted_value(Eo *obj);
#endif

#endif
