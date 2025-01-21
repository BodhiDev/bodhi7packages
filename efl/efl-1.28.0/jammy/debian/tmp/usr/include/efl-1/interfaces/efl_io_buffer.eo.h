#ifndef _EFL_IO_BUFFER_EO_H_
#define _EFL_IO_BUFFER_EO_H_

#ifndef _EFL_IO_BUFFER_EO_CLASS_TYPE
#define _EFL_IO_BUFFER_EO_CLASS_TYPE

typedef Eo Efl_Io_Buffer;

#endif

#ifndef _EFL_IO_BUFFER_EO_TYPES
#define _EFL_IO_BUFFER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Generic In-memory buffer of data to be used as I/O.
 *
 * This class offers both input and output, which can be used at the same time
 * since @ref efl_io_reader_read and @ref efl_io_writer_write use different
 * offsets/position internally.
 *
 * One can get temporary direct access to internal buffer with
 * @ref efl_io_buffer_slice_get or steal the buffer with
 * @ref efl_io_buffer_binbuf_steal.
 *
 * A fixed sized buffer can be implemented by setting
 * @ref efl_io_buffer_limit_get followed by @ref efl_io_buffer_preallocate
 *
 * @ingroup Efl_Io_Buffer
 */
#define EFL_IO_BUFFER_CLASS efl_io_buffer_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_io_buffer_class_get(void) EINA_CONST;

