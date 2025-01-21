#ifndef _EFL_THREAD_EO_H_
#define _EFL_THREAD_EO_H_

#ifndef _EFL_THREAD_EO_CLASS_TYPE
#define _EFL_THREAD_EO_CLASS_TYPE

typedef Eo Efl_Thread;

#endif

#ifndef _EFL_THREAD_EO_TYPES
#define _EFL_THREAD_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
#define EFL_THREAD_CLASS efl_thread_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_thread_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
