#ifndef EFL_CONFIG_H
#define EFL_CONFIG_H

/* Add -DEFL_API_OVERRIDE to your CFLAGS to override the default
 * installed api set and after that -DEFL_NOLEGACY_API_SUPPORT
 * as desired
 */
#ifndef EFL_API_OVERRIDE 
#define EFL_API_LEGACY_DEF "FIXME NOT IMPLEMENTED"
#endif

#define EFL_VERSION_MAJOR 1
#define EFL_VERSION_MINOR 28
#define EFL_VERSION_MICRO 99
#define EFL_BUILD_ID "none"

#endif
