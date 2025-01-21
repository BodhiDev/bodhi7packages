#ifndef _EFL_UI_SLIDER_INTERVAL_EO_H_
#define _EFL_UI_SLIDER_INTERVAL_EO_H_

#ifndef _EFL_UI_SLIDER_INTERVAL_EO_CLASS_TYPE
#define _EFL_UI_SLIDER_INTERVAL_EO_CLASS_TYPE

typedef Eo Efl_Ui_Slider_Interval;

#endif

#ifndef _EFL_UI_SLIDER_INTERVAL_EO_TYPES
#define _EFL_UI_SLIDER_INTERVAL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief An interval slider.
 *
 * This is a slider with two indicators.
 *
 * @ingroup Efl_Ui_Slider_Interval
 */
#define EFL_UI_SLIDER_INTERVAL_CLASS efl_ui_slider_interval_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_slider_interval_class_get(void) EINA_CONST;

/**
 * @brief Sets up position of two indicators at start and end position.
 *
 * @param[in] obj The object.
 * @param[in] from interval minimum value
 * @param[in] to interval maximum value
 *
 * @ingroup Efl_Ui_Slider_Interval
 */
EAPI EAPI_WEAK void efl_ui_slider_interval_value_set(Eo *obj, double from, double to);

/**
 * @brief Sets up position of two indicators at start and end position.
 *
 * @param[in] obj The object.
 * @param[out] from interval minimum value
 * @param[out] to interval maximum value
 *
 * @ingroup Efl_Ui_Slider_Interval
 */
EAPI EAPI_WEAK void efl_ui_slider_interval_value_get(const Eo *obj, double *from, double *to);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SLIDER_INTERVAL_EVENT_SLIDER_DRAG_START;

/** Called when a slider drag operation has started. This means a @c press
 * event has been received on the slider thumb but not the @c unpress.
 *
 * @ingroup Efl_Ui_Slider_Interval
 */
#define EFL_UI_SLIDER_INTERVAL_EVENT_SLIDER_DRAG_START (&(_EFL_UI_SLIDER_INTERVAL_EVENT_SLIDER_DRAG_START))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SLIDER_INTERVAL_EVENT_SLIDER_DRAG_STOP;

/** Called when a slider drag operation has finished. This means an @c unpress
 * event has been received on the slider thumb.
 *
 * @ingroup Efl_Ui_Slider_Interval
 */
#define EFL_UI_SLIDER_INTERVAL_EVENT_SLIDER_DRAG_STOP (&(_EFL_UI_SLIDER_INTERVAL_EVENT_SLIDER_DRAG_STOP))
#endif /* EFL_BETA_API_SUPPORT */

#endif
