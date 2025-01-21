#ifndef _EFL_NET_SERVER_EO_H_
#define _EFL_NET_SERVER_EO_H_

#ifndef _EFL_NET_SERVER_EO_CLASS_TYPE
#define _EFL_NET_SERVER_EO_CLASS_TYPE

typedef Eo Efl_Net_Server;

#endif

#ifndef _EFL_NET_SERVER_EO_TYPES
#define _EFL_NET_SERVER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The basic server interface.
 *
 * This will start serving and accepting clients once @ref efl_net_server_serve
 * is called and the "serving" event is dispatched.
 *
 * When new clients are accepted the "client,add" event is dispatched with a
 * child object implementing @ref Efl_Net_Socket interface. These implement the
 * standard @ref Efl_Io_Reader, @ref Efl_Io_Writer and @ref Efl_Io_Closer
 * interfaces, so can be used with utilities such as @ref Efl_Io_Copier.
 *
 * @ingroup Efl_Net_Server
 */
#define EFL_NET_SERVER_INTERFACE efl_net_server_interface_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_server_interface_get(void) EINA_CONST;

/**
 * @brief Starts serving requests.
 *
 * This method starts the server, resolves addresses and then proceeds to the
 * actual listen(2)/bind(2) equivalent..
 *
 * Once the connection is fully set up the "serving" event is dispatched.
 *
 * @param[in] obj The object.
 * @param[in] address Address to run server on
 *
 * @return $0 on success, error code otherwise
 *
 * @ingroup Efl_Net_Server
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_server_serve(Eo *obj, const char *address);

#ifdef EFL_NET_SERVER_PROTECTED
/**
 * @brief The address to which the server is bound.
 *
 * The actual value depends on the type of server, such as an IPv4 (ip:port) or
 * IPv6 ([ip]:port) formatted for a TCP/UDP server, the path if an Unix
 * Local...
 *
 * It's always resolved. If operations are working with domain names or URLs,
 * these are the values the kernel reports. It's similar to getsockname() in
 * behavior.
 *
 * @param[in] obj The object.
 * @param[in] address Address the server is bound to
 *
 * @ingroup Efl_Net_Server
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_address_set(Eo *obj, const char *address);
#endif

/**
 * @brief The address to which the server is bound.
 *
 * The actual value depends on the type of server, such as an IPv4 (ip:port) or
 * IPv6 ([ip]:port) formatted for a TCP/UDP server, the path if an Unix
 * Local...
 *
 * It's always resolved. If operations are working with domain names or URLs,
 * these are the values the kernel reports. It's similar to getsockname() in
 * behavior.
 *
 * @param[in] obj The object.
 *
 * @return Address the server is bound to
 *
 * @ingroup Efl_Net_Server
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_server_address_get(const Eo *obj);

#ifdef EFL_NET_SERVER_PROTECTED
/**
 * @brief Number of concurrent clients accepted by the server.
 *
 * @param[in] obj The object.
 * @param[in] count Number of connected clients
 *
 * @ingroup Efl_Net_Server
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_clients_count_set(Eo *obj, unsigned int count);
#endif

/**
 * @brief Number of concurrent clients accepted by the server.
 *
 * @param[in] obj The object.
 *
 * @return Number of connected clients
 *
 * @ingroup Efl_Net_Server
 */
ECORE_CON_API ECORE_CON_API_WEAK unsigned int efl_net_server_clients_count_get(const Eo *obj);

