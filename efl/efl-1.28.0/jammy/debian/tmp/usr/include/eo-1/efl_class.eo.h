#ifndef _EFL_CLASS_EO_H_
#define _EFL_CLASS_EO_H_

#ifndef _EFL_CLASS_EO_CLASS_TYPE
#define _EFL_CLASS_EO_CLASS_TYPE

typedef Eo Efl_Class;

#endif

#ifndef _EFL_CLASS_EO_TYPES
#define _EFL_CLASS_EO_TYPES


#endif
/** Abstract Efl class
 *
 * @since 1.22
 *
 * @ingroup Efl_Class
 */
#define EFL_CLASS_CLASS efl_class_class_get()

EO_API EO_API_WEAK const Efl_Class *efl_class_class_get(void) EINA_CONST;

#endif
