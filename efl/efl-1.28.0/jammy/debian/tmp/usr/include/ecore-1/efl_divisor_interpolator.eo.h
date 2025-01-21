#ifndef _EFL_DIVISOR_INTERPOLATOR_EO_H_
#define _EFL_DIVISOR_INTERPOLATOR_EO_H_

#ifndef _EFL_DIVISOR_INTERPOLATOR_EO_CLASS_TYPE
#define _EFL_DIVISOR_INTERPOLATOR_EO_CLASS_TYPE

typedef Eo Efl_Divisor_Interpolator;

#endif

#ifndef _EFL_DIVISOR_INTERPOLATOR_EO_TYPES
#define _EFL_DIVISOR_INTERPOLATOR_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Divisor interpolator.
 *
 * @ingroup Efl_Divisor_Interpolator
 */
#define EFL_DIVISOR_INTERPOLATOR_CLASS efl_divisor_interpolator_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_divisor_interpolator_class_get(void) EINA_CONST;

/**
 * @brief Customize divisor factor.
 *
 * @param[in] obj The object.
 * @param[in] divisor Divisor.
 *
 * @ingroup Efl_Divisor_Interpolator
 */
EAPI EAPI_WEAK void efl_divisor_interpolator_divisor_set(Eo *obj, double divisor);

/**
 * @brief Customize divisor factor.
 *
 * @param[in] obj The object.
 *
 * @return Divisor.
 *
 * @ingroup Efl_Divisor_Interpolator
 */
EAPI EAPI_WEAK double efl_divisor_interpolator_divisor_get(const Eo *obj);

/**
 * @brief Customize power factor.
 *
 * @param[in] obj The object.
 * @param[in] power Exponent.
 *
 * @ingroup Efl_Divisor_Interpolator
 */
EAPI EAPI_WEAK void efl_divisor_interpolator_power_set(Eo *obj, int power);

/**
 * @brief Customize power factor.
 *
 * @param[in] obj The object.
 *
 * @return Exponent.
 *
 * @ingroup Efl_Divisor_Interpolator
 */
EAPI EAPI_WEAK int efl_divisor_interpolator_power_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
