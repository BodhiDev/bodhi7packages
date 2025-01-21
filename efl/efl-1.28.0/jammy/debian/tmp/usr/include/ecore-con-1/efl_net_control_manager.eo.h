#ifndef _EFL_NET_CONTROL_MANAGER_EO_H_
#define _EFL_NET_CONTROL_MANAGER_EO_H_

#ifndef _EFL_NET_CONTROL_MANAGER_EO_CLASS_TYPE
#define _EFL_NET_CONTROL_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Net_Control_Manager;

#endif

#ifndef _EFL_NET_CONTROL_MANAGER_EO_TYPES
#define _EFL_NET_CONTROL_MANAGER_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Provides the global network connectivity state.
 *
 * For more details, use @ref Efl_Net_Control_Manager access points and their
 * property state.
 *
 * @ingroup Efl_Net_Control_State
 */
typedef enum
{
  EFL_NET_CONTROL_STATE_OFFLINE = 0, /**< No access point is connected. */
  EFL_NET_CONTROL_STATE_LOCAL, /**< At least one access point is connected and
                                * the internet connection hasn't been verified.
                                */
  EFL_NET_CONTROL_STATE_ONLINE /**< At least one access point is connected and
                                * the internet has been verified */
} Efl_Net_Control_State;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Bitwise-able fields requested to the agent.
 *
 * @ingroup Efl_Net_Control_Agent_Request_Input_Field
 */
typedef enum
{
  EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_NAME = 1 /* 1 >> 0 */, /**< Used for hidden WiFi access points.
                                                                    * If SSID is present, this is an
                                                                    * alternative to that. */
  EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_SSID = 2 /* 1 >> 1 */, /**< Used for hidden WiFi access points.
                                                                    * If name is present, this is an
                                                                    * alternative to that. */
  EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_USERNAME = 4 /* 1 >> 2 */, /**< Identity or username requested */
  EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_PASSPHRASE = 8 /* 1 >> 3 */, /**< Password or passphrase requested */
  EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_WPS = 16 /* 1 >> 4 */ /**< Use WPS authentication. If
                                                                   * passphrase is present, this is an
                                                                   * alternative to that. */
} Efl_Net_Control_Agent_Request_Input_Field;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Name-value information pair provided to the agent.
 *
 * @ingroup Efl_Net_Control_Agent_Request_Input_Information
 */
typedef struct _Efl_Net_Control_Agent_Request_Input_Information
{
  const char *name; /**< The information name, such as PreviousPassphrase, Host,
                     * Name... */
  const char *value; /**< The contents of the information */
} Efl_Net_Control_Agent_Request_Input_Information;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Requests input to the agent.
 *
 * @ingroup Efl_Net_Control_Agent_Request_Input
 */
typedef struct _Efl_Net_Control_Agent_Request_Input
{
  Efl_Net_Control_Access_Point *access_point; /**< The access point which
                                               * triggered this request. */
  Efl_Net_Control_Agent_Request_Input_Field fields; /**< Bitwise OR of fields
                                                     * present in this request.
                                                     */
  const char *passphrase_type; /**< Extra detail for the passphrase field, such
                                * as wep, psk, response (IEEE802.X GTC/OTP),
                                * string... */
  Eina_Accessor *informational; /**< Such as the previous passphrase, VPN host
                                 */
} Efl_Net_Control_Agent_Request_Input;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Reports error to the agent.
 *
 * @ingroup Efl_Net_Control_Agent_Error
 */
typedef struct _Efl_Net_Control_Agent_Error
{
  Efl_Net_Control_Access_Point *access_point; /**< The access point that
                                               * triggered this error. */
  const char *message; /**< The error message. */
} Efl_Net_Control_Agent_Error;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Reports to agent that it should open a browser at a given URL.
 *
 * @ingroup Efl_Net_Control_Agent_Browser_Url
 */
