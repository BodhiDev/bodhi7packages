#ifndef _EFL_NET_SERVER_UDP_EO_H_
#define _EFL_NET_SERVER_UDP_EO_H_

#ifndef _EFL_NET_SERVER_UDP_EO_CLASS_TYPE
#define _EFL_NET_SERVER_UDP_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Udp;

#endif

#ifndef _EFL_NET_SERVER_UDP_EO_TYPES
#define _EFL_NET_SERVER_UDP_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** A UDP server.
 *
 * @ingroup Efl_Net_Server_Udp
 */
#define EFL_NET_SERVER_UDP_CLASS efl_net_server_udp_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_server_udp_class_get(void) EINA_CONST;

/**
 * @brief Avoids sent UDP packets being routed by a gateway, limiting them to
 * the local network.
 *
 * This will use SO_DONTROUTE option to avoid gateways routing sent packets to
 * outside the local network. It's useful for some protocols that only want the
 * local area to be affected.
 *
 * @param[in] obj The object.
 * @param[in] dont_route If @c true limit packets to the local network,
 * @c false otherwise
 *
 * @return @c true on success
 *
 * @ingroup Efl_Net_Server_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_udp_dont_route_set(Eo *obj, Eina_Bool dont_route);

/**
 * @brief Avoids sent UDP packets being routed by a gateway, limiting them to
 * the local network.
 *
 * This will use SO_DONTROUTE option to avoid gateways routing sent packets to
 * outside the local network. It's useful for some protocols that only want the
 * local area to be affected.
 *
 * @param[in] obj The object.
 *
 * @return If @c true limit packets to the local network, @c false otherwise
 *
 * @ingroup Efl_Net_Server_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_udp_dont_route_get(const Eo *obj);

/**
 * @brief Joins a multicast group.
 *
 * The multicast address should be in the format:
 *
 * IP\@INTERFACE
 *
 * With '\@INTERFACE' being optional, such as:
 *
 * 224.0.0.1 - use any interface (ie: 0.0.0.0) 224.0.0.1@0.0.0.0
 * 224.0.0.1@192.168.0.1 - use the interface assigned to 192.168.0.1 ff02::1@0
 * - use any interface ff02::1@1 - use loopback interface (idx=1)
 *
 * @param[in] obj The object.
 * @param[in] address Multicast group address
 *
 * @return 0 on success, error code otherwise
 *
 * @ingroup Efl_Net_Server_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_server_udp_multicast_join(Eo *obj, const char *address);

/**
 * @brief Leaves a multicast group.
 *
 * This reverses the effect of @ref efl_net_server_udp_multicast_join.
 *
 * @param[in] obj The object.
 * @param[in] address Multicast group address
 *
 * @return 0 on success, error code otherwise
 *
 * @ingroup Efl_Net_Server_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_server_udp_multicast_leave(Eo *obj, const char *address);

/**
 * @brief Returns the multicast groups this server has joined.
 *
 * The iterator is only valid until a new group is joined or left using
 * @ref efl_net_server_udp_multicast_join or
 * @ref efl_net_server_udp_multicast_leave.
 *
 * @param[in] obj The object.
 *
 * @return List of multicast groups
 *
 * @ingroup Efl_Net_Server_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_server_udp_multicast_groups_get(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Controls time to live in number of hops.
 *
 * If 1 (default), packets are only delivered to the local network.
 *
 * @param[in] obj The object.
 * @param[in] ttl Time to live
 *
 * @return 0 on success, error code otherwise
 *
 * @ingroup Efl_Net_Server_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_server_udp_multicast_time_to_live_set(Eo *obj, uint8_t ttl);

/**
 * @brief Controls time to live in number of hops.
 *
 * If 1 (default), packets are only delivered to the local network.
 *
 * @param[in] obj The object.
 *
 * @return Time to live
 *
 * @ingroup Efl_Net_Server_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK uint8_t efl_net_server_udp_multicast_time_to_live_get(const Eo *obj);

/**
 * @brief Controls whenever multicast will loopback packets locally.
 *
 * If @c false, then packets won't be looped back locally, just delivered for
 * remote peers.
 *
 * @param[in] obj The object.
 * @param[in] loopback @c true when multicast packets are looped back, @c false
 * otherwise
 *
 * @return 0 on success, error code otherwise
 *
 * @ingroup Efl_Net_Server_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_server_udp_multicast_loopback_set(Eo *obj, Eina_Bool loopback);

/**
 * @brief Controls whenever multicast will loopback packets locally.
 *
 * If @c false, then packets won't be looped back locally, just delivered for
 * remote peers.
 *
 * @param[in] obj The object.
 *
 * @return @c true when multicast packets are looped back, @c false otherwise
 *
 * @ingroup Efl_Net_Server_Udp
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_udp_multicast_loopback_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
