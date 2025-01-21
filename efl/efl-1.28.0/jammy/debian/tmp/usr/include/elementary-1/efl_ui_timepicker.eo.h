#ifndef _EFL_UI_TIMEPICKER_EO_H_
#define _EFL_UI_TIMEPICKER_EO_H_

#ifndef _EFL_UI_TIMEPICKER_EO_CLASS_TYPE
#define _EFL_UI_TIMEPICKER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Timepicker;

#endif

#ifndef _EFL_UI_TIMEPICKER_EO_TYPES
#define _EFL_UI_TIMEPICKER_EO_TYPES


#endif
/**
 * @brief Timepicker widget
 *
 * This is a widget which allows the user to pick a time using internal
 * spinner. User can use the internal spinner to select hour, minute, AM/PM or
 * user can input value using internal entry.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Timepicker
 */
#define EFL_UI_TIMEPICKER_CLASS efl_ui_timepicker_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_timepicker_class_get(void) EINA_CONST;

/**
 * @brief The current value of time
 *
 * @c hour: Hour. The hour value is in terms of 24 hour format from 0 to 23.
 *
 * @c min: Minute. The minute range is from 0 to 59.
 *
 * @param[in] obj The object.
 * @param[in] hour The hour value from 0 to 23.
 * @param[in] min The minute value from 0 to 59.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Timepicker
 */
EAPI EAPI_WEAK void efl_ui_timepicker_time_set(Eo *obj, int hour, int min);

/**
 * @brief The current value of time
 *
 * @c hour: Hour. The hour value is in terms of 24 hour format from 0 to 23.
 *
 * @c min: Minute. The minute range is from 0 to 59.
 *
 * @param[in] obj The object.
 * @param[out] hour The hour value from 0 to 23.
 * @param[out] min The minute value from 0 to 59.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Timepicker
 */
EAPI EAPI_WEAK void efl_ui_timepicker_time_get(const Eo *obj, int *hour, int *min);

/**
 * @brief Control if the Timepicker displays 24 hour time or 12 hour time
 * including AM/PM button.
 *
 * @param[in] obj The object.
 * @param[in] is_24hour @c true to display the 24 hour time, @c false to
 * display 12 hour time including AM/PM label.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Timepicker
 */
EAPI EAPI_WEAK void efl_ui_timepicker_is_24hour_set(Eo *obj, Eina_Bool is_24hour);

/**
 * @brief Control if the Timepicker displays 24 hour time or 12 hour time
 * including AM/PM button.
 *
 * @param[in] obj The object.
 *
 * @return @c true to display the 24 hour time, @c false to display 12 hour
 * time including AM/PM label.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Timepicker
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_timepicker_is_24hour_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_TIMEPICKER_EVENT_TIME_CHANGED;

/** Called when time is changed
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Timepicker
 */
#define EFL_UI_TIMEPICKER_EVENT_TIME_CHANGED (&(_EFL_UI_TIMEPICKER_EVENT_TIME_CHANGED))

#endif
