#ifndef _EFL_NET_SOCKET_EO_H_
#define _EFL_NET_SOCKET_EO_H_

#ifndef _EFL_NET_SOCKET_EO_CLASS_TYPE
#define _EFL_NET_SOCKET_EO_CLASS_TYPE

typedef Eo Efl_Net_Socket;

#endif

#ifndef _EFL_NET_SOCKET_EO_TYPES
#define _EFL_NET_SOCKET_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The basic socket interface.
 *
 * This is built upon the three core Input/Output interfaces: -
 * @ref Efl_Io_Reader: to receive data. - @ref Efl_Io_Writer: to send data. -
 * @ref Efl_Io_Closer: to close the socket for further operations.
 *
 * As such it can be used with utilities like @ref Efl_Io_Copier.
 *
 * @ingroup Efl_Net_Socket
 */
#define EFL_NET_SOCKET_INTERFACE efl_net_socket_interface_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_socket_interface_get(void) EINA_CONST;

#ifdef EFL_NET_SOCKET_PROTECTED
/**
 * @brief The local address, similar to getsockname().
 *
 * The actual value depends on the type of socket, such as an IPv4 (ip:port) or
 * IPv6 ([ip]:port) formatted for a TCP/UDP socket, the path if an Unix
 * Local...
 *
 * It's always resolved. If operations are working with domain names or URLs,
 * these are the values the kernel reports. It's similar to getsockname() in
 * behavior.
 *
 * @param[in] obj The object.
 * @param[in] address Local address
 *
 * @ingroup Efl_Net_Socket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_socket_address_local_set(Eo *obj, const char *address);
#endif

/**
 * @brief The local address, similar to getsockname().
 *
 * The actual value depends on the type of socket, such as an IPv4 (ip:port) or
 * IPv6 ([ip]:port) formatted for a TCP/UDP socket, the path if an Unix
 * Local...
 *
 * It's always resolved. If operations are working with domain names or URLs,
 * these are the values the kernel reports. It's similar to getsockname() in
 * behavior.
 *
 * @param[in] obj The object.
 *
 * @return Local address
 *
 * @ingroup Efl_Net_Socket
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_socket_address_local_get(const Eo *obj);

#ifdef EFL_NET_SOCKET_PROTECTED
/**
 * @brief The remote address, similar to getpeername().
 *
 * The actual value depends on the type of socket, like an IPv4 (ip:port) or
 * IPv6 ([ip]:port) formatted for a TCP/UDP socket, the path if an Unix
 * Local...
 *
 * It's always resolved. If operations are working with domain names or URLs,
 * these are the values the kernel reports. It's similar to getpeername() in
 * behavior.
 *
 * @param[in] obj The object.
 * @param[in] address Remote address
 *
 * @ingroup Efl_Net_Socket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_socket_address_remote_set(Eo *obj, const char *address);
#endif

/**
 * @brief The remote address, similar to getpeername().
 *
 * The actual value depends on the type of socket, like an IPv4 (ip:port) or
 * IPv6 ([ip]:port) formatted for a TCP/UDP socket, the path if an Unix
 * Local...
 *
 * It's always resolved. If operations are working with domain names or URLs,
 * these are the values the kernel reports. It's similar to getpeername() in
 * behavior.
 *
 * @param[in] obj The object.
 *
 * @return Remote address
 *
 * @ingroup Efl_Net_Socket
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_socket_address_remote_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
