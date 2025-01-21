#ifndef _EFL_NET_DIALER_TCP_EO_H_
#define _EFL_NET_DIALER_TCP_EO_H_

#ifndef _EFL_NET_DIALER_TCP_EO_CLASS_TYPE
#define _EFL_NET_DIALER_TCP_EO_CLASS_TYPE

typedef Eo Efl_Net_Dialer_Tcp;

#endif

#ifndef _EFL_NET_DIALER_TCP_EO_TYPES
#define _EFL_NET_DIALER_TCP_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Connects to a remote TCP server.
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
 * @ingroup Efl_Net_Dialer_Tcp
 */
#define EFL_NET_DIALER_TCP_CLASS efl_net_dialer_tcp_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_dialer_tcp_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
