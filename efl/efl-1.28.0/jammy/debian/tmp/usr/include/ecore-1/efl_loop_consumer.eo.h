#ifndef _EFL_LOOP_CONSUMER_EO_H_
#define _EFL_LOOP_CONSUMER_EO_H_

#ifndef _EFL_LOOP_CONSUMER_EO_CLASS_TYPE
#define _EFL_LOOP_CONSUMER_EO_CLASS_TYPE

typedef Eo Efl_Loop_Consumer;

#endif

#ifndef _EFL_LOOP_CONSUMER_EO_TYPES
#define _EFL_LOOP_CONSUMER_EO_TYPES


#endif
/** An @ref Efl_Loop_Consumer is a class which requires one of the parents to
 * provide an @ref Efl_Loop interface when performing @ref efl_provider_find.
 * It will enforce this by only allowing parents which provide such an
 * interface or @c NULL.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Consumer
 */
#define EFL_LOOP_CONSUMER_CLASS efl_loop_consumer_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_loop_consumer_class_get(void) EINA_CONST;

/**
 * @brief Handle of the loop this object belongs to.
 *
 * @param[in] obj The object.
 *
 * @return Efl loop.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Consumer
 */
EAPI EAPI_WEAK Efl_Loop *efl_loop_get(const Eo *obj);

/**
 * @brief Creates a new future that is already resolved to a value.
 *
 * This function creates a new future with an already known value, that will be
 * resolved and dispatched by the loop scheduler as usual.
 *
 * This is a helper that behaves the same as eina_future_resolved.
 *
 * @param[in] obj The object.
 * @param[in] result The value to be delivered.
 *
 * @return The future or @c NULL on error.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Consumer
 */
EAPI EAPI_WEAK Eina_Future *efl_loop_future_resolved(const Eo *obj, Eina_Value result);

/**
 * @brief Creates a new future that is already rejected to a specified error
 * using the @ref efl_loop_get.
 *
 * This function creates a new future with an already known error, that will be
 * resolved and dispatched by the loop scheduler as usual.
 *
 * This is a helper that behaves the same as @ref eina_future_rejected.
 *
 * @param[in] obj The object.
 * @param[in] error An Eina_Error value
 *
 * @return The future or @c NULL on error.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Consumer
 */
EAPI EAPI_WEAK Eina_Future *efl_loop_future_rejected(const Eo *obj, Eina_Error error);

/**
 * @brief Create a new promise with the scheduler coming from the loop provided
 * by this object.
 *
 * @note You should not use eina_promise_data_set as this function rely on
 * controlling the promise data.
 *
 * @param[in] obj The object.
 *
 * @return The new promise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Consumer
 */
EAPI EAPI_WEAK Eina_Promise *efl_loop_promise_new(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

#endif
