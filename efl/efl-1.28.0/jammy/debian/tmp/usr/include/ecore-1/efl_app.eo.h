#ifndef _EFL_APP_EO_H_
#define _EFL_APP_EO_H_

#ifndef _EFL_APP_EO_CLASS_TYPE
#define _EFL_APP_EO_CLASS_TYPE

typedef Eo Efl_App;

#endif

#ifndef _EFL_APP_EO_TYPES
#define _EFL_APP_EO_TYPES


#endif
/** Object representing the application itself.
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
#define EFL_APP_CLASS efl_app_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_app_class_get(void) EINA_CONST;

/**
 * @brief Returns the app object that is representing this process
 *
 * @note This function call only works in the main loop thread of the process.
 *
 * @return Application for this process
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
EAPI EAPI_WEAK Efl_App *efl_app_main_get(void);

/**
 * @brief Indicates the version of EFL with which this application was compiled
 * against/for.
 *
 * This might differ from @ref efl_app_efl_version_get.
 *
 * @param[in] obj The object.
 *
 * @return Efl build version
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
EAPI EAPI_WEAK const Efl_Version *efl_app_build_efl_version_get(const Eo *obj);

/**
 * @brief Indicates the currently running version of EFL.
 *
 * This might differ from @ref efl_app_build_efl_version_get.
 *
 * @param[in] obj The object.
 *
 * @return Efl version
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
EAPI EAPI_WEAK const Efl_Version *efl_app_efl_version_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_APP_EVENT_PAUSE;

/** Called when the application is not going be displayed or otherwise used by
 * a user for some time
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
#define EFL_APP_EVENT_PAUSE (&(_EFL_APP_EVENT_PAUSE))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_APP_EVENT_RESUME;

/** Called before a window is rendered after a pause event
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
#define EFL_APP_EVENT_RESUME (&(_EFL_APP_EVENT_RESUME))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_APP_EVENT_STANDBY;

/** Called when the application's windows are all destroyed
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
#define EFL_APP_EVENT_STANDBY (&(_EFL_APP_EVENT_STANDBY))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_APP_EVENT_TERMINATE;

/** Called before starting the shutdown of the application
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
#define EFL_APP_EVENT_TERMINATE (&(_EFL_APP_EVENT_TERMINATE))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_APP_EVENT_SIGNAL_USR1;

/** System specific, but on unix maps to SIGUSR1 signal to the process - only
 * called on main loop object
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
#define EFL_APP_EVENT_SIGNAL_USR1 (&(_EFL_APP_EVENT_SIGNAL_USR1))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_APP_EVENT_SIGNAL_USR2;

/** System specific, but on unix maps to SIGUSR2 signal to the process - only
 * called on main loop object
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
#define EFL_APP_EVENT_SIGNAL_USR2 (&(_EFL_APP_EVENT_SIGNAL_USR2))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_APP_EVENT_SIGNAL_HUP;

/** System specific, but on unix maps to SIGHUP signal to the process - only
 * called on main loop object
 *
 * @since 1.22
 *
 * @ingroup Efl_App
 */
#define EFL_APP_EVENT_SIGNAL_HUP (&(_EFL_APP_EVENT_SIGNAL_HUP))

#endif
