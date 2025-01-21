#ifndef _EFL_OBJECT_OVERRIDE_EO_H_
#define _EFL_OBJECT_OVERRIDE_EO_H_

#ifndef _EFL_OBJECT_OVERRIDE_EO_CLASS_TYPE
#define _EFL_OBJECT_OVERRIDE_EO_CLASS_TYPE

typedef Eo Efl_Object_Override;

#endif

#ifndef _EFL_OBJECT_OVERRIDE_EO_TYPES
#define _EFL_OBJECT_OVERRIDE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A special class to pass to #eo_super() when using #eo_override()
 *
 * Shouldn't be inherited from or anything of this sort.
 *
 * @ingroup Efl_Object_Override
 */
#define EFL_OBJECT_OVERRIDE_CLASS efl_object_override_class_get()

EO_API EO_API_WEAK const Efl_Class *efl_object_override_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
