#ifndef _EFL_NET_TYPES_EOT_H_
#define _EFL_NET_TYPES_EOT_H_

#ifndef _EFL_NET_TYPES_EOT_TYPES
#define _EFL_NET_TYPES_EOT_TYPES

#ifdef EFL_BETA_API_SUPPORT
ECORE_CON_API ECORE_CON_API_WEAK Eina_Error efl_net_error_couldnt_resolve_host_get(void);

/** Could not resolve the given host name
 *
 * @ingroup Efl_Net_Error_COULDNT_RESOLVE_HOST
 */
#define EFL_NET_ERROR_COULDNT_RESOLVE_HOST efl_net_error_couldnt_resolve_host_get()
#endif /* EFL_BETA_API_SUPPORT */


#endif

#endif
