#ifndef _EFL_TASK_EO_H_
#define _EFL_TASK_EO_H_

#ifndef _EFL_TASK_EO_CLASS_TYPE
#define _EFL_TASK_EO_CLASS_TYPE

typedef Eo Efl_Task;

#endif

#ifndef _EFL_TASK_EO_TYPES
#define _EFL_TASK_EO_TYPES

/** How much processor time will this task get compared to other tasks running
 * on the same processor.
 *
 * @since 1.22
 *
 * @ingroup Efl_Task_Priority
 */
typedef enum
{
  EFL_TASK_PRIORITY_NORMAL = 0, /**< Neither above nor below average priority.
                                 * This is the default.
                                 *
                                 * @since 1.22 */
  EFL_TASK_PRIORITY_BACKGROUND, /**< Far below average priority.
                                 *
                                 * @since 1.22 */
  EFL_TASK_PRIORITY_LOW, /**< Below average priority.
                          *
                          * @since 1.22 */
  EFL_TASK_PRIORITY_HIGH, /**< Above average priority.
                           *
                           * @since 1.22 */
  EFL_TASK_PRIORITY_ULTRA /**< Far above average priority.
                           *
                           * @since 1.22 */
} Efl_Task_Priority;

/** Flags to further customize task's behavior.
 *
 * @since 1.22
 *
 * @ingroup Efl_Task_Flags
 */
typedef enum
{
  EFL_TASK_FLAGS_NONE = 0, /**< No special flags.
                            *
                            * @since 1.22 */
  EFL_TASK_FLAGS_USE_STDIN = 1, /**< Task will require console input.
                                 *
                                 * @since 1.22 */
  EFL_TASK_FLAGS_USE_STDOUT = 2, /**< Task will require console output.
                                  *
                                  * @since 1.22 */
  EFL_TASK_FLAGS_NO_EXIT_CODE_ERROR = 4, /**< Task will not produce an exit code
                                          * upon termination.
                                          *
                                          * @since 1.22 */
  EFL_TASK_FLAGS_EXIT_WITH_PARENT = 8 /**< Exit when parent exits.
                                       *
                                       * @since 1.22 */
} Efl_Task_Flags;


#endif
/** EFL's abstraction for a task (process).
 *
 * @since 1.22
 *
 * @ingroup Efl_Task
 */
#define EFL_TASK_CLASS efl_task_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_task_class_get(void) EINA_CONST;

/**
 * @brief The priority of this task.
 *
 * @param[in] obj The object.
 * @param[in] priority Desired priority.
 *
 * @since 1.22
 *
 * @ingroup Efl_Task
 */
EAPI EAPI_WEAK void efl_task_priority_set(Eo *obj, Efl_Task_Priority priority);

/**
 * @brief The priority of this task.
 *
 * @param[in] obj The object.
 *
 * @return Desired priority.
 *
 * @since 1.22
 *
 * @ingroup Efl_Task
 */
EAPI EAPI_WEAK Efl_Task_Priority efl_task_priority_get(const Eo *obj);

/**
 * @brief The final exit code of this task. This is the code that will be
 * produced upon task completion.
 *
 * @param[in] obj The object.
 *
 * @return The exit code.
 *
 * @since 1.22
 *
 * @ingroup Efl_Task
 */
EAPI EAPI_WEAK int efl_task_exit_code_get(const Eo *obj);

/**
 * @brief Flags to further customize task's behavior.
 *
 * @param[in] obj The object.
 * @param[in] flags Desired task flags.
 *
 * @since 1.22
 *
 * @ingroup Efl_Task
 */
EAPI EAPI_WEAK void efl_task_flags_set(Eo *obj, Efl_Task_Flags flags);

/**
 * @brief Flags to further customize task's behavior.
 *
 * @param[in] obj The object.
 *
 * @return Desired task flags.
 *
 * @since 1.22
 *
 * @ingroup Efl_Task
 */
EAPI EAPI_WEAK Efl_Task_Flags efl_task_flags_get(const Eo *obj);

/**
 * @brief Actually run the task.
 *
 * @param[in] obj The object.
 *
 * @return On success in starting the task, return true, otherwise false
 *
 * @since 1.22
 *
 * @ingroup Efl_Task
 */
EAPI EAPI_WEAK Eina_Bool efl_task_run(Eo *obj);

/** Request the task end (may send a signal or interrupt signal resulting in a
 * terminate event being triggered in the target task loop).
 *
 * @since 1.22
 *
 * @ingroup Efl_Task
 */
EAPI EAPI_WEAK void efl_task_end(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_TASK_EVENT_EXIT;

/** Called when the task exits. You can pick up any information you need at
 * this point such as exit_code etc.
 *
 * @since 1.22
 *
 * @ingroup Efl_Task
 */
#define EFL_TASK_EVENT_EXIT (&(_EFL_TASK_EVENT_EXIT))

#endif
