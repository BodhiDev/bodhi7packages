#ifndef _EFL_NET_SERVER_SIMPLE_EO_H_
#define _EFL_NET_SERVER_SIMPLE_EO_H_

#ifndef _EFL_NET_SERVER_SIMPLE_EO_CLASS_TYPE
#define _EFL_NET_SERVER_SIMPLE_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Simple;

#endif

#ifndef _EFL_NET_SERVER_SIMPLE_EO_TYPES
#define _EFL_NET_SERVER_SIMPLE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A network server wrapper that creates clients based on
 * @ref Efl_Net_Socket_Simple.
 *
 * This is just a wrapper server. It takes an actual server using
 * @ref efl_net_server_simple_inner_server_get or creates one using
 * @ref efl_net_server_simple_inner_class_get.
 *
 * @ingroup Efl_Net_Server_Simple
 */
#define EFL_NET_SERVER_SIMPLE_CLASS efl_net_server_simple_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_server_simple_class_get(void) EINA_CONST;

/**
 * @brief The class used to create @ref efl_net_server_simple_inner_server_get
 * if none was provided.
 *
 * This class must be set at build time and will be used to create the inner
 * socket during @ref efl_finalize.
 *
 * It is a helper for users, saving them the trouble of manually creating and
 * specifying a dialer object.
 *
 * Constructor-only property to define the class used to create the inner
 * dialer.
 *
 * @param[in] obj The object.
 * @param[in] klass The class
 *
 * @ingroup Efl_Net_Server_Simple
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_simple_inner_class_set(Eo *obj, const Efl_Class *klass);

/**
 * @brief The class used to create @ref efl_net_server_simple_inner_server_get
 * if none was provided.
 *
 * This class must be set at build time and will be used to create the inner
 * socket during @ref efl_finalize.
 *
 * It is a helper for users, saving them the trouble of manually creating and
 * specifying a dialer object.
 *
 * The internal class used to create the inner dialer.
 *
 * @param[in] obj The object.
 *
 * @return The class
 *
 * @ingroup Efl_Net_Server_Simple
 */
ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_server_simple_inner_class_get(const Eo *obj);

/**
 * @brief The inner @ref Efl_Net_Server this wrapper operates on.
 *
 * Constructor-only property to set the inner_server.
 *
 * @param[in] obj The object.
 * @param[in] server The server instance
 *
 * @ingroup Efl_Net_Server_Simple
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_simple_inner_server_set(Eo *obj, Efl_Object *server);

/**
 * @brief The inner @ref Efl_Net_Server this wrapper operates on.
 *
 * The internal server used for actual operations, use with care!
 *
 * @param[in] obj The object.
 *
 * @return The server instance
 *
 * @ingroup Efl_Net_Server_Simple
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Object *efl_net_server_simple_inner_server_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
