#ifndef _EFL_SINUSOIDAL_INTERPOLATOR_EO_H_
#define _EFL_SINUSOIDAL_INTERPOLATOR_EO_H_

#ifndef _EFL_SINUSOIDAL_INTERPOLATOR_EO_CLASS_TYPE
#define _EFL_SINUSOIDAL_INTERPOLATOR_EO_CLASS_TYPE

typedef Eo Efl_Sinusoidal_Interpolator;

#endif

#ifndef _EFL_SINUSOIDAL_INTERPOLATOR_EO_TYPES
#define _EFL_SINUSOIDAL_INTERPOLATOR_EO_TYPES


#endif
/**
 * @brief Sinusoidal interpolator. It starts slow, then moves quickly and then
 * slows down again before stopping.
 *
 * How long it stays in the quick zone (the slope of the curve) can be
 * customized.
 *
 * @since 1.24
 *
 * @ingroup Efl_Sinusoidal_Interpolator
 */
#define EFL_SINUSOIDAL_INTERPOLATOR_CLASS efl_sinusoidal_interpolator_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_sinusoidal_interpolator_class_get(void) EINA_CONST;

/**
 * @brief Customize the sinusoidal effect.
 *
 * @param[in] obj The object.
 * @param[in] slope How steep is the effect. <tt>0</tt> performs a linear
 * interpolation, <tt>1</tt> corresponds to a sinus function and higher
 * numbers produce an increasingly steep effect.
 *
 * @since 1.24
 *
 * @ingroup Efl_Sinusoidal_Interpolator
 */
EAPI EAPI_WEAK void efl_sinusoidal_interpolator_slope_set(Eo *obj, double slope);

/**
 * @brief Customize the sinusoidal effect.
 *
 * @param[in] obj The object.
 *
 * @return How steep is the effect. <tt>0</tt> performs a linear
 * interpolation, <tt>1</tt> corresponds to a sinus function and higher
 * numbers produce an increasingly steep effect.
 *
 * @since 1.24
 *
 * @ingroup Efl_Sinusoidal_Interpolator
 */
EAPI EAPI_WEAK double efl_sinusoidal_interpolator_slope_get(const Eo *obj);

#endif
