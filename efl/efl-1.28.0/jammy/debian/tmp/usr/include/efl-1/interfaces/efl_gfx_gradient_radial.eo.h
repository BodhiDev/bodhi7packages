#ifndef _EFL_GFX_GRADIENT_RADIAL_EO_H_
#define _EFL_GFX_GRADIENT_RADIAL_EO_H_

#ifndef _EFL_GFX_GRADIENT_RADIAL_EO_CLASS_TYPE
#define _EFL_GFX_GRADIENT_RADIAL_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Gradient_Radial;

#endif

#ifndef _EFL_GFX_GRADIENT_RADIAL_EO_TYPES
#define _EFL_GFX_GRADIENT_RADIAL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl graphics gradient radial interface
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
#define EFL_GFX_GRADIENT_RADIAL_INTERFACE efl_gfx_gradient_radial_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_gradient_radial_interface_get(void) EINA_CONST;

/**
 * @brief The center of this radial gradient.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of center point
 * @param[in] y Y co-ordinate of center point
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EAPI EAPI_WEAK void efl_gfx_gradient_radial_center_set(Eo *obj, double x, double y);

/**
 * @brief The center of this radial gradient.
 *
 * @param[in] obj The object.
 * @param[out] x X co-ordinate of center point
 * @param[out] y Y co-ordinate of center point
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EAPI EAPI_WEAK void efl_gfx_gradient_radial_center_get(const Eo *obj, double *x, double *y);

/**
 * @brief The radius of this radial gradient.
 *
 * @param[in] obj The object.
 * @param[in] r Center radius
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EAPI EAPI_WEAK void efl_gfx_gradient_radial_radius_set(Eo *obj, double r);

/**
 * @brief The radius of this radial gradient.
 *
 * @param[in] obj The object.
 *
 * @return Center radius
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EAPI EAPI_WEAK double efl_gfx_gradient_radial_radius_get(const Eo *obj);

/**
 * @brief The focal point of this radial gradient.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of focal point
 * @param[in] y Y co-ordinate of focal point
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EAPI EAPI_WEAK void efl_gfx_gradient_radial_focal_set(Eo *obj, double x, double y);

/**
 * @brief The focal point of this radial gradient.
 *
 * @param[in] obj The object.
 * @param[out] x X co-ordinate of focal point
 * @param[out] y Y co-ordinate of focal point
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EAPI EAPI_WEAK void efl_gfx_gradient_radial_focal_get(const Eo *obj, double *x, double *y);
#endif /* EFL_BETA_API_SUPPORT */

#endif