typedef struct _Efl_Net_Control_Agent_Browser_Url
{
  Efl_Net_Control_Access_Point *access_point; /**< The access point that
                                               * triggered this request. */
  const char *url; /**< The URL to point the browser at. */
} Efl_Net_Control_Agent_Browser_Url;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Controls network connectivity.
 *
 * This class and its child objects are only useful to implement control of the
 * network connectivity. If your application only needs to request access to
 * the network, use @ref Efl_Net_Session instead.
 *
 * Network connectivity is defined on top of technologies that provide access
 * points. A technology can be "ethernet", "wifi", "bluetooth" or something
 * else. Ethernet will provide a single access point, while "wifi" will expose
 * zero or more access points that can come and go.
 *
 * Users willing to use access points are expected to monitor
 * "access_point,add" event to know when access points are added. To know when
 * they were deleted, "access_point,del" or an
 * @ref Efl_Net_Control_Access_Point "del" event. Finally
 * "access_points,changed" is relative to additions, deletions and reordering
 * of access point due changes in their priorities.
 *
 * The backend system is responsible for remembering connection details such as
 * passphrase, last connected access point and priority. The user is NOT
 * supposed to do that.
 *
 * For ease of use @ref efl_net_control_manager_state_get determines if at
 * least one access point is online (verified connectivity), local (connected
 * but unverified) or offline.
 *
 * For safety reasons all radio transmissions may be disabled with
 * @ref efl_net_control_manager_radios_offline_get property. This is usually
 * called "airplane mode" on some platforms.
 *
 * Some platforms may not implement the backend for this class, in which case
 * the system will report @ref efl_net_control_manager_state_get as permanently
 * "online" (@Efl.Net.Control.State.online) and iterators for
 * @ref efl_net_control_manager_access_points_get and
 * @ref efl_net_control_manager_technologies_get will be empty (they will be
 * returned but won't contain any items).
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_CLASS efl_net_control_manager_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_control_manager_class_get(void) EINA_CONST;

/**
 * @brief If @c true disable all network technologies that use radio
 * transmission, such as bluetooth and wifi. If @c false, allows radio to be
 * used.
 *
 * @param[in] obj The object.
 * @param[in] radios_offline @c true if all radios are offline, @c false
 * otherwise
 *
 * @ingroup Efl_Net_Control_Manager
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_manager_radios_offline_set(Eo *obj, Eina_Bool radios_offline);

/**
 * @brief If @c true disable all network technologies that use radio
 * transmission, such as bluetooth and wifi. If @c false, allows radio to be
 * used.
 *
 * @param[in] obj The object.
 *
 * @return @c true if all radios are offline, @c false otherwise
 *
 * @ingroup Efl_Net_Control_Manager
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_control_manager_radios_offline_get(const Eo *obj);

/**
 * @brief Summary of network connectivity.
 *
 * - offline means no connectivity;
 *
 * - local means local connectivity, that is, the access point is connected but
 * couldn't reach the internet;
 *
 * - online means verified connectivity.
 *
 * @note if there is no backend for this class, then state will always be
 * online, however @ref efl_net_control_manager_access_points_get and
 * @ref efl_net_control_manager_technologies_get will be empty iterators (valid
 * pointers but no items in them).
 *
 * @param[in] obj The object.
 *
 * @return Network state
 *
 * @ingroup Efl_Net_Control_Manager
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Control_State efl_net_control_manager_state_get(const Eo *obj);

/**
 * @brief The iterator of current access points.
 *
 * The iterator is valid only before the function returns to the main loop. By
 * then, if the events "access_point,add" or "access_point,del" are emitted,
 * the iterator will become invalid.
 *
 * @param[in] obj The object.
 *
 * @return Iterator of current access points
 *
 * @ingroup Efl_Net_Control_Manager
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_control_manager_access_points_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief The iterator of current technologies.
 *
 * The iterator is valid only before the function returns to the main loop. By
 * then, if the events "technology,add" or "technology,del" are emitted, the
 * iterator will become invalid.
 *
 * @param[in] obj The object.
 *
 * @return Iterator of current technologies
 *
 * @ingroup Efl_Net_Control_Manager
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_control_manager_technologies_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief The agent is responsible for user interaction.
 *
 * When enabled, the local process will become the agent for user interaction,
 * such as requesting passphrases, asking the user to open a browser to perform
 * web-authentication and report connection errors.
 *
 * There can be only one agent in the system at any time: Registering one will
 * unregister the other. Special permissions may be required to become an
 * agent.
 *
 * A useful agent should monitor "agent_error", "agent_browser_url" and
 * "agent_request_input" events. When input is requested, reply using
 * @ref efl_net_control_manager_agent_reply.
 *
 * @param[in] obj The object.
 * @param[in] agent_enabled @c true if to become the agent, @c false otherwise
 *
 * @ingroup Efl_Net_Control_Manager
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_manager_agent_enabled_set(Eo *obj, Eina_Bool agent_enabled);

/**
 * @brief The agent is responsible for user interaction.
 *
 * When enabled, the local process will become the agent for user interaction,
 * such as requesting passphrases, asking the user to open a browser to perform
 * web-authentication and report connection errors.
 *
 * There can be only one agent in the system at any time: Registering one will
 * unregister the other. Special permissions may be required to become an
 * agent.
 *
 * A useful agent should monitor "agent_error", "agent_browser_url" and
 * "agent_request_input" events. When input is requested, reply using
 * @ref efl_net_control_manager_agent_reply.
 *
 * @param[in] obj The object.
 *
 * @return @c true if to become the agent, @c false otherwise
 *
 * @ingroup Efl_Net_Control_Manager
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_control_manager_agent_enabled_get(const Eo *obj);

/**
 * @brief If event "agent_request_input" was emitted, this will reply with the
 * requested data
 *
 * @param[in] obj The object.
 * @param[in] name If @ref EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_NAME was
 * present, this should contain the network name or the 'ssid' parameter should
 * be used.
 * @param[in] ssid If @ref EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_SSID was
 * present, this should contain the network SSID or the 'name' parameter should
 * be used.
 * @param[in] username If
 * @ref EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_USERNAME was present, this
 * should contain the identity or username
 * @param[in] passphrase If
 * @ref EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_PASSPHRASE was present, this
 * should contain the password or passphrase, more details on how it should be
 * interpreted was given in
 * Efl.Net.Control.Agent_Request_Input.passphrase_type.
 * @param[in] wps If @ref EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_WPS was
 * present, this should contain the WPS PIN or an empty string "" to use the
 * WPS push button instead.
 *
 * @ingroup Efl_Net_Control_Manager
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_control_manager_agent_reply(Eo *obj, const char *name, const Eina_Slice *ssid, const char *username, const char *passphrase, const char *wps);

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_ACCESS_POINT_ADD;

/** The given access point has been added
 * @return Efl_Net_Control_Access_Point *
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_ACCESS_POINT_ADD (&(_EFL_NET_CONTROL_MANAGER_EVENT_ACCESS_POINT_ADD))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_ACCESS_POINT_DEL;

/** The given access point will be deleted
 * @return Efl_Net_Control_Access_Point *
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_ACCESS_POINT_DEL (&(_EFL_NET_CONTROL_MANAGER_EVENT_ACCESS_POINT_DEL))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_ACCESS_POINTS_CHANGED;

/** Access points were added, deleted or reordered.
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_ACCESS_POINTS_CHANGED (&(_EFL_NET_CONTROL_MANAGER_EVENT_ACCESS_POINTS_CHANGED))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_TECHNOLOGY_ADD;

/** The given technology has been added
 * @return Efl_Net_Control_Technology *
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_TECHNOLOGY_ADD (&(_EFL_NET_CONTROL_MANAGER_EVENT_TECHNOLOGY_ADD))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_TECHNOLOGY_DEL;

/** The given technology will be deleted
 * @return Efl_Net_Control_Technology *
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_TECHNOLOGY_DEL (&(_EFL_NET_CONTROL_MANAGER_EVENT_TECHNOLOGY_DEL))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_RADIOS_OFFLINE_CHANGED;

/** Property @ref efl_net_control_manager_radios_offline_get changed
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_RADIOS_OFFLINE_CHANGED (&(_EFL_NET_CONTROL_MANAGER_EVENT_RADIOS_OFFLINE_CHANGED))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_STATE_CHANGED;

/** Property @ref efl_net_control_manager_state_get changed
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_STATE_CHANGED (&(_EFL_NET_CONTROL_MANAGER_EVENT_STATE_CHANGED))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_AGENT_RELEASED;

/** Notifies we're not the agent anymore
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_AGENT_RELEASED (&(_EFL_NET_CONTROL_MANAGER_EVENT_AGENT_RELEASED))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_AGENT_ERROR;

/** Requires the error to be reported to the user
 * @return Efl_Net_Control_Agent_Error
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_AGENT_ERROR (&(_EFL_NET_CONTROL_MANAGER_EVENT_AGENT_ERROR))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_AGENT_BROWSER_URL;

/** Requires the user to visit a web page
 * @return Efl_Net_Control_Agent_Browser_Url
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_AGENT_BROWSER_URL (&(_EFL_NET_CONTROL_MANAGER_EVENT_AGENT_BROWSER_URL))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_CONTROL_MANAGER_EVENT_AGENT_REQUEST_INPUT;

/** Requires the user to enter information in order to proceed, such as hidden
 * SSID, passphrase, etc. After the user enters the information, reply by
 * calling @ref efl_net_control_manager_agent_reply
 * @return Efl_Net_Control_Agent_Request_Input
 *
 * @ingroup Efl_Net_Control_Manager
 */
#define EFL_NET_CONTROL_MANAGER_EVENT_AGENT_REQUEST_INPUT (&(_EFL_NET_CONTROL_MANAGER_EVENT_AGENT_REQUEST_INPUT))
#endif /* EFL_BETA_API_SUPPORT */

#endif
