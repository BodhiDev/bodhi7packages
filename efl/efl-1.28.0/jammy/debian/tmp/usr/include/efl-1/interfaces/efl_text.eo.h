#ifndef _EFL_TEXT_EO_H_
#define _EFL_TEXT_EO_H_

#ifndef _EFL_TEXT_EO_CLASS_TYPE
#define _EFL_TEXT_EO_CLASS_TYPE

typedef Eo Efl_Text;

#endif

#ifndef _EFL_TEXT_EO_TYPES
#define _EFL_TEXT_EO_TYPES


#endif
/** Efl text interface
 *
 * @since 1.22
 *
 * @ingroup Efl_Text
 */
#define EFL_TEXT_INTERFACE efl_text_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_text_interface_get(void) EINA_CONST;

/**
 * @brief The text string to be displayed by the given text object.
 *
 * Do not release (free) the returned value.
 *
 * @param[in] obj The object.
 * @param[in] text Text string to display.
 *
 * @since 1.22
 *
 * @ingroup Efl_Text
 */
EAPI EAPI_WEAK void efl_text_set(Eo *obj, const char *text);

/**
 * @brief The text string to be displayed by the given text object.
 *
 * Do not release (free) the returned value.
 *
 * @param[in] obj The object.
 *
 * @return Text string to display.
 *
 * @since 1.22
 *
 * @ingroup Efl_Text
 */
EAPI EAPI_WEAK const char *efl_text_get(const Eo *obj);

#endif
