#ifndef _EFL_NET_HTTP_TYPES_EOT_H_
#define _EFL_NET_HTTP_TYPES_EOT_H_

#ifndef _EFL_NET_HTTP_TYPES_EOT_TYPES
#define _EFL_NET_HTTP_TYPES_EOT_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** HTTP protocol versions
 *
 * @ingroup Efl_Net_Http_Version
 */
typedef enum
{
  EFL_NET_HTTP_VERSION_V1_0 = 100, /**< HTTP version 1.0 */
  EFL_NET_HTTP_VERSION_V1_1 = 101, /**< HTTP version 1.1 */
  EFL_NET_HTTP_VERSION_V2_0 = 200 /**< HTTP version 2.0 */
} Efl_Net_Http_Version;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** HTTP authentication methods
 *
 * @ingroup Efl_Net_Http_Authentication_Method
 */
typedef enum
{
  EFL_NET_HTTP_AUTHENTICATION_METHOD_NONE = 0, /**< HTTP authentication method
                                                * none */
  EFL_NET_HTTP_AUTHENTICATION_METHOD_BASIC = 1 /* 1 >> 0 */, /**< HTTP authentication method basic */
  EFL_NET_HTTP_AUTHENTICATION_METHOD_DIGEST = 2 /* 1 >> 1 */, /**< HTTP authentication method digest
                                                               */
  EFL_NET_HTTP_AUTHENTICATION_METHOD_NEGOTIATE = 4 /* 1 >> 2 */, /**< HTTP authentication method
                                                                  * negotiate */
  EFL_NET_HTTP_AUTHENTICATION_METHOD_NTLM = 8 /* 1 >> 3 */, /**< HTTP authentication method ntlm */
  EFL_NET_HTTP_AUTHENTICATION_METHOD_NTLM_WINBIND = 16 /* 1 >> 4 */, /**< HTTP authentication method ntlm
                                                                      * winbind */
  EFL_NET_HTTP_AUTHENTICATION_METHOD_ANY_SAFE = 30 /* ((Efl.Net.Http.Authentication_Method.digest ^ Efl.Net.Http.Authentication_Method.negotiate) ^ Efl.Net.Http.Authentication_Method.ntlm) ^ Efl.Net.Http.Authentication_Method.ntlm_winbind */, /**< HTTP authentication method any safe
                                                                                                                                                                                                                                                    */
  EFL_NET_HTTP_AUTHENTICATION_METHOD_ANY = 31 /* Efl.Net.Http.Authentication_Method.any_safe ^ Efl.Net.Http.Authentication_Method.basic */ /**< HTTP authentication method any */
} Efl_Net_Http_Authentication_Method;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Common HTTP status codes. A more detailed description on the various HTTPS
 * status codes can be found one Wikipedia:
 * https://en.wikipedia.org/wiki/List_of_HTTP_status_codes
 *
 * @ingroup Efl_Net_Http_Status
 */
