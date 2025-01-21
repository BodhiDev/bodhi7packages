#ifndef _EFL_UI_SLIDER_EO_H_
#define _EFL_UI_SLIDER_EO_H_

#ifndef _EFL_UI_SLIDER_EO_CLASS_TYPE
#define _EFL_UI_SLIDER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Slider;

#endif

#ifndef _EFL_UI_SLIDER_EO_TYPES
#define _EFL_UI_SLIDER_EO_TYPES


#endif
/**
 * @brief Elementary slider class
 *
 * This lets the UI user select a numerical value inside the
 * @ref efl_ui_range_limits_get limits. The current value can be retrieved
 * using the @ref Efl_Ui_Range_Interactive interface. Events monitoring its
 * changes are also available in that interface. The visual representation of
 * min and max can be swapped using @ref efl_ui_layout_orientation_get.
 * Normally the minimum of @ref efl_ui_range_limits_get is shown on the left
 * side, the max on the right side.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Slider
 */
#define EFL_UI_SLIDER_CLASS efl_ui_slider_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_slider_class_get(void) EINA_CONST;

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SLIDER_EVENT_SLIDER_DRAG_START;

/** Called when a slider drag operation has started. This means a @c press
 * event has been received on the slider thumb but not the @c unpress.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Slider
 */
#define EFL_UI_SLIDER_EVENT_SLIDER_DRAG_START (&(_EFL_UI_SLIDER_EVENT_SLIDER_DRAG_START))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SLIDER_EVENT_SLIDER_DRAG_STOP;

/** Called when a slider drag operation has finished. This means an @c unpress
 * event has been received on the slider thumb.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Slider
 */
#define EFL_UI_SLIDER_EVENT_SLIDER_DRAG_STOP (&(_EFL_UI_SLIDER_EVENT_SLIDER_DRAG_STOP))

#endif
