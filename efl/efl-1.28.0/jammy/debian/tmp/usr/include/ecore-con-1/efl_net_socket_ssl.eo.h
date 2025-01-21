#ifndef _EFL_NET_SOCKET_SSL_EO_H_
#define _EFL_NET_SOCKET_SSL_EO_H_

#ifndef _EFL_NET_SOCKET_SSL_EO_CLASS_TYPE
#define _EFL_NET_SOCKET_SSL_EO_CLASS_TYPE

typedef Eo Efl_Net_Socket_Ssl;

#endif

#ifndef _EFL_NET_SOCKET_SSL_EO_TYPES
#define _EFL_NET_SOCKET_SSL_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_socket_ssl_error_handshake_get(void);

/** Failed SSL handshake
 *
 * @ingroup Efl_Net_Socket_Ssl_Error_HANDSHAKE
 */
#define EFL_NET_SOCKET_SSL_ERROR_HANDSHAKE efl_net_socket_ssl_error_handshake_get()
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_socket_ssl_error_certificate_verify_failed_get(void);

/** Failed to verify peer's certificate
 *
 * @ingroup Efl_Net_Socket_Ssl_Error_CERTIFICATE_VERIFY_FAILED
 */
#define EFL_NET_SOCKET_SSL_ERROR_CERTIFICATE_VERIFY_FAILED efl_net_socket_ssl_error_certificate_verify_failed_get()
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A wrapper socket doing SSL (Secure Sockets Layer).
 *
 * Use this wrapper around an existing socket for secure communication. One
 * common use is to apply it to TCP sockets created with
 * @ref Efl_Net_Dialer_Tcp or @ref Efl_Net_Server_Tcp created with "client,add"
 * event.
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
#define EFL_NET_SOCKET_SSL_CLASS efl_net_socket_ssl_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_socket_ssl_class_get(void) EINA_CONST;

/**
 * @brief Adopt an Efl.Net.Dialer or regular Efl.Net.Socket that will be used
 * for the actual communication.
 *
 * If used with an Efl.Net.Dialer object, it will assume the 'connect' role,
 * otherwise will use 'accept'.
 *
 * This is a constructor only method and should be called before
 * @ref efl_finalize.
 *
 * @param[in] obj The object.
 * @param[in] efl_net_socket The socket to adopt
 * @param[in] ctx The SSL context to use when adopting the socket
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_socket_ssl_adopt(Eo *obj, Efl_Net_Socket *efl_net_socket, Efl_Net_Ssl_Context *ctx);

#ifdef EFL_NET_SOCKET_SSL_PROTECTED
/**
 * @brief Return the adopted object, if any. Be careful!
 *
 * @param[in] obj The object.
 * @param[out] efl_net_socket The adopted object, if any, otherwise @c NULL
 * @param[out] ctx The SSL context used when adopting the socket, if any,
 * otherwise @c NULL
 *
 * @return @c true if adopted, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_ssl_adopted_get(const Eo *obj, Efl_Net_Socket **efl_net_socket, Efl_Net_Ssl_Context **ctx);
#endif

/**
 * @brief How to verify the remote peer.
 *
 * @param[in] obj The object.
 * @param[in] verify_mode Remote verification mode
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_socket_ssl_verify_mode_set(Eo *obj, Efl_Net_Ssl_Verify_Mode verify_mode);

/**
 * @brief How to verify the remote peer.
 *
 * @param[in] obj The object.
 *
 * @return Remote verification mode
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Ssl_Verify_Mode efl_net_socket_ssl_verify_mode_get(const Eo *obj);

/**
 * @brief Define if hostname should be verified.
 *
 * This will check the socket hostname (without the port in case of an IP) or
 * the overriden value from @ref efl_net_socket_ssl_hostname_override_get.
 *
 * @param[in] obj The object.
 * @param[in] hostname_verify @c true if the hostname will be verified,
 * @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_socket_ssl_hostname_verify_set(Eo *obj, Eina_Bool hostname_verify);

/**
 * @brief Define if hostname should be verified.
 *
 * This will check the socket hostname (without the port in case of an IP) or
 * the overriden value from @ref efl_net_socket_ssl_hostname_override_get.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the hostname will be verified, @c false otherwise
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_socket_ssl_hostname_verify_get(const Eo *obj);

/**
 * @brief Overrides the hostname to use for this socket.
 *
 * Most of time this is useful if you're using an IP address but the server
 * certificate only specifies DNS (names).
 *
 * If @c NULL, then it will fetch from socket using
 * @ref efl_net_socket_address_remote_get or
 * @ref efl_net_dialer_address_dial_get.
 *
 * It's only used if @ref efl_net_socket_ssl_hostname_verify_get is @c true.
 *
 * @param[in] obj The object.
 * @param[in] hostname_override Hostname for this socket
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_socket_ssl_hostname_override_set(Eo *obj, const char *hostname_override);

/**
 * @brief Overrides the hostname to use for this socket.
 *
 * Most of time this is useful if you're using an IP address but the server
 * certificate only specifies DNS (names).
 *
 * If @c NULL, then it will fetch from socket using
 * @ref efl_net_socket_address_remote_get or
 * @ref efl_net_dialer_address_dial_get.
 *
 * It's only used if @ref efl_net_socket_ssl_hostname_verify_get is @c true.
 *
 * @param[in] obj The object.
 *
 * @return Hostname for this socket
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_socket_ssl_hostname_override_get(const Eo *obj);

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_SOCKET_SSL_EVENT_SSL_READY;

/** Notifies the SSL handshake has been performed and the socket is now able to
 * communicate
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
#define EFL_NET_SOCKET_SSL_EVENT_SSL_READY (&(_EFL_NET_SOCKET_SSL_EVENT_SSL_READY))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_SOCKET_SSL_EVENT_SSL_ERROR;

/** An error such as @ref Efl_Net_Socket_Ssl_Error_HANDSHAKE
 * @return Eina_Error
 *
 * @ingroup Efl_Net_Socket_Ssl
 */
#define EFL_NET_SOCKET_SSL_EVENT_SSL_ERROR (&(_EFL_NET_SOCKET_SSL_EVENT_SSL_ERROR))
#endif /* EFL_BETA_API_SUPPORT */

#endif
