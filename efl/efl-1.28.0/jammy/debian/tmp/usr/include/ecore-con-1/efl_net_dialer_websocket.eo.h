#ifndef _EFL_NET_DIALER_WEBSOCKET_EO_H_
#define _EFL_NET_DIALER_WEBSOCKET_EO_H_

#ifndef _EFL_NET_DIALER_WEBSOCKET_EO_CLASS_TYPE
#define _EFL_NET_DIALER_WEBSOCKET_EO_CLASS_TYPE

typedef Eo Efl_Net_Dialer_Websocket;

#endif

#ifndef _EFL_NET_DIALER_WEBSOCKET_EO_TYPES
#define _EFL_NET_DIALER_WEBSOCKET_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** How to map WebSocket to EFL I/O Interfaces.
 *
 * @ingroup Efl_Net_Dialer_Websocket_Streaming_Mode
 */
typedef enum
{
  EFL_NET_DIALER_WEBSOCKET_STREAMING_MODE_DISABLED = 0, /**< 
                                                         * @ref efl_io_writer_write
                                                         * and
                                                         * @ref efl_io_reader_read
                                                         * will fail by
                                                         * returning ENOSTR */
  EFL_NET_DIALER_WEBSOCKET_STREAMING_MODE_BINARY, /**< @ref efl_io_writer_write
                                                   * will result in
                                                   * @ref efl_net_dialer_websocket_binary_send
                                                   */
  EFL_NET_DIALER_WEBSOCKET_STREAMING_MODE_TEXT /**< @ref efl_io_writer_write
                                                * will result in
                                                * @ref efl_net_dialer_websocket_text_send
                                                */
} Efl_Net_Dialer_Websocket_Streaming_Mode;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Registered reasons for the CLOSE (opcode=0x8).
 *
 * These are the well known reasons, with some ranges being defined using
 * "_start" and "end" suffixes.
 *
 * See https://tools.ietf.org/html/rfc6455#section-7.4.1
 *
 * @ingroup Efl_Net_Dialer_Websocket_Close_Reason
 */