/**
 * @brief Number of maximum concurrent clients allowed by the server.
 *
 * If reject_excess is set to true, then the connection will be accepted and
 * immediately closed.
 *
 * If reject_excess is set to false (default), then accept(2) won't be called
 * and clients will be queued at the kernel side, usually up to 4096 pending
 * clients.
 *
 * Whenever changed, this property will only apply to new connections, that is,
 * if the current connection count already exceeds the limit, no connections
 * will be closed.
 *
 * @param[in] obj The object.
 * @param[in] limit Number of allowed client connections
 * @param[in] reject_excess If @c true connection is accepted and immediately
 * closed
 *
 * @ingroup Efl_Net_Server
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_clients_limit_set(Eo *obj, unsigned int limit, Eina_Bool reject_excess);

/**
 * @brief Number of maximum concurrent clients allowed by the server.
 *
 * If reject_excess is set to true, then the connection will be accepted and
 * immediately closed.
 *
 * If reject_excess is set to false (default), then accept(2) won't be called
 * and clients will be queued at the kernel side, usually up to 4096 pending
 * clients.
 *
 * Whenever changed, this property will only apply to new connections, that is,
 * if the current connection count already exceeds the limit, no connections
 * will be closed.
 *
 * @param[in] obj The object.
 * @param[out] limit Number of allowed client connections
 * @param[out] reject_excess If @c true connection is accepted and immediately
 * closed
 *
 * @ingroup Efl_Net_Server
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_clients_limit_get(const Eo *obj, unsigned int *limit, Eina_Bool *reject_excess);

#ifdef EFL_NET_SERVER_PROTECTED
/**
 * @brief Implementions should call this method to announce new clients.
 *
 * This method will account the new client in
 * @ref efl_net_server_clients_count_get as well as emit the event
 * "client,add".
 *
 * After this call, the client ownership will be managed. If no event handler
 * references the object, it will be deleted.
 *
 * Most implementions will do the sequence:
 *
 * - emit "client,add"
 *
 * - check if client was referenced
 *
 * - if we're not the parent anymore, ignore (do not change
 * @ref efl_net_server_clients_count_get) and return @c true.
 *
 * - if not referenced, delete it and return @c false.
 *
 * - if it's closed, delete it and return @c false.
 *
 * - if referenced, increment @ref efl_net_server_clients_count_get and monitor
 * for client "closed" event and return @c true.
 *
 * - on client "closed", decrease @ref efl_net_server_clients_count_get and
 * unset its parent (if we're still the parent).
 *
 * Do not monitor "closed" before emitting "client,add". Doing so may lead to
 * double free if callbacks close the client by themselves!
 *
 * @param[in] obj The object.
 * @param[in] client A socket representing the client.
 *
 * @return If @c true, then client was handled. If @c false, it was dropped and
 * deleted.
 *
 * @ingroup Efl_Net_Server
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_client_announce(Eo *obj, Efl_Net_Socket *client);
#endif

#ifdef EFL_NET_SERVER_PROTECTED
/**
 * @brief Returns whenever the server is ready to accept clients or not.
 *
 * Whenever this property becomes true, "serving" event should be dispatched.
 *
 * @param[in] obj The object.
 * @param[in] serving @c true if server is ready to accept connections,
 * @c false otherwise
 *
 * @ingroup Efl_Net_Server
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_serving_set(Eo *obj, Eina_Bool serving);
#endif

/**
 * @brief Returns whenever the server is ready to accept clients or not.
 *
 * Whenever this property becomes true, "serving" event should be dispatched.
 *
 * @param[in] obj The object.
 *
 * @return @c true if server is ready to accept connections, @c false otherwise
 *
 * @ingroup Efl_Net_Server
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_serving_get(const Eo *obj);

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_SERVER_EVENT_CLIENT_ADD;

/**
 * @brief A new client socket has been created.
 *
 * The socket will have the server as parent and can be closed by both the
 * server or the user using @ref Efl_Io_Closer.
 *
 * @return Efl_Net_Socket *
 *
 * @ingroup Efl_Net_Server
 */
#define EFL_NET_SERVER_EVENT_CLIENT_ADD (&(_EFL_NET_SERVER_EVENT_CLIENT_ADD))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_SERVER_EVENT_CLIENT_REJECTED;

/** Notifies a client was rejected due excess, see
 * @ref efl_net_server_clients_limit_get.
 * @return const char *
 *
 * @ingroup Efl_Net_Server
 */
#define EFL_NET_SERVER_EVENT_CLIENT_REJECTED (&(_EFL_NET_SERVER_EVENT_CLIENT_REJECTED))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_SERVER_EVENT_SERVER_ERROR;

/** An error has occurred and the server needs to be stopped.
 * @return Eina_Error
 *
 * @ingroup Efl_Net_Server
 */
#define EFL_NET_SERVER_EVENT_SERVER_ERROR (&(_EFL_NET_SERVER_EVENT_SERVER_ERROR))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_SERVER_EVENT_SERVING;

/** Notifies the server is ready to accept clients. See property
 * @ref efl_net_server_serving_get
 *
 * @ingroup Efl_Net_Server
 */
#define EFL_NET_SERVER_EVENT_SERVING (&(_EFL_NET_SERVER_EVENT_SERVING))
#endif /* EFL_BETA_API_SUPPORT */

#endif
