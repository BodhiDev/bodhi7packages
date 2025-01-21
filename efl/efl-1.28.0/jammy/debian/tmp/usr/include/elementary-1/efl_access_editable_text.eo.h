#ifndef _EFL_ACCESS_EDITABLE_TEXT_EO_H_
#define _EFL_ACCESS_EDITABLE_TEXT_EO_H_

#ifndef _EFL_ACCESS_EDITABLE_TEXT_EO_CLASS_TYPE
#define _EFL_ACCESS_EDITABLE_TEXT_EO_CLASS_TYPE

typedef Eo Efl_Access_Editable_Text;

#endif

#ifndef _EFL_ACCESS_EDITABLE_TEXT_EO_TYPES
#define _EFL_ACCESS_EDITABLE_TEXT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary editable text interface
 *
 * @ingroup Efl_Access_Editable_Text
 */
#define EFL_ACCESS_EDITABLE_TEXT_INTERFACE efl_access_editable_text_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_access_editable_text_interface_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
/**
 * @brief Editable content property
 *
 * @param[in] obj The object.
 * @param[in] string Content
 *
 * @return @c true if setting the value succeeded, @c false otherwise
 *
 * @ingroup Efl_Access_Editable_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_editable_text_content_set(Eo *obj, const char *string);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
/**
 * @brief Insert text at given position
 *
 * @param[in] obj The object.
 * @param[in] string String to be inserted
 * @param[in] position Position to insert string
 *
 * @return @c true if insert succeeded, @c false otherwise
 *
 * @ingroup Efl_Access_Editable_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_editable_text_insert(Eo *obj, const char *string, int position);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
/**
 * @brief Copy text between start and end parameter
 *
 * @param[in] obj The object.
 * @param[in] start Start position to copy
 * @param[in] end End position to copy
 *
 * @return @c true if copy succeeded, @c false otherwise
 *
 * @ingroup Efl_Access_Editable_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_editable_text_copy(Eo *obj, int start, int end);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
/**
 * @brief Cut text between start and end parameter
 *
 * @param[in] obj The object.
 * @param[in] start Start position to cut
 * @param[in] end End position to cut
 *
 * @return @c true if cut succeeded, @c false otherwise
 *
 * @ingroup Efl_Access_Editable_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_editable_text_cut(Eo *obj, int start, int end);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
/**
 * @brief Delete text between start and end parameter
 *
 * @param[in] obj The object.
 * @param[in] start Start position to delete
 * @param[in] end End position to delete
 *
 * @return @c true if delete succeeded, @c false otherwise
 *
 * @ingroup Efl_Access_Editable_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_editable_text_delete(Eo *obj, int start, int end);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
/**
 * @brief Paste text at given position
 *
 * @param[in] obj The object.
 * @param[in] position Position to insert text
 *
 * @return @c true if paste succeeded, @c false otherwise
 *
 * @ingroup Efl_Access_Editable_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_editable_text_paste(Eo *obj, int position);
#endif
#endif /* EFL_BETA_API_SUPPORT */
#endif /* EFL_BETA_API_SUPPORT */

#endif
