#ifndef _EFL_UI_CALENDAR_EO_H_
#define _EFL_UI_CALENDAR_EO_H_

#ifndef _EFL_UI_CALENDAR_EO_CLASS_TYPE
#define _EFL_UI_CALENDAR_EO_CLASS_TYPE

typedef Eo Efl_Ui_Calendar;

#endif

#ifndef _EFL_UI_CALENDAR_EO_TYPES
#define _EFL_UI_CALENDAR_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief A weekday
 *
 * See also @ref efl_ui_calendar_first_day_of_week_set.
 *
 * @ingroup Efl_Ui_Calendar_Weekday
 */
typedef enum
{
  EFL_UI_CALENDAR_WEEKDAY_SUNDAY = 0, /**< Sunday weekday */
  EFL_UI_CALENDAR_WEEKDAY_MONDAY, /**< Monday weekday */
  EFL_UI_CALENDAR_WEEKDAY_TUESDAY, /**< Tuesday weekday */
  EFL_UI_CALENDAR_WEEKDAY_WEDNESDAY, /**< Wednesday weekday */
  EFL_UI_CALENDAR_WEEKDAY_THURSDAY, /**< Thursday weekday */
  EFL_UI_CALENDAR_WEEKDAY_FRIDAY, /**< Friday weekday */
  EFL_UI_CALENDAR_WEEKDAY_SATURDAY, /**< Saturday weekday */
  EFL_UI_CALENDAR_WEEKDAY_LAST /**< Sentinel value to indicate last enum field
                                * during iteration */
} Efl_Ui_Calendar_Weekday;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Calendar widget
 *
 * It helps applications to flexibly display a calendar with day of the week,
 * date, year and month. Applications are able to set specific dates to be
 * reported back, when selected, in the smart callbacks of the calendar widget.
 *
 * @ingroup Efl_Ui_Calendar
 */
#define EFL_UI_CALENDAR_CLASS efl_ui_calendar_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_calendar_class_get(void) EINA_CONST;

/**
 * @brief The first day of week to use on calendar widgets.
 *
 * This is the day that will appear in the left-most column (e.g. Monday in
 * France or Sunday in the US).
 *
 * @param[in] obj The object.
 * @param[in] day The first day of the week.
 *
 * @ingroup Efl_Ui_Calendar
 */
EAPI EAPI_WEAK void efl_ui_calendar_first_day_of_week_set(Eo *obj, Efl_Ui_Calendar_Weekday day);

/**
 * @brief The first day of week to use on calendar widgets.
 *
 * This is the day that will appear in the left-most column (e.g. Monday in
 * France or Sunday in the US).
 *
 * @param[in] obj The object.
 *
 * @return The first day of the week.
 *
 * @ingroup Efl_Ui_Calendar
 */
EAPI EAPI_WEAK Efl_Ui_Calendar_Weekday efl_ui_calendar_first_day_of_week_get(const Eo *obj);

/**
 * @brief Minimum date on calendar.
 *
 * Setting the minimum date changes the displayed month or year if needed.
 * Displayed days may also be disabled if they are smaller than minimum date.
 * If the minimum date is greater than @ref efl_ui_calendar_date_max_get date,
 * the minimum date will be changed to the maximum date returning @c false.
 *
 * @param[in] obj The object.
 * @param[in] min Time structure containing the minimum date.
 *
 * @return @c true on success.
 *
 * @ingroup Efl_Ui_Calendar
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_calendar_date_min_set(Eo *obj, Efl_Time min);

/**
 * @brief Minimum date on calendar.
 *
 * Default value is 1 JAN,1902.
 *
 * @param[in] obj The object.
 *
 * @return Time structure containing the minimum date.
 *
 * @ingroup Efl_Ui_Calendar
 */
EAPI EAPI_WEAK Efl_Time efl_ui_calendar_date_min_get(const Eo *obj);

/**
 * @brief Maximum date on calendar.
 *
 * Setting the maximum date changes the displayed month or year if needed.
 * Displayed days may also be disabled if they are bigger than maximum date. If
 * the maximum date is less than @ref efl_ui_calendar_date_min_get, the maximum
 * date will be changed to the minimum date returning @c false.
 *
 * @param[in] obj The object.
 * @param[in] max Time structure containing the maximum date.
 *
 * @return @c true on success.
 *
 * @ingroup Efl_Ui_Calendar
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_calendar_date_max_set(Eo *obj, Efl_Time max);

/**
 * @brief Maximum date on calendar.
 *
 * Default maximum year is -1. Default maximum day and month are 31 and DEC.
 *
 * If the maximum year is a negative value, it will be limited depending on the
 * platform architecture (year 2037 for 32 bits);
 *
 * @param[in] obj The object.
 *
 * @return Time structure containing the maximum date.
 *
 * @ingroup Efl_Ui_Calendar
 */
EAPI EAPI_WEAK Efl_Time efl_ui_calendar_date_max_get(const Eo *obj);

/**
 * @brief The selected date on calendar.
 *
 * Dates will be clamped between @ref efl_ui_calendar_date_min_get and
 * @ref efl_ui_calendar_date_max_get, returning @c false when trying to set
 * out-of-bounds values.
 *
 * @param[in] obj The object.
 * @param[in] date Time structure containing the selected date.
 *
 * @return @c true on success.
 *
 * @ingroup Efl_Ui_Calendar
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_calendar_date_set(Eo *obj, Efl_Time date);

/**
 * @brief The selected date on calendar.
 *
 * @param[in] obj The object.
 *
 * @return Time structure containing the selected date.
 *
 * @ingroup Efl_Ui_Calendar
 */
EAPI EAPI_WEAK Efl_Time efl_ui_calendar_date_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_CALENDAR_EVENT_CHANGED;

/** Emitted when the selected date in the calendar is changed
 *
 * @ingroup Efl_Ui_Calendar
 */
#define EFL_UI_CALENDAR_EVENT_CHANGED (&(_EFL_UI_CALENDAR_EVENT_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
