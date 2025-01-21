#ifndef _EFL_GFX_BLUR_EO_H_
#define _EFL_GFX_BLUR_EO_H_

#ifndef _EFL_GFX_BLUR_EO_CLASS_TYPE
#define _EFL_GFX_BLUR_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Blur;

#endif

#ifndef _EFL_GFX_BLUR_EO_TYPES
#define _EFL_GFX_BLUR_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A simple API to apply blur effects.
 *
 * Those API's might use @ref Efl_Gfx_Filter internally. It might be necessary
 * to also specify the color of the blur with @ref efl_gfx_color_get.
 *
 * @ingroup Efl_Gfx_Blur
 */
#define EFL_GFX_BLUR_INTERFACE efl_gfx_blur_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_blur_interface_get(void) EINA_CONST;

/**
 * @brief The blur radius in pixels.
 *
 * @param[in] obj The object.
 * @param[in] rx The horizontal blur radius.
 * @param[in] ry The vertical blur radius.
 *
 * @ingroup Efl_Gfx_Blur
 */
EAPI EAPI_WEAK void efl_gfx_blur_radius_set(Eo *obj, double rx, double ry);

/**
 * @brief The blur radius in pixels.
 *
 * @param[in] obj The object.
 * @param[out] rx The horizontal blur radius.
 * @param[out] ry The vertical blur radius.
 *
 * @ingroup Efl_Gfx_Blur
 */
EAPI EAPI_WEAK void efl_gfx_blur_radius_get(const Eo *obj, double *rx, double *ry);

/**
 * @brief An offset relative to the original pixels.
 *
 * This property allows for drop shadow effects.
 *
 * @param[in] obj The object.
 * @param[in] ox Horizontal offset in pixels.
 * @param[in] oy Vertical offset in pixels.
 *
 * @ingroup Efl_Gfx_Blur
 */
EAPI EAPI_WEAK void efl_gfx_blur_offset_set(Eo *obj, double ox, double oy);

/**
 * @brief An offset relative to the original pixels.
 *
 * This property allows for drop shadow effects.
 *
 * @param[in] obj The object.
 * @param[out] ox Horizontal offset in pixels.
 * @param[out] oy Vertical offset in pixels.
 *
 * @ingroup Efl_Gfx_Blur
 */
EAPI EAPI_WEAK void efl_gfx_blur_offset_get(const Eo *obj, double *ox, double *oy);

/**
 * @brief How much the original image should be "grown" before blurring.
 *
 * Growing is a combination of blur & color levels adjustment. If the value of
 * grow is positive, the pixels will appear more "fat" or "bold" than the
 * original. If the value is negative, a shrink effect happens instead.
 *
 * This is can be used efficiently to create glow effects.
 *
 * @param[in] obj The object.
 * @param[in] radius How much to grow the original pixel data.
 *
 * @ingroup Efl_Gfx_Blur
 */
EAPI EAPI_WEAK void efl_gfx_blur_grow_set(Eo *obj, double radius);

/**
 * @brief How much the original image should be "grown" before blurring.
 *
 * Growing is a combination of blur & color levels adjustment. If the value of
 * grow is positive, the pixels will appear more "fat" or "bold" than the
 * original. If the value is negative, a shrink effect happens instead.
 *
 * This is can be used efficiently to create glow effects.
 *
 * @param[in] obj The object.
 *
 * @return How much to grow the original pixel data.
 *
 * @ingroup Efl_Gfx_Blur
 */
EAPI EAPI_WEAK double efl_gfx_blur_grow_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
