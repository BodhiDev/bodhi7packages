#ifndef _EFL_NET_CONTROL_ACCESS_POINT_EO_H_
#define _EFL_NET_CONTROL_ACCESS_POINT_EO_H_

#ifndef _EFL_NET_CONTROL_ACCESS_POINT_EO_CLASS_TYPE
#define _EFL_NET_CONTROL_ACCESS_POINT_EO_CLASS_TYPE

typedef Eo Efl_Net_Control_Access_Point;

#endif

#ifndef _EFL_NET_CONTROL_ACCESS_POINT_EO_TYPES
#define _EFL_NET_CONTROL_ACCESS_POINT_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Provides the access point state.
 *
 * @ingroup Efl_Net_Control_Access_Point_State
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_STATE_IDLE = 0, /**< Nothing is happening with
                                                * this access point */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_ASSOCIATION, /**< The access point is
                                                   * trying to associate
                                                   * itself. This is the first
                                                   * state after a connection
                                                   * attempt. */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_CONFIGURATION, /**< The access point is
                                                     * configuring itself, such
                                                     * as DHCP. */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_LOCAL, /**< The access point is connected
                                             * but the internet connection
                                             * hasn't been validated. */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_ONLINE, /**< The access point is connected
                                              * and the internet connection has
                                              * been validated. */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_DISCONNECT, /**< The access point is
                                                  * disconnecting. */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_FAILURE /**< The connection attempt failed,
                                              * @ref efl_net_control_access_point_error_get
                                              * will provide more details */
} Efl_Net_Control_Access_Point_State;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** The reason for the connection error.
 *
 * @ingroup Efl_Net_Control_Access_Point_Error
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_NONE = 0, /**< All OK, no errors */
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_OUT_OF_RANGE, /**< Wireless device is out
                                                    * of range. */
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_PIN_MISSING, /**< PIN was required and is
                                                   * missing. */
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_DHCP_FAILED, /**< DHCP failed to provide
                                                   * configuration. */
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_CONNECT_FAILED, /**< Could not connect to
                                                      * access point. */
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_LOGIN_FAILED /**< Login or authentication
                                                   * information was incorrect,
                                                   * agent_request_input event
                                                   * may be emitted. */
} Efl_Net_Control_Access_Point_Error;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Bitwise-able securities supported by an access point.
 *
 * @ingroup Efl_Net_Control_Access_Point_Security
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_SECURITY_UNKNOW = 0, /**< Unknown */
  EFL_NET_CONTROL_ACCESS_POINT_SECURITY_NONE = 1 /* 1 >> 0 */, /**< Open access, no security */
  EFL_NET_CONTROL_ACCESS_POINT_SECURITY_WEP = 2 /* 1 >> 1 */, /**< WEP */
  EFL_NET_CONTROL_ACCESS_POINT_SECURITY_PSK = 4 /* 1 >> 2 */, /**< PSK (Pre Shared Key), such as WPA
                                                               * or RSN */
  EFL_NET_CONTROL_ACCESS_POINT_SECURITY_IEEE802_1X = 8 /* 1 >> 3 */ /**< IEEE 802.1X */
} Efl_Net_Control_Access_Point_Security;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** The method used to configure IPv4
 *
 * @ingroup Efl_Net_Control_Access_Point_Ipv4_Method
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_IPV4_METHOD_OFF = 0, /**< IPv4 is disabled. */
  EFL_NET_CONTROL_ACCESS_POINT_IPV4_METHOD_DHCP, /**< IPv4 is configured using
                                                  * DHCP. */
  EFL_NET_CONTROL_ACCESS_POINT_IPV4_METHOD_MANUAL, /**< IPv4 is manually set
                                                    * using address, netmask
                                                    * and gateway */
  EFL_NET_CONTROL_ACCESS_POINT_IPV4_METHOD_UNSET /**< Only to be used with
                                                  * @ref efl_net_control_access_point_configuration_ipv4_get
                                                  */
} Efl_Net_Control_Access_Point_Ipv4_Method;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** The method used to configure IPv6
 *
 * @ingroup Efl_Net_Control_Access_Point_Ipv6_Method
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_OFF = 0, /**< IPv6 is disabled. */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_FIXED, /**< IPv6 is fixed by operator
                                                   * and cannot be changed. */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_MANUAL, /**< IPv6 is manually set
                                                    * using address, netmask
                                                    * and gateway. */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_AUTO_PRIVACY_NONE, /**< IPv6 is set using dhcp or using a
                                                               * tunnel6to4. No privacy extensions
                                                               * should be used. */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_AUTO_PRIVACY_PUBLIC, /**< IPv6 is set using dhcp or using a
                                                                 * tunnel6to4, privacy extensions are
                                                                 * used and the system prefers a public
                                                                 * IP address over temporary addresses.
                                                                 */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_AUTO_PRIVACY_TEMPORARY, /**< IPv6 is set using dhcp or using a
                                                                    * tunnel6to4, privacy extensions are
                                                                    * used and the system prefers a
                                                                    * temporary IP address over public
                                                                    * addresses. */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_TUNNEL6TO4, /**< IPv6 was configured
                                                        * using a 6-to-4
                                                        * tunnel. This cannot
                                                        * be set by the user,
                                                        * which is set to
                                                        * "auto" instead */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_UNSET /**< Only to be used with
                                                  * @ref efl_net_control_access_point_configuration_ipv6_get
                                                  */
} Efl_Net_Control_Access_Point_Ipv6_Method;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** The method used to configure Proxies.
 *
 * @ingroup Efl_Net_Control_Access_Point_Proxy_Method
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_OFF = 0, /**< Direct connection to
                                                      * the internet, no proxy
                                                      * used. */
  EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_AUTO, /**< Proxy is autoconfigured
                                                   * using
                                                   * Proxy-Auto-Configuration
                                                   * (PAC) using given URL. */
  EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_MANUAL, /**< Proxy is configured
                                                     * manually using servers
                                                     * and excludes. */
  EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_UNSET /**< Only to be used with
                                                   * @ref efl_net_control_access_point_configuration_proxy_get.
                                                   */
} Efl_Net_Control_Access_Point_Proxy_Method;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief An access point for network connectivity.
 *
 * The @ref Efl_Net_Control_Manager is composed of multiple technologies, each
 * create access points to allow configuration and connection.
 *
 * An application requiring only a network connection can just use a
 * @ref Efl_Net_Session instead.
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
#define EFL_NET_CONTROL_ACCESS_POINT_CLASS efl_net_control_access_point_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_control_access_point_class_get(void) EINA_CONST;

