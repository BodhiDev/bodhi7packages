#ifndef _EFL_NET_SERVER_FD_EO_H_
#define _EFL_NET_SERVER_FD_EO_H_

#ifndef _EFL_NET_SERVER_FD_EO_CLASS_TYPE
#define _EFL_NET_SERVER_FD_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Fd;

#endif

#ifndef _EFL_NET_SERVER_FD_EO_TYPES
#define _EFL_NET_SERVER_FD_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** A generic server based on file descriptors.
 *
 * @ingroup Efl_Net_Server_Fd
 */
#define EFL_NET_SERVER_FD_CLASS efl_net_server_fd_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_server_fd_class_get(void) EINA_CONST;

/**
 * @brief If this method is called, use an already activated socket.
 *
 * This method allows a server to use an existing socket received from systemd
 * or any similar system.
 *
 * It will replace @ref efl_net_server_serve, thus if this is used, this method
 * will return EALREADY.
 *
 * @note The parameter 'address' given to this function is only used to
 * validate the next socket available. It doesn't search for a socket with the
 * given address. Thus the socket to be used is the next unused one : order
 * matters if using multiple servers!
 *
 * @note subclasses must validate the socket and return EINVAL prior to call
 * the base class with Efl.Object.super. They must also emit "serving" when
 * ready. For instance stream protocols may need to check for listening and if
 * not, try to listen. Usually they will also query getsockname() and set
 * @ref efl_net_server_address_get.
 *
 * Errors:
 *
 * - EALREADY: There already is a socket, either from previous
 * @ref efl_net_server_fd_socket_activate or @ref efl_net_server_serve. Usually
 * represents a programming error.
 *
 * - ENOENT: No sockets received from process manager (ie: systemd). Usually
 * this is not a fatal error, just proceed by calling @ref efl_net_server_serve
 *
 * - EINVAL: the socket received is not of the correct family, type or
 * protocol. Usually this means a configuration mismatch between the order of
 * server creation and calls to socket_activate. The systemd.socket entries
 * must match the order in your application.
 *
 * @param[in] obj The object.
 * @param[in] address The address to validate the next available socket. It
 * cannot be used to search, only for validation.
 *
 * @return $0 on success, ENOENT if no socket is available or EALREADY if
 * already have a socket
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_server_fd_socket_activate(Eo *obj, const char *address);

#ifdef EFL_NET_SERVER_FD_PROTECTED
/**
 * @brief The address family (AF_*) family of this socket.
 *
 * It will be one of AF_INET (IPv4), AF_INET6 (IPv6), AF_UNIX...
 *
 * It must be set before the @ref efl_loop_fd_set is called with a valid file
 * descriptor.
 *
 * @param[in] obj The object.
 * @param[in] family Socket address family
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_fd_family_set(Eo *obj, int family);
#endif

/**
 * @brief The address family (AF_*) family of this socket.
 *
 * It will be one of AF_INET (IPv4), AF_INET6 (IPv6), AF_UNIX...
 *
 * It must be set before the @ref efl_loop_fd_set is called with a valid file
 * descriptor.
 *
 * @param[in] obj The object.
 *
 * @return Socket address family
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK int efl_net_server_fd_family_get(const Eo *obj);

/**
 * @brief Controls Close-on-Exec() using FD_CLOEXEC.
 *
 * Child sockets inherit the server's settings by default. You can change the
 * behavior using each instance @ref efl_io_closer_close_on_exec_set. Defaults
 * to @c true.
 *
 * @param[in] obj The object.
 * @param[in] close_on_exec If @c true close on exec will be used, @c false
 * otherwise
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_fd_close_on_exec_set(Eo *obj, Eina_Bool close_on_exec);

/**
 * @brief Controls Close-on-Exec() using FD_CLOEXEC.
 *
 * Child sockets inherit the server's settings by default. You can change the
 * behavior using each instance @ref efl_io_closer_close_on_exec_set. Defaults
 * to @c true.
 *
 * @param[in] obj The object.
 *
 * @return If @c true close on exec will be used, @c false otherwise
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_fd_close_on_exec_get(const Eo *obj);

/**
 * @brief Controls address reuse() using SO_REUSEADDR
 *
 * @param[in] obj The object.
 * @param[in] reuse_address If @c true the server will reuse the address,
 * @c false otherwise
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_fd_reuse_address_set(Eo *obj, Eina_Bool reuse_address);

/**
 * @brief Controls address reuse() using SO_REUSEADDR
 *
 * @param[in] obj The object.
 *
 * @return If @c true the server will reuse the address, @c false otherwise
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_fd_reuse_address_get(const Eo *obj);

/**
 * @brief Controls port reuse() using SO_REUSEPORT (since linux 3.9)
 *
 * @param[in] obj The object.
 * @param[in] reuse_port If @c true the server will reuse the port, @c false
 * otherwise
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_fd_reuse_port_set(Eo *obj, Eina_Bool reuse_port);

/**
 * @brief Controls port reuse() using SO_REUSEPORT (since linux 3.9)
 *
 * @param[in] obj The object.
 *
 * @return If @c true the server will reuse the port, @c false otherwise
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_fd_reuse_port_get(const Eo *obj);

#ifdef EFL_NET_SERVER_FD_PROTECTED
/**
 * @brief When the socket has data to be read, process it.
 *
 * By default this method will call accept() and then decide if
 * @ref efl_net_server_fd_client_add or @ref efl_net_server_fd_client_reject
 * must be executed, however it may be replaced with something else, such as in
 * SOCK_DGRAM (UDP) there is no accept(), only recvfrom().
 *
 * It is called straight from @ref Efl_Loop_Fd "read" event handler and is
 * provided as a method to allow easy extending of the class for various
 * purposes.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_fd_process_incoming_data(Eo *obj);
#endif

#ifdef EFL_NET_SERVER_FD_PROTECTED
/**
 * @brief Accepts a new client, should emit "client,add".
 *
 * Remember to create the client object with a callback to
 * EFL_IO_CLOSER_EVENT_CLOSED during the construction, decrease
 * @ref efl_net_server_clients_count_get as well as unref the client and remove
 * yourself as parent.
 *
 * The new clients should have the server as parent and increase the
 * @ref efl_net_server_clients_count_get.
 *
 * Whenever this function fails, it must close the given client file
 * descriptor.
 *
 * @param[in] obj The object.
 * @param[in] client_fd The file descriptor of the client socket. It comes
 * preconfigured with close_on_exec. On failure, remember to close this socket.
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_fd_client_add(Eo *obj, int client_fd);
#endif

#ifdef EFL_NET_SERVER_FD_PROTECTED
/**
 * @brief Rejects a new client, should emit "client,rejected".
 *
 * Must always close the client socket when it's done.
 *
 * @param[in] obj The object.
 * @param[in] client_fd The file descriptor of the client socket. It comes
 * preconfigured with close_on_exec and should be closed once it's not needed
 * anymore
 *
 * @ingroup Efl_Net_Server_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_fd_client_reject(Eo *obj, int client_fd);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#endif
