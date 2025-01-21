#ifndef _EFL_NET_IP_ADDRESS_EO_H_
#define _EFL_NET_IP_ADDRESS_EO_H_

#ifndef _EFL_NET_IP_ADDRESS_EO_CLASS_TYPE
#define _EFL_NET_IP_ADDRESS_EO_CLASS_TYPE

typedef Eo Efl_Net_Ip_Address;

#endif

#ifndef _EFL_NET_IP_ADDRESS_EO_TYPES
#define _EFL_NET_IP_ADDRESS_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The results of @ref efl_net_ip_address_resolve call.
 *
 * This structure is created by @ref efl_net_ip_address_resolve.
 *
 * @ingroup Efl_Net_Ip_Address_Resolve_Results
 */
typedef struct _Efl_Net_Ip_Address_Resolve_Results
{
  const char *request_address; /**< The 'address' argument given to
                                * Efl.Net.Ip_Address.resolve */
  const char *canonical_name; /**< The canonical name, if it was requested in
                               * flags */
  Eina_Array *results; /**< The resolved objects. Do not modify this array but
                        * you can keep reference to elements using efl_ref()
                        * and efl_unref() */
} Efl_Net_Ip_Address_Resolve_Results;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief An Internet Protocol (IP) Address.
 *
 * This class is a set of helpers to translate to and from address strings used
 * in Efl.Net. For IP they take the following formats:
 *
 * - IPv4 complete: 127.0.0.1:1234 - IPv4 no port: 127.0.0.1 - IPv6 complete:
 * [::1]:1234 - IPv6 no port: [::1] - IPv6 no braces (implies no port): ::1
 *
 * However in other libraries you can use the address numbers or even a 'struct
 * sockaddr' handle. Translating by yourself may be too much work. To convert
 * to a string just create an instance with @ref efl_net_ip_address_create or
 * @ref efl_net_ip_address_create_sockaddr and then query
 * @ref efl_net_ip_address_string_get. To convert from numeric string to
 * sockaddr, create an instance with @ref efl_net_ip_address_parse and then
 * query @ref efl_net_ip_address_sockaddr_get.
 *
 * To resolve a host and port name to numbers use
 * @ref efl_net_ip_address_resolve, this will asynchronously resolve and return
 * the results in a promise.
 *
 * The result of @ref efl_net_ip_address_string_get can be passed to
 * @ref efl_net_dialer_dial and @ref efl_net_server_serve
 *
 * @ingroup Efl_Net_Ip_Address
 */
#define EFL_NET_IP_ADDRESS_CLASS efl_net_ip_address_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_ip_address_class_get(void) EINA_CONST;

