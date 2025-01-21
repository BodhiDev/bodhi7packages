#ifndef _EFL_UI_POPUP_PART_BACKWALL_EO_H_
#define _EFL_UI_POPUP_PART_BACKWALL_EO_H_

#ifndef _EFL_UI_POPUP_PART_BACKWALL_EO_CLASS_TYPE
#define _EFL_UI_POPUP_PART_BACKWALL_EO_CLASS_TYPE

typedef Eo Efl_Ui_Popup_Part_Backwall;

#endif

#ifndef _EFL_UI_POPUP_PART_BACKWALL_EO_TYPES
#define _EFL_UI_POPUP_PART_BACKWALL_EO_TYPES


#endif
/**
 * @brief A Popup backwall is the background object for an @ref Efl_Ui_Popup
 * widget. It can be returned from a given Popup widget by using the
 * @ref Efl_Part API to fetch the "backwall" part.
 *
 * This object provides functionality for determining the look and interaction
 * methods of a Popup's background.
 *
 * If a Popup should allow input events to reach the objects behind the Popup,
 * @ref efl_ui_popup_part_backwall_repeat_events_get can be enabled.
 *
 * To set an image to be used as a background for the Popup, the @ref Efl_File
 * API can be used directly on the backwall object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup_Part_Backwall
 */
#define EFL_UI_POPUP_PART_BACKWALL_CLASS efl_ui_popup_part_backwall_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_popup_part_backwall_class_get(void) EINA_CONST;

/**
 * @brief If this property is set to @c true, input events will be able to
 * reach objects below the Popup. This allows for e.g., a click to activate a
 * widget below the Popup while the Popup is active.
 *
 * @param[in] obj The object.
 * @param[in] repeat Whether to repeat events to objects below the Popup. The
 * default is @c false.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup_Part_Backwall
 */
EAPI EAPI_WEAK void efl_ui_popup_part_backwall_repeat_events_set(Eo *obj, Eina_Bool repeat);

/**
 * @brief If this property is set to @c true, input events will be able to
 * reach objects below the Popup. This allows for e.g., a click to activate a
 * widget below the Popup while the Popup is active.
 *
 * @param[in] obj The object.
 *
 * @return Whether to repeat events to objects below the Popup. The default is
 * @c false.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Popup_Part_Backwall
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_popup_part_backwall_repeat_events_get(const Eo *obj);

#endif