typedef enum
{
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_NORMAL = 1000, /**< Indicates a normal
                                                        * closure, meaning that
                                                        * the purpose for which
                                                        * the connection was
                                                        * established has been
                                                        * fulfilled. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_GOING_AWAY = 1001, /**< Indicates that
                                                            * an endpoint is
                                                            * "going away",
                                                            * such as a server
                                                            * going down or a
                                                            * browser having
                                                            * navigated away
                                                            * from a page. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_PROTOCOL_ERROR = 1002, /**< Indicates that an endpoint is
                                                                * terminating the connection due to a
                                                                * protocol error. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_NO_REASON = 1005, /**< Reserved value
                                                           * and MUST NOT be
                                                           * set as a status
                                                           * code in a Close
                                                           * control frame by
                                                           * an endpoint. It is
                                                           * designated for use
                                                           * in applications
                                                           * expecting a status
                                                           * code to indicate
                                                           * that no status
                                                           * code was actually
                                                           * present. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_ABRUPTLY = 1006, /**< Reserved value and
                                                          * MUST NOT be set as
                                                          * a status code in a
                                                          * Close control frame
                                                          * by an endpoint.  It
                                                          * is designated for
                                                          * use in applications
                                                          * expecting a status
                                                          * code to indicate
                                                          * that the connection
                                                          * was closed
                                                          * abnormally, e.g.,
                                                          * without sending or
                                                          * receiving a Close
                                                          * control frame. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_UNEXPECTED_DATA = 1003, /**< Indicates that an endpoint is
                                                                 * terminating the connection because
                                                                 * it has received a type of data it
                                                                 * cannot accept (e.g., an endpoint
                                                                 * that understands only text data MAY
                                                                 * send this if it receives a binary
                                                                 * message). */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_INCONSISTENT_DATA = 1007, /**< Indicates that an endpoint is
                                                                   * terminating the connection because
                                                                   * it has received data within a
                                                                   * message that was not consistent with
                                                                   * the type of the message (e.g.,
                                                                   * non-UTF-8 data within a text
                                                                   * message). */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_POLICY_VIOLATION = 1008, /**< Indicates that an endpoint is
                                                                  * terminating the connection because
                                                                  * it has received a message that
                                                                  * violates its policy.  This is a
                                                                  * generic status code that can be
                                                                  * returned when there is no other more
                                                                  * suitable status code (e.g., 1003 or
                                                                  * 1009) or if there is a need to hide
                                                                  * specific details about the policy.
                                                                  */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_TOO_BIG = 1009, /**< Indicates that an
                                                         * endpoint is
                                                         * terminating the
                                                         * connection because
                                                         * it has received a
                                                         * message that is too
                                                         * big for it to
                                                         * process. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_MISSING_EXTENSION = 1010, /**< Indicates that an endpoint (client)
                                                                   * is terminating the connection
                                                                   * because it has expected the server
                                                                   * to negotiate one or more extension,
                                                                   * but the server didn't return them in
                                                                   * the response message of the
                                                                   * WebSocket handshake.  The list of
                                                                   * extensions that are needed SHOULD
                                                                   * appear in the reason part of the
                                                                   * Close frame.  Note that this status
                                                                   * code is not used by the server,
                                                                   * because it can fail the WebSocket
                                                                   * handshake instead. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_SERVER_ERROR = 1011, /**< Indicates that a server is
                                                              * terminating the connection because
                                                              * it encountered an unexpected
                                                              * condition that prevented it from
                                                              * fulfilling the request. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_IANA_REGISTRY_START = 3000, /**< IANA registry starts at 3000 */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_IANA_REGISTRY_END = 3999, /**< IANA registry ends at 3999 */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_PRIVATE_START = 4000, /**< Applications can use range
                                                               * 4000-4999 */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_PRIVATE_END = 4999 /**< Applications can
                                                            * use range
                                                            * 4000-4999 */
} Efl_Net_Dialer_Websocket_Close_Reason;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Close reason event payload.
 *
 * @ingroup Efl_Net_Dialer_Websocket_Closed_Reason
 */
