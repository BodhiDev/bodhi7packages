#ifndef _EFL_NET_CONTROL_TECHNOLOGY_EO_H_
#define _EFL_NET_CONTROL_TECHNOLOGY_EO_H_

#ifndef _EFL_NET_CONTROL_TECHNOLOGY_EO_CLASS_TYPE
#define _EFL_NET_CONTROL_TECHNOLOGY_EO_CLASS_TYPE

typedef Eo Efl_Net_Control_Technology;

#endif

#ifndef _EFL_NET_CONTROL_TECHNOLOGY_EO_TYPES
#define _EFL_NET_CONTROL_TECHNOLOGY_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Technology types
 *
 * @ingroup Efl_Net_Control_Technology_Type
 */
typedef enum
{
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_UNKNOWN = 0, /**< Type: unknown */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_SYSTEM, /**< Type: system */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_ETHERNET, /**< Type: ethernet */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_WIFI, /**< Type: WiFi */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_BLUETOOTH, /**< Type: Bluetooth */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_CELLULAR, /**< Type: cellular/mobile */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_GPS, /**< Type: GPS */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_VPN, /**< Type: Virtual Private Network */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_GADGET, /**< Type: USB gadget */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_P2P /**< Type: Peer-2-Peer */
} Efl_Net_Control_Technology_Type;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A technology that allows control of network access points.
 *
 * The @ref Efl_Net_Control_Manager is composed of multiple technologies, each
 * can be disabled/enabled with @ref efl_net_control_technology_powered_get
 * property.
 *
 * When powered, the technology will dynamically create and remove access
 * points in @ref efl_net_control_manager_access_points_get.
 *
 * @ingroup Efl_Net_Control_Technology
 */
#define EFL_NET_CONTROL_TECHNOLOGY_CLASS efl_net_control_technology_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_control_technology_class_get(void) EINA_CONST;

/**
 * @brief If @c true the technology is available. If @c false technology is
 * disabled and if possible rfkill is used.
 *
 * @param[in] obj The object.
 * @param[in] powered @c true if technology is powered, @c false otherwise
 *
 * @ingroup Efl_Net_Control_Technology
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_technology_powered_set(Eo *obj, Eina_Bool powered);

/**
 * @brief If @c true the technology is available. If @c false technology is
 * disabled and if possible rfkill is used.
 *
 * @param[in] obj The object.
 *
 * @return @c true if technology is powered, @c false otherwise
 *
 * @ingroup Efl_Net_Control_Technology
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_control_technology_powered_get(const Eo *obj);

/**
 * @brief Tethering allows the default access point to be bridged to all
 * clients connected through the technology.
 *
 * A common use case is to deploy the device as a router, such as a tethered
 * phone allowing a laptop to connect to a 4G network.
 *
 * @param[in] obj The object.
 * @param[in] enabled When to enable or disable tethering for this technology.
 * @param[in] identifier The name to identify the tethering. For WiFi this will
 * translate to an SSID.
 * @param[in] passphrase The passphrase for tethering access. For WiFi this
 * will translate to WPA passphrase.
 *
 * @ingroup Efl_Net_Control_Technology
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_technology_tethering_set(Eo *obj, Eina_Bool enabled, const char *identifier, const char *passphrase);

/**
 * @brief Tethering allows the default access point to be bridged to all
 * clients connected through the technology.
 *
 * A common use case is to deploy the device as a router, such as a tethered
 * phone allowing a laptop to connect to a 4G network.
 *
 * @param[in] obj The object.
 * @param[out] enabled When to enable or disable tethering for this technology.
 * @param[out] identifier The name to identify the tethering. For WiFi this
 * will translate to an SSID.
 * @param[out] passphrase The passphrase for tethering access. For WiFi this
 * will translate to WPA passphrase.
 *
 * @ingroup Efl_Net_Control_Technology
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_technology_tethering_get(const Eo *obj, Eina_Bool *enabled, const char **identifier, const char **passphrase);

/**
 * @brief If @c true the technology has at least one access point connected.
 *
 * @param[in] obj The object.
 *
 * @return @c true if technology is connected, @c false otherwise
 *
 * @ingroup Efl_Net_Control_Technology
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_control_technology_connected_get(const Eo *obj);

/**
 * @brief The technology type, such as "ethernet" or "wifi"
 *
 * @param[in] obj The object.
 *
 * @return Technology type
 *
 * @ingroup Efl_Net_Control_Technology
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Control_Technology_Type efl_net_control_technology_type_get(const Eo *obj);

/**
 * @brief Explicitly trigger a scan.
 *
 * The scan will happen asynchronously in the background, with the results
 * being delivered by events in the technology, @ref Efl_Net_Control_Manager or
 * @ref Efl_Net_Control_Access_Point associated with the technology. For
 * example, a scan on WiFi will add and remove access points.
 *
 * Try to avoid explicit scans. Rare exceptions to this rule include when the
 * user requests them, such as entering a configuration dialog which demands a
 * fresh state. Otherwise allow the system to perform passive scans in a timely
 * manner.
 *
 * @param[in] obj The object.
 *
 * @return Future return for finished background scan
 *
 * @ingroup Efl_Net_Control_Technology
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Future *efl_net_control_technology_scan(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_TECHNOLOGY_EVENT_CHANGED;

/** Called when some properties were changed.
 *
 * @ingroup Efl_Net_Control_Technology
 */
#define EFL_NET_CONTROL_TECHNOLOGY_EVENT_CHANGED (&(_EFL_NET_CONTROL_TECHNOLOGY_EVENT_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