typedef enum
{
  EFL_NET_HTTP_STATUS_UNKNOWN = 0, /**< HTTP status code: Unknown, likely not
                                    * connected */
  EFL_NET_HTTP_STATUS_CONTINUE = 100, /**< HTTP status code: continue */
  EFL_NET_HTTP_STATUS_SWITCHING_PROTOCOLS = 101, /**< HTTP status code:
                                                  * switching protocols */
  EFL_NET_HTTP_STATUS_CHECKPOINT = 103, /**< HTTP status code: checkpoint
                                         * (unofficial extension) */
  EFL_NET_HTTP_STATUS_PROCESSING = 102, /**< HTTP status code: processing */
  EFL_NET_HTTP_STATUS_OK = 200, /**< HTTP status code: OK */
  EFL_NET_HTTP_STATUS_CREATED = 201, /**< HTTP status code: created */
  EFL_NET_HTTP_STATUS_ACCEPTED = 202, /**< HTTP status code: accepted */
  EFL_NET_HTTP_STATUS_NON_AUTHORITATIVE_INFORMATION = 203, /**< HTTP status
                                                            * code: non
                                                            * authoritative
                                                            * information */
  EFL_NET_HTTP_STATUS_NO_CONTENT = 204, /**< HTTP status code: no content */
  EFL_NET_HTTP_STATUS_RESET_CONTENT = 205, /**< HTTP status code: reset content
                                            */
  EFL_NET_HTTP_STATUS_PARTIAL_CONTENT = 206, /**< HTTP status code: partial
                                              * content */
  EFL_NET_HTTP_STATUS_MULTI_STATUS = 207, /**< HTTP status code: multi status */
  EFL_NET_HTTP_STATUS_ALREADY_REPORTED = 208, /**< HTTP status code: already
                                               * reported */
  EFL_NET_HTTP_STATUS_IM_USED = 226, /**< HTTP status code: IM used */
  EFL_NET_HTTP_STATUS_MULTIPLE_CHOICES = 300, /**< HTTP status code: multiple
                                               * choices */
  EFL_NET_HTTP_STATUS_MOVED_PERMANENTLY = 301, /**< HTTP status code: moved
                                                * permanently */
  EFL_NET_HTTP_STATUS_FOUND = 302, /**< HTTP status code: found */
  EFL_NET_HTTP_STATUS_SEE_OTHER = 303, /**< HTTP status code: see other */
  EFL_NET_HTTP_STATUS_NOT_MODIFIED = 304, /**< HTTP status code: not modified */
  EFL_NET_HTTP_STATUS_USE_PROXY = 305, /**< HTTP status code: use proxy */
  EFL_NET_HTTP_STATUS_SWITCH_PROXY = 306, /**< HTTP status code: switch proxy */
  EFL_NET_HTTP_STATUS_TEMPORARY_REDIRECT = 307, /**< HTTP status code: temporary
                                                 * redirect */
  EFL_NET_HTTP_STATUS_PERMANENT_REDIRECT = 308, /**< HTTP status code: permanent
                                                 * redirect */
  EFL_NET_HTTP_STATUS_BAD_REQUEST = 400, /**< HTTP status code: bad request */
  EFL_NET_HTTP_STATUS_UNAUTHORIZED = 401, /**< HTTP status code: unauthorized */
  EFL_NET_HTTP_STATUS_PAYMENT_REQUIRED = 402, /**< HTTP status code: payment
                                               * required */
  EFL_NET_HTTP_STATUS_FORBIDDEN = 403, /**< HTTP status code: forbidden */
  EFL_NET_HTTP_STATUS_NOT_FOUND = 404, /**< HTTP status code: not found */
  EFL_NET_HTTP_STATUS_METHOD_NOT_ALLOWED = 405, /**< HTTP status code: method
                                                 * not allowed */
  EFL_NET_HTTP_STATUS_NOT_ACCEPTABLE = 406, /**< HTTP status code: not
                                             * acceptable */
  EFL_NET_HTTP_STATUS_PROXY_AUTHENTICATION_REQUIRED = 407, /**< HTTP status
                                                            * code: proxy
                                                            * authentication
                                                            * required */
  EFL_NET_HTTP_STATUS_REQUEST_TIMEOUT = 408, /**< HTTP status code: request
                                              * timeout */
  EFL_NET_HTTP_STATUS_CONFLICT = 409, /**< HTTP status code: conflict */
  EFL_NET_HTTP_STATUS_GONE = 410, /**< HTTP status code: gone */
  EFL_NET_HTTP_STATUS_LENGTH_REQUIRED = 411, /**< HTTP status code: length
                                              * required */
  EFL_NET_HTTP_STATUS_PRECONDITION_FAILED = 412, /**< HTTP status code:
                                                  * precondition failed */
  EFL_NET_HTTP_STATUS_PAYLOAD_TOO_LARGE = 413, /**< HTTP status code: payload
                                                * too large */
  EFL_NET_HTTP_STATUS_URI_TOO_LONG = 414, /**< HTTP status code: URI too long */
  EFL_NET_HTTP_STATUS_UNSUPPORTED_MEDIA_TYPE = 415, /**< HTTP status code:
                                                     * unsupported media type
                                                     */
  EFL_NET_HTTP_STATUS_RANGE_NOT_SATISFIABLE = 416, /**< HTTP status code: range
                                                    * not satisfied */
  EFL_NET_HTTP_STATUS_EXPECTATION_FAILED = 417, /**< HTTP status code:
                                                 * expectation failed */
  EFL_NET_HTTP_STATUS_MISDIRECTED_REQUEST = 421, /**< HTTP status code:
                                                  * misdirected request */
  EFL_NET_HTTP_STATUS_UNPROCESSABLE_ENTITY = 422, /**< HTTP status code:
                                                   * unprocessable entity */
  EFL_NET_HTTP_STATUS_LOCKED = 423, /**< HTTP status code: locked */
  EFL_NET_HTTP_STATUS_FAILED_DEPENDENCY = 424, /**< HTTP status code: failed
                                                * dependency */
  EFL_NET_HTTP_STATUS_UPGRADE_REQUIRED = 426, /**< HTTP status code: upgrade
                                               * required */
  EFL_NET_HTTP_STATUS_PRECONDITION_REQUIRED = 428, /**< HTTP status code:
                                                    * precondition required */
  EFL_NET_HTTP_STATUS_TOO_MANY_REQUESTS = 429, /**< HTTP status code: too many
                                                * requests */
  EFL_NET_HTTP_STATUS_REQUEST_HEADER_FIELDS_TOO_LARGE = 431, /**< HTTP status code: request header
                                                              * fields too large */
  EFL_NET_HTTP_STATUS_LOGIN_TIMEOUT = 440, /**< HTTP status code: login timeout
                                            * (unofficial extension) */
  EFL_NET_HTTP_STATUS_NO_RESPONSE = 444, /**< HTTP status code: no response
                                          * (unofficial extension) */
  EFL_NET_HTTP_STATUS_RETRY_WITH = 449, /**< HTTP status code: retry with
                                         * (unofficial extension) */
  EFL_NET_HTTP_STATUS_BLOCKED_BY_WINDOWS_PARENTAL_CONTROLS = 450, /**< HTTP status code: blocked by
                                                                   * windows parental controls
                                                                   * (unofficial extension) */
  EFL_NET_HTTP_STATUS_UNAVAILABLE_FOR_LEGAL_REASONS = 451, /**< HTTP status
                                                            * code: unavailable
                                                            * for legal reasons
                                                            */
  EFL_NET_HTTP_STATUS_SSL_CERTIFICATE_ERROR = 495, /**< HTTP status code: SSL
                                                    * certificate error
                                                    * (unofficial extension) */
  EFL_NET_HTTP_STATUS_SSL_CERTIFICATE_REQUIRED = 496, /**< HTTP status code: SSL
                                                       * certificate required
                                                       * (unofficial extension)
                                                       */
  EFL_NET_HTTP_STATUS_HTTP_REQUEST_SENT_TO_HTTPS_PORT = 497, /**< HTTP status code: HTTP request sent
                                                              * to HTTPS port (unofficial extension)
                                                              */
  EFL_NET_HTTP_STATUS_REQUEST_HAS_BEEN_FORBIDDEN_BY_ANTIVIRUS = 499, /**< HTTP status code: request has been
                                                                      * forbidden by anti virus */
  EFL_NET_HTTP_STATUS_INTERNAL_SERVER_ERROR = 500, /**< HTTP status code:
                                                    * internal server error */
  EFL_NET_HTTP_STATUS_NOT_IMPLEMENTED = 501, /**< HTTP status code: not
                                              * implemented */
  EFL_NET_HTTP_STATUS_BAD_GATEWAY = 502, /**< HTTP status code: bad gateway */
  EFL_NET_HTTP_STATUS_SERVICE_UNAVAILABLE = 503, /**< HTTP status code: service
                                                  * unavailable */
  EFL_NET_HTTP_STATUS_GATEWAY_TIMEOUT = 504, /**< HTTP status code: gateway
                                              * timeout */
  EFL_NET_HTTP_STATUS_HTTP_VERSION_NOT_SUPPORTED = 505, /**< HTTP status code:
                                                         * HTTP version not
                                                         * supported */
  EFL_NET_HTTP_STATUS_VARIANT_ALSO_NEGOTIATES = 506, /**< HTTP status code:
                                                      * variant also negotiates
                                                      */
  EFL_NET_HTTP_STATUS_INSUFFICIENT_STORAGE = 507, /**< HTTP status code:
                                                   * insufficient storage */
  EFL_NET_HTTP_STATUS_LOOP_DETECTED = 508, /**< HTTP status code: loop detected
                                            */
  EFL_NET_HTTP_STATUS_BANDWIDTH_LIMIT_EXCEEDED = 509, /**< HTTP status code:
                                                       * bandwidth limit
                                                       * exceeded (unofficial
                                                       * extension) */
  EFL_NET_HTTP_STATUS_NOT_EXTENDED = 510, /**< HTTP status code: not extended */
  EFL_NET_HTTP_STATUS_NETWORK_AUTHENTICATION_REQUIRED = 511 /**< HTTP status code: network
                                                             * authentication required */
} Efl_Net_Http_Status;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief An HTTP Header.
 *
 * Do not assume strings are Eina_Stringshare and they may be NULL. The key and
 * value should not include any trailing whitespace.
 *
 * There is a special case for response headers when "allow_redirects" is
 * enabled, in that case efl_net_dialer_http_response_headers_all_get() will
 * return some items with key being NULL, that notifies of a new request as
 * described in the value "HTTP/1.1 200 Ok".
 *
 * @ingroup Efl_Net_Http_Header
 */
typedef struct _Efl_Net_Http_Header
{
  const char *key; /**< for response headers this may be null to indicate a new
                    * request response, then the value will be a line such as
                    * 'HTTP/1.1 200 Ok' */
  const char *value; /**< Header value */
} Efl_Net_Http_Header;
#endif /* EFL_BETA_API_SUPPORT */


#endif

#endif
