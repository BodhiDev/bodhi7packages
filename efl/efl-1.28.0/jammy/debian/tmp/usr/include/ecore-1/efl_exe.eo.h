#ifndef _EFL_EXE_EO_H_
#define _EFL_EXE_EO_H_

#ifndef _EFL_EXE_EO_CLASS_TYPE
#define _EFL_EXE_EO_CLASS_TYPE

typedef Eo Efl_Exe;

#endif

#ifndef _EFL_EXE_EO_TYPES
#define _EFL_EXE_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Signal is a notification, a message sent by either operating system or some
 * application to our program. Signals are a mechanism for one-way asynchronous
 * notifications. A signal may be sent from the kernel to a process, from a
 * process to another process, or from a process to itself. Signal typically
 * alert a process to some event, such as a segmentation fault, or the user
 * pressing Ctrl-C.
 *
 * @ingroup Efl_Exe_Signal
 */
typedef enum
{
  EFL_EXE_SIGNAL_INT = 0, /**< Terminal interrupt. */
  EFL_EXE_SIGNAL_QUIT, /**< Terminal quit. */
  EFL_EXE_SIGNAL_TERM, /**< Termination. */
  EFL_EXE_SIGNAL_KILL, /**< Kill(can't be caught or ignored). */
  EFL_EXE_SIGNAL_CONT, /**< Continue executing, if stopped. */
  EFL_EXE_SIGNAL_STOP, /**< Stop executing(can't be caught or ignored). */
  EFL_EXE_SIGNAL_HUP, /**< Hangup. */
  EFL_EXE_SIGNAL_USR1, /**< User defined signal 1. */
  EFL_EXE_SIGNAL_USR2 /**< User defined signal 2. */
} Efl_Exe_Signal;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Flags to customize process behavior.
 *
 * @ingroup Efl_Exe_Flags
 */
typedef enum
{
  EFL_EXE_FLAGS_NONE = 0, /**< No special flags. */
  EFL_EXE_FLAGS_GROUP_LEADER = 1, /**< Process will be executed in its own
                                   * session. */
  EFL_EXE_FLAGS_HIDE_IO = 4, /**< All console IO will be hidden. */
  EFL_EXE_FLAGS_TERM_WITH_PARENT = 8 /**< Makes child receive SIGTERM when
                                      * parent dies. */
} Efl_Exe_Flags;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This is a specialized @ref Efl_Task which abstracts an operating system
 * process. This class provides a way to start a task by running an executable
 * file (specified using the @ref Efl_Core_Command_Line interface) and further
 * customize its execution flags (@Efl.Exe.exe_flags) and environment variables
 * (@Efl.Exe.env). It also allows communicating with the process through
 * signals (@Efl.Exe.signal).
 *
 * @ingroup Efl_Exe
 */
#define EFL_EXE_CLASS efl_exe_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_exe_class_get(void) EINA_CONST;

/**
 * @brief Send a signal to this process.
 *
 * @param[in] obj The object.
 * @param[in] sig Signal number to send.
 *
 * @ingroup Efl_Exe
 */
EAPI EAPI_WEAK void efl_exe_signal(Eo *obj, Efl_Exe_Signal sig);

/**
 * @brief Customize the process' behavior.
 *
 * @param[in] obj The object.
 * @param[in] flags Flags.
 *
 * @ingroup Efl_Exe
 */
EAPI EAPI_WEAK void efl_exe_flags_set(Eo *obj, Efl_Exe_Flags flags);

/**
 * @brief Customize the process' behavior.
 *
 * @param[in] obj The object.
 *
 * @return Flags.
 *
 * @ingroup Efl_Exe
 */
EAPI EAPI_WEAK Efl_Exe_Flags efl_exe_flags_get(const Eo *obj);

/**
 * @brief The signal this process emitted upon exiting, if any.
 *
 * @param[in] obj The object.
 *
 * @return The exit signal, or -1 if no exit signal happened.
 *
 * @ingroup Efl_Exe
 */
EAPI EAPI_WEAK int efl_exe_exit_signal_get(const Eo *obj);

/**
 * @brief The pid of the process, which is only accessible after the object has
 * been finalized.
 *
 * @param[in] obj The object.
 *
 * @return The pid, or 0 on failure.
 *
 * @since 1.24
 *
 * @ingroup Efl_Exe
 */
EAPI EAPI_WEAK int efl_exe_pid_get(const Eo *obj);

/**
 * @brief If @c env is @c NULL then the process created by this object is going
 * to inherit the environment of this process.
 *
 * In case @c env is not @c NULL then the environment variables declared in
 * this object will represent the environment passed to the new process.
 *
 * @param[in] obj The object.
 * @param[in] env @c env will be referenced until this object does not need it
 * anymore.
 *
 * @ingroup Efl_Exe
 */
EAPI EAPI_WEAK void efl_exe_env_set(Eo *obj, Efl_Core_Env *env);

/**
 * @brief If @c env is @c NULL then the process created by this object is going
 * to inherit the environment of this process.
 *
 * In case @c env is not @c NULL then the environment variables declared in
 * this object will represent the environment passed to the new process.
 *
 * @param[in] obj The object.
 *
 * @return @c env will be referenced until this object does not need it
 * anymore.
 *
 * @ingroup Efl_Exe
 */
EAPI EAPI_WEAK Efl_Core_Env *efl_exe_env_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
