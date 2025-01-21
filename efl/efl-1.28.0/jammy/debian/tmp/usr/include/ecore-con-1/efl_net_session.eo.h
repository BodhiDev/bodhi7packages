#ifndef _EFL_NET_SESSION_EO_H_
#define _EFL_NET_SESSION_EO_H_

#ifndef _EFL_NET_SESSION_EO_CLASS_TYPE
#define _EFL_NET_SESSION_EO_CLASS_TYPE

typedef Eo Efl_Net_Session;

#endif

#ifndef _EFL_NET_SESSION_EO_TYPES
#define _EFL_NET_SESSION_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Provides the session connectivity state.
 *
 * @ingroup Efl_Net_Session_State
 */
typedef enum
{
  EFL_NET_SESSION_STATE_OFFLINE = 0, /**< No access point is connected. */
  EFL_NET_SESSION_STATE_LOCAL, /**< At least one access point has connected and
                                * the internet connection hasn't been verified.
                                */
  EFL_NET_SESSION_STATE_ONLINE /**< At least one access point has connected and
                                * the internet connection has been verified. */
} Efl_Net_Session_State;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Bitwise-able technologies to allow for a network session.
 *
 * @ingroup Efl_Net_Session_Technology
 */
typedef enum
{
  EFL_NET_SESSION_TECHNOLOGY_UNKNOWN = 0, /**< Type: unknown */
  EFL_NET_SESSION_TECHNOLOGY_ETHERNET = 2 /* 1 >> 1 */, /**< Type: ethernet */
  EFL_NET_SESSION_TECHNOLOGY_WIFI = 4 /* 1 >> 2 */, /**< Type: WiFi */
  EFL_NET_SESSION_TECHNOLOGY_BLUETOOTH = 8 /* 1 >> 3 */, /**< Type: Bluetooth */
  EFL_NET_SESSION_TECHNOLOGY_CELLULAR = 16 /* 1 >> 4 */, /**< Type:
                                                          * cellular/mobile */
  EFL_NET_SESSION_TECHNOLOGY_VPN = 64 /* 1 >> 6 */, /**< Type: Virtual Private
                                                     * Network */
  EFL_NET_SESSION_TECHNOLOGY_GADGET = 128 /* 1 >> 7 */, /**< Type: USB gadget */
  EFL_NET_SESSION_TECHNOLOGY_ALL = 222 /* ((((Efl.Net.Session_Technology.ethernet ^ Efl.Net.Session_Technology.wifi) ^ Efl.Net.Session_Technology.bluetooth) ^ Efl.Net.Session_Technology.cellular) ^ Efl.Net.Session_Technology.vpn) ^ Efl.Net.Session_Technology.gadget */ /**< All technology types */
} Efl_Net_Session_Technology;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Used by application to request network connectivity.
 *
 * This API is targeted at applications that need access to the network,
 * specifying the allowed bearer technologies to connect to the internet, as
 * well as whether local networking is enough or validated internet access is
 * required.
 *
 * Some platforms may not implement the backend for this class. In this cases
 * the system will report always @ref efl_net_session_state_get "online"
 * (@Efl.Net.Session_State.online) and other properties will be @c NULL, such
 * as @ref efl_net_session_network_name_get,
 * @ref efl_net_session_interface_get, @ref efl_net_session_ipv4_get and
 * @ref efl_net_session_ipv6_get; as well as
 * @ref efl_net_session_technology_get is set to
 * @ref EFL_NET_SESSION_TECHNOLOGY_UNKNOWN. As such if you need to detect for
 * an actual backend, check if the state is online but those properties are
 * @c NULL or technology is unknown.
 *
 * @note the @ref efl_net_session_connect method is subject to backend policy.
 * For instance, ConnMan uses
 * https://github.com/aldebaran/connman/blob/master/doc/session-policy-format.txt
 *
 * @ingroup Efl_Net_Session
 */
#define EFL_NET_SESSION_CLASS efl_net_session_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_session_class_get(void) EINA_CONST;

/**
 * @brief Asks the session to be connected.
 *
 * This method doesn't need to be called if an application only needs to
 * monitor the connectivity state, such as  a poller which will only try to
 * access the webservice when there is an existing connection, without
 * triggering one.
 *
 * This method is subject to backend policy. For instance, ConnMan uses
 * https://github.com/aldebaran/connman/blob/master/doc/session-policy-format.txt
 *
 * @param[in] obj The object.
 * @param[in] online_required If @c false, access points with local state are
 * enough. If @c true, the access point must be in online state, with a
 * validated internet connection
 * @param[in] technologies_allowed Bitwise OR of technologies to allow
 *
 * @ingroup Efl_Net_Session
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_session_connect(Eo *obj, Eina_Bool online_required, Efl_Net_Session_Technology technologies_allowed);

/**
 * @brief Indicates this session doesn't need a connection anymore.
 *
 * This reverses the effect of @ref efl_net_session_connect, let the system
 * disconnect if nothing else needs a connection. You can still use the session
 * object to monitor the connectivity state via properties and "changed" event.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Net_Session
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_session_disconnect(Eo *obj);

/**
 * @brief The user-friendly access point name.
 *
 * @param[in] obj The object.
 *
 * @return Access point name
 *
 * @ingroup Efl_Net_Session
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_session_network_name_get(const Eo *obj);

/**
 * @brief If the session connectivity is offline, local or online.
 *
 * @note if there is no backend for this class, then state will be always
 * online, however @ref efl_net_session_technology_get will be unknown,
 * @ref efl_net_session_interface_get, @ref efl_net_session_network_name_get,
 * @ref efl_net_session_ipv4_get and @ref efl_net_session_ipv6_get will be
 * @c NULL.
 *
 * @param[in] obj The object.
 *
 * @return Network session state
 *
 * @ingroup Efl_Net_Session
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Session_State efl_net_session_state_get(const Eo *obj);

/**
 * @brief The access point technology that backs this session
 *
 * @param[in] obj The object.
 *
 * @return Network session technology
 *
 * @ingroup Efl_Net_Session
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Session_Technology efl_net_session_technology_get(const Eo *obj);

/**
 * @brief The interface allows the application to assign the socket to a given
 * device using SO_BINDTODEVICE
 *
 * @param[in] obj The object.
 *
 * @return Network interface to bind to
 *
 * @ingroup Efl_Net_Session
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_session_interface_get(const Eo *obj);

/**
 * @brief IPv4 in use for this session.
 *
 * @param[in] obj The object.
 * @param[out] address IPv4 address
 * @param[out] netmask IPv4 netmask
 * @param[out] gateway IPv4 gateway
 *
 * @ingroup Efl_Net_Session
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_session_ipv4_get(const Eo *obj, const char **address, const char **netmask, const char **gateway);

/**
 * @brief IPv6 in use for this session.
 *
 * @param[in] obj The object.
 * @param[out] address IPv6 address
 * @param[out] prefix_length IPv6 prefix
 * @param[out] netmask IPv6 netmask
 * @param[out] gateway IPv6 gateway
 *
 * @ingroup Efl_Net_Session
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_session_ipv6_get(const Eo *obj, const char **address, uint8_t *prefix_length, const char **netmask, const char **gateway);

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_SESSION_EVENT_CHANGED;

/** Called when some properties were changed.
 *
 * @ingroup Efl_Net_Session
 */
#define EFL_NET_SESSION_EVENT_CHANGED (&(_EFL_NET_SESSION_EVENT_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
