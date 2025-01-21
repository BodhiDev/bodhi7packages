#ifndef _EFL_UI_DATEPICKER_EO_H_
#define _EFL_UI_DATEPICKER_EO_H_

#ifndef _EFL_UI_DATEPICKER_EO_CLASS_TYPE
#define _EFL_UI_DATEPICKER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Datepicker;

#endif

#ifndef _EFL_UI_DATEPICKER_EO_TYPES
#define _EFL_UI_DATEPICKER_EO_TYPES


#endif
/**
 * @brief Datepicker widget
 *
 * This is a widget which allows the user to pick a date using internal
 * spinner. User can use the internal spinner to select year, month, day or
 * user can input value using internal entry.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Datepicker
 */
#define EFL_UI_DATEPICKER_CLASS efl_ui_datepicker_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_datepicker_class_get(void) EINA_CONST;

/**
 * @brief The lower boundary of date.
 *
 * @c year: Year. The year range is from 1900 to 2137.
 *
 * @c month: Month. The month range is from 1 to 12.
 *
 * @c day: Day. The day range is from 1 to 31 according to @c month.
 *
 * @param[in] obj The object.
 * @param[in] year The year value.
 * @param[in] month The month value from 1 to 12.
 * @param[in] day The day value from 1 to 31.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Datepicker
 */
EAPI EAPI_WEAK void efl_ui_datepicker_date_min_set(Eo *obj, int year, int month, int day);

/**
 * @brief The lower boundary of date.
 *
 * @c year: Year. The year range is from 1900 to 2137.
 *
 * @c month: Month. The month range is from 1 to 12.
 *
 * @c day: Day. The day range is from 1 to 31 according to @c month.
 *
 * @param[in] obj The object.
 * @param[out] year The year value.
 * @param[out] month The month value from 1 to 12.
 * @param[out] day The day value from 1 to 31.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Datepicker
 */
EAPI EAPI_WEAK void efl_ui_datepicker_date_min_get(const Eo *obj, int *year, int *month, int *day);

/**
 * @brief The upper boundary of date.
 *
 * @c year: Year. The year range is from 1900 to 2137.
 *
 * @c month: Month. The month range is from 1 to 12.
 *
 * @c day: Day. The day range is from 1 to 31 according to @c month.
 *
 * @param[in] obj The object.
 * @param[in] year The year value.
 * @param[in] month The month value from 1 to 12.
 * @param[in] day The day value from 1 to 31.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Datepicker
 */
EAPI EAPI_WEAK void efl_ui_datepicker_date_max_set(Eo *obj, int year, int month, int day);

/**
 * @brief The upper boundary of date.
 *
 * @c year: Year. The year range is from 1900 to 2137.
 *
 * @c month: Month. The month range is from 1 to 12.
 *
 * @c day: Day. The day range is from 1 to 31 according to @c month.
 *
 * @param[in] obj The object.
 * @param[out] year The year value.
 * @param[out] month The month value from 1 to 12.
 * @param[out] day The day value from 1 to 31.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Datepicker
 */
EAPI EAPI_WEAK void efl_ui_datepicker_date_max_get(const Eo *obj, int *year, int *month, int *day);

/**
 * @brief The current value of date.
 *
 * @c year: Year. The year range is from 1900 to 2137.
 *
 * @c month: Month. The month range is from 0 to 11.
 *
 * @c day: Day. The day range is from 1 to 31 according to @c month.
 *
 * @param[in] obj The object.
 * @param[in] year The year value.
 * @param[in] month The month value from 1 to 12.
 * @param[in] day The day value from 1 to 31.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Datepicker
 */
EAPI EAPI_WEAK void efl_ui_datepicker_date_set(Eo *obj, int year, int month, int day);

/**
 * @brief The current value of date.
 *
 * @c year: Year. The year range is from 1900 to 2137.
 *
 * @c month: Month. The month range is from 0 to 11.
 *
 * @c day: Day. The day range is from 1 to 31 according to @c month.
 *
 * @param[in] obj The object.
 * @param[out] year The year value.
 * @param[out] month The month value from 1 to 12.
 * @param[out] day The day value from 1 to 31.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Datepicker
 */
EAPI EAPI_WEAK void efl_ui_datepicker_date_get(const Eo *obj, int *year, int *month, int *day);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_DATEPICKER_EVENT_DATE_CHANGED;

/** Called when date value is changed
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Datepicker
 */
#define EFL_UI_DATEPICKER_EVENT_DATE_CHANGED (&(_EFL_UI_DATEPICKER_EVENT_DATE_CHANGED))

#endif
