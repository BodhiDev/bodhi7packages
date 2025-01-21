#ifndef _EFL_NET_DIALER_SSL_EO_H_
#define _EFL_NET_DIALER_SSL_EO_H_

#ifndef _EFL_NET_DIALER_SSL_EO_CLASS_TYPE
#define _EFL_NET_DIALER_SSL_EO_CLASS_TYPE

typedef Eo Efl_Net_Dialer_Ssl;

#endif

#ifndef _EFL_NET_DIALER_SSL_EO_TYPES
#define _EFL_NET_DIALER_SSL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Connects to a remote SSL server using TCP.
 *
 * This creates an internal @ref Efl_Net_Dialer_Tcp and once connected it will
 * start the SSL handshake.
 *
 * If the proxy is @c NULL (default), then the system proxy will be used. On
 * UNIX that's the environment variable @c socks_proxy (or '$proxy' or
 * '$all_proxy') is used if the given address doesn't match @c no_proxy
 * patterns. To disable proxy use an empty string.
 *
 * If the proxy is @c NULL (default), then the system proxy will be used. On
 * UNIX that's the environment variable @c socks_proxy (or '$all_proxy') is
 * used if the given address doesn't match @c no_proxy patterns. To disable
 * proxy use an empty string. If provided proxy must be one of the protocols:
 *
 * - socks5://username:password\@proxyserver:port (SOCKSv5) -
 * socks5h://username\@proxyserver:port (let socks server to resolve domain) -
 * socks5://proxyserver:port - socks5://proxyserver (default port 1080) -
 * socks4a://proxyserver:port (SOCKSv4 and let socks server to resolve domain)
 * - socks4://proxyserver:port (SOCKSv4)
 *
 * @ingroup Efl_Net_Dialer_Ssl
 */
#define EFL_NET_DIALER_SSL_CLASS efl_net_dialer_ssl_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_dialer_ssl_class_get(void) EINA_CONST;

/**
 * @brief Defines the SSL context to use for this dialer.
 *
 * This specifies a shared context for all clients, with certificate, private
 * keys, CRL, CAs...
 *
 * It must be called before @ref efl_finalize!
 *
 * @param[in] obj The object.
 * @param[in] ssl_context SSL context
 *
 * @ingroup Efl_Net_Dialer_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_ssl_context_set(Eo *obj, Efl_Net_Ssl_Context *ssl_context);

/**
 * @brief Defines the SSL context to use for this dialer.
 *
 * This specifies a shared context for all clients, with certificate, private
 * keys, CRL, CAs...
 *
 * It must be called before @ref efl_finalize!
 *
 * @param[in] obj The object.
 *
 * @return SSL context
 *
 * @ingroup Efl_Net_Dialer_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Ssl_Context *efl_net_dialer_ssl_context_get(const Eo *obj);

/**
 * @brief Controls keep-alive using SO_KEEPALIVE
 *
 * @param[in] obj The object.
 * @param[in] keep_alive @c true if keep alive is enabled, @c false otherwise
 *
 * @return @c true on success
 *
 * @ingroup Efl_Net_Dialer_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_dialer_ssl_keep_alive_set(Eo *obj, Eina_Bool keep_alive);

/**
 * @brief Controls keep-alive using SO_KEEPALIVE
 *
 * @param[in] obj The object.
 *
 * @return @c true if keep alive is enabled, @c false otherwise
 *
 * @ingroup Efl_Net_Dialer_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_dialer_ssl_keep_alive_get(const Eo *obj);

/**
 * @brief Controls TCP's no-delay using TCP_NODELAY
 *
 * @param[in] obj The object.
 * @param[in] no_delay @c true if no delay is enabled, @c false otherwise
 *
 * @return @c true on success
 *
 * @ingroup Efl_Net_Dialer_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_dialer_ssl_no_delay_set(Eo *obj, Eina_Bool no_delay);

/**
 * @brief Controls TCP's no-delay using TCP_NODELAY
 *
 * @param[in] obj The object.
 *
 * @return @c true if no delay is enabled, @c false otherwise
 *
 * @ingroup Efl_Net_Dialer_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_dialer_ssl_no_delay_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
