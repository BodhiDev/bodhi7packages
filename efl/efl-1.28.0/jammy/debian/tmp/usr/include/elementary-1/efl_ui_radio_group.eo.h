#ifndef _EFL_UI_RADIO_GROUP_EO_H_
#define _EFL_UI_RADIO_GROUP_EO_H_

#ifndef _EFL_UI_RADIO_GROUP_EO_CLASS_TYPE
#define _EFL_UI_RADIO_GROUP_EO_CLASS_TYPE

typedef Eo Efl_Ui_Radio_Group;

#endif

#ifndef _EFL_UI_RADIO_GROUP_EO_TYPES
#define _EFL_UI_RADIO_GROUP_EO_TYPES


#endif
/**
 * @brief Interface for manually handling a group of @ref Efl_Ui_Radio buttons.
 *
 * See the documentation of @ref Efl_Ui_Radio for an explanation of radio
 * button grouping.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Radio_Group
 */
#define EFL_UI_RADIO_GROUP_INTERFACE efl_ui_radio_group_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_radio_group_interface_get(void) EINA_CONST;

/**
 * @brief The value associated with the currently selected button in the group.
 * Give each radio button in the group a different value using
 * @ref efl_ui_radio_state_value_get.
 *
 * A value of -1 means that no button is selected. Only values associated with
 * the buttons in the group (and -1) can be used.
 *
 * @param[in] obj The object.
 * @param[in] selected_value The value of the currently selected radio button,
 * or -1.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Radio_Group
 */
EAPI EAPI_WEAK void efl_ui_radio_group_selected_value_set(Eo *obj, int selected_value);

/**
 * @brief The value associated with the currently selected button in the group.
 * Give each radio button in the group a different value using
 * @ref efl_ui_radio_state_value_get.
 *
 * A value of -1 means that no button is selected. Only values associated with
 * the buttons in the group (and -1) can be used.
 *
 * @param[in] obj The object.
 *
 * @return The value of the currently selected radio button, or -1.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Radio_Group
 */
EAPI EAPI_WEAK int efl_ui_radio_group_selected_value_get(const Eo *obj);

/**
 * @brief Register a new @ref Efl_Ui_Radio button to this group. Keep in mind
 * that registering to a group will only handle button grouping, you still need
 * to add the button to a layout for it to be rendered.
 *
 * If the @ref efl_ui_radio_state_value_get of the new button is already used
 * by a previous button in the group, the button will not be added.
 *
 * See also @ref efl_ui_radio_group_unregister.
 *
 * @param[in] obj The object.
 * @param[in] radio The radio button to add to the group.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Radio_Group
 */
EAPI EAPI_WEAK void efl_ui_radio_group_register(Eo *obj, Efl_Ui_Radio *radio);

/**
 * @brief Unregister an @ref Efl_Ui_Radio button from this group. This will
 * unlink the behavior of this button from the other buttons in the group, but
 * if it still belongs to a layout, it will still be rendered.
 *
 * If the button was not registered in the group the call is ignored. If the
 * button was selected, no button will be selected in the group after this
 * call.
 *
 * See also @ref efl_ui_radio_group_register.
 *
 * @param[in] obj The object.
 * @param[in] radio The radio button to remove from the group.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Radio_Group
 */
EAPI EAPI_WEAK void efl_ui_radio_group_unregister(Eo *obj, Efl_Ui_Radio *radio);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_RADIO_GROUP_EVENT_VALUE_CHANGED;

/** Emitted each time the @c selected_value changes. The event information
 * contains the @ref efl_ui_radio_state_value_get of the newly selected button
 * or -1 if no button is now selected.
 * @return int
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Radio_Group
 */
#define EFL_UI_RADIO_GROUP_EVENT_VALUE_CHANGED (&(_EFL_UI_RADIO_GROUP_EVENT_VALUE_CHANGED))

#endif
