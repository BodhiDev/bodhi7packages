#ifndef _EFL_TYPES_EOT_H_
#define _EFL_TYPES_EOT_H_

#ifndef _EFL_TYPES_EOT_TYPES
#define _EFL_TYPES_EOT_TYPES

/**
 * @brief This type describes the version of EFL with an optional variant.
 *
 * This may be used to query the current running version of EFL. Or it can be
 * passed by applications at startup time to inform EFL of the version a
 * certain application was built for.
 *
 * @since 1.22
 *
 * @ingroup Efl_Version
 */
typedef struct _Efl_Version
{
  int major; /**< Major component of the version (>= 1).
              *
              * @since 1.22 */
  int minor; /**< Minor component of the version (>= 0).
              *
              * @since 1.22 */
  int micro; /**< Micro component of the version (>= 0).
              *
              * @since 1.22 */
  int revision; /**< Revision component of the version (>= 0).
                 *
                 * @since 1.22 */
  const char *flavor; /**< Special version string for this build of EFL, @c null
                       * for vanilla (upstream) EFL. Contains
                       * @c EFL_VERSION_FLAVOR.
                       *
                       * @since 1.22 */
  const char *build_id; /**< Contains @c EFL_BUILD_ID.
                         *
                         * @since 1.22 */
} Efl_Version;


#endif

#endif
