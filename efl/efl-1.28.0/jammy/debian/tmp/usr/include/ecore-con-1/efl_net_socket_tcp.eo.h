#ifndef _EFL_NET_SOCKET_TCP_EO_H_
#define _EFL_NET_SOCKET_TCP_EO_H_

#ifndef _EFL_NET_SOCKET_TCP_EO_CLASS_TYPE
#define _EFL_NET_SOCKET_TCP_EO_CLASS_TYPE

typedef Eo Efl_Net_Socket_Tcp;

#endif

#ifndef _EFL_NET_SOCKET_TCP_EO_TYPES
#define _EFL_NET_SOCKET_TCP_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A base TCP socket.
 *
 * This is the common class and takes an existing FD, usually created by an
 * dialer or server.
 *
 * @ingroup Efl_Net_Socket_Tcp
 */
#define EFL_NET_SOCKET_TCP_CLASS efl_net_socket_tcp_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_socket_tcp_class_get(void) EINA_CONST;

/**
 * @brief Controls keep-alive using SO_KEEPALIVE
 *
 * @param[in] obj The object.
 * @param[in] keep_alive @c true if keep alive is enabled, @c false otherwise
 *
 * @return @c true on success
 *
 * @ingroup Efl_Net_Socket_Tcp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_tcp_keep_alive_set(Eo *obj, Eina_Bool keep_alive);

/**
 * @brief Controls keep-alive using SO_KEEPALIVE
 *
 * @param[in] obj The object.
 *
 * @return @c true if keep alive is enabled, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Tcp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_tcp_keep_alive_get(const Eo *obj);

/**
 * @brief Controls TCP's no-delay using TCP_NODELAY
 *
 * @param[in] obj The object.
 * @param[in] no_delay @c true if no delay is enabled, @c false otherwise
 *
 * @return @c true on success
 *
 * @ingroup Efl_Net_Socket_Tcp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_tcp_no_delay_set(Eo *obj, Eina_Bool no_delay);

/**
 * @brief Controls TCP's no-delay using TCP_NODELAY
 *
 * @param[in] obj The object.
 *
 * @return @c true if no delay is enabled, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Tcp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_tcp_no_delay_get(const Eo *obj);

/**
 * @brief Controls TCP's cork using TCP_CORK
 *
 * @param[in] obj The object.
 * @param[in] cork @c true if cork is enabled, @c false otherwise
 *
 * @return @c true on success
 *
 * @ingroup Efl_Net_Socket_Tcp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_tcp_cork_set(Eo *obj, Eina_Bool cork);

/**
 * @brief Controls TCP's cork using TCP_CORK
 *
 * @param[in] obj The object.
 *
 * @return @c true if cork is enabled, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Tcp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_tcp_cork_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
