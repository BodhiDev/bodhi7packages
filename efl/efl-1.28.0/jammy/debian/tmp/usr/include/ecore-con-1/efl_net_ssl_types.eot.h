#ifndef _EFL_NET_SSL_TYPES_EOT_H_
#define _EFL_NET_SSL_TYPES_EOT_H_

#ifndef _EFL_NET_SSL_TYPES_EOT_TYPES
#define _EFL_NET_SSL_TYPES_EOT_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Defines how remote peers should be verified.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Ssl_Verify_Mode
 */
typedef enum
{
  EFL_NET_SSL_VERIFY_MODE_NONE = 0, /**< Do not verify peer
                                     *
                                     * @since 1.19 */
  EFL_NET_SSL_VERIFY_MODE_OPTIONAL, /**< If provided, verify. Otherwise proceed
                                     *
                                     * @since 1.19 */
  EFL_NET_SSL_VERIFY_MODE_REQUIRED /**< Always verify and fail if certificate
                                    * wasn't provided
                                    *
                                    * @since 1.19 */
} Efl_Net_Ssl_Verify_Mode;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Defines the SSL/TLS version to use.
 *
 * Prefer 'auto' or one of the TLS variants.
 *
 * @note since it's very insecure, SSLv2 is not present. SSLv3 support depends
 * on being available on the platform.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Ssl_Cipher
 */
typedef enum
{
  EFL_NET_SSL_CIPHER_AUTO = 0, /**< The default. Use the best your system
                                * supports, disables dangerous ciphers
                                *
                                * @since 1.19 */
  EFL_NET_SSL_CIPHER_TLSV1, /**< TLSv1, secure and widely available
                             *
                             * @since 1.19 */
  EFL_NET_SSL_CIPHER_TLSV1_1, /**< TLSv1.1, secure
                               *
                               * @since 1.19 */
  EFL_NET_SSL_CIPHER_TLSV1_2 /**< TLSv1.2, secure
                              *
                              * @since 1.19 */
} Efl_Net_Ssl_Cipher;
#endif /* EFL_BETA_API_SUPPORT */


#endif

#endif
