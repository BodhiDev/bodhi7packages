#ifndef _EFL_NET_SERVER_UDP_CLIENT_EO_H_
#define _EFL_NET_SERVER_UDP_CLIENT_EO_H_

#ifndef _EFL_NET_SERVER_UDP_CLIENT_EO_CLASS_TYPE
#define _EFL_NET_SERVER_UDP_CLIENT_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Udp_Client;

#endif

#ifndef _EFL_NET_SERVER_UDP_CLIENT_EO_TYPES
#define _EFL_NET_SERVER_UDP_CLIENT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A UDP client child of Efl.Net.Server_Udp
 *
 * Unlike connection protocols such as TCP or Local, UDP doesn't create extra
 * sockets for its "clients". This thin class will then provide the required
 * socket interface on top of the server internal socket.
 *
 * Given this limitation, some features such as 'cork' (used to coalesce
 * multiple writes() into a single datagram) are not available since it could
 * interfere with other clients.
 *
 * @ingroup Efl_Net_Server_Udp_Client
 */
#define EFL_NET_SERVER_UDP_CLIENT_CLASS efl_net_server_udp_client_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_server_udp_client_class_get(void) EINA_CONST;

/**
 * @brief Query the next datagram size.
 *
 * This will query the next pending datagram size, in bytes. If no datagrams
 * are pending, 0 is returned.
 *
 * @param[in] obj The object.
 *
 * @return Size in bytes
 *
 * @ingroup Efl_Net_Server_Udp_Client
 */
ECORE_CON_API ECORE_CON_API_WEAK size_t efl_net_server_udp_client_next_datagram_size_query(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
