#ifndef _EFL_IO_WRITER_EO_H_
#define _EFL_IO_WRITER_EO_H_

#ifndef _EFL_IO_WRITER_EO_CLASS_TYPE
#define _EFL_IO_WRITER_EO_CLASS_TYPE

typedef Eo Efl_Io_Writer;

#endif

#ifndef _EFL_IO_WRITER_EO_TYPES
#define _EFL_IO_WRITER_EO_TYPES


#endif
/**
 * @brief Generic interface for objects that can write data from a provided
 * memory.
 *
 * This interface allows external objects to transparently write data to this
 * object and be notified whether more data can be written or if it's reached
 * capacity.
 *
 * Calls to @ref efl_io_writer_write() may or may not block: that's not up to
 * this interface to specify. The user can check with event "can_write,changed"
 * or property @ref efl_io_writer_can_write_get to known whenever a write could
 * push more data.
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Writer
 */
#define EFL_IO_WRITER_INTERFACE efl_io_writer_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_io_writer_interface_get(void) EINA_CONST;

/**
 * @brief Writes data from a pre-populated buffer.
 *
 * This operation will be executed immediately and may or may not block the
 * caller thread for some time. The details of blocking behavior is defined by
 * the implementation and may be subject to other parameters such as
 * non-blocking flags, maximum timeout or even retry attempts.
 *
 * You can understand this method as write(2) libc function.
 *
 * @param[in] obj The object.
 * @param[in,out] slice Provides a pre-populated memory to be used up to
 * slice.len. The returned slice will be adapted as length will be set to the
 * actually used amount of bytes, which can be smaller than the request.
 * @param[out] remaining Convenience to output the remaining parts of slice
 * that were not written. If the full slice was written, this will be a slice
 * of zero-length.
 *
 * @return 0 on succeed, a mapping of errno otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Writer
 */
EAPI EAPI_WEAK Eina_Error efl_io_writer_write(Eo *obj, Eina_Slice *slice, Eina_Slice *remaining);

#ifdef EFL_IO_WRITER_PROTECTED
/**
 * @brief If @c true will notify @ref efl_io_writer_write can be called without
 * blocking or failing.
 *
 * @param[in] obj The object.
 * @param[in] can_write @c true if it can be written without blocking or
 * failure, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Writer
 */
EAPI EAPI_WEAK void efl_io_writer_can_write_set(Eo *obj, Eina_Bool can_write);
#endif

/**
 * @brief If @c true will notify @ref efl_io_writer_write can be called without
 * blocking or failing.
 *
 * @param[in] obj The object.
 *
 * @return @c true if it can be written without blocking or failure, @c false
 * otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Writer
 */
EAPI EAPI_WEAK Eina_Bool efl_io_writer_can_write_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_WRITER_EVENT_CAN_WRITE_CHANGED;

/**
 * @brief Notifies can_write property changed.
 *
 * If @ref efl_io_writer_can_write_get is @c true there is data to
 * @ref efl_io_writer_write without blocking/error. If
 * @ref efl_io_writer_can_write_get is @c false, @ref efl_io_writer_write would
 * either block or fail.
 *
 * Note that usually this event is dispatched from inside
 * @ref efl_io_writer_write, thus before it returns.
 *
 * @return Eina_Bool
 *
 * @since 1.22
 *
 * @ingroup Efl_Io_Writer
 */
#define EFL_IO_WRITER_EVENT_CAN_WRITE_CHANGED (&(_EFL_IO_WRITER_EVENT_CAN_WRITE_CHANGED))

#endif
