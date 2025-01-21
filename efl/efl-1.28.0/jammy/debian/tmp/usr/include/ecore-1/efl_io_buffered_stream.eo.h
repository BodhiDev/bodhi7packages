#ifndef _EFL_IO_BUFFERED_STREAM_EO_H_
#define _EFL_IO_BUFFERED_STREAM_EO_H_

#ifndef _EFL_IO_BUFFERED_STREAM_EO_CLASS_TYPE
#define _EFL_IO_BUFFERED_STREAM_EO_CLASS_TYPE

typedef Eo Efl_Io_Buffered_Stream;

#endif

#ifndef _EFL_IO_BUFFERED_STREAM_EO_TYPES
#define _EFL_IO_BUFFERED_STREAM_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A wrapper object offering easy to use buffered streams over existing
 * I/O class.
 *
 * The buffered stream encapsulates an actual @ref Efl_Io_Reader or
 * @ref Efl_Io_Writer, an input @ref Efl_Io_Queue and an output
 * @ref Efl_Io_Queue. These are linked using a input and a output
 * @ref Efl_Io_Copier.
 *
 * The idea is that unlike the traditional @ref Efl_Io_Writer which will
 * attempt to write directly and thus may take less data than requested, this
 * one will keep the pending data in its own buffer, feeding to the actual
 * output when @ref Efl_Io_Writer can write. That makes its operation much
 * simpler as @ref efl_io_writer_write will always take the full data -- allows
 * "write and forget", if unlimited (see
 * @ref efl_io_buffered_stream_max_queue_size_output_get). When finished
 * writing data @ref efl_io_buffered_stream_eos_mark then waits for the
 * "write.finished" event to know all data has been sent.
 *
 * Reading is also much simpler since incoming data is kept in an
 * @ref Efl_Io_Queue, thus its size can be queried with
 * @ref efl_io_buffered_stream_pending_read_get and read with
 * @ref efl_io_reader_read or peeked with
 * @ref efl_io_buffered_stream_slice_get, then discarded with
 * @ref efl_io_buffered_stream_discard or @ref efl_io_buffered_stream_clear.
 *
 * When waiting for a complete message, just peek at its contents, if not
 * complete do nothing and wait. If complete then use either
 * @ref efl_io_reader_read to get a copy or manipulate a read-only reference
 * from @ref efl_io_buffered_stream_slice_get and then
 * @ref efl_io_buffered_stream_discard.
 *
 * The actual I/O is set with the constructor method
 * @ref efl_io_buffered_stream_inner_io_set and can be retrieved with
 * @ref efl_io_buffered_stream_inner_io_get, which should be used with care --
 * calling @ref efl_io_reader_read and @ref efl_io_writer_write on it may
 * produce unexpected results.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
#define EFL_IO_BUFFERED_STREAM_CLASS efl_io_buffered_stream_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_io_buffered_stream_class_get(void) EINA_CONST;