/**
 * @brief Immediately pre-allocate a buffer of at least a given size.
 *
 * @param[in] obj The object.
 * @param[in] size Amount of bytes to pre-allocate.
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK void efl_io_buffer_preallocate(Eo *obj, size_t size);

/**
 * @brief Adopt a read-only slice as buffer's backing store.
 *
 * The slice memory will not be copied and must remain alive during the
 * buffer's lifetime. Usually this is guaranteed by some global static-const
 * memory or some parent object and this buffer being a view of that -- be
 * aware of parent memory remaining alive, such as "slice,changed" events.
 *
 * @param[in] obj The object.
 * @param[in] slice Slice to adopt as read-only
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK void efl_io_buffer_adopt_readonly(Eo *obj, const Eina_Slice slice);

/**
 * @brief Adopt a read-write slice as buffer's backing store.
 *
 * The slice memory will not be copied and must remain alive during the
 * buffer's lifetime. Usually this is guaranteed by some global static memory
 * or some parent object and this buffer being a view of that -- be aware of
 * parent memory remaining alive, such as "slice,changed" events.
 *
 * The memory will be disposed using free() and reallocated using realloc().
 *
 * @param[in] obj The object.
 * @param[in] slice Slice to adopt as read-write
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK void efl_io_buffer_adopt_readwrite(Eo *obj, Eina_Rw_Slice slice);

/**
 * @brief Limit how big the buffer can grow.
 *
 * This affects both @ref efl_io_buffer_preallocate and how buffer grows when
 * @ref efl_io_writer_write is called.
 *
 * If you want a buffer of an exact size always set the limit before any
 * further calls that can expand it.
 *
 * Constructor-only property to set buffer limit. 0 is unlimited
 *
 * @param[in] obj The object.
 * @param[in] size Defines a maximum buffer size, or 0 to allow unlimited
 * amount of bytes
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK void efl_io_buffer_limit_set(Eo *obj, size_t size);

/**
 * @brief Limit how big the buffer can grow.
 *
 * This affects both @ref efl_io_buffer_preallocate and how buffer grows when
 * @ref efl_io_writer_write is called.
 *
 * If you want a buffer of an exact size always set the limit before any
 * further calls that can expand it.
 *
 * @param[in] obj The object.
 *
 * @return Defines a maximum buffer size, or 0 to allow unlimited amount of
 * bytes
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK size_t efl_io_buffer_limit_get(const Eo *obj);

/**
 * @brief The position used by @ref efl_io_reader_read.
 *
 * Note that @ref efl_io_positioner_seek or @ref efl_io_positioner_position_set
 * will affect this property and @ref efl_io_buffer_position_write_get.
 *
 * @ref efl_io_positioner_position_get will return the greatest of
 * @ref efl_io_buffer_position_read_get and
 * @ref efl_io_buffer_position_write_get.
 *
 * @param[in] obj The object.
 * @param[in] position Position in buffer
 *
 * @return @c true if setting the position succeeded, @c false otherwise
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK Eina_Bool efl_io_buffer_position_read_set(Eo *obj, uint64_t position);

/**
 * @brief The position used by @ref efl_io_reader_read.
 *
 * Note that @ref efl_io_positioner_seek or @ref efl_io_positioner_position_set
 * will affect this property and @ref efl_io_buffer_position_write_get.
 *
 * @ref efl_io_positioner_position_get will return the greatest of
 * @ref efl_io_buffer_position_read_get and
 * @ref efl_io_buffer_position_write_get.
 *
 * @param[in] obj The object.
 *
 * @return Position in buffer
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK uint64_t efl_io_buffer_position_read_get(const Eo *obj);

/**
 * @brief The position used by @ref efl_io_writer_write.
 *
 * Note that @ref efl_io_positioner_seek or @ref efl_io_positioner_position_set
 * will affect this property and @ref efl_io_buffer_position_read_get.
 *
 * @ref efl_io_positioner_position_get will return the greatest of
 * @ref efl_io_buffer_position_read_get and
 * @ref efl_io_buffer_position_write_get.
 *
 * @param[in] obj The object.
 * @param[in] position Position in buffer
 *
 * @return @c true if setting the position succeeded, @c false otherwise
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK Eina_Bool efl_io_buffer_position_write_set(Eo *obj, uint64_t position);

/**
 * @brief The position used by @ref efl_io_writer_write.
 *
 * Note that @ref efl_io_positioner_seek or @ref efl_io_positioner_position_set
 * will affect this property and @ref efl_io_buffer_position_read_get.
 *
 * @ref efl_io_positioner_position_get will return the greatest of
 * @ref efl_io_buffer_position_read_get and
 * @ref efl_io_buffer_position_write_get.
 *
 * @param[in] obj The object.
 *
 * @return Position in buffer
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK uint64_t efl_io_buffer_position_write_get(const Eo *obj);

/**
 * @brief Get a temporary access to buffer's internal memory.
 *
 * The memory pointed by slice may be changed by other methods of this class.
 * The event "reallocated" will be called in those situations.
 *
 * @param[in] obj The object.
 *
 * @return Slice of the current buffer, may be invalidated if
 * @ref efl_io_writer_write, @ref efl_io_closer_close or
 * @ref efl_io_sizer_resize are called. It is the full slice, not a partial one
 * starting at current position.
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK Eina_Slice efl_io_buffer_slice_get(const Eo *obj);

/**
 * @brief Steals the internal buffer memory and returns it as a binbuf.
 *
 * The returned memory must be freed with eina_binbuf_free().
 *
 * On failure, for example a read-only backing store was adopted with
 * @ref efl_io_buffer_adopt_readonly, @c NULL is returned.
 *
 * @param[in] obj The object.
 *
 * @return Binbuf
 *
 * @ingroup Efl_Io_Buffer
 */
EAPI EAPI_WEAK Eina_Binbuf *efl_io_buffer_binbuf_steal(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_BUFFER_EVENT_POSITION_READ_CHANGED;

/** Notifies @ref efl_io_buffer_position_read_get changed
 *
 * @ingroup Efl_Io_Buffer
 */
#define EFL_IO_BUFFER_EVENT_POSITION_READ_CHANGED (&(_EFL_IO_BUFFER_EVENT_POSITION_READ_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_BUFFER_EVENT_POSITION_WRITE_CHANGED;

/** Notifies @ref efl_io_buffer_position_write_get changed
 *
 * @ingroup Efl_Io_Buffer
 */
#define EFL_IO_BUFFER_EVENT_POSITION_WRITE_CHANGED (&(_EFL_IO_BUFFER_EVENT_POSITION_WRITE_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_BUFFER_EVENT_REALLOCATED;

/** Notifies the internal buffer was reallocated, thus whatever was returned by
 * @ref efl_io_buffer_slice_get becomes invalid.
 *
 * @ingroup Efl_Io_Buffer
 */
#define EFL_IO_BUFFER_EVENT_REALLOCATED (&(_EFL_IO_BUFFER_EVENT_REALLOCATED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
