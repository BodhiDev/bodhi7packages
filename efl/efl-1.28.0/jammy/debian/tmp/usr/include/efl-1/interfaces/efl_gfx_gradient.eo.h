#ifndef _EFL_GFX_GRADIENT_EO_H_
#define _EFL_GFX_GRADIENT_EO_H_

#ifndef _EFL_GFX_GRADIENT_EO_CLASS_TYPE
#define _EFL_GFX_GRADIENT_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Gradient;

#endif

#ifndef _EFL_GFX_GRADIENT_EO_TYPES
#define _EFL_GFX_GRADIENT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl graphics gradient interface
 *
 * @ingroup Efl_Gfx_Gradient
 */
#define EFL_GFX_GRADIENT_INTERFACE efl_gfx_gradient_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_gradient_interface_get(void) EINA_CONST;

/**
 * @brief The list of color stops for the gradient
 *
 * @param[in] obj The object.
 * @param[in] colors Color stops list
 * @param[in] length Length of the list
 *
 * @ingroup Efl_Gfx_Gradient
 */
EAPI EAPI_WEAK void efl_gfx_gradient_stop_set(Eo *obj, const Efl_Gfx_Gradient_Stop *colors, unsigned int length);

/**
 * @brief The list of color stops for the gradient
 *
 * @param[in] obj The object.
 * @param[out] colors Color stops list
 * @param[out] length Length of the list
 *
 * @ingroup Efl_Gfx_Gradient
 */
EAPI EAPI_WEAK void efl_gfx_gradient_stop_get(const Eo *obj, const Efl_Gfx_Gradient_Stop **colors, unsigned int *length);

/**
 * @brief The spread method that should be used for this gradient. The default
 * is @ref EFL_GFX_GRADIENT_SPREAD_PAD.
 *
 * @param[in] obj The object.
 * @param[in] s Spread type to be used.
 *
 * @ingroup Efl_Gfx_Gradient
 */
EAPI EAPI_WEAK void efl_gfx_gradient_spread_set(Eo *obj, Efl_Gfx_Gradient_Spread s);

/**
 * @brief The spread method that should be used for this gradient. The default
 * is @ref EFL_GFX_GRADIENT_SPREAD_PAD.
 *
 * @param[in] obj The object.
 *
 * @return Spread type to be used.
 *
 * @ingroup Efl_Gfx_Gradient
 */
EAPI EAPI_WEAK Efl_Gfx_Gradient_Spread efl_gfx_gradient_spread_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
