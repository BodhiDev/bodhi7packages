#ifndef _EFL_NET_SERVER_SSL_EO_H_
#define _EFL_NET_SERVER_SSL_EO_H_

#ifndef _EFL_NET_SERVER_SSL_EO_CLASS_TYPE
#define _EFL_NET_SERVER_SSL_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Ssl;

#endif

#ifndef _EFL_NET_SERVER_SSL_EO_TYPES
#define _EFL_NET_SERVER_SSL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** A SSL server over TCP.
 *
 * @ingroup Efl_Net_Server_Ssl
 */
#define EFL_NET_SERVER_SSL_CLASS efl_net_server_ssl_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_server_ssl_class_get(void) EINA_CONST;

/**
 * @brief Defines the SSL context to use for this server.
 *
 * This specifies a shared context for all clients, with certificate, private
 * keys, CRL, CAs...
 *
 * If changed in runtime, it will only affect new clients.
 *
 * @param[in] obj The object.
 * @param[in] ssl_context SSL context
 *
 * @ingroup Efl_Net_Server_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_ssl_context_set(Eo *obj, Efl_Net_Ssl_Context *ssl_context);

/**
 * @brief Defines the SSL context to use for this server.
 *
 * This specifies a shared context for all clients, with certificate, private
 * keys, CRL, CAs...
 *
 * If changed in runtime, it will only affect new clients.
 *
 * @param[in] obj The object.
 *
 * @return SSL context
 *
 * @ingroup Efl_Net_Server_Ssl
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Ssl_Context *efl_net_server_ssl_context_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
