#ifndef _EFL_NET_DIALER_UNIX_EO_H_
#define _EFL_NET_DIALER_UNIX_EO_H_

#ifndef _EFL_NET_DIALER_UNIX_EO_CLASS_TYPE
#define _EFL_NET_DIALER_UNIX_EO_CLASS_TYPE

typedef Eo Efl_Net_Dialer_Unix;

#endif

#ifndef _EFL_NET_DIALER_UNIX_EO_TYPES
#define _EFL_NET_DIALER_UNIX_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Connects to a local AF_UNIX server.
 *
 * The dial address is a file system path (portable) or "abstract:ID"
 * (Linux-only extension).
 *
 * @note Proxies are meaningless for AF_UNIX family, thus are not implemented.
 *
 * @ingroup Efl_Net_Dialer_Unix
 */
#define EFL_NET_DIALER_UNIX_CLASS efl_net_dialer_unix_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_dialer_unix_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
