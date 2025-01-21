#ifndef _EFL_APPTHREAD_EO_H_
#define _EFL_APPTHREAD_EO_H_

#ifndef _EFL_APPTHREAD_EO_CLASS_TYPE
#define _EFL_APPTHREAD_EO_CLASS_TYPE

typedef Eo Efl_Appthread;

#endif

#ifndef _EFL_APPTHREAD_EO_TYPES
#define _EFL_APPTHREAD_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This class houses the application's thread and main loop. It works
 * similarly to @ref Efl_App but allows communicating with it from a different
 * thread through the @ref Efl_ThreadIO, @ref Efl_Io_Reader and
 * @ref Efl_Io_Writer interfaces. Methods can be scheduled to be executed in
 * this thread using @ref efl_threadio_call and @ref efl_threadio_call_sync.
 *
 * @ingroup Efl_Appthread
 */
#define EFL_APPTHREAD_CLASS efl_appthread_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_appthread_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
