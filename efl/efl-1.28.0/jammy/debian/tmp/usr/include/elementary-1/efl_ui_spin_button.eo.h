#ifndef _EFL_UI_SPIN_BUTTON_EO_H_
#define _EFL_UI_SPIN_BUTTON_EO_H_

#ifndef _EFL_UI_SPIN_BUTTON_EO_CLASS_TYPE
#define _EFL_UI_SPIN_BUTTON_EO_CLASS_TYPE

typedef Eo Efl_Ui_Spin_Button;

#endif

#ifndef _EFL_UI_SPIN_BUTTON_EO_TYPES
#define _EFL_UI_SPIN_BUTTON_EO_TYPES


#endif
/**
 * @brief A Button Spin.
 *
 * This is a widget which allows the user to increase or decrease numeric
 * values using the arrow buttons or to edit values directly by clicking over
 * them and inputting new ones.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Spin_Button
 */
#define EFL_UI_SPIN_BUTTON_CLASS efl_ui_spin_button_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_spin_button_class_get(void) EINA_CONST;

/**
 * @brief Control whether the spin should circulate value when it reaches its
 * minimum or maximum value.
 *
 * Disabled by default. If disabled, when the user tries to increment the value
 * but displayed value plus step value is bigger than maximum value, the new
 * value will be the maximum value. The same happens when the user tries to
 * decrement it but the value less step is less than minimum value. In this
 * case, the new displayed value will be the minimum value.
 *
 * If enabled, when the user tries to increment the value but displayed value
 * plus step value is bigger than maximum value, the new value will become the
 * minimum value. When the user tries to decrement it, if the value minus step
 * is less than minimum value, the new displayed value will be the maximum
 * value.
 *
 * E.g.: @c min = 10 @c max = 50 @c step = 20 @c displayed = 20
 *
 * When the user decrements the value (using left or bottom arrow), it will
 * display $50.
 *
 * @param[in] obj The object.
 * @param[in] circulate @c true to enable circulate or @c false to disable it.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Spin_Button
 */
EAPI EAPI_WEAK void efl_ui_spin_button_wraparound_set(Eo *obj, Eina_Bool circulate);

/**
 * @brief Control whether the spin should circulate value when it reaches its
 * minimum or maximum value.
 *
 * Disabled by default. If disabled, when the user tries to increment the value
 * but displayed value plus step value is bigger than maximum value, the new
 * value will be the maximum value. The same happens when the user tries to
 * decrement it but the value less step is less than minimum value. In this
 * case, the new displayed value will be the minimum value.
 *
 * If enabled, when the user tries to increment the value but displayed value
 * plus step value is bigger than maximum value, the new value will become the
 * minimum value. When the user tries to decrement it, if the value minus step
 * is less than minimum value, the new displayed value will be the maximum
 * value.
 *
 * E.g.: @c min = 10 @c max = 50 @c step = 20 @c displayed = 20
 *
 * When the user decrements the value (using left or bottom arrow), it will
 * display $50.
 *
 * @param[in] obj The object.
 *
 * @return @c true to enable circulate or @c false to disable it.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Spin_Button
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_spin_button_wraparound_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Control whether the spin can be directly edited by the user.
 *
 * Spin objects can have editing disabled, in which case they can only be
 * changed by using arrows. This is useful for situations where you don't want
 * your users to write their own value. It's especially useful when using
 * special values. The user can see the real values instead of special label
 * when editing.
 *
 * @param[in] obj The object.
 * @param[in] direct_text_input @c true to allow users to directly edit the
 * value.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Spin_Button
 */
EAPI EAPI_WEAK void efl_ui_spin_button_direct_text_input_set(Eo *obj, Eina_Bool direct_text_input);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Control whether the spin can be directly edited by the user.
 *
 * Spin objects can have editing disabled, in which case they can only be
 * changed by using arrows. This is useful for situations where you don't want
 * your users to write their own value. It's especially useful when using
 * special values. The user can see the real values instead of special label
 * when editing.
 *
 * @param[in] obj The object.
 *
 * @return @c true to allow users to directly edit the value.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Spin_Button
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_spin_button_direct_text_input_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
