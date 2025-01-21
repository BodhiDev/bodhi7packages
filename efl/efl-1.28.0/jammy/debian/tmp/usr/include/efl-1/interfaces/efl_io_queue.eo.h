#ifndef _EFL_IO_QUEUE_EO_H_
#define _EFL_IO_QUEUE_EO_H_

#ifndef _EFL_IO_QUEUE_EO_CLASS_TYPE
#define _EFL_IO_QUEUE_EO_CLASS_TYPE

typedef Eo Efl_Io_Queue;

#endif

#ifndef _EFL_IO_QUEUE_EO_TYPES
#define _EFL_IO_QUEUE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Generic In-memory queue of data to be used as I/O.
 *
 * This class is to be used to receive temporary data using
 * @ref efl_io_writer_write and hold it until someone calls
 * @ref efl_io_reader_read to consume it.
 *
 * A fixed sized queue can be implemented by setting
 * @ref efl_io_queue_limit_get followed by @ref efl_io_queue_preallocate
 *
 * @ingroup Efl_Io_Queue
 */
#define EFL_IO_QUEUE_CLASS efl_io_queue_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_io_queue_class_get(void) EINA_CONST;

/**
 * @brief Immediately pre-allocate a buffer of at least a given size.
 *
 * @param[in] obj The object.
 * @param[in] size Amount of bytes to pre-allocate.
 *
 * @ingroup Efl_Io_Queue
 */
EAPI EAPI_WEAK void efl_io_queue_preallocate(Eo *obj, size_t size);

/**
 * @brief Limit how big the buffer can grow.
 *
 * This affects both @ref efl_io_queue_preallocate and how buffer grows when
 * @ref efl_io_writer_write is called.
 *
 * If you want a buffer of an exact size, always set the limit before any
 * further calls that can expand it.
 *
 * Constructor-only property to set buffer limit. 0 is unlimited
 *
 * @param[in] obj The object.
 * @param[in] size Defines a maximum buffer size, or 0 to allow unlimited
 * amount of bytes
 *
 * @ingroup Efl_Io_Queue
 */
EAPI EAPI_WEAK void efl_io_queue_limit_set(Eo *obj, size_t size);

/**
 * @brief Limit how big the buffer can grow.
 *
 * This affects both @ref efl_io_queue_preallocate and how buffer grows when
 * @ref efl_io_writer_write is called.
 *
 * If you want a buffer of an exact size, always set the limit before any
 * further calls that can expand it.
 *
 * @param[in] obj The object.
 *
 * @return Defines a maximum buffer size, or 0 to allow unlimited amount of
 * bytes
 *
 * @ingroup Efl_Io_Queue
 */
EAPI EAPI_WEAK size_t efl_io_queue_limit_get(const Eo *obj);

/**
 * @brief How many bytes are available for read
 *
 * @param[in] obj The object.
 *
 * @return Bytes available to read
 *
 * @ingroup Efl_Io_Queue
 */
EAPI EAPI_WEAK size_t efl_io_queue_usage_get(const Eo *obj);

/**
 * @brief Gain temporary access to queue's internal read memory.
 *
 * The memory pointed to by slice may be changed by other methods of this
 * class. The event "slice,changed" will be called in those situations.
 *
 * @param[in] obj The object.
 *
 * @return Slice of the current buffer, may be invalidated if
 * @ref efl_io_writer_write, @ref efl_io_closer_close or
 * @ref efl_io_reader_read are called. It is the full slice available for
 * reading.
 *
 * @ingroup Efl_Io_Queue
 */
EAPI EAPI_WEAK Eina_Slice efl_io_queue_slice_get(const Eo *obj);

/**
 * @brief Discard the given number of bytes.
 *
 * This has the same effect as reading and discarding the given amount of
 * bytes, without executing the actual copy.
 *
 * It's often paired with @ref efl_io_queue_slice_get, if users read the
 * information from the slice and once they're done, that data must be
 * discarded.
 *
 * As an example, some protocols provide messages with a "size" header, in
 * which case @ref efl_io_queue_slice_get is used to peek into the available
 * memory to see if there is a "size" and if the rest of the slice is the full
 * payload. In that situation the slice may be handled by a processing
 * function. When the function is complete the defined amount of data must be
 * discarded -- with this function.
 *
 * @param[in] obj The object.
 * @param[in] amount Bytes to discard
 *
 * @ingroup Efl_Io_Queue
 */
EAPI EAPI_WEAK void efl_io_queue_discard(Eo *obj, size_t amount);

/**
 * @brief Clears the queue. Same as reading all data.
 *
 * This is equivalent to calling @ref efl_io_queue_discard with
 * @ref efl_io_queue_usage_get amount of bytes.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Io_Queue
 */
EAPI EAPI_WEAK void efl_io_queue_clear(Eo *obj);

/**
 * @brief Mark this end-of-stream.
 *
 * That will set @ref efl_io_reader_eos_get to @c true and forbid any further
 * writes.
 *
 * Unlike @ref efl_io_closer_close, this won't clear anything.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Io_Queue
 */
EAPI EAPI_WEAK void efl_io_queue_eos_mark(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_QUEUE_EVENT_SLICE_CHANGED;

/** The read-slice returned by @ref efl_io_queue_slice_get may have changed.
 *
 * @ingroup Efl_Io_Queue
 */
#define EFL_IO_QUEUE_EVENT_SLICE_CHANGED (&(_EFL_IO_QUEUE_EVENT_SLICE_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
