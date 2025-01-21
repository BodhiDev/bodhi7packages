#ifndef _EFL_NET_SOCKET_UDP_EO_H_
#define _EFL_NET_SOCKET_UDP_EO_H_

#ifndef _EFL_NET_SOCKET_UDP_EO_CLASS_TYPE
#define _EFL_NET_SOCKET_UDP_EO_CLASS_TYPE

typedef Eo Efl_Net_Socket_Udp;

#endif

#ifndef _EFL_NET_SOCKET_UDP_EO_TYPES
#define _EFL_NET_SOCKET_UDP_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A base UDP socket.
 *
 * This is the common class and takes an existing FD, usually created by an
 * dialer.
 *
 * Since for the server 'clients' there is no accepted connection it will reuse
 * the same file decriptor. To avoid it being closed, another class
 * Efl.Net.Server_Udp_Client is used instead.
 *
 * @ingroup Efl_Net_Socket_Udp
 */
#define EFL_NET_SOCKET_UDP_CLASS efl_net_socket_udp_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_socket_udp_class_get(void) EINA_CONST;

/**
 * @brief Queries the next datagram size.
 *
 * This will use system calls to determine the next datagram size, in bytes.
 *
 * @param[in] obj The object.
 *
 * @return Size in bytes
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK size_t efl_net_socket_udp_next_datagram_size_query(Eo *obj);

/**
 * @brief Controls UDP's cork using UDP_CORK
 *
 * @param[in] obj The object.
 * @param[in] cork @c true if cork is enabled for this socket, @c false
 * otherwise
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_udp_cork_set(Eo *obj, Eina_Bool cork);

/**
 * @brief Controls UDP's cork using UDP_CORK
 *
 * @param[in] obj The object.
 *
 * @return @c true if cork is enabled for this socket, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_udp_cork_get(const Eo *obj);

/**
 * @brief Avoids sent UDP packets being routed by a gateway, limiting them to
 * the local network.
 *
 * This will use SO_DONTROUTE option to avoid gateways routing sent packets
 * outside the local network. It's useful for some protocols that only want the
 * local area to be affected.
 *
 * @param[in] obj The object.
 * @param[in] dont_route @c true if do not route is enabled, @c false otherwise
 *
 * @return @c true on success
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_udp_dont_route_set(Eo *obj, Eina_Bool dont_route);

/**
 * @brief Avoids sent UDP packets being routed by a gateway, limiting them to
 * the local network.
 *
 * This will use SO_DONTROUTE option to avoid gateways routing sent packets
 * outside the local network. It's useful for some protocols that only want the
 * local area to be affected.
 *
 * @param[in] obj The object.
 *
 * @return @c true if do not route is enabled, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_udp_dont_route_get(const Eo *obj);

/**
 * @brief Controls address reuse() using SO_REUSEADDR
 *
 * @param[in] obj The object.
 * @param[in] reuse_address @c true if address reuse is enabled, @c false
 * otherwise
 *
 * @return @c true on success
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_udp_reuse_address_set(Eo *obj, Eina_Bool reuse_address);

/**
 * @brief Controls address reuse() using SO_REUSEADDR
 *
 * @param[in] obj The object.
 *
 * @return @c true if address reuse is enabled, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_udp_reuse_address_get(const Eo *obj);

/**
 * @brief Controls port reuse() using SO_REUSEPORT (since Linux 3.9)
 *
 * @param[in] obj The object.
 * @param[in] reuse_port @c true if port reuse is enabled, @c false otherwise
 *
 * @return @c true on success
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_udp_reuse_port_set(Eo *obj, Eina_Bool reuse_port);

/**
 * @brief Controls port reuse() using SO_REUSEPORT (since Linux 3.9)
 *
 * @param[in] obj The object.
 *
 * @return @c true if port reuse is enabled, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_udp_reuse_port_get(const Eo *obj);

/**
 * @brief Joins a multicast group.
 *
 * The multicast address should be in the format:
 *
 * IP\@INTERFACE
 *
 * With '\@INTERFACE' being optional, such as:
 *
 * 224.0.0.1 - use any interface (ie: 0.0.0.0) 224.0.0.1@0.0.0.0
 * 224.0.0.1@192.168.0.1 - use the interface assigned to 192.168.0.1 ff02::1@0
 * - use any interface ff02::1@1 - use loopback interface (idx=1)
 *
 * @param[in] obj The object.
 * @param[in] address Multicast address to join
 *
 * @return $0 on success, error code otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_socket_udp_multicast_join(Eo *obj, const char *address);

/**
 * @brief Leaves a multicast group.
 *
 * This reverses the effect of @ref efl_net_socket_udp_multicast_join.
 *
 * @param[in] obj The object.
 * @param[in] address Multicast address to leave
 *
 * @return $0 on success, error code otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_socket_udp_multicast_leave(Eo *obj, const char *address);

/**
 * @brief Returns the multicast groups this server has joined.
 *
 * The iterator is only valid until a new group is joined or left using
 * @ref efl_net_socket_udp_multicast_join or
 * @ref efl_net_socket_udp_multicast_leave.
 *
 * @param[in] obj The object.
 *
 * @return Iterator to multicast groups
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_socket_udp_multicast_groups_get(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Controls time to live in number of hops.
 *
 * If 1 (default), packets are only delivered to the local network.
 *
 * @param[in] obj The object.
 * @param[in] ttl Time to live
 *
 * @return $0 on success, error code otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_socket_udp_multicast_time_to_live_set(Eo *obj, uint8_t ttl);

/**
 * @brief Controls time to live in number of hops.
 *
 * If 1 (default), packets are only delivered to the local network.
 *
 * @param[in] obj The object.
 *
 * @return Time to live
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK uint8_t efl_net_socket_udp_multicast_time_to_live_get(const Eo *obj);

/**
 * @brief Controls whenever multicast will loopback packets locally.
 *
 * If @c false, then packets won't be looped back locally, just delivered for
 * remote peers.
 *
 * @param[in] obj The object.
 * @param[in] loopback @c true multicast packets are loopbacked, @c false
 * otherwise
 *
 * @return $0 on success, error code otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_socket_udp_multicast_loopback_set(Eo *obj, Eina_Bool loopback);

/**
 * @brief Controls whenever multicast will loopback packets locally.
 *
 * If @c false, then packets won't be looped back locally, just delivered for
 * remote peers.
 *
 * @param[in] obj The object.
 *
 * @return @c true multicast packets are loopbacked, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_udp_multicast_loopback_get(const Eo *obj);

/**
 * @brief Forces binding to a specific address.
 *
 * Some servers may request packets being sent from a specific address, then
 * one binds to that address before proceeding to dial.
 *
 * If no address is provided or bind is not called, a random port is bound
 * automatically to any address.
 *
 * @note IP and PORT must be all numeric, no name resolution is applied.
 *
 * @param[in] obj The object.
 * @param[in] address Address to bind to
 *
 * @return $0 on success, error code otherwise
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_socket_udp_bind_set(Eo *obj, const char *address);

/**
 * @brief Forces binding to a specific address.
 *
 * Some servers may request packets being sent from a specific address, then
 * one binds to that address before proceeding to dial.
 *
 * If no address is provided or bind is not called, a random port is bound
 * automatically to any address.
 *
 * @note IP and PORT must be all numeric, no name resolution is applied.
 *
 * @param[in] obj The object.
 *
 * @return Address to bind to
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_socket_udp_bind_get(const Eo *obj);

#ifdef EFL_NET_SOCKET_UDP_PROTECTED
/**
 * @brief Initializes the socket to communicate with a given IP address
 *
 * @param[in] obj The object.
 * @param[in] remote_address The remote address this socket will communicate
 * with
 *
 * @ingroup Efl_Net_Socket_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_socket_udp_init(Eo *obj, Efl_Net_Ip_Address *remote_address);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#endif