/**
 * @brief Connects to this access point.
 *
 * This connection will happen asynchronously in the background, with results
 * being delivered by events in the access point object, such as the "changed".
 *
 * Successful connections will remember the device and set it to auto-connect
 * using the property @ref efl_net_control_access_point_auto_connect_get.
 *
 * See @ref efl_net_control_access_point_forget,
 * @ref efl_net_control_access_point_remembered_get,
 * @ref efl_net_control_access_point_auto_connect_get and
 * @ref efl_net_control_access_point_disconnect
 *
 * The future may fail with non-fatal errors such as EINPROGRESS (the
 * connection was already ongoing) and EALREADY (the connection was already
 * established).
 *
 * @param[in] obj The object.
 *
 * @return Future for asynchronous connect
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Future *efl_net_control_access_point_connect(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Disconnects from this access point.
 *
 * When disconnected previously connected access points won't be forgotten. The
 * configuration and other details such as priority and passphrase will be
 * available for future re-connection with a call to
 * @ref efl_net_control_access_point_connect. If you need to disconnect and
 * forget all access point information, use
 * @ref efl_net_control_access_point_forget instead.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_disconnect(Eo *obj);

/**
 * @brief Disconnects and forgets about this access point.
 *
 * Successful @ref efl_net_control_access_point_connect will always remember
 * the access point for future re-connections. This method overrides this by
 * disconnecting and forgetting the access point and its configuration, which
 * will set @ref efl_net_control_access_point_remembered_get to @c false.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_forget(Eo *obj);

/**
 * @brief The current state of the access point.
 *
 * Whenever the state changes, "changed" will be emitted.
 *
 * @param[in] obj The object.
 *
 * @return Access point state
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Control_Access_Point_State efl_net_control_access_point_state_get(const Eo *obj);

/**
 * @brief If the access point is in error state, this states the error.
 *
 * @param[in] obj The object.
 *
 * @return Access point error
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Control_Access_Point_Error efl_net_control_access_point_error_get(const Eo *obj);

/**
 * @brief The user-friendly access point name.
 *
 * For hidden WiFi networks, this is empty.
 *
 * @param[in] obj The object.
 *
 * @return Access point name
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_control_access_point_ssid_get(const Eo *obj);

/**
 * @brief The access point priority in the current access point listing.
 *
 * This property is dynamic and reflects the index of the access point in the
 * current access points list. As access points may come and go, the value may
 * change at any time and send notifications via the "changed" event.
 *
 * If set, then it will reorder priorities, moving all other services at equal
 * or higher priority up. To move as the first (most priority), then use 0. To
 * move as the last priority, use UINT32_MAX or the last known priority + 1.
 *
 * @note Only stored access points may be reordered among themselves. Those
 * that are not remembered will always come last in a random order defined by
 * the backend.
 *
 * @param[in] obj The object.
 * @param[in] priority Access point priority in listing
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_priority_set(Eo *obj, unsigned int priority);

/**
 * @brief The access point priority in the current access point listing.
 *
 * This property is dynamic and reflects the index of the access point in the
 * current access points list. As access points may come and go, the value may
 * change at any time and send notifications via the "changed" event.
 *
 * If set, then it will reorder priorities, moving all other services at equal
 * or higher priority up. To move as the first (most priority), then use 0. To
 * move as the last priority, use UINT32_MAX or the last known priority + 1.
 *
 * @note Only stored access points may be reordered among themselves. Those
 * that are not remembered will always come last in a random order defined by
 * the backend.
 *
 * @param[in] obj The object.
 *
 * @return Access point priority in listing
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK unsigned int efl_net_control_access_point_priority_get(const Eo *obj);

/**
 * @brief The technology that generated this access point
 *
 * @param[in] obj The object.
 *
 * @return Access point technology
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Control_Technology *efl_net_control_access_point_technology_get(const Eo *obj);

/**
 * @brief Signal strength percentage in 0-100
 *
 * @param[in] obj The object.
 *
 * @return Access point signal strength
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK uint8_t efl_net_control_access_point_strength_get(const Eo *obj);

/**
 * @brief If it's a cellular access point and it's on roaming.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the access point is cellular and uses roaming, @c false
 * otherwise
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_control_access_point_roaming_get(const Eo *obj);

/**
 * @brief Whenever to auto-connect to this access point if no other is
 * connected.
 *
 * By default successfully connected access points are remembered and set to
 * auto-connect. This behavior can be changed with this property.
 *
 * An access point is only connected automatically if there are no other
 * connected and if it is not on roaming.
 *
 * @param[in] obj The object.
 * @param[in] auto_connect @c true when auto-connect is set for this access
 * point, @c false otherwise
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_auto_connect_set(Eo *obj, Eina_Bool auto_connect);

/**
 * @brief Whenever to auto-connect to this access point if no other is
 * connected.
 *
 * By default successfully connected access points are remembered and set to
 * auto-connect. This behavior can be changed with this property.
 *
 * An access point is only connected automatically if there are no other
 * connected and if it is not on roaming.
 *
 * @param[in] obj The object.
 *
 * @return @c true when auto-connect is set for this access point, @c false
 * otherwise
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_control_access_point_auto_connect_get(const Eo *obj);

/**
 * @brief Successfully connected access points are remembered.
 *
 * To forget about this access point, call
 * @ref efl_net_control_access_point_forget.
 *
 * @param[in] obj The object.
 *
 * @return @c true if this access point will be remembered, @c false otherwise
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_control_access_point_remembered_get(const Eo *obj);

/**
 * @brief Immutable access points are those defined in configuration files and
 * its properties can't be changed using API.
 *
 * @param[in] obj The object.
 *
 * @return @c true is this access point is immutable, @c false otherwise
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_control_access_point_immutable_get(const Eo *obj);

/**
 * @brief Security options such as WEP, WPS, PSK or none (open).
 *
 * @param[in] obj The object.
 *
 * @return Bitwise OR of security supported by this access point
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Control_Access_Point_Security efl_net_control_access_point_security_get(const Eo *obj);

/**
 * @brief DNS (Domain Name Servers) in use for this access point.
 *
 * These are the actual values used. Configure them using
 * @ref efl_net_control_access_point_configuration_name_servers_get. This may
 * generate changes to this property, triggering the "changed" event.
 *
 * @param[in] obj The object.
 *
 * @return Iterator to DNS server
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_control_access_point_name_servers_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief NTP (Time Server) in use for this access point.
 *
 * These are the actual values used. Configure them using
 * @ref efl_net_control_access_point_configuration_name_servers_get. This may
 * generate changes to this property, triggering the "changed" event.
 *
 * @param[in] obj The object.
 *
 * @return Iterator to time server
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_control_access_point_time_servers_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Searches domains in use for this access point.
 *
 * These are the actual values used. Configure them using
 * @ref efl_net_control_access_point_configuration_name_servers_get. This may
 * generate changes to this property, triggering the "changed" event.
 *
 * @param[in] obj The object.
 *
 * @return Iterator to search domains
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_control_access_point_domains_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief IPv4 in use for this access point.
 *
 * These are the actual values used. Configure them using
 * @ref efl_net_control_access_point_configuration_name_servers_get. This may
 * generate changes to this property, triggering the "changed" event.
 *
 * @param[in] obj The object.
 * @param[out] method IPv4 method
 * @param[out] address IPv4 address
 * @param[out] netmask IPv4 netmask
 * @param[out] gateway IPv4 gateway
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_ipv4_get(const Eo *obj, Efl_Net_Control_Access_Point_Ipv4_Method *method, const char **address, const char **netmask, const char **gateway);

/**
 * @brief IPv6 in use for this access point.
 *
 * These are the actual values used. Configure them using
 * @ref efl_net_control_access_point_configuration_name_servers_get. This may
 * generate changes to this property, triggering the "changed" event.
 *
 * @param[in] obj The object.
 * @param[out] method IPv6 method
 * @param[out] address IPv6 address
 * @param[out] prefix_length IPv6 prefix length
 * @param[out] netmask IPv6 netmask
 * @param[out] gateway IPv6 gateway
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_ipv6_get(const Eo *obj, Efl_Net_Control_Access_Point_Ipv6_Method *method, const char **address, uint8_t *prefix_length, const char **netmask, const char **gateway);

/**
 * @brief Proxy in use for this access point.
 *
 * These are the actual values used. Configure them using
 * @ref efl_net_control_access_point_configuration_name_servers_get. This may
 * generate changes to this property, triggering the "changed" event.
 *
 * @param[in] obj The object.
 * @param[out] method Proxy method
 * @param[out] url If @ref EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_AUTO, then
 * states the URL to use for proxy auto-configuration
 * @param[out] servers If
 * @ref EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_MANUAL, then states the URI
 * with proxy servers to use, like "http://proxy.domain.com:911"
 * @param[out] excludes If
 * @ref EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_MANUAL, then states the hosts
 * or patterns to exclude from proxy access, such as "localhost",
 * ".domain.com", or "10.0.0.0..."
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_proxy_get(const Eo *obj, Efl_Net_Control_Access_Point_Proxy_Method *method, const char **url, Eina_Iterator **servers EFL_TRANSFER_OWNERSHIP, Eina_Iterator **excludes EFL_TRANSFER_OWNERSHIP);

/**
 * @brief DNS (Domain Name Servers) configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_name_servers_get property with the actual
 * value in use, which may differ from this.
 *
 * @param[in] obj The object.
 * @param[in] name_servers Iterator to user DNS server
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_configuration_name_servers_set(Eo *obj, Eina_Iterator *name_servers EFL_TRANSFER_OWNERSHIP);

/**
 * @brief DNS (Domain Name Servers) configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_name_servers_get property with the actual
 * value in use, which may differ from this.
 *
 * @param[in] obj The object.
 *
 * @return Iterator to user DNS server
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_control_access_point_configuration_name_servers_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief NTP (Time Server) configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_name_servers_get property with the actual
 * value in use, which may differ from this.
 *
 * @param[in] obj The object.
 * @param[in] time_servers Iterator to user time server
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_configuration_time_servers_set(Eo *obj, Eina_Iterator *time_servers EFL_TRANSFER_OWNERSHIP);

/**
 * @brief NTP (Time Server) configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_name_servers_get property with the actual
 * value in use, which may differ from this.
 *
 * @param[in] obj The object.
 *
 * @return Iterator to user time server
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_control_access_point_configuration_time_servers_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Searches domains configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_domains_get property with the actual value
 * in use, which may differ from this.
 *
 * @param[in] obj The object.
 * @param[in] domains Iterator to user search domains
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_configuration_domains_set(Eo *obj, Eina_Iterator *domains EFL_TRANSFER_OWNERSHIP);

/**
 * @brief Searches domains configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_domains_get property with the actual value
 * in use, which may differ from this.
 *
 * @param[in] obj The object.
 *
 * @return Iterator to user search domains
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_control_access_point_configuration_domains_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief IPv4 configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_ipv4_get property with the actual value in
 * use, which may differ from this.
 *
 * @param[in] obj The object.
 * @param[in] method IPv4 method
 * @param[in] address IPv4 address
 * @param[in] netmask IPv4 netmask
 * @param[in] gateway IPv4 gateway
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_configuration_ipv4_set(Eo *obj, Efl_Net_Control_Access_Point_Ipv4_Method method, const char *address, const char *netmask, const char *gateway);

/**
 * @brief IPv4 configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_ipv4_get property with the actual value in
 * use, which may differ from this.
 *
 * @param[in] obj The object.
 * @param[out] method IPv4 method
 * @param[out] address IPv4 address
 * @param[out] netmask IPv4 netmask
 * @param[out] gateway IPv4 gateway
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_configuration_ipv4_get(const Eo *obj, Efl_Net_Control_Access_Point_Ipv4_Method *method, const char **address, const char **netmask, const char **gateway);

/**
 * @brief IPv6 configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_ipv6_get property with the actual value in
 * use, which may differ from this.
 *
 * @param[in] obj The object.
 * @param[in] method IPv6 method
 * @param[in] address IPv6 address
 * @param[in] prefix_length IPv6 prefix length
 * @param[in] netmask IPv6 netmask
 * @param[in] gateway IPv6 gateway
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_configuration_ipv6_set(Eo *obj, Efl_Net_Control_Access_Point_Ipv6_Method method, const char *address, uint8_t prefix_length, const char *netmask, const char *gateway);

/**
 * @brief IPv6 configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_ipv6_get property with the actual value in
 * use, which may differ from this.
 *
 * @param[in] obj The object.
 * @param[out] method IPv6 method
 * @param[out] address IPv6 address
 * @param[out] prefix_length IPv6 prefix length
 * @param[out] netmask IPv6 netmask
 * @param[out] gateway IPv6 gateway
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_configuration_ipv6_get(const Eo *obj, Efl_Net_Control_Access_Point_Ipv6_Method *method, const char **address, uint8_t *prefix_length, const char **netmask, const char **gateway);

/**
 * @brief Proxy configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_proxy_get property with the actual value
 * in use, which may differ from this.
 *
 * @param[in] obj The object.
 * @param[in] method Proxy method
 * @param[in] url If @ref EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_AUTO, then
 * states the URL to use for proxy auto-configuration
 * @param[in] servers If @ref EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_MANUAL,
 * then states the URI with proxy servers to use, like
 * "http://proxy.domain.com:911"
 * @param[in] excludes If
 * @ref EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_MANUAL, then states the hosts
 * or patterns to exclude from proxy access, such as "localhost",
 * ".domain.com", or "10.0.0.0..."
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_configuration_proxy_set(Eo *obj, Efl_Net_Control_Access_Point_Proxy_Method method, const char *url, Eina_Iterator *servers EFL_TRANSFER_OWNERSHIP, Eina_Iterator *excludes EFL_TRANSFER_OWNERSHIP);

/**
 * @brief Proxy configured by user for this access point.
 *
 * These are user configured values, which will be applied by the backend
 * system and in turn may result in "changed" event to notify of
 * @ref efl_net_control_access_point_proxy_get property with the actual value
 * in use, which may differ from this.
 *
 * @param[in] obj The object.
 * @param[out] method Proxy method
 * @param[out] url If @ref EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_AUTO, then
 * states the URL to use for proxy auto-configuration
 * @param[out] servers If
 * @ref EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_MANUAL, then states the URI
 * with proxy servers to use, like "http://proxy.domain.com:911"
 * @param[out] excludes If
 * @ref EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_MANUAL, then states the hosts
 * or patterns to exclude from proxy access, such as "localhost",
 * ".domain.com", or "10.0.0.0..."
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_access_point_configuration_proxy_get(const Eo *obj, Efl_Net_Control_Access_Point_Proxy_Method *method, const char **url, Eina_Iterator **servers EFL_TRANSFER_OWNERSHIP, Eina_Iterator **excludes EFL_TRANSFER_OWNERSHIP);

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_ACCESS_POINT_EVENT_CHANGED;

/** Called when some properties were changed.
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
#define EFL_NET_CONTROL_ACCESS_POINT_EVENT_CHANGED (&(_EFL_NET_CONTROL_ACCESS_POINT_EVENT_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
