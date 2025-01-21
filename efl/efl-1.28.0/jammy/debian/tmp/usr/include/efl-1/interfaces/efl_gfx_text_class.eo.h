#ifndef _EFL_GFX_TEXT_CLASS_EO_H_
#define _EFL_GFX_TEXT_CLASS_EO_H_

#ifndef _EFL_GFX_TEXT_CLASS_EO_CLASS_TYPE
#define _EFL_GFX_TEXT_CLASS_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Text_Class;

#endif

#ifndef _EFL_GFX_TEXT_CLASS_EO_TYPES
#define _EFL_GFX_TEXT_CLASS_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl Gfx Text Class interface
 *
 * @ingroup Efl_Gfx_Text_Class
 */
#define EFL_GFX_TEXT_CLASS_INTERFACE efl_gfx_text_class_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_text_class_interface_get(void) EINA_CONST;

/**
 * @brief Font and font size from edje text class.
 *
 * When reading the font string will only be valid until the text class is
 * changed or the edje object is deleted.
 *
 * @param[in] obj The object.
 * @param[in] text_class The text class name
 * @param[in] font Font name
 * @param[in] size Font Size
 *
 * @return @c true, on success or @c false, on error
 *
 * @ingroup Efl_Gfx_Text_Class
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_text_class_set(Eo *obj, const char *text_class, const char *font, Efl_Font_Size size);

/**
 * @brief Font and font size from edje text class.
 *
 * When reading the font string will only be valid until the text class is
 * changed or the edje object is deleted.
 *
 * @param[in] obj The object.
 * @param[in] text_class The text class name
 * @param[out] font Font name
 * @param[out] size Font Size
 *
 * @return @c true, on success or @c false, on error
 *
 * @ingroup Efl_Gfx_Text_Class
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_text_class_get(const Eo *obj, const char *text_class, const char **font, Efl_Font_Size *size);

/**
 * @brief Delete the text class.
 *
 * This function deletes any values for the specified text class.
 *
 * Deleting the text class will revert it to the values defined by
 * @ref efl_gfx_text_class_set() or the text class defined in the theme file.
 *
 * @param[in] obj The object.
 * @param[in] text_class The text class to be deleted.
 *
 * @ingroup Efl_Gfx_Text_Class
 */
EAPI EAPI_WEAK void efl_gfx_text_class_del(Eo *obj, const char *text_class);
#endif /* EFL_BETA_API_SUPPORT */

#endif
