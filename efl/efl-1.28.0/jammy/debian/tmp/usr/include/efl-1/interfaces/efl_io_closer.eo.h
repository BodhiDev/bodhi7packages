#ifndef _EFL_IO_CLOSER_EO_H_
#define _EFL_IO_CLOSER_EO_H_

#ifndef _EFL_IO_CLOSER_EO_CLASS_TYPE
#define _EFL_IO_CLOSER_EO_CLASS_TYPE

typedef Eo Efl_Io_Closer;

#endif

#ifndef _EFL_IO_CLOSER_EO_TYPES
#define _EFL_IO_CLOSER_EO_TYPES


#endif
/**
 * @brief Generic interface for objects that can close themselves.
 *
 * This interface allows external objects to transparently close an input or
 * output stream, cleaning up its resources.
 *
 * Calls to @ref efl_io_closer_close() may or may not block, that's not up to
 * this interface to specify.
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Closer
 */
#define EFL_IO_CLOSER_INTERFACE efl_io_closer_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_io_closer_interface_get(void) EINA_CONST;

/**
 * @brief Closes the Input/Output object.
 *
 * This operation will be executed immediately and may or may not block the
 * caller thread for some time. The details of blocking behavior is to be
 * defined by the implementation and may be subject to other parameters such as
 * non-blocking flags, maximum timeout or even retry attempts.
 *
 * You can understand this method as close(2) libc function.
 *
 * @param[in] obj The object.
 *
 * @return 0 on succeed, a mapping of errno otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Closer
 */
EAPI EAPI_WEAK Eina_Error efl_io_closer_close(Eo *obj);

/**
 * @brief If true will notify object was closed.
 *
 * @param[in] obj The object.
 *
 * @return @c true if closed, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Closer
 */
EAPI EAPI_WEAK Eina_Bool efl_io_closer_closed_get(const Eo *obj);

/**
 * @brief If true will automatically close resources on exec() calls.
 *
 * When using file descriptors this should set FD_CLOEXEC so they are not
 * inherited by the processes (children or self) doing exec().
 *
 * If @c true, will close on exec() call.
 *
 * @param[in] obj The object.
 * @param[in] close_on_exec @c true if close on exec(), @c false otherwise
 *
 * @return @c true if could set, @c false if not supported or failed.
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Closer
 */
EAPI EAPI_WEAK Eina_Bool efl_io_closer_close_on_exec_set(Eo *obj, Eina_Bool close_on_exec);

/**
 * @brief If true will automatically close resources on exec() calls.
 *
 * When using file descriptors this should set FD_CLOEXEC so they are not
 * inherited by the processes (children or self) doing exec().
 *
 * @param[in] obj The object.
 *
 * @return @c true if close on exec(), @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Closer
 */
EAPI EAPI_WEAK Eina_Bool efl_io_closer_close_on_exec_get(const Eo *obj);

/**
 * @brief If true will automatically close() on object invalidate.
 *
 * If the object was disconnected from its parent (including the main loop)
 * without close, this property will state whenever it should be closed or not.
 *
 * @param[in] obj The object.
 * @param[in] close_on_invalidate @c true if close on invalidate, @c false
 * otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Closer
 */
EAPI EAPI_WEAK void efl_io_closer_close_on_invalidate_set(Eo *obj, Eina_Bool close_on_invalidate);

/**
 * @brief If true will automatically close() on object invalidate.
 *
 * If the object was disconnected from its parent (including the main loop)
 * without close, this property will state whenever it should be closed or not.
 *
 * @param[in] obj The object.
 *
 * @return @c true if close on invalidate, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Closer
 */
EAPI EAPI_WEAK Eina_Bool efl_io_closer_close_on_invalidate_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_CLOSER_EVENT_CLOSED;

/** Notifies closed, when property is marked as true
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Closer
 */
#define EFL_IO_CLOSER_EVENT_CLOSED (&(_EFL_IO_CLOSER_EVENT_CLOSED))

#endif
