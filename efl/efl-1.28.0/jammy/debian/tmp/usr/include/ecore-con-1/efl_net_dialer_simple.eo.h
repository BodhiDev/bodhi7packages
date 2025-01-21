#ifndef _EFL_NET_DIALER_SIMPLE_EO_H_
#define _EFL_NET_DIALER_SIMPLE_EO_H_

#ifndef _EFL_NET_DIALER_SIMPLE_EO_CLASS_TYPE
#define _EFL_NET_DIALER_SIMPLE_EO_CLASS_TYPE

typedef Eo Efl_Net_Dialer_Simple;

#endif

#ifndef _EFL_NET_DIALER_SIMPLE_EO_TYPES
#define _EFL_NET_DIALER_SIMPLE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Connects to a remote server offering an easy to use, buffered I/O.
 *
 * The simple dialer is based on @ref Efl_Net_Socket_Simple, which encapsulates
 * an actual @ref Efl_Net_Socket and uses it with an
 * @ref Efl_Io_Buffered_Stream. This creates an input @ref Efl_Io_Queue, an
 * output @ref Efl_Io_Queue. Both of these are linked using a receiver and a
 * sender @ref Efl_Io_Copier.
 *
 * The idea is that unlike the traditional @ref Efl_Net_Socket which attempts
 * to write directly to the socket and thus may take less data than requested,
 * this one will keep the pending data in its own buffer, feeding it to the
 * actual socket when @ref efl_io_writer_can_write_get occurs. This makes its
 * operation much simpler as @ref efl_io_writer_write will always take the full
 * data -- allows "write and forget", if unlimited (see
 * @ref efl_io_buffered_stream_max_queue_size_output_get).
 *
 * Reading is also much simpler since received data is kept in an
 * @ref Efl_Io_Queue, thus its size can be queried with
 * @ref efl_io_buffered_stream_pending_read_get and read with
 * @ref efl_io_reader_read or peeked with
 * @ref efl_io_buffered_stream_slice_get, then discarded with
 * @ref efl_io_buffered_stream_discard or @ref efl_io_buffered_stream_clear.
 *
 * When waiting for a complete message, you can then just peek at its contents.
 * If it's incomplete do nothing, if complete then either
 * @ref efl_io_reader_read to get a copy or manipulate a read-only reference
 * from @ref efl_io_buffered_stream_slice_get and then
 * @ref efl_io_buffered_stream_discard
 *
 * The actual dialer is created using the class given as the constructor
 * property @ref efl_net_dialer_simple_inner_class_get and can be retrieved
 * with @ref efl_io_buffered_stream_inner_io_get. This should be used with
 * care, like extra configuration before @ref efl_net_dialer_dial is called.
 *
 * If your object class requires some constructor-only properties to be set
 * prior to @ref efl_finalize, then use
 * @ref efl_io_buffered_stream_inner_io_get directly providing an already
 * created dialer.
 *
 * @ingroup Efl_Net_Dialer_Simple
 */
#define EFL_NET_DIALER_SIMPLE_CLASS efl_net_dialer_simple_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_dialer_simple_class_get(void) EINA_CONST;

/**
 * @brief The class used to create @ref efl_io_buffered_stream_inner_io_get if
 * none was provided.
 *
 * This class could be set at construction time and will be used to create the
 * inner socket during @ref efl_finalize.
 *
 * It is a helper for users, removing the burden to manually create and specify
 * a dialer object.
 *
 * Constructor-only property to define the class used to create the inner
 * dialer.
 *
 * @param[in] obj The object.
 * @param[in] klass The class
 *
 * @ingroup Efl_Net_Dialer_Simple
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_simple_inner_class_set(Eo *obj, const Efl_Class *klass);

/**
 * @brief The class used to create @ref efl_io_buffered_stream_inner_io_get if
 * none was provided.
 *
 * This class could be set at construction time and will be used to create the
 * inner socket during @ref efl_finalize.
 *
 * It is a helper for users, removing the burden to manually create and specify
 * a dialer object.
 *
 * The internal class used to create the inner dialer.
 *
 * @param[in] obj The object.
 *
 * @return The class
 *
 * @ingroup Efl_Net_Dialer_Simple
 */
ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_dialer_simple_inner_class_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