/**
 * @brief Creates an object given family, port and address.
 *
 * This is a convenience to create an object in a single call. To create based
 * on 'struct sockaddr', see @ref efl_net_ip_address_create_sockaddr. To create
 * from string, see @ref efl_net_ip_address_parse.
 *
 * @param[in] port Port number in Host/Native endianess
 * @param[in] address Address bytes. If 4 bytes, AF_INET will be used. If 16
 * bytes, AF_INET6 will be used. All other sizes will result in failure.
 *
 * @return Newly created object or @c NULL if parameters were invalid.
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Ip_Address *efl_net_ip_address_create(uint16_t port, const Eina_Slice address) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Creates an object given sockaddr
 *
 * This is a convenient way to create an object in a single call. To create
 * based on native port and address bytes use @ref efl_net_ip_address_create.
 * To create from a string use @ref efl_net_ip_address_parse.
 *
 * @param[in] sockaddr The pointer to struct sockaddr-compatible handle as per
 * <netinet/in.h>.
 *
 * @return Newly created object or @c NULL if parameter was invalid.
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Ip_Address *efl_net_ip_address_create_sockaddr(const void *sockaddr) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Parses a numeric address and return an object representing it.
 *
 * This parses a numeric IPv4 or IPv6 address and optional port, returning an
 * object representing it on success or @c NULL on failure.
 *
 * The address may be in the formats:
 *
 * - IPv4 complete: 127.0.0.1:1234 - IPv4 no port: 127.0.0.1 - IPv6 complete:
 * [::1]:1234 - IPv6 no port: [::1] - IPv6 no braces (implies no port): ::1
 *
 * If you want to translate address and port to numbers use
 * @ref efl_net_ip_address_resolve.
 *
 * @param[in] numeric_address The numeric address to parse, such as
 * '127.0.0.1:1234' or '[::1]:1234'
 *
 * @return The new IP address object or @c NULL if it failed to parse
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Efl_Net_Ip_Address *efl_net_ip_address_parse(const char *numeric_address) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Asynchronously resolves host and port names.
 *
 * This will resolve the host and port names, returning the results
 * asynchronously in a Future.
 *
 * It's based on getaddrinfo() and will receive extra flags to change its
 * behavior.
 *
 * Ports can also be named, for example http resolves to 80. Your system
 * database is used (see getaddrinfo()).
 *
 * You may try @ref efl_net_ip_address_parse if you have numeric values for
 * host and port.
 *
 * @param[in] address The address, such as enlightenment.org:http or
 * enlightenment.org (port=0)
 * @param[in] family Preferred family. AF_UNSPEC or 0 for both, otherwise one
 * of AF_INET or AF_INET6
 * @param[in] flags Flags to use with getaddrinfo(). If 0, default flags are
 * used (AI_V4MAPPED | AI_ADDRCONFIG, if these exist in your system).
 *
 * @return The resolve results. It contains a list of Efl.Net.Ip_Address, they
 * will be automatically deleted unless you keep a reference to it.
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Future *efl_net_ip_address_resolve(const char *address, int family, int flags);

/**
 * @brief Returns the numeric address formatted as a string.
 *
 * The format will be:
 *
 * - IPv4 with port > 0: 127.0.0.1:1234 - IPv4 with port == 0: 127.0.0.1 - IPv6
 * with port > 0: [::1]:1234 - IPv6 with port == 0: [::1]
 *
 * @param[in] obj The object.
 *
 * @return Numeric address as string
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK const char *efl_net_ip_address_string_get(const Eo *obj);

/**
 * @brief The address family, one of AF_INET6 or AF_INET.
 *
 * May only be set once. Afterwards the object does not change.
 *
 * @param[in] obj The object.
 * @param[in] family AF_INET or AF_INET6
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ip_address_family_set(Eo *obj, int family);

/**
 * @brief The address family, one of AF_INET6 or AF_INET.
 *
 * May only be set once. Afterwards the object does not change.
 *
 * @param[in] obj The object.
 *
 * @return AF_INET or AF_INET6
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK int efl_net_ip_address_family_get(const Eo *obj);

/**
 * @brief The address port in Host/Native endianess.
 *
 * May only be set once. Afterwards the object does not change.
 *
 * Must be set after @ref efl_net_ip_address_family_get.
 *
 * @param[in] obj The object.
 * @param[in] port Port number in Host/Native endianess
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ip_address_port_set(Eo *obj, uint16_t port);

/**
 * @brief The address port in Host/Native endianess.
 *
 * May only be set once. Afterwards the object does not change.
 *
 * Must be set after @ref efl_net_ip_address_family_get.
 *
 * @param[in] obj The object.
 *
 * @return Port number in Host/Native endianess
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK uint16_t efl_net_ip_address_port_get(const Eo *obj);

/**
 * @brief The bytes representing the address.
 *
 * May only be set once. Afterwards the object does not change.
 *
 * Must be set after @ref efl_net_ip_address_family_get.
 *
 * @param[in] obj The object.
 * @param[in] address Address bytes. If AF_INET it's 4 bytes. If AF_INET6, it's
 * 16 bytes. This matches exactly what is in struct sockaddr_in::sin_addr or
 * struct sockaddr_in6:sin6_addr, see @ref efl_net_ip_address_sockaddr_get
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ip_address_set(Eo *obj, const Eina_Slice address);

/**
 * @brief The bytes representing the address.
 *
 * May only be set once. Afterwards the object does not change.
 *
 * Must be set after @ref efl_net_ip_address_family_get.
 *
 * @param[in] obj The object.
 *
 * @return Address bytes. If AF_INET it's 4 bytes. If AF_INET6, it's 16 bytes.
 * This matches exactly what is in struct sockaddr_in::sin_addr or struct
 * sockaddr_in6:sin6_addr, see @ref efl_net_ip_address_sockaddr_get
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Slice efl_net_ip_address_get(const Eo *obj);

/**
 * @brief The <netinet/in.h>-compatible 'struct sockaddr'.
 *
 * May only be set once. Afterwards the object does not change.
 *
 * @param[in] obj The object.
 * @param[in] sockaddr Sockaddr struct. As usual with struct sockaddr, the
 * first field, struct sockaddr::sa_family, defines the rest of the structure
 * and how the whole structure must be interpreted. If AF_INET is struct
 * sockaddr_in, AF_INET6 is struct sockaddr_in6.
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_ip_address_sockaddr_set(Eo *obj, const void *sockaddr);

/**
 * @brief The <netinet/in.h>-compatible 'struct sockaddr'.
 *
 * May only be set once. Afterwards the object does not change.
 *
 * @param[in] obj The object.
 *
 * @return Sockaddr struct. As usual with struct sockaddr, the first field,
 * struct sockaddr::sa_family, defines the rest of the structure and how the
 * whole structure must be interpreted. If AF_INET is struct sockaddr_in,
 * AF_INET6 is struct sockaddr_in6.
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK const void *efl_net_ip_address_sockaddr_get(const Eo *obj);

/**
 * @brief Checks if IPv4 and is CLASS-A
 *
 * @param[in] obj The object.
 *
 * @return @c true if is a CLASS-A IPv4 address
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_ipv4_class_a_check(const Eo *obj);

/**
 * @brief Checks if IPv4 and is CLASS-B
 *
 * @param[in] obj The object.
 *
 * @return @c true if is a CLASS-B IPv4 address
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_ipv4_class_b_check(const Eo *obj);

/**
 * @brief Checks if IPv4 and is CLASS-C
 *
 * @param[in] obj The object.
 *
 * @return @c true if is a CLASS-C IPv4 address
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_ipv4_class_c_check(const Eo *obj);

/**
 * @brief Checks if IPv4 and is CLASS-D
 *
 * @param[in] obj The object.
 *
 * @return @c true if is a CLASS-D IPv4 address
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_ipv4_class_d_check(const Eo *obj);

/**
 * @brief Checks if IPv6 is mapping an IPv4.
 *
 * If the IPv6 server is not IPv6-only, then it will take IPv4 addresses and
 * map them inside IPv6. This checks if the given address is an IPv4 mapped
 * inside IPv6.
 *
 * @param[in] obj The object.
 *
 * @return @c true if is the IPv6 is IPv4 mapped inside IPv6 address
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_ipv6_v4mapped_check(const Eo *obj);

/**
 * @brief Checks if IPv6 is compatible with IPv4.
 *
 * This happens if the first 12 bytes of IPv6 are 0.
 *
 * @param[in] obj The object.
 *
 * @return @c true if is a IPv6 address is IPv4 compatible.
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_ipv6_v4compat_check(const Eo *obj);

/**
 * @brief Checks if IPv6 is link-local.
 *
 * @param[in] obj The object.
 *
 * @return @c true if is a IPv6 address is link-local
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_ipv6_local_link_check(const Eo *obj);

/**
 * @brief Checks if IPv6 is site-local.
 *
 * @param[in] obj The object.
 *
 * @return @c true if is a IPv6 address is site-local
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_ipv6_local_site_check(const Eo *obj);

/**
 * @brief Checks if multicast
 *
 * @param[in] obj The object.
 *
 * @return @c true if is a multicast address
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_multicast_check(const Eo *obj);

/**
 * @brief Checks if loopback "127.0.0.1" (IPv4) or "::1" (IPv6)
 *
 * @param[in] obj The object.
 *
 * @return @c true if is a multicast address
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_loopback_check(const Eo *obj);

/**
 * @brief Checks if "0.0.0.0" (IPv4) or "::" (IPv6)
 *
 * @param[in] obj The object.
 *
 * @return @c true if address means "any"
 *
 * @ingroup Efl_Net_Ip_Address
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_ip_address_any_check(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
