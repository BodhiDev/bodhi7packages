#ifndef _EFL_INTERPOLATOR_EO_H_
#define _EFL_INTERPOLATOR_EO_H_

#ifndef _EFL_INTERPOLATOR_EO_CLASS_TYPE
#define _EFL_INTERPOLATOR_EO_CLASS_TYPE

typedef Eo Efl_Interpolator;

#endif

#ifndef _EFL_INTERPOLATOR_EO_TYPES
#define _EFL_INTERPOLATOR_EO_TYPES


#endif
/**
 * @brief Interface providing interpolation capabilities.
 *
 * In the context of EFL, interpolation is defined as the mapping of values in
 * the <tt>0, 1</tt> range to another range (typically close).
 *
 * This is used for example in animations, where the timer moves linearly from
 * <tt>0.0</tt> to <tt>1.0</tt> but the property being animated can
 * accelerate, decelerate, bounce or even move slightly out-of-bounds and come
 * back.
 *
 * For example implementations see @ref Efl_Accelerate_Interpolator,
 * @ref Efl_Decelerate_Interpolator or @ref Efl_Bounce_Interpolator.
 *
 * @since 1.24
 *
 * @ingroup Efl_Interpolator
 */
#define EFL_INTERPOLATOR_INTERFACE efl_interpolator_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_interpolator_interface_get(void) EINA_CONST;

/**
 * @brief Performs the mapping operation.
 *
 * @param[in] obj The object.
 * @param[in] progress Input value between <tt>0.0</tt> and
 * <tt>1.0</tt>. Values outside this range might yield unpredictable results.
 *
 * @return Output mapped value. Its range is unrestricted. In particular, it
 * might be outside the input <tt>0, 1</tt> range.
 *
 * @since 1.24
 *
 * @ingroup Efl_Interpolator
 */
EAPI EAPI_WEAK double efl_interpolator_interpolate(Eo *obj, double progress);

#endif
