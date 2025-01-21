#ifndef _EFL_ACCELERATE_INTERPOLATOR_EO_H_
#define _EFL_ACCELERATE_INTERPOLATOR_EO_H_

#ifndef _EFL_ACCELERATE_INTERPOLATOR_EO_CLASS_TYPE
#define _EFL_ACCELERATE_INTERPOLATOR_EO_CLASS_TYPE

typedef Eo Efl_Accelerate_Interpolator;

#endif

#ifndef _EFL_ACCELERATE_INTERPOLATOR_EO_TYPES
#define _EFL_ACCELERATE_INTERPOLATOR_EO_TYPES


#endif
/**
 * @brief Accelerated interpolator. It starts slow and accelerates, stopping
 * abruptly when it reaches <tt>1.0</tt>.
 *
 * Internally it uses the first half of a sinus rise (from 0 to 0.5) and the
 * steepness can be customized.
 *
 * @since 1.24
 *
 * @ingroup Efl_Accelerate_Interpolator
 */
#define EFL_ACCELERATE_INTERPOLATOR_CLASS efl_accelerate_interpolator_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_accelerate_interpolator_class_get(void) EINA_CONST;

/**
 * @brief Customize the acceleration effect.
 *
 * @param[in] obj The object.
 * @param[in] slope How steep is the effect. <tt>0</tt> performs a linear
 * interpolation, <tt>1</tt> corresponds to a sinus function and higher
 * numbers produce an increasingly steep effect.
 *
 * @since 1.24
 *
 * @ingroup Efl_Accelerate_Interpolator
 */
EAPI EAPI_WEAK void efl_accelerate_interpolator_slope_set(Eo *obj, double slope);

/**
 * @brief Customize the acceleration effect.
 *
 * @param[in] obj The object.
 *
 * @return How steep is the effect. <tt>0</tt> performs a linear
 * interpolation, <tt>1</tt> corresponds to a sinus function and higher
 * numbers produce an increasingly steep effect.
 *
 * @since 1.24
 *
 * @ingroup Efl_Accelerate_Interpolator
 */
EAPI EAPI_WEAK double efl_accelerate_interpolator_slope_get(const Eo *obj);

#endif