typedef struct _Efl_Net_Dialer_Websocket_Closed_Reason
{
  Efl_Net_Dialer_Websocket_Close_Reason reason; /**< Closing reason */
  const char *message; /**< Textual closing reason message */
} Efl_Net_Dialer_Websocket_Closed_Reason;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief WebSocket Dialer (Client).
 *
 * The WebSocket Protocol (https://tools.ietf.org/html/rfc6455) is a
 * message-based protocol over HTTP, this allows it to leverage on
 * authentication, cookies, proxies and SSL/TLS.
 *
 * Although it uses the HTTP dialer, it's not a subclass and thus not all HTTP
 * features are exposed as the WebSocket has strict requirements that must be
 * respected.
 *
 * If the proxy is @c NULL (default), then the system proxy will be used. On
 * UNIX that's the environment variable @c http_proxy (or '$all_proxy') is used
 * if the given address doesn't match @c no_proxy patterns. To disable the
 * proxy use an empty string. If provided, the proxy must be one of the
 * following protocols:
 *
 * - http://username:password\@proxyserver:port -
 * http://username\@proxyserver:port - http://proxyserver:port -
 * http://proxyserver  (default port 1080) -
 * socks5://username:password\@proxyserver:port (SOCKSv5) -
 * socks5h://username\@proxyserver:port (let socks server to resolve domain) -
 * socks5://proxyserver:port - socks5://proxyserver (default port 1080) -
 * socks4a://proxyserver:port (SOCKSv4 and let socks server to resolve domain)
 * - socks4://proxyserver:port (SOCKSv4)
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
#define EFL_NET_DIALER_WEBSOCKET_CLASS efl_net_dialer_websocket_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_dialer_websocket_class_get(void) EINA_CONST;

/**
 * @brief Sends a PING (opcode=0x9) to the server.
 *
 * The server should reply with a PONG, which will be emitted as "pong" event.
 *
 * @param[in] obj The object.
 * @param[in] reason Reason
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_ping(Eo *obj, const char *reason);

/**
 * @brief Sends an UTF-8 TEXT (opcode=0x1) to the server.
 *
 * The message text will be delivered as a single entity to the remote peer.
 *
 * The text is copied into a local buffer. No references are kept after this
 * method returns.
 *
 * @param[in] obj The object.
 * @param[in] text Text to send
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_text_send(Eo *obj, const char *text);

/**
 * @brief Sends a binary blob (opcode=0x2) to the server.
 *
 * The slice describing the blob goes in a message which will be delivered as a
 * single entity to the remote peer.
 *
 * The memory is copied into a local buffer, no references are kept after this
 * method returns.
 *
 * @param[in] obj The object.
 * @param[in] blob Binary blob to send
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_binary_send(Eo *obj, const Eina_Slice blob);

/**
 * @brief Requests (opcode=0x8) the server to terminate the connection.
 *
 * Unlike @ref efl_io_closer_close, this won't abruptly close the connection,
 * rather it'll queue a message requesting the server to gracefully close it.
 *
 * After this method is called you should consider the object in "closing"
 * state. No more messages can be sent (@Efl.Net.Dialer_Websocket.text_send,
 * @ref efl_net_dialer_websocket_binary_send and
 * @ref efl_net_dialer_websocket_ping will fail).
 *
 * The object will be automatically closed with @ref efl_io_closer_close once
 * the server replies with his own close message, which will be reported as
 * "closed,reason".
 *
 * @param[in] obj The object.
 * @param[in] reason Reason for closing
 * @param[in] message Additional closing message
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_close_request(Eo *obj, Efl_Net_Dialer_Websocket_Close_Reason reason, const char *message);

/**
 * @brief Adds a new WebSocket protocol to the request.
 *
 * This should be set before dialing.
 *
 * @param[in] obj The object.
 * @param[in] protocol WebSocket protocol
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_request_protocol_add(Eo *obj, const char *protocol);

/**
 * @brief Returns an iterator to the requested WebSocket protocols
 *
 * @param[in] obj The object.
 *
 * @return Iterator to protocols
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_dialer_websocket_request_protocols_get(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/** Clears all request protocols
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_request_protocols_clear(Eo *obj);

/**
 * @brief Returns an iterator to the server-replied (response) WebSocket
 * protocols it supports
 *
 * @param[in] obj The object.
 *
 * @return Iterator to server protocols
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_dialer_websocket_response_protocols_get(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Configures how to map streaming APIs to WebSocket.
 *
 * WebSocket is a message-based protocol with these send via
 * @ref efl_net_dialer_websocket_text_send and
 * @ref efl_net_dialer_websocket_binary_send and delivered via events such as
 * "message,text" and "message,binary".
 *
 * However this class can operate in streaming mode, mapping each
 * @ref efl_io_writer_write to a @ref efl_net_dialer_websocket_binary_send if
 * streaming_mode is set to
 * @ref EFL_NET_DIALER_WEBSOCKET_STREAMING_MODE_BINARY, of
 * @ref efl_net_dialer_websocket_text_send if
 * @ref EFL_NET_DIALER_WEBSOCKET_STREAMING_MODE_TEXT
 *
 * @ref efl_io_reader_read may consume less then the whole received message, in
 * this case the rest of the message is kept for the next read call. (Note this
 * differs from SOCK_SEQPACKET + read(2)).
 *
 * By default, streaming is disabled
 * (@Efl.Net.Dialer_Websocket_Streaming_Mode.disabled).
 *
 * @param[in] obj The object.
 * @param[in] streaming_mode Streaming mode
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_streaming_mode_set(Eo *obj, Efl_Net_Dialer_Websocket_Streaming_Mode streaming_mode);

/**
 * @brief Configures how to map streaming APIs to WebSocket.
 *
 * WebSocket is a message-based protocol with these send via
 * @ref efl_net_dialer_websocket_text_send and
 * @ref efl_net_dialer_websocket_binary_send and delivered via events such as
 * "message,text" and "message,binary".
 *
 * However this class can operate in streaming mode, mapping each
 * @ref efl_io_writer_write to a @ref efl_net_dialer_websocket_binary_send if
 * streaming_mode is set to
 * @ref EFL_NET_DIALER_WEBSOCKET_STREAMING_MODE_BINARY, of
 * @ref efl_net_dialer_websocket_text_send if
 * @ref EFL_NET_DIALER_WEBSOCKET_STREAMING_MODE_TEXT
 *
 * @ref efl_io_reader_read may consume less then the whole received message, in
 * this case the rest of the message is kept for the next read call. (Note this
 * differs from SOCK_SEQPACKET + read(2)).
 *
 * By default, streaming is disabled
 * (@Efl.Net.Dialer_Websocket_Streaming_Mode.disabled).
 *
 * @param[in] obj The object.
 *
 * @return Streaming mode
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Dialer_Websocket_Streaming_Mode efl_net_dialer_websocket_streaming_mode_get(const Eo *obj);

/**
 * @brief The User-Agent to specify.
 *
 * This should be set before dialing.
 *
 * @param[in] obj The object.
 * @param[in] user_agent User-agent
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_user_agent_set(Eo *obj, const char *user_agent);

/**
 * @brief The User-Agent to specify.
 *
 * This should be set before dialing.
 *
 * @param[in] obj The object.
 *
 * @return User-agent
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_dialer_websocket_user_agent_get(const Eo *obj);

/**
 * @brief HTTP authentication to use.
 *
 * This should be set before dialing.
 *
 * @param[in] obj The object.
 * @param[in] username HTTP authentication username
 * @param[in] password HTTP authentication password
 * @param[in] method The authentication method to use. Defaults to
 * @ref EFL_NET_HTTP_AUTHENTICATION_METHOD_BASIC
 * @param[in] restricted Restrict method
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_authentication_set(Eo *obj, const char *username, const char *password, Efl_Net_Http_Authentication_Method method, Eina_Bool restricted);

/**
 * @brief HTTP authentication to use.
 *
 * This should be set before dialing.
 *
 * @param[in] obj The object.
 * @param[out] username HTTP authentication username
 * @param[out] password HTTP authentication password
 * @param[out] method The authentication method to use. Defaults to
 * @ref EFL_NET_HTTP_AUTHENTICATION_METHOD_BASIC
 * @param[out] restricted Restrict method
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_authentication_get(const Eo *obj, const char **username, const char **password, Efl_Net_Http_Authentication_Method *method, Eina_Bool *restricted);

/**
 * @brief Allows HTTP redirects to be followed.
 *
 * This should be set before dialing.
 *
 * @param[in] obj The object.
 * @param[in] allow_redirects @c true when following redirects, @c false
 * otherwise
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_allow_redirects_set(Eo *obj, Eina_Bool allow_redirects);

/**
 * @brief Allows HTTP redirects to be followed.
 *
 * This should be set before dialing.
 *
 * @param[in] obj The object.
 *
 * @return @c true when following redirects, @c false otherwise
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_dialer_websocket_allow_redirects_get(const Eo *obj);

/**
 * @brief Adds a HTTP request header 'key: value'.
 *
 * See @ref efl_net_dialer_websocket_request_headers_clear
 *
 * WebSocket won't allow the following headers to be added as they conflict
 * with its own operation:
 *
 * - Content-Length - Content-Type - Transfer-Encoding - Connection - Upgrade -
 * Expect - Sec-WebSocket-Version - Sec-WebSocket-Key
 *
 * This should be called before dialing.
 *
 * @param[in] obj The object.
 * @param[in] key HTTP request header key
 * @param[in] value HTTP request header value
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_request_header_add(Eo *obj, const char *key, const char *value);

/**
 * @brief Clears all request headers.
 *
 * See @ref efl_net_dialer_websocket_request_header_add
 *
 * This should be called before dialing.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_request_headers_clear(Eo *obj);

/**
 * @brief Returns an iterator to the key-value pairs for request headers
 *
 * @param[in] obj The object.
 *
 * @return Iterator to key value pairs
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_dialer_websocket_request_headers_get(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief This property sets the filename where to read and write cookies.
 *
 * By setting a file to load and store cookies, the internal cookie system will
 * be activated, automatically handling HTTP headers such as 'Set-cookie:' and
 * sending the appropriate cookies for a server.
 *
 * If a new, empty session is to be used, start with an empty or non-existent
 * file such as one created with eina_file_mkstemp() or tmpfile().
 * Alternatively use an empty string ("") to keep it in memory.
 *
 * If you want to start from a pre-existent cookie jar but do not want to
 * modify it, first copy that file and then pass the new, temporary file.
 *
 * Likewise, if you want to store some cookies in the system, create a cookie
 * jar and pass its path to this property.
 *
 * @note that whenever this property is set, even if to the same value, it will
 * flush all cookies to the previously set file, then erase all known cookies,
 * then use the new file (if any).
 *
 * @param[in] obj The object.
 * @param[in] path Path to cookie jar
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_dialer_websocket_cookie_jar_set(Eo *obj, const char *path);

/**
 * @brief This property sets the filename where to read and write cookies.
 *
 * By setting a file to load and store cookies, the internal cookie system will
 * be activated, automatically handling HTTP headers such as 'Set-cookie:' and
 * sending the appropriate cookies for a server.
 *
 * If a new, empty session is to be used, start with an empty or non-existent
 * file such as one created with eina_file_mkstemp() or tmpfile().
 * Alternatively use an empty string ("") to keep it in memory.
 *
 * If you want to start from a pre-existent cookie jar but do not want to
 * modify it, first copy that file and then pass the new, temporary file.
 *
 * Likewise, if you want to store some cookies in the system, create a cookie
 * jar and pass its path to this property.
 *
 * @note that whenever this property is set, even if to the same value, it will
 * flush all cookies to the previously set file, then erase all known cookies,
 * then use the new file (if any).
 *
 * @param[in] obj The object.
 *
 * @return Path to cookie jar
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_dialer_websocket_cookie_jar_get(const Eo *obj);

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_TEXT;

/** Received a text string message (opcode=0x1)
 * @return const char *
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
#define EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_TEXT (&(_EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_TEXT))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_BINARY;

/** Received a binary message (opcode=0x2)
 * @return const Eina_Slice *
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
#define EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_BINARY (&(_EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_BINARY))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_PONG;

/** Received a pong (opcode=0xA) with optional message/reason
 * @return const char *
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
#define EFL_NET_DIALER_WEBSOCKET_EVENT_PONG (&(_EFL_NET_DIALER_WEBSOCKET_EVENT_PONG))

ECORE_CON_API ECORE_CON_API_WEAK extern const Efl_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_CLOSED_REASON;

/** Received a request to close the connection. It may be a reply/confirmation
 * from a local request, see @ref efl_net_dialer_websocket_close_request, or
 * some server-generated reason. After this point, no more messages are allowed
 * to be sent and no more will be received. @ref efl_io_closer_close will be
 * called.
 * @return Efl_Net_Dialer_Websocket_Closed_Reason
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
#define EFL_NET_DIALER_WEBSOCKET_EVENT_CLOSED_REASON (&(_EFL_NET_DIALER_WEBSOCKET_EVENT_CLOSED_REASON))
#endif /* EFL_BETA_API_SUPPORT */

#endif
