#ifndef _EFL_UI_AUTOREPEAT_EO_H_
#define _EFL_UI_AUTOREPEAT_EO_H_

#ifndef _EFL_UI_AUTOREPEAT_EO_CLASS_TYPE
#define _EFL_UI_AUTOREPEAT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Autorepeat;

#endif

#ifndef _EFL_UI_AUTOREPEAT_EO_TYPES
#define _EFL_UI_AUTOREPEAT_EO_TYPES


#endif
/**
 * @brief Interface for autorepeating clicks.
 *
 * This interface abstracts functions for enabling / disabling this feature.
 * When enabled, keeping a button pressed will continuously emit the
 * @c repeated event until the button is released. The time it takes until it
 * starts emitting the event is given by
 * @ref efl_ui_autorepeat_initial_timeout_get, and the time between each new
 * emission by @ref efl_ui_autorepeat_gap_timeout_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Autorepeat
 */
#define EFL_UI_AUTOREPEAT_INTERFACE efl_ui_autorepeat_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_autorepeat_interface_get(void) EINA_CONST;

/**
 * @brief The initial timeout before the autorepeat event is generated.
 *
 * Sets the timeout, in seconds, since the button is pressed until the first
 * @c repeated signal is emitted. If @c t is 0.0 or less, there won't be any
 * delay and the event will be fired the moment the button is pressed.
 *
 * See also @ref efl_ui_autorepeat_enabled_get and
 * @ref efl_ui_autorepeat_gap_timeout_get.
 *
 * @param[in] obj The object.
 * @param[in] t Timeout in seconds.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EAPI EAPI_WEAK void efl_ui_autorepeat_initial_timeout_set(Eo *obj, double t);

/**
 * @brief The initial timeout before the autorepeat event is generated.
 *
 * Sets the timeout, in seconds, since the button is pressed until the first
 * @c repeated signal is emitted. If @c t is 0.0 or less, there won't be any
 * delay and the event will be fired the moment the button is pressed.
 *
 * See also @ref efl_ui_autorepeat_enabled_get and
 * @ref efl_ui_autorepeat_gap_timeout_get.
 *
 * @param[in] obj The object.
 *
 * @return Timeout in seconds.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EAPI EAPI_WEAK double efl_ui_autorepeat_initial_timeout_get(const Eo *obj);

/**
 * @brief The interval between each generated autorepeat event.
 *
 * After the first @c repeated event is fired, all subsequent ones will follow
 * after a delay of @c t seconds for each.
 *
 * See also @ref efl_ui_autorepeat_initial_timeout_get.
 *
 * @param[in] obj The object.
 * @param[in] t Time interval in seconds.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EAPI EAPI_WEAK void efl_ui_autorepeat_gap_timeout_set(Eo *obj, double t);

/**
 * @brief The interval between each generated autorepeat event.
 *
 * After the first @c repeated event is fired, all subsequent ones will follow
 * after a delay of @c t seconds for each.
 *
 * See also @ref efl_ui_autorepeat_initial_timeout_get.
 *
 * @param[in] obj The object.
 *
 * @return Time interval in seconds.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EAPI EAPI_WEAK double efl_ui_autorepeat_gap_timeout_get(const Eo *obj);

/**
 * @brief Turn on/off the autorepeat event generated when a button is kept
 * pressed.
 *
 * When off, no autorepeat is performed and buttons emit a normal @c clicked
 * event when they are clicked.
 *
 * @param[in] obj The object.
 * @param[in] on A bool to turn on/off the repeat event generation.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EAPI EAPI_WEAK void efl_ui_autorepeat_enabled_set(Eo *obj, Eina_Bool on);

/**
 * @brief Turn on/off the autorepeat event generated when a button is kept
 * pressed.
 *
 * When off, no autorepeat is performed and buttons emit a normal @c clicked
 * event when they are clicked.
 *
 * @param[in] obj The object.
 *
 * @return A bool to turn on/off the repeat event generation.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_autorepeat_enabled_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_AUTOREPEAT_EVENT_REPEATED;

/** Called when a repeated event is emitted
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Autorepeat
 */
#define EFL_UI_AUTOREPEAT_EVENT_REPEATED (&(_EFL_UI_AUTOREPEAT_EVENT_REPEATED))

#endif
