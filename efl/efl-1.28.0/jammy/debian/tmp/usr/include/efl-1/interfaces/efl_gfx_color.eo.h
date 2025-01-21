#ifndef _EFL_GFX_COLOR_EO_H_
#define _EFL_GFX_COLOR_EO_H_

#ifndef _EFL_GFX_COLOR_EO_CLASS_TYPE
#define _EFL_GFX_COLOR_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Color;

#endif

#ifndef _EFL_GFX_COLOR_EO_TYPES
#define _EFL_GFX_COLOR_EO_TYPES


#endif
/** Efl Gfx Color mixin class
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Color
 */
#define EFL_GFX_COLOR_MIXIN efl_gfx_color_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_color_mixin_get(void) EINA_CONST;

/**
 * @brief The general/main color of the given Evas object.
 *
 * Represents the main color's RGB component (and alpha channel) values, which
 * range from 0 to 255. For the alpha channel, which defines the object's
 * transparency level, 0 means totally transparent, while 255 means opaque.
 * These color values are premultiplied by the alpha value.
 *
 * Usually you'll use this attribute for text and rectangle objects, where the
 * main color is the only color. If set for objects which themselves have
 * colors, like the images one, those colors get modulated by this one.
 *
 * All newly created Evas rectangles get the default color values of 255 255
 * 255 255 (opaque white).
 *
 * When reading this property, use @c NULL pointers on the components you're
 * not interested in and they'll be ignored by the function.
 *
 * @param[in] obj The object.
 * @param[in] r
 * @param[in] g
 * @param[in] b
 * @param[in] a
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Color
 */
EAPI EAPI_WEAK void efl_gfx_color_set(Eo *obj, int r, int g, int b, int a);

/**
 * @brief The general/main color of the given Evas object.
 *
 * Represents the main color's RGB component (and alpha channel) values, which
 * range from 0 to 255. For the alpha channel, which defines the object's
 * transparency level, 0 means totally transparent, while 255 means opaque.
 * These color values are premultiplied by the alpha value.
 *
 * Usually you'll use this attribute for text and rectangle objects, where the
 * main color is the only color. If set for objects which themselves have
 * colors, like the images one, those colors get modulated by this one.
 *
 * All newly created Evas rectangles get the default color values of 255 255
 * 255 255 (opaque white).
 *
 * When reading this property, use @c NULL pointers on the components you're
 * not interested in and they'll be ignored by the function.
 *
 * @param[in] obj The object.
 * @param[out] r
 * @param[out] g
 * @param[out] b
 * @param[out] a
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Color
 */
EAPI EAPI_WEAK void efl_gfx_color_get(const Eo *obj, int *r, int *g, int *b, int *a);

/**
 * @brief Hexadecimal color code of given Evas object (#RRGGBBAA).
 *
 * @param[in] obj The object.
 * @param[in] colorcode the hex color code.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Color
 */
EAPI EAPI_WEAK void efl_gfx_color_code_set(Eo *obj, const char *colorcode);

/**
 * @brief Hexadecimal color code of given Evas object (#RRGGBBAA).
 *
 * @param[in] obj The object.
 *
 * @return the hex color code.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Color
 */
EAPI EAPI_WEAK const char *efl_gfx_color_code_get(const Eo *obj);

#endif
