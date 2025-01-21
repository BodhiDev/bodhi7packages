#ifndef _EFL_DECELERATE_INTERPOLATOR_EO_H_
#define _EFL_DECELERATE_INTERPOLATOR_EO_H_

#ifndef _EFL_DECELERATE_INTERPOLATOR_EO_CLASS_TYPE
#define _EFL_DECELERATE_INTERPOLATOR_EO_CLASS_TYPE

typedef Eo Efl_Decelerate_Interpolator;

#endif

#ifndef _EFL_DECELERATE_INTERPOLATOR_EO_TYPES
#define _EFL_DECELERATE_INTERPOLATOR_EO_TYPES


#endif
/**
 * @brief Decelerated interpolator. It starts fast and decelerates, stopping
 * smoothly when it reaches <tt>1.0</tt>.
 *
 * Internally it uses the second half of a sinus rise (from 0.5 to 1.0) and the
 * steepness can be customized through the
 * @ref efl_decelerate_interpolator_slope_get property.
 *
 * @since 1.24
 *
 * @ingroup Efl_Decelerate_Interpolator
 */
#define EFL_DECELERATE_INTERPOLATOR_CLASS efl_decelerate_interpolator_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_decelerate_interpolator_class_get(void) EINA_CONST;

/**
 * @brief Customize the deceleration effect.
 *
 * @param[in] obj The object.
 * @param[in] slope How steep is the effect. <tt>0</tt> performs a linear
 * interpolation, <tt>1</tt> corresponds to a sinus function and higher
 * numbers produce an increasingly steep effect.
 *
 * @since 1.24
 *
 * @ingroup Efl_Decelerate_Interpolator
 */
EAPI EAPI_WEAK void efl_decelerate_interpolator_slope_set(Eo *obj, double slope);

/**
 * @brief Customize the deceleration effect.
 *
 * @param[in] obj The object.
 *
 * @return How steep is the effect. <tt>0</tt> performs a linear
 * interpolation, <tt>1</tt> corresponds to a sinus function and higher
 * numbers produce an increasingly steep effect.
 *
 * @since 1.24
 *
 * @ingroup Efl_Decelerate_Interpolator
 */
EAPI EAPI_WEAK double efl_decelerate_interpolator_slope_get(const Eo *obj);

#endif
