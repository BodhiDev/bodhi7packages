#ifndef _EFL_NET_SERVER_TCP_EO_H_
#define _EFL_NET_SERVER_TCP_EO_H_

#ifndef _EFL_NET_SERVER_TCP_EO_CLASS_TYPE
#define _EFL_NET_SERVER_TCP_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Tcp;

#endif

#ifndef _EFL_NET_SERVER_TCP_EO_TYPES
#define _EFL_NET_SERVER_TCP_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** A TCP server.
 *
 * @ingroup Efl_Net_Server_Tcp
 */
#define EFL_NET_SERVER_TCP_CLASS efl_net_server_tcp_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_server_tcp_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
