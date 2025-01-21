#ifndef _EFL_NET_SOCKET_FD_EO_H_
#define _EFL_NET_SOCKET_FD_EO_H_

#ifndef _EFL_NET_SOCKET_FD_EO_CLASS_TYPE
#define _EFL_NET_SOCKET_FD_EO_CLASS_TYPE

typedef Eo Efl_Net_Socket_Fd;

#endif

#ifndef _EFL_NET_SOCKET_FD_EO_TYPES
#define _EFL_NET_SOCKET_FD_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A base implementation for sockets over file descriptors (fd)
 *
 * This is the common class and takes an existing FD, usually created by an
 * dialler or server.
 *
 * @ref efl_io_closer_close_on_exec_get and
 * @ref efl_io_closer_close_on_invalidate_get are respected and default to
 * @c true.
 *
 * @ingroup Efl_Net_Socket_Fd
 */
#define EFL_NET_SOCKET_FD_CLASS efl_net_socket_fd_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_socket_fd_class_get(void) EINA_CONST;

#ifdef EFL_NET_SOCKET_FD_PROTECTED
/**
 * @brief The address family (AF_*) family of this socket.
 *
 * It will be one of AF_INET (IPv4), AF_INET6 (IPv6), AF_UNIX...
 *
 * It must be set before the @ref efl_loop_fd_set is called with a valid file
 * descriptor.
 *
 * @param[in] obj The object.
 * @param[in] family Address family
 *
 * @ingroup Efl_Net_Socket_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_socket_fd_family_set(Eo *obj, int family);
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
 * @return Address family
 *
 * @ingroup Efl_Net_Socket_Fd
 */
ECORE_CON_API ECORE_CON_API_WEAK int efl_net_socket_fd_family_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
