#ifndef _EFL_UI_RANGE_DISPLAY_EO_H_
#define _EFL_UI_RANGE_DISPLAY_EO_H_

#ifndef _EFL_UI_RANGE_DISPLAY_EO_CLASS_TYPE
#define _EFL_UI_RANGE_DISPLAY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Range_Display;

#endif

#ifndef _EFL_UI_RANGE_DISPLAY_EO_TYPES
#define _EFL_UI_RANGE_DISPLAY_EO_TYPES


#endif
/**
 * @brief Interface that contains properties regarding the displaying of a
 * value within a range.
 *
 * A value range contains a value restricted between specified minimum and
 * maximum limits at all times. This can be used for progress bars, sliders or
 * spinners, for example.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Display
 */
#define EFL_UI_RANGE_DISPLAY_INTERFACE efl_ui_range_display_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_range_display_interface_get(void) EINA_CONST;

/**
 * @brief Control the value (position) of the widget within its valid range.
 *
 * Values outside the limits defined in @ref efl_ui_range_limits_get are
 * ignored and an error is printed.
 *
 * @param[in] obj The object.
 * @param[in] val The range value (must be within the bounds of
 * @ref efl_ui_range_limits_get).
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Display
 */
EAPI EAPI_WEAK void efl_ui_range_value_set(Eo *obj, double val);

/**
 * @brief Control the value (position) of the widget within its valid range.
 *
 * Values outside the limits defined in @ref efl_ui_range_limits_get are
 * ignored and an error is printed.
 *
 * @param[in] obj The object.
 *
 * @return The range value (must be within the bounds of
 * @ref efl_ui_range_limits_get).
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Display
 */
EAPI EAPI_WEAK double efl_ui_range_value_get(const Eo *obj);

/**
 * @brief Set the minimum and maximum values for given range widget.
 *
 * If the current value is less than @c min, it will be updated to @c min. If
 * it is bigger then @c max, will be updated to @c max. The resulting value can
 * be obtained with @ref efl_ui_range_value_get.
 *
 * The default minimum and maximum values may be different for each class.
 *
 * @note maximum must be greater than minimum, otherwise behavior is undefined.
 *
 * @param[in] obj The object.
 * @param[in] min The minimum value.
 * @param[in] max The maximum value.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Display
 */
EAPI EAPI_WEAK void efl_ui_range_limits_set(Eo *obj, double min, double max);

/**
 * @brief Set the minimum and maximum values for given range widget.
 *
 * If the current value is less than @c min, it will be updated to @c min. If
 * it is bigger then @c max, will be updated to @c max. The resulting value can
 * be obtained with @ref efl_ui_range_value_get.
 *
 * The default minimum and maximum values may be different for each class.
 *
 * @note maximum must be greater than minimum, otherwise behavior is undefined.
 *
 * @param[in] obj The object.
 * @param[out] min The minimum value.
 * @param[out] max The maximum value.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Display
 */
EAPI EAPI_WEAK void efl_ui_range_limits_get(const Eo *obj, double *min, double *max);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_RANGE_EVENT_CHANGED;

/** Emitted when the @ref efl_ui_range_value_get is getting changed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Display
 */
#define EFL_UI_RANGE_EVENT_CHANGED (&(_EFL_UI_RANGE_EVENT_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_RANGE_EVENT_MIN_REACHED;

/** Emitted when the @ref efl_ui_range_value_get has reached the minimum of
 * @ref efl_ui_range_limits_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Display
 */
#define EFL_UI_RANGE_EVENT_MIN_REACHED (&(_EFL_UI_RANGE_EVENT_MIN_REACHED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_RANGE_EVENT_MAX_REACHED;

/** Emitted when the @c range_value has reached the maximum of
 * @ref efl_ui_range_limits_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Range_Display
 */
#define EFL_UI_RANGE_EVENT_MAX_REACHED (&(_EFL_UI_RANGE_EVENT_MAX_REACHED))

#endif
