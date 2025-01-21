#ifndef _EFL_TEXT_MARKUP_EO_H_
#define _EFL_TEXT_MARKUP_EO_H_

#ifndef _EFL_TEXT_MARKUP_EO_CLASS_TYPE
#define _EFL_TEXT_MARKUP_EO_CLASS_TYPE

typedef Eo Efl_Text_Markup;

#endif

#ifndef _EFL_TEXT_MARKUP_EO_TYPES
#define _EFL_TEXT_MARKUP_EO_TYPES


#endif
/** Markup data that populates the text object's style and format
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Markup
 */
#define EFL_TEXT_MARKUP_INTERFACE efl_text_markup_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_text_markup_interface_get(void) EINA_CONST;

/**
 * @brief Markup property
 *
 * @param[in] obj The object.
 * @param[in] markup The markup-text representation set to this text.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Markup
 */
EAPI EAPI_WEAK void efl_text_markup_set(Eo *obj, const char *markup);

/**
 * @brief Markup property
 *
 * @param[in] obj The object.
 *
 * @return The markup-text representation set to this text.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Markup
 */
EAPI EAPI_WEAK const char *efl_text_markup_get(const Eo *obj);

#endif
