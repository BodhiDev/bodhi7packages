#ifndef _EFL_BOUNCE_INTERPOLATOR_EO_H_
#define _EFL_BOUNCE_INTERPOLATOR_EO_H_

#ifndef _EFL_BOUNCE_INTERPOLATOR_EO_CLASS_TYPE
#define _EFL_BOUNCE_INTERPOLATOR_EO_CLASS_TYPE

typedef Eo Efl_Bounce_Interpolator;

#endif

#ifndef _EFL_BOUNCE_INTERPOLATOR_EO_TYPES
#define _EFL_BOUNCE_INTERPOLATOR_EO_TYPES


#endif
/**
 * @brief Bouncing interpolator. The value quickly reaches <tt>1.0</tt>
 * and then bounces back a number of times before stopping at <tt>1.0</tt>
 * .
 *
 * The number of bounces and how far it goes back on every bounce can be
 * customized.
 *
 * @since 1.24
 *
 * @ingroup Efl_Bounce_Interpolator
 */
#define EFL_BOUNCE_INTERPOLATOR_CLASS efl_bounce_interpolator_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_bounce_interpolator_class_get(void) EINA_CONST;

/**
 * @brief Customize the number of bounces.
 *
 * @param[in] obj The object.
 * @param[in] bounces Number of bounces before stopping.
 *
 * @since 1.24
 *
 * @ingroup Efl_Bounce_Interpolator
 */
EAPI EAPI_WEAK void efl_bounce_interpolator_bounces_set(Eo *obj, int bounces);

/**
 * @brief Customize the number of bounces.
 *
 * @param[in] obj The object.
 *
 * @return Number of bounces before stopping.
 *
 * @since 1.24
 *
 * @ingroup Efl_Bounce_Interpolator
 */
EAPI EAPI_WEAK int efl_bounce_interpolator_bounces_get(const Eo *obj);

/**
 * @brief Customize the rigidness.
 *
 * @param[in] obj The object.
 * @param[in] rigidness How much energy is lost on every bounce. Higher numbers
 * result in smaller bounces (lesser bounciness).
 *
 * @since 1.24
 *
 * @ingroup Efl_Bounce_Interpolator
 */
EAPI EAPI_WEAK void efl_bounce_interpolator_rigidness_set(Eo *obj, double rigidness);

/**
 * @brief Customize the rigidness.
 *
 * @param[in] obj The object.
 *
 * @return How much energy is lost on every bounce. Higher numbers result in
 * smaller bounces (lesser bounciness).
 *
 * @since 1.24
 *
 * @ingroup Efl_Bounce_Interpolator
 */
EAPI EAPI_WEAK double efl_bounce_interpolator_rigidness_get(const Eo *obj);

#endif
