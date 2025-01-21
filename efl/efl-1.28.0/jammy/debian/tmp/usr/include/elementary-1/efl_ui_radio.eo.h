#ifndef _EFL_UI_RADIO_EO_H_
#define _EFL_UI_RADIO_EO_H_

#ifndef _EFL_UI_RADIO_EO_CLASS_TYPE
#define _EFL_UI_RADIO_EO_CLASS_TYPE

typedef Eo Efl_Ui_Radio;

#endif

#ifndef _EFL_UI_RADIO_EO_TYPES
#define _EFL_UI_RADIO_EO_TYPES


#endif
/**
 * @brief Elementary radio button class.
 *
 * Radio buttons are like check boxes in that they can be either checked or
 * unchecked. However, radio buttons are always bunched together in groups, and
 * only one button in each group can be checked at any given time. Pressing a
 * different button in the group will automatically uncheck any previously
 * checked button.
 *
 * They are a common way to allow a user to select one option among a list.
 *
 * To handle button grouping, you can either use an
 * @ref Efl_Ui_Radio_Group_Impl object or use more convenient widgets like
 * @ref Efl_Ui_Radio_Box.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Radio
 */
#define EFL_UI_RADIO_CLASS efl_ui_radio_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_radio_class_get(void) EINA_CONST;

/**
 * @brief Integer value that this radio button represents.
 *
 * Each radio button in a group must have a unique value. The selected button
 * in a group can then be set or retrieved through the
 * @ref efl_ui_radio_group_selected_value_get property. This value is also
 * informed through the @[Efl.Ui.Radio_Group.value,changed] event.
 *
 * All non-negative values are legal but keep in mind that 0 is the starting
 * value for all new groups: If no button in the group has this value, then no
 * button in the group is initially selected. -1 is the value that
 * @ref efl_ui_radio_group_selected_value_get returns when no button is
 * selected and therefore cannot be used.
 *
 * @param[in] obj The object.
 * @param[in] value The value to use when this radio button is selected. Any
 * value can be used but 0 and -1 have special meanings as described above.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Radio
 */
EAPI EAPI_WEAK void efl_ui_radio_state_value_set(Eo *obj, int value);

/**
 * @brief Integer value that this radio button represents.
 *
 * Each radio button in a group must have a unique value. The selected button
 * in a group can then be set or retrieved through the
 * @ref efl_ui_radio_group_selected_value_get property. This value is also
 * informed through the @[Efl.Ui.Radio_Group.value,changed] event.
 *
 * All non-negative values are legal but keep in mind that 0 is the starting
 * value for all new groups: If no button in the group has this value, then no
 * button in the group is initially selected. -1 is the value that
 * @ref efl_ui_radio_group_selected_value_get returns when no button is
 * selected and therefore cannot be used.
 *
 * @param[in] obj The object.
 *
 * @return The value to use when this radio button is selected. Any value can
 * be used but 0 and -1 have special meanings as described above.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Radio
 */
EAPI EAPI_WEAK int efl_ui_radio_state_value_get(const Eo *obj);

#endif
