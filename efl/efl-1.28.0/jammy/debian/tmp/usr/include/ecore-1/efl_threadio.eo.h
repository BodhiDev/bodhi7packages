#ifndef _EFL_THREADIO_EO_H_
#define _EFL_THREADIO_EO_H_

#ifndef _EFL_THREADIO_EO_CLASS_TYPE
#define _EFL_THREADIO_EO_CLASS_TYPE

typedef Eo Efl_ThreadIO;

#endif

#ifndef _EFL_THREADIO_EO_TYPES
#define _EFL_THREADIO_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** A Function to be called asynchronously on a different thread.
 *
 * @ingroup EflThreadIOCall
 */
typedef void (*EflThreadIOCall)(void *data, const Efl_Event *event);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** A Function to be called synchronously on another thread. Execution will be
 * stopped until this function returns and its return value can be recovered.
 *
 * @ingroup EflThreadIOCallSync
 */
typedef void * (*EflThreadIOCallSync)(void *data, const Efl_Event *event);
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This mixin defines input and output pointers to allow exchanging data with
 * another thread. It also defines a mechanism to call methods on that thread.
 *
 * @ingroup Efl_ThreadIO
 */
#define EFL_THREADIO_MIXIN efl_threadio_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_threadio_mixin_get(void) EINA_CONST;

/**
 * @brief Input data pointer for the thread.
 *
 * @param[in] obj The object.
 * @param[in] data Data pointer.
 *
 * @ingroup Efl_ThreadIO
 */
EAPI EAPI_WEAK void efl_threadio_indata_set(Eo *obj, void *data);

/**
 * @brief Input data pointer for the thread.
 *
 * @param[in] obj The object.
 *
 * @return Data pointer.
 *
 * @ingroup Efl_ThreadIO
 */
EAPI EAPI_WEAK void *efl_threadio_indata_get(const Eo *obj);

/**
 * @brief Output data pointer for the thread.
 *
 * @param[in] obj The object.
 * @param[in] data Data pointer.
 *
 * @ingroup Efl_ThreadIO
 */
EAPI EAPI_WEAK void efl_threadio_outdata_set(Eo *obj, void *data);

/**
 * @brief Output data pointer for the thread.
 *
 * @param[in] obj The object.
 *
 * @return Data pointer.
 *
 * @ingroup Efl_ThreadIO
 */
EAPI EAPI_WEAK void *efl_threadio_outdata_get(const Eo *obj);

/**
 * @brief Executes a method on a different thread, asynchronously.
 *
 * @param[in] obj The object.
 * @param[in] func The method to execute asynchronously.
 *
 * @ingroup Efl_ThreadIO
 */
EAPI EAPI_WEAK void efl_threadio_call(Eo *obj, void *func_data, EflThreadIOCall func, Eina_Free_Cb func_free_cb);

/**
 * @brief Executes a method on a different thread, synchronously. This call
 * will not return until the method finishes and its return value can be
 * recovered.
 *
 * @param[in] obj The object.
 * @param[in] func The method to execute synchronously.
 *
 * @return The return value from the method.
 *
 * @ingroup Efl_ThreadIO
 */
EAPI EAPI_WEAK void *efl_threadio_call_sync(Eo *obj, void *func_data, EflThreadIOCallSync func, Eina_Free_Cb func_free_cb);
#endif /* EFL_BETA_API_SUPPORT */

#endif
