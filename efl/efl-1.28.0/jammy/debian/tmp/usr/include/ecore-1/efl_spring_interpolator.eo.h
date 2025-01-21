#ifndef _EFL_SPRING_INTERPOLATOR_EO_H_
#define _EFL_SPRING_INTERPOLATOR_EO_H_

#ifndef _EFL_SPRING_INTERPOLATOR_EO_CLASS_TYPE
#define _EFL_SPRING_INTERPOLATOR_EO_CLASS_TYPE

typedef Eo Efl_Spring_Interpolator;

#endif

#ifndef _EFL_SPRING_INTERPOLATOR_EO_TYPES
#define _EFL_SPRING_INTERPOLATOR_EO_TYPES


#endif
/**
 * @brief Spring interpolator. The value quickly reaches <tt>1.0</tt> and
 * then oscillates around it a number of times before stopping (as if linked
 * with a spring).
 *
 * The number of oscillations and how quickly it stops can be customized.
 *
 * @since 1.24
 *
 * @ingroup Efl_Spring_Interpolator
 */
#define EFL_SPRING_INTERPOLATOR_CLASS efl_spring_interpolator_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_spring_interpolator_class_get(void) EINA_CONST;

/**
 * @brief Customize the decay factor.
 *
 * @param[in] obj The object.
 * @param[in] decay How quickly energy is lost. Higher numbers result in
 * smaller oscillations.
 *
 * @since 1.24
 *
 * @ingroup Efl_Spring_Interpolator
 */
EAPI EAPI_WEAK void efl_spring_interpolator_decay_set(Eo *obj, double decay);

/**
 * @brief Customize the decay factor.
 *
 * @param[in] obj The object.
 *
 * @return How quickly energy is lost. Higher numbers result in smaller
 * oscillations.
 *
 * @since 1.24
 *
 * @ingroup Efl_Spring_Interpolator
 */
EAPI EAPI_WEAK double efl_spring_interpolator_decay_get(const Eo *obj);

/**
 * @brief Customize number of oscillations.
 *
 * @param[in] obj The object.
 * @param[in] oscillations Number of oscillations before stopping.
 *
 * @since 1.24
 *
 * @ingroup Efl_Spring_Interpolator
 */
EAPI EAPI_WEAK void efl_spring_interpolator_oscillations_set(Eo *obj, int oscillations);

/**
 * @brief Customize number of oscillations.
 *
 * @param[in] obj The object.
 *
 * @return Number of oscillations before stopping.
 *
 * @since 1.24
 *
 * @ingroup Efl_Spring_Interpolator
 */
EAPI EAPI_WEAK int efl_spring_interpolator_oscillations_get(const Eo *obj);

#endif
