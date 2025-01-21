#ifndef _EFL_GFX_COLOR_CLASS_EO_H_
#define _EFL_GFX_COLOR_CLASS_EO_H_

#ifndef _EFL_GFX_COLOR_CLASS_EO_CLASS_TYPE
#define _EFL_GFX_COLOR_CLASS_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Color_Class;

#endif

#ifndef _EFL_GFX_COLOR_CLASS_EO_TYPES
#define _EFL_GFX_COLOR_CLASS_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This mixin provides an interface for objects supporting color classes (this
 * is, named colors) and provides a helper method to also allow hexadecimal
 * color codes.
 *
 * @ingroup Efl_Gfx_Color_Class
 */
#define EFL_GFX_COLOR_CLASS_MIXIN efl_gfx_color_class_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_color_class_mixin_get(void) EINA_CONST;

/**
 * @brief Color for the color class.
 *
 * This property sets the color values for a color class. This will cause all
 * edje parts in the specified object that have the specified color class to
 * have their colors multiplied by these values.
 *
 * The first color is the object, the second is the text outline, and the third
 * is the text shadow. (Note that the last two only apply to text parts).
 *
 * Setting color emits a signal "color_class,set" with source being the given
 * color.
 *
 * When retrieving the color of an object, if no explicit object color is set,
 * then global values will be used.
 *
 * @note These color values are expected to be premultiplied by @c a.
 *
 * @param[in] obj The object.
 * @param[in] color_class The name of color class
 * @param[in] layer The layer to set the color
 * @param[in] r The intensity of the red color
 * @param[in] g The intensity of the green color
 * @param[in] b The intensity of the blue color
 * @param[in] a The alpha value
 *
 * @return @c true if setting the color succeeded, @c false otherwise
 *
 * @ingroup Efl_Gfx_Color_Class
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_color_class_set(Eo *obj, const char *color_class, Efl_Gfx_Color_Class_Layer layer, int r, int g, int b, int a);

/**
 * @brief Color for the color class.
 *
 * This property sets the color values for a color class. This will cause all
 * edje parts in the specified object that have the specified color class to
 * have their colors multiplied by these values.
 *
 * The first color is the object, the second is the text outline, and the third
 * is the text shadow. (Note that the last two only apply to text parts).
 *
 * Setting color emits a signal "color_class,set" with source being the given
 * color.
 *
 * When retrieving the color of an object, if no explicit object color is set,
 * then global values will be used.
 *
 * @note These color values are expected to be premultiplied by @c a.
 *
 * @param[in] obj The object.
 * @param[in] color_class The name of color class
 * @param[in] layer The layer to set the color
 * @param[out] r The intensity of the red color
 * @param[out] g The intensity of the green color
 * @param[out] b The intensity of the blue color
 * @param[out] a The alpha value
 *
 * @return @c true if getting the color succeeded, @c false otherwise
 *
 * @ingroup Efl_Gfx_Color_Class
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_color_class_get(const Eo *obj, const char *color_class, Efl_Gfx_Color_Class_Layer layer, int *r, int *g, int *b, int *a);

/**
 * @brief Hexadecimal color code string of the color class.
 *
 * This property sets the color values for a color class. This will cause all
 * edje parts in the specified object that have the specified color class to
 * have their colors multiplied by these values.
 *
 * The first color is the object, the second is the text outline, and the third
 * is the text shadow. (Note that the last two only apply to text parts).
 *
 * Setting color emits a signal "color_class,set" with source being the given
 * color.
 *
 * When retrieving the color of an object, if no explicit object color is set,
 * then global values will be used.
 *
 * @note These color values are expected to be premultiplied by the alpha.
 *
 * @param[in] obj The object.
 * @param[in] color_class The name of color class
 * @param[in] layer The layer to set the color
 * @param[in] colorcode the hex color code.
 *
 * @return @c true if setting the color succeeded, @c false otherwise
 *
 * @ingroup Efl_Gfx_Color_Class
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_color_class_code_set(Eo *obj, const char *color_class, Efl_Gfx_Color_Class_Layer layer, const char *colorcode);

/**
 * @brief Hexadecimal color code string of the color class.
 *
 * This property sets the color values for a color class. This will cause all
 * edje parts in the specified object that have the specified color class to
 * have their colors multiplied by these values.
 *
 * The first color is the object, the second is the text outline, and the third
 * is the text shadow. (Note that the last two only apply to text parts).
 *
 * Setting color emits a signal "color_class,set" with source being the given
 * color.
 *
 * When retrieving the color of an object, if no explicit object color is set,
 * then global values will be used.
 *
 * @note These color values are expected to be premultiplied by the alpha.
 *
 * @param[in] obj The object.
 * @param[in] color_class The name of color class
 * @param[in] layer The layer to set the color
 *
 * @return the hex color code.
 *
 * @ingroup Efl_Gfx_Color_Class
 */
EAPI EAPI_WEAK const char *efl_gfx_color_class_code_get(const Eo *obj, const char *color_class, Efl_Gfx_Color_Class_Layer layer);

/**
 * @brief Get the description of a color class.
 *
 * This function gets the description of a color class in use by an object.
 *
 * @param[in] obj The object.
 * @param[in] color_class The name of color class
 *
 * @return The description of the target color class or @c null if not found
 *
 * @ingroup Efl_Gfx_Color_Class
 */
EAPI EAPI_WEAK const char *efl_gfx_color_class_description_get(const Eo *obj, const char *color_class);

/**
 * @brief Delete the color class.
 *
 * This function deletes any values for the specified color class.
 *
 * Deleting the color class will revert it to the values defined by
 * @ref efl_gfx_color_class_set() or the color class defined in the theme file.
 *
 * Deleting the color class will emit the signal "color_class,del" for the
 * given Edje object.
 *
 * @param[in] obj The object.
 * @param[in] color_class The name of color_class
 *
 * @ingroup Efl_Gfx_Color_Class
 */
EAPI EAPI_WEAK void efl_gfx_color_class_del(Eo *obj, const char *color_class);

/**
 * @brief Delete all color classes defined in object level.
 *
 * This function deletes any color classes defined in object level. Clearing
 * color classes will revert the color of all edje parts to the values defined
 * in global level or theme file.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Gfx_Color_Class
 */
EAPI EAPI_WEAK void efl_gfx_color_class_clear(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
