#ifndef _EFL_LOOP_TIMER_EO_H_
#define _EFL_LOOP_TIMER_EO_H_

#ifndef _EFL_LOOP_TIMER_EO_CLASS_TYPE
#define _EFL_LOOP_TIMER_EO_CLASS_TYPE

typedef Eo Efl_Loop_Timer;

#endif

#ifndef _EFL_LOOP_TIMER_EO_TYPES
#define _EFL_LOOP_TIMER_EO_TYPES


#endif
/**
 * @brief Timers are objects that will call a given callback at some point in
 * the future and repeat that tick at a given interval.
 *
 * Timers require the ecore main loop to be running and functioning properly.
 * They do not guarantee exact timing but try to work on a "best effort" basis.
 *
 * The @ref efl_event_freeze and @ref efl_event_thaw calls are used to pause
 * and unpause the timer.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Timer
 */
#define EFL_LOOP_TIMER_CLASS efl_loop_timer_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_loop_timer_class_get(void) EINA_CONST;

/**
 * @brief Interval the timer ticks on.
 *
 * If set during a timer call this will affect the next interval.
 *
 * @param[in] obj The object.
 * @param[in] in The new interval in seconds
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Timer
 */
EAPI EAPI_WEAK void efl_loop_timer_interval_set(Eo *obj, double in);

/**
 * @brief Interval the timer ticks on.
 *
 * @param[in] obj The object.
 *
 * @return The new interval in seconds
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Timer
 */
EAPI EAPI_WEAK double efl_loop_timer_interval_get(const Eo *obj);

/**
 * @brief Pending time regarding a timer.
 *
 * @param[in] obj The object.
 *
 * @return Pending time
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Timer
 */
EAPI EAPI_WEAK double efl_loop_timer_time_pending_get(const Eo *obj);

/**
 * @brief Resets a timer to its full interval. This effectively makes the timer
 * start ticking off from zero now.
 *
 * This is equal to delaying the timer by the already passed time, since the
 * timer started ticking
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Timer
 */
EAPI EAPI_WEAK void efl_loop_timer_reset(Eo *obj);

/** This effectively resets a timer but based on the time when this iteration
 * of the main loop started.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Timer
 */
EAPI EAPI_WEAK void efl_loop_timer_loop_reset(Eo *obj);

/**
 * @brief Adds a delay to the next occurrence of a timer. This doesn't affect
 * the timer interval.
 *
 * @param[in] obj The object.
 * @param[in] add The amount of time by which to delay the timer in seconds
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Timer
 */
EAPI EAPI_WEAK void efl_loop_timer_delay(Eo *obj, double add);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_TIMER_EVENT_TIMER_TICK;

/** Event triggered when the specified time as passed.
 *
 * @since 1.22
 *
 * @ingroup Efl_Loop_Timer
 */
#define EFL_LOOP_TIMER_EVENT_TIMER_TICK (&(_EFL_LOOP_TIMER_EVENT_TIMER_TICK))

#endif