/**
 * @brief The inner I/O this wrapper operates on.
 *
 * Constructor-only property to set the inner_io.
 *
 * @param[in] obj The object.
 * @param[in] io The input (@Efl.Io.Reader) or output (@Efl.Io.Writer) instance
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK void efl_io_buffered_stream_inner_io_set(Eo *obj, Efl_Object *io);

/**
 * @brief The inner I/O this wrapper operates on.
 *
 * The internal input/output used for actual operations. Use with care!
 *
 * @param[in] obj The object.
 *
 * @return The input (@Efl.Io.Reader) or output (@Efl.Io.Writer) instance
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK Efl_Object *efl_io_buffered_stream_inner_io_get(const Eo *obj);

/**
 * @brief Limits how big the input queue can grow, in bytes.
 *
 * If limited and @ref efl_io_buffered_stream_line_delimiter_get is set, "line"
 * events may be emitted with partial contents without the trailing delimiter.
 *
 * Constructor-only property to set buffer limit. 0 is unlimited
 *
 * @param[in] obj The object.
 * @param[in] max_queue_size_input Defines a maximum buffer size for incoming
 * data or 0 to allow an unlimited amount of bytes
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK void efl_io_buffered_stream_max_queue_size_input_set(Eo *obj, size_t max_queue_size_input);

/**
 * @brief Limits how big the input queue can grow, in bytes.
 *
 * If limited and @ref efl_io_buffered_stream_line_delimiter_get is set, "line"
 * events may be emitted with partial contents without the trailing delimiter.
 *
 * @param[in] obj The object.
 *
 * @return Defines a maximum buffer size for incoming data or 0 to allow an
 * unlimited amount of bytes
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK size_t efl_io_buffered_stream_max_queue_size_input_get(const Eo *obj);

/**
 * @brief Limits how big the output queue can grow in bytes.
 *
 * If limited @ref efl_io_writer_write will take less data than requested.
 *
 * Constructor-only property to set buffer limit. 0 is unlimited
 *
 * @param[in] obj The object.
 * @param[in] max_queue_size_output Defines a maximum buffer size for output
 * data, or 0 to allow unlimited amount of bytes. If limited,
 * @ref efl_io_writer_write will take less data than requested.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK void efl_io_buffered_stream_max_queue_size_output_set(Eo *obj, size_t max_queue_size_output);

/**
 * @brief Limits how big the output queue can grow in bytes.
 *
 * If limited @ref efl_io_writer_write will take less data than requested.
 *
 * @param[in] obj The object.
 *
 * @return Defines a maximum buffer size for output data, or 0 to allow
 * unlimited amount of bytes. If limited, @ref efl_io_writer_write will take
 * less data than requested.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK size_t efl_io_buffered_stream_max_queue_size_output_get(const Eo *obj);

/**
 * @brief If set incoming data will be checked for the delimiter and "line"
 * events. The line may include the delimiter, unless it's end-of-stream in
 * @ref efl_io_buffered_stream_max_queue_size_input_get has been reached.
 *
 * Changes line delimiter to use. If empty no delimiter is to be used
 *
 * @param[in] obj The object.
 * @param[in] slice The contents may contain \0 and will be copied
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK void efl_io_buffered_stream_line_delimiter_set(Eo *obj, const Eina_Slice slice);

/**
 * @brief If set incoming data will be checked for the delimiter and "line"
 * events. The line may include the delimiter, unless it's end-of-stream in
 * @ref efl_io_buffered_stream_max_queue_size_input_get has been reached.
 *
 * @param[in] obj The object.
 *
 * @return The contents may contain \0 and will be copied
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK Eina_Slice efl_io_buffered_stream_line_delimiter_get(const Eo *obj);

/**
 * @brief Error as ETIMEDOUT if it becomes inactive for some time.
 *
 * If no activity, that is no read or write in the given amount of seconds,
 * then the object will emit "error" event with ETIMEDOUT value.
 *
 * This is specified in seconds and is only active for greater-than zero.
 * Defaults to inactive.
 *
 * @param[in] obj The object.
 * @param[in] seconds Number of inactive seconds to timeout this object. If
 * zero or less it will be disabled.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK void efl_io_buffered_stream_timeout_inactivity_set(Eo *obj, double seconds);

/**
 * @brief Error as ETIMEDOUT if it becomes inactive for some time.
 *
 * If no activity, that is no read or write in the given amount of seconds,
 * then the object will emit "error" event with ETIMEDOUT value.
 *
 * This is specified in seconds and is only active for greater-than zero.
 * Defaults to inactive.
 *
 * @param[in] obj The object.
 *
 * @return Number of inactive seconds to timeout this object. If zero or less
 * it will be disabled.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK double efl_io_buffered_stream_timeout_inactivity_get(const Eo *obj);

/**
 * @brief Reads chunk size property, in bytes.
 *
 * When reading the @ref efl_io_buffered_stream_inner_io_get for data to be
 * placed in input queue use this as chunk size.
 *
 * Setting this value large enough may reduce number of
 * @ref efl_io_reader_read, improving performance at the expense of more memory
 * consumption.
 *
 * This value is limited by
 * @ref efl_io_buffered_stream_max_queue_size_input_get if it's set.
 *
 * By default it's 4096.
 *
 * Sets chunk size for each basic @ref efl_io_reader_read operation.
 *
 * @param[in] obj The object.
 * @param[in] size This is the chunk size to use for read operations
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK void efl_io_buffered_stream_read_chunk_size_set(Eo *obj, size_t size);

/**
 * @brief Reads chunk size property, in bytes.
 *
 * When reading the @ref efl_io_buffered_stream_inner_io_get for data to be
 * placed in input queue use this as chunk size.
 *
 * Setting this value large enough may reduce number of
 * @ref efl_io_reader_read, improving performance at the expense of more memory
 * consumption.
 *
 * This value is limited by
 * @ref efl_io_buffered_stream_max_queue_size_input_get if it's set.
 *
 * By default it's 4096.
 *
 * @param[in] obj The object.
 *
 * @return This is the chunk size to use for read operations
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK size_t efl_io_buffered_stream_read_chunk_size_get(const Eo *obj);

/**
 * @brief How many bytes are pending write to
 * @ref efl_io_buffered_stream_inner_io_get
 *
 * @param[in] obj The object.
 *
 * @return Bytes available to write
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK size_t efl_io_buffered_stream_pending_write_get(const Eo *obj);

/**
 * @brief How many bytes are pending (available) for read
 *
 * @param[in] obj The object.
 *
 * @return Bytes available to read
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK size_t efl_io_buffered_stream_pending_read_get(const Eo *obj);

/**
 * @brief How many bytes were written and read.
 *
 * @param[in] obj The object.
 * @param[out] read_bytes Bytes that were read until now
 * @param[out] written_bytes Bytes that were written until now
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK void efl_io_buffered_stream_progress_get(const Eo *obj, size_t *read_bytes, size_t *written_bytes);

/**
 * @brief Gets a temporary access to input queue's internal read memory.
 *
 * The memory pointed by slice may be changed by other methods of this class.
 * The event "slice,changed" will be called in those circumstances.
 *
 * @param[in] obj The object.
 *
 * @return Slice of the current buffer, may be invalidated if
 * @ref efl_io_writer_write, @ref efl_io_closer_close or
 * @ref efl_io_reader_read are called. It is the full slice available for
 * reading.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK Eina_Slice efl_io_buffered_stream_slice_get(const Eo *obj);

/**
 * @brief Discards the given number of bytes.
 *
 * This has the same effect as reading and discarding the given amount of
 * bytes, without executing the actual copy.
 *
 * It's often paired with @ref efl_io_buffered_stream_slice_get. If users read
 * the information from the slice, once they're done that data must be
 * discarded.
 *
 * By way of example, some protocols provide messages with a "size" header. In
 * that case @ref efl_io_buffered_stream_slice_get is used to peek into the
 * available memory to see if there is a "size" and if the rest of the slice is
 * the full payload. Here the slice may be handled by a processing function.
 * When the function is complete, that amount of data must be discarded -- by
 * this function.
 *
 * @param[in] obj The object.
 * @param[in] amount Bytes to discard
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK void efl_io_buffered_stream_discard(Eo *obj, size_t amount);

/**
 * @brief Clears the incoming queue. Same as reading all data.
 *
 * This is equivalent to calling @ref efl_io_buffered_stream_discard with
 * @ref efl_io_buffered_stream_pending_read_get amount of bytes.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK void efl_io_buffered_stream_clear(Eo *obj);

/**
 * @brief Marks the end-of-stream. Signals nothing else will be written.
 *
 * This will forbid any further writes.
 *
 * Unlike @ref efl_io_closer_close this won't clear anything.
 *
 * When all data is written, "write,finished" is emitted.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK void efl_io_buffered_stream_eos_mark(Eo *obj);

/**
 * @brief Forces writing all pending data to destination.
 *
 * It will return @c true if @ref efl_io_buffered_stream_pending_read_get drops
 * to zero, @c false otherwise and more calls to flush must be made.
 *
 * If the @ref efl_io_buffered_stream_inner_io_get implements
 * @ref Efl_Io_Closer and it is closed or the wrapper itself is closed, this
 * function will do nothing and return @c true.
 *
 * @note this function may block the main loop execution until operations are
 * complete! This is bad for usability as the user interface or other
 * operations may freeze. A better approach is to operate asynchronously and
 * wait for the "write,finished" event.
 *
 * @param[in] obj The object.
 * @param[in] may_block If @c true, then @ref efl_io_reader_can_read_get and
 * @ref efl_io_writer_can_write_get are not checked and the call may block.
 * @param[in] ignore_line_delimiter Forces flush ignoring line delimiters
 *
 * @return @c true if all data was sent, @c false otherwise
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
EAPI EAPI_WEAK Eina_Bool efl_io_buffered_stream_flush(Eo *obj, Eina_Bool may_block, Eina_Bool ignore_line_delimiter);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_WRITE_FINISHED;

/** @ref efl_io_buffered_stream_eos_mark was called and all available data was
 * sent to destination
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
#define EFL_IO_BUFFERED_STREAM_EVENT_WRITE_FINISHED (&(_EFL_IO_BUFFERED_STREAM_EVENT_WRITE_FINISHED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_READ_FINISHED;

/** Same as @ref Efl_Io_Reader "eos", for consistency.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
#define EFL_IO_BUFFERED_STREAM_EVENT_READ_FINISHED (&(_EFL_IO_BUFFERED_STREAM_EVENT_READ_FINISHED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_FINISHED;

/** Both read and write are finished.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
#define EFL_IO_BUFFERED_STREAM_EVENT_FINISHED (&(_EFL_IO_BUFFERED_STREAM_EVENT_FINISHED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_ERROR;

/** An error has occurred and I/O has stopped
 * @return Eina_Error
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
#define EFL_IO_BUFFERED_STREAM_EVENT_ERROR (&(_EFL_IO_BUFFERED_STREAM_EVENT_ERROR))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_PROGRESS;

/** Property @ref efl_io_buffered_stream_progress_get changed
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
#define EFL_IO_BUFFERED_STREAM_EVENT_PROGRESS (&(_EFL_IO_BUFFERED_STREAM_EVENT_PROGRESS))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_SLICE_CHANGED;

/** The read-slice returned by @ref efl_io_buffered_stream_slice_get may have
 * changed.
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
#define EFL_IO_BUFFERED_STREAM_EVENT_SLICE_CHANGED (&(_EFL_IO_BUFFERED_STREAM_EVENT_SLICE_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_LINE;

/** If @ref efl_io_buffered_stream_line_delimiter_get is set, will be emitted
 * with current line. The memory is only valid during event callback dispatched
 * and should not be modified. Note that the line slice may not be inside
 * @ref efl_io_buffered_stream_slice_get.
 * @return const Eina_Slice *
 *
 * @ingroup Efl_Io_Buffered_Stream
 */
#define EFL_IO_BUFFERED_STREAM_EVENT_LINE (&(_EFL_IO_BUFFERED_STREAM_EVENT_LINE))
#endif /* EFL_BETA_API_SUPPORT */

#endif
