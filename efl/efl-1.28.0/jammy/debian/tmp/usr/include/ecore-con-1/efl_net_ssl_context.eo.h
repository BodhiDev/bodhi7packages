#ifndef _EFL_NET_SSL_CONTEXT_EO_H_
#define _EFL_NET_SSL_CONTEXT_EO_H_

#ifndef _EFL_NET_SSL_CONTEXT_EO_CLASS_TYPE
#define _EFL_NET_SSL_CONTEXT_EO_CLASS_TYPE

typedef Eo Efl_Net_Ssl_Context;

#endif

#ifndef _EFL_NET_SSL_CONTEXT_EO_TYPES
#define _EFL_NET_SSL_CONTEXT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A SSL Context that is used to start a SSL socket wrapper.
 *
 * The context will contain common configurations such as certificates, private
 * keys, certificate revocation lists (CRLs), certificate authorities (CAs) and
 * so on.
 *
 * The method @ref efl_net_ssl_context_setup must be called once before
 * @ref efl_finalize in order to define the mandatory operational parameters.
 *
 * @note All setter methods must be called before @ref efl_finalize.
 *
 * @ingroup Efl_Net_Ssl_Context
 */
#define EFL_NET_SSL_CONTEXT_CLASS efl_net_ssl_context_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_ssl_context_class_get(void) EINA_CONST;

/**
 * @brief The default context for dialers.
 *
 * It will start with:
 *
 * - default_paths_load = true - cipher = auto - verify_mode = required -
 * verify_hostname = true
 *
 * @return Default SSL context
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Ssl_Context *efl_net_ssl_context_default_dialer_get(void);

/**
 * @brief Defines the context mandatory operation parameters
 *
 * @param[in] obj The object.
 * @param[in] cipher Cipher to use, prefer @ref EFL_NET_SSL_CIPHER_AUTO
 * @param[in] is_dialer If @c true, this SSL context is targeted at dialers
 * connecting to a remote serer
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ssl_context_setup(Eo *obj, Efl_Net_Ssl_Cipher cipher, Eina_Bool is_dialer);

/**
 * @brief The list of paths to certificates to use.
 *
 * Can only be set during object construction!
 *
 * @param[in] obj The object.
 * @param[in] paths Path list for certificates
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ssl_context_certificates_set(Eo *obj, Eina_Iterator *paths EFL_TRANSFER_OWNERSHIP);

/**
 * @brief The list of paths to certificates to use.
 *
 * Can only be set during object construction!
 *
 * @param[in] obj The object.
 *
 * @return Path list for certificates
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_ssl_context_certificates_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief The list of paths to private keys to use.
 *
 * Can only be set during object construction!
 *
 * @param[in] obj The object.
 * @param[in] paths Path list for private keys
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ssl_context_private_keys_set(Eo *obj, Eina_Iterator *paths EFL_TRANSFER_OWNERSHIP);

/**
 * @brief The list of paths to private keys to use.
 *
 * Can only be set during object construction!
 *
 * @param[in] obj The object.
 *
 * @return Path list for private keys
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_ssl_context_private_keys_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief The list of paths to CRL (certificate revocation list) to use.
 *
 * Can only be set during object construction!
 *
 * @param[in] obj The object.
 * @param[in] paths Path list for CRL's
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ssl_context_certificate_revocation_lists_set(Eo *obj, Eina_Iterator *paths EFL_TRANSFER_OWNERSHIP);

/**
 * @brief The list of paths to CRL (certificate revocation list) to use.
 *
 * Can only be set during object construction!
 *
 * @param[in] obj The object.
 *
 * @return Path list for CRL's
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_ssl_context_certificate_revocation_lists_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief The list of paths to CA (certificate authoritie) to use.
 *
 * Can only be set during object construction!
 *
 * @param[in] obj The object.
 * @param[in] paths Path list for CA's
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ssl_context_certificate_authorities_set(Eo *obj, Eina_Iterator *paths EFL_TRANSFER_OWNERSHIP);

/**
 * @brief The list of paths to CA (certificate authoritie) to use.
 *
 * Can only be set during object construction!
 *
 * @param[in] obj The object.
 *
 * @return Path list for CA's
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Iterator *efl_net_ssl_context_certificate_authorities_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief If @c true, will use system's default certificate storage
 *
 * Can only be set during object construction!
 *
 * @param[in] obj The object.
 * @param[in] default_paths_load @c if true use system default paths for
 * loading, @c false otherwise
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ssl_context_default_paths_load_set(Eo *obj, Eina_Bool default_paths_load);

/**
 * @brief If @c true, will use system's default certificate storage
 *
 * Can only be set during object construction!
 *
 * @param[in] obj The object.
 *
 * @return @c if true use system default paths for loading, @c false otherwise
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ssl_context_default_paths_load_get(const Eo *obj);

/**
 * @brief How to verify the remote peer.
 *
 * @param[in] obj The object.
 * @param[in] verify_mode Remote verification mode
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ssl_context_verify_mode_set(Eo *obj, Efl_Net_Ssl_Verify_Mode verify_mode);

/**
 * @brief How to verify the remote peer.
 *
 * @param[in] obj The object.
 *
 * @return Remote verification mode
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Ssl_Verify_Mode efl_net_ssl_context_verify_mode_get(const Eo *obj);

/**
 * @brief Defines if hostname should be verified.
 *
 * This will check the socket hostname (without the port in case of an IP) or
 * the overriden value from @ref efl_net_ssl_context_hostname_get.
 *
 * @param[in] obj The object.
 * @param[in] hostname_verify @c true if the hostname will be verified,
 * @c false otherwise
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ssl_context_hostname_verify_set(Eo *obj, Eina_Bool hostname_verify);

/**
 * @brief Defines if hostname should be verified.
 *
 * This will check the socket hostname (without the port in case of an IP) or
 * the overriden value from @ref efl_net_ssl_context_hostname_get.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the hostname will be verified, @c false otherwise
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ssl_context_hostname_verify_get(const Eo *obj);

/**
 * @brief Defines the hostname to use for sockets.
 *
 * This is useful to avoid replicating a hostname in all socket wrapper with
 * hostname_override.
 *
 * If @c NULL, then sockets wrappers will will fetch from adopted socket using
 * address_remote or address_dial.
 *
 * It's only used if @ref efl_net_ssl_context_hostname_verify_get is @c true.
 *
 * @param[in] obj The object.
 * @param[in] hostname Hostname for this socket
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ssl_context_hostname_set(Eo *obj, const char *hostname);

/**
 * @brief Defines the hostname to use for sockets.
 *
 * This is useful to avoid replicating a hostname in all socket wrapper with
 * hostname_override.
 *
 * If @c NULL, then sockets wrappers will will fetch from adopted socket using
 * address_remote or address_dial.
 *
 * It's only used if @ref efl_net_ssl_context_hostname_verify_get is @c true.
 *
 * @param[in] obj The object.
 *
 * @return Hostname for this socket
 *
 * @ingroup Efl_Net_Ssl_Context
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_ssl_context_hostname_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
