#ifndef _EFL_LOOP_EO_H_
#define _EFL_LOOP_EO_H_

#ifndef _EFL_LOOP_EO_CLASS_TYPE
#define _EFL_LOOP_EO_CLASS_TYPE

typedef Eo Efl_Loop;

#endif

#ifndef _EFL_LOOP_EO_TYPES
#define _EFL_LOOP_EO_TYPES

/** EFL loop arguments data structure
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Arguments
 */
typedef struct _Efl_Loop_Arguments
{
  const Eina_Array *argv; /**< Array with loop arguments
                           *
                           * @since 1.22 */
  Eina_Bool initialization; /**< Set to @c true when the program should
                             * initialize its internal state. This happens once
                             * per process instance.
                             *
                             * @since 1.22 */
} Efl_Loop_Arguments;


#endif
/**
 * @brief The Efl Main Loop
 *
 * The Efl main loop provides a clean and tiny event loop library with many
 * modules to do lots of convenient things for a programmer, saving time and
 * effort. It's lean and designed to work on anything from embedded systems all
 * the way up to large and powerful multi-cpu workstations. The main loop has a
 * number of primitives you can use. It serializes these and allows for greater
 * responsiveness without the need for threads (or any other concurrency).
 * However you can provide these if you need to.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_CLASS efl_loop_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_loop_class_get(void) EINA_CONST;

/** Runs a single iteration of the main loop to process everything on the
 * queue.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK void efl_loop_iterate(Eo *obj);

/**
 * @brief Runs a single iteration of the main loop to process everything on the
 * queue with block/non-blocking status.
 *
 * @param[in] obj The object.
 * @param[in] may_block A flag if the main loop has a possibility of blocking.
 *
 * @return Return from single iteration run
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK int efl_loop_iterate_may_block(Eo *obj, int may_block);

/**
 * @brief Runs the application main loop.
 *
 * @param[in] obj The object.
 *
 * @return Value set by quit()
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK Eina_Value *efl_loop_begin(Eo *obj);

/**
 * @brief Quits the main loop once all the events currently on the queue have
 * been processed.
 *
 * @param[in] obj The object.
 * @param[in] exit_code Returned value by begin()
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK void efl_loop_quit(Eo *obj, Eina_Value exit_code);

/**
 * @brief A future promise that will be resolved from a clean main loop context
 * as soon as possible.
 *
 * This has higher priority, for low priority use @ref efl_loop_idle
 *
 * @param[in] obj The object.
 *
 * @return The future handle.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK Eina_Future *efl_loop_job(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Slow down the loop execution by forcing sleep for a small period of
 * time every time the loop iterates/loops.
 *
 * @param[in] obj The object.
 * @param[in] amount Time to sleep for each "loop iteration"
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK void efl_loop_throttle_set(Eo *obj, double amount);

/**
 * @brief Slow down the loop execution by forcing sleep for a small period of
 * time every time the loop iterates/loops.
 *
 * @param[in] obj The object.
 *
 * @return Time to sleep for each "loop iteration"
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK double efl_loop_throttle_get(const Eo *obj);

#ifdef EFL_LOOP_PROTECTED
/**
 * @brief Retrieves the time at which the last loop stopped waiting for
 * timeouts or events.
 *
 * You should never need/call this, unless you are implementing a custom tick
 * source for an animator.
 *
 * @note The time point must match whatever zero time you get from
 * ecore_time_get() and @ref efl_loop_time_get() (same 0 point). What this
 * point is is undefined, so unless your source uses the same 0 time, then you
 * may have to adjust and do some guessing.
 *
 * @param[in] obj The object.
 * @param[in] timepoint Time in seconds
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK void efl_loop_time_set(Eo *obj, double timepoint);
#endif

/**
 * @brief Retrieves the time at which the last loop stopped waiting for
 * timeouts or events.
 *
 * This gets the time that the main loop ceased waiting for timouts and/or
 * events to come in or for signals or any other interrupt source. This should
 * be considered a reference point for all time based activity that should
 * calculate its timepoint from the return of ecore_loop_time_get(). Note that
 * this time is meant to be used as relative to other times obtained on this
 * run. If you need absolute time references, use a unix timestamp instead.
 *
 * @param[in] obj The object.
 *
 * @return Time in seconds
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK double efl_loop_time_get(const Eo *obj);

/**
 * @brief A future promise that will be resolved from a clean main loop context
 * as soon as the main loop is idle.
 *
 * This is a low priority version of @ref efl_loop_job
 *
 * @param[in] obj The object.
 *
 * @return The future handle.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK Eina_Future *efl_loop_idle(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief A future promise that will be resolved from a clean main loop context
 * after @c time seconds.
 *
 * @param[in] obj The object.
 * @param[in] time The time from now in second that the main loop will wait
 * before triggering it.
 *
 * @return The future handle.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
EAPI EAPI_WEAK Eina_Future *efl_loop_timeout(Eo *obj, double time) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_EVENT_IDLE_ENTER;

/** Event occurs once the main loop enters the idle state.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_IDLE_ENTER (&(_EFL_LOOP_EVENT_IDLE_ENTER))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_EVENT_IDLE_EXIT;

/** Event occurs once the main loop exits the idle state.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_IDLE_EXIT (&(_EFL_LOOP_EVENT_IDLE_EXIT))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_EVENT_IDLE;

/** Event occurs once the main loop is idle. If you keep listening on this
 * event it may increase the burden on your CPU.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_IDLE (&(_EFL_LOOP_EVENT_IDLE))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_EVENT_ARGUMENTS;

/** Event happens when args are provided to the loop by args_add().
 * @return Efl_Loop_Arguments
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_ARGUMENTS (&(_EFL_LOOP_EVENT_ARGUMENTS))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_EVENT_POLL_HIGH;

/** Event occurs multiple times per second. The exact tick is undefined and can
 * be adjusted system-wide.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_POLL_HIGH (&(_EFL_LOOP_EVENT_POLL_HIGH))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_EVENT_POLL_MEDIUM;

/** Event occurs multiple times per minute. The exact tick is undefined and can
 * be adjusted system-wide.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_POLL_MEDIUM (&(_EFL_LOOP_EVENT_POLL_MEDIUM))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_EVENT_POLL_LOW;

/** Event occurs multiple times every 15 minutes. The exact tick is undefined
 * and can be adjusted system-wide.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_POLL_LOW (&(_EFL_LOOP_EVENT_POLL_LOW))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_EVENT_QUIT;

/** Event occurs when the loop was requested to quit externally e.g. by a
 * ctrl+c signal or a request from a parent loop/thread to have the child exit.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_QUIT (&(_EFL_LOOP_EVENT_QUIT))

#endif
