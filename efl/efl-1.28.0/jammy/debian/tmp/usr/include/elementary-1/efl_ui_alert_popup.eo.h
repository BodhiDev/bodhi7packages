#ifndef _EFL_UI_ALERT_POPUP_EO_H_
#define _EFL_UI_ALERT_POPUP_EO_H_

#ifndef _EFL_UI_ALERT_POPUP_EO_CLASS_TYPE
#define _EFL_UI_ALERT_POPUP_EO_CLASS_TYPE

typedef Eo Efl_Ui_Alert_Popup;

#endif

#ifndef _EFL_UI_ALERT_POPUP_EO_TYPES
#define _EFL_UI_ALERT_POPUP_EO_TYPES

/** Defines the type of the alert button.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Alert_Popup_Button
 */
typedef enum
{
  EFL_UI_ALERT_POPUP_BUTTON_POSITIVE = 0, /**< Button having positive meaning.
                                           * E.g. "Yes".
                                           *
                                           * @since 1.23 */
  EFL_UI_ALERT_POPUP_BUTTON_NEGATIVE, /**< Button having negative meaning. E.g.
                                       * "No".
                                       *
                                       * @since 1.23 */
  EFL_UI_ALERT_POPUP_BUTTON_USER /**< Button having user-defined meaning. E.g.
                                  * "More information".
                                  *
                                  * @since 1.23 */
} Efl_Ui_Alert_Popup_Button;

/** Information for @[Efl.Ui.Alert_Popup.button,clicked] event.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Alert_Popup_Button_Clicked_Event
 */
typedef struct _Efl_Ui_Alert_Popup_Button_Clicked_Event
{
  Efl_Ui_Alert_Popup_Button button_type; /**< Clicked button type.
                                          *
                                          * @since 1.23 */
} Efl_Ui_Alert_Popup_Button_Clicked_Event;


#endif
/**
 * @brief A variant of @ref Efl_Ui_Popup which uses a layout containing a
 * content object and a variable number of buttons (up to 3 total).
 *
 * An Alert_Popup is a popup which can be used when an application requires
 * user interaction. It provides functionality for easily creating button
 * objects on the popup and passing information about which button has been
 * pressed to the button event callback.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Alert_Popup
 */
#define EFL_UI_ALERT_POPUP_CLASS efl_ui_alert_popup_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_alert_popup_class_get(void) EINA_CONST;

/**
 * @brief This property changes the text and icon for the specified button
 * object.
 *
 * When set, the Alert_Popup will create a button for the specified type if it
 * does not yet exist. The button's content and text will be set using the
 * passed values.
 *
 * Exactly one button may exist for each @ref Efl_Ui_Alert_Popup_Button type.
 * Repeated calls to set values for the same button type will overwrite
 * previous values.
 *
 * By default, no buttons are created. Once a button is added to the Popup
 * using this property it cannot be removed.
 *
 * @param[in] obj The object.
 * @param[in] type Alert_Popup button type.
 * @param[in] text Text of the specified button type.
 * @param[in] icon Visual to use as an icon for the specified button type.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Alert_Popup
 */
EAPI EAPI_WEAK void efl_ui_alert_popup_button_set(Eo *obj, Efl_Ui_Alert_Popup_Button type, const char *text, Efl_Canvas_Object *icon);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_ALERT_POPUP_EVENT_BUTTON_CLICKED;

/** Called when an Alert_Popup button was clicked.
 * @return Efl_Ui_Alert_Popup_Button_Clicked_Event
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Alert_Popup
 */
#define EFL_UI_ALERT_POPUP_EVENT_BUTTON_CLICKED (&(_EFL_UI_ALERT_POPUP_EVENT_BUTTON_CLICKED))

#endif
