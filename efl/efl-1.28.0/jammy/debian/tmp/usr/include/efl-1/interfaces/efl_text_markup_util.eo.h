#ifndef _EFL_TEXT_MARKUP_UTIL_EO_H_
#define _EFL_TEXT_MARKUP_UTIL_EO_H_

#ifndef _EFL_TEXT_MARKUP_UTIL_EO_CLASS_TYPE
#define _EFL_TEXT_MARKUP_UTIL_EO_CLASS_TYPE

typedef Eo Efl_Text_Markup_Util;

#endif

#ifndef _EFL_TEXT_MARKUP_UTIL_EO_TYPES
#define _EFL_TEXT_MARKUP_UTIL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Utility class for markup, such as conversions
 *
 * @ingroup Efl_Text_Markup_Util
 */
#define EFL_TEXT_MARKUP_UTIL_CLASS efl_text_markup_util_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_text_markup_util_class_get(void) EINA_CONST;

/**
 * @brief Converts a given (UTF-8) text to a markup-compatible string. This is
 * used mainly to set a plain text with @ref efl_text_markup_set.
 *
 * @param[in] text The text (UTF-8) to convert to markup.
 *
 * @return The markup representation of given text.
 *
 * @ingroup Efl_Text_Markup_Util
 */
EAPI EAPI_WEAK char *efl_text_markup_util_text_to_markup(const char *text) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Converts a markup string to a (UTF-8) plain text. This is used mainly
 * to set a markup text with the @ref efl_text_set.
 *
 * @param[in] text The markup-text to convert to text (UTF-8).
 *
 * @return The text representation of given markup string.
 *
 * @ingroup Efl_Text_Markup_Util
 */
EAPI EAPI_WEAK char *efl_text_markup_util_markup_to_text(const char *text) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif /* EFL_BETA_API_SUPPORT */

#endif
