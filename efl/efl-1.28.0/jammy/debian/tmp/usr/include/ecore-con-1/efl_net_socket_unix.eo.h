#ifndef _EFL_NET_SOCKET_UNIX_EO_H_
#define _EFL_NET_SOCKET_UNIX_EO_H_

#ifndef _EFL_NET_SOCKET_UNIX_EO_CLASS_TYPE
#define _EFL_NET_SOCKET_UNIX_EO_CLASS_TYPE

typedef Eo Efl_Net_Socket_Unix;

#endif

#ifndef _EFL_NET_SOCKET_UNIX_EO_TYPES
#define _EFL_NET_SOCKET_UNIX_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A base UNIX socket.
 *
 * This is the common class and takes an existing FD, usually created by an
 * dialer or server.
 *
 * @ingroup Efl_Net_Socket_Unix
 */
#define EFL_NET_SOCKET_UNIX_CLASS efl_net_socket_unix_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_socket_unix_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
