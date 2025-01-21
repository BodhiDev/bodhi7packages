#ifndef _EFL_LINEAR_INTERPOLATOR_EO_H_
#define _EFL_LINEAR_INTERPOLATOR_EO_H_

#ifndef _EFL_LINEAR_INTERPOLATOR_EO_CLASS_TYPE
#define _EFL_LINEAR_INTERPOLATOR_EO_CLASS_TYPE

typedef Eo Efl_Linear_Interpolator;

#endif

#ifndef _EFL_LINEAR_INTERPOLATOR_EO_TYPES
#define _EFL_LINEAR_INTERPOLATOR_EO_TYPES


#endif
/** Linear interpolation (pass-through). Input values are used unmodified as
 * output.
 *
 * @since 1.24
 *
 * @ingroup Efl_Linear_Interpolator
 */
#define EFL_LINEAR_INTERPOLATOR_CLASS efl_linear_interpolator_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_linear_interpolator_class_get(void) EINA_CONST;

#endif
