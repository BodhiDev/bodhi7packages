#ifndef _EFL_NET_SERVER_IP_EO_H_
#define _EFL_NET_SERVER_IP_EO_H_

#ifndef _EFL_NET_SERVER_IP_EO_CLASS_TYPE
#define _EFL_NET_SERVER_IP_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Ip;

#endif

#ifndef _EFL_NET_SERVER_IP_EO_TYPES
#define _EFL_NET_SERVER_IP_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** An IP server.
 *
 * @ingroup Efl_Net_Server_Ip
 */
#define EFL_NET_SERVER_IP_CLASS efl_net_server_ip_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_server_ip_class_get(void) EINA_CONST;

/**
 * @brief Whenever IPv6 listen address will accept only same-family clients or
 * will allow IPv4 to connect as well.
 *
 * Since Linux 2.4.21, Windows Vista and MacOS X these control whenever a
 * server that did bind to an IPv6 address will accept only IPv6 clients or
 * will also accept IPv4 by automatically converting them in an IPv6 address,
 * allowing a single socket to handle both protocols.
 *
 * If an IPv6 address was used in @ref efl_net_server_address_get, this
 * property is @c false and an IPv4 connects, then an address such as
 * [::ffff:IPv4]:PORT will be used, such as [::ffff:192.168.0.2]:1234, where
 * the IPv4 address can be extracted.
 *
 * If an IPv4 address was used in @ref efl_net_server_address_get, this has no
 * effect.
 *
 * Systems can configure their default value, usually true (allows only IPv6
 * clients).
 *
 * @param[in] obj The object.
 * @param[in] ipv6_only If @c true the server will only accept IPv6 clients,
 * @c false otherwise
 *
 * @ingroup Efl_Net_Server_Ip
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_ip_ipv6_only_set(Eo *obj, Eina_Bool ipv6_only);

/**
 * @brief Whenever IPv6 listen address will accept only same-family clients or
 * will allow IPv4 to connect as well.
 *
 * Since Linux 2.4.21, Windows Vista and MacOS X these control whenever a
 * server that did bind to an IPv6 address will accept only IPv6 clients or
 * will also accept IPv4 by automatically converting them in an IPv6 address,
 * allowing a single socket to handle both protocols.
 *
 * If an IPv6 address was used in @ref efl_net_server_address_get, this
 * property is @c false and an IPv4 connects, then an address such as
 * [::ffff:IPv4]:PORT will be used, such as [::ffff:192.168.0.2]:1234, where
 * the IPv4 address can be extracted.
 *
 * If an IPv4 address was used in @ref efl_net_server_address_get, this has no
 * effect.
 *
 * Systems can configure their default value, usually true (allows only IPv6
 * clients).
 *
 * @param[in] obj The object.
 *
 * @return If @c true the server will only accept IPv6 clients, @c false
 * otherwise
 *
 * @ingroup Efl_Net_Server_Ip
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_ip_ipv6_only_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
