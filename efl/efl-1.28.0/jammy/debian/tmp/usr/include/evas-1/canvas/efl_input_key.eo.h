#ifndef _EFL_INPUT_KEY_EO_H_
#define _EFL_INPUT_KEY_EO_H_

#ifndef _EFL_INPUT_KEY_EO_CLASS_TYPE
#define _EFL_INPUT_KEY_EO_CLASS_TYPE

typedef Eo Efl_Input_Key;

#endif

#ifndef _EFL_INPUT_KEY_EO_TYPES
#define _EFL_INPUT_KEY_EO_TYPES


#endif
/** Represents a single key event from a keyboard or similar device.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
#define EFL_INPUT_KEY_CLASS efl_input_key_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_input_key_class_get(void) EINA_CONST;

/**
 * @brief @c true if the key is down, @c false if it is released.
 *
 * @param[in] obj The object.
 * @param[in] val @c true if the key is pressed, @c false otherwise.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK void efl_input_key_pressed_set(Eo *obj, Eina_Bool val);

/**
 * @brief @c true if the key is down, @c false if it is released.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the key is pressed, @c false otherwise.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_key_pressed_get(const Eo *obj);

/**
 * @brief Name string of the physical key that produced this event.
 *
 * This typically matches what is printed on the key. For example, "1" or "a".
 * Note that both "a" and "A" are obtained with the same physical key, so both
 * events will have the same @ref efl_input_key_name_get "a" but different
 * @ref efl_input_key_sym_get.
 *
 * Commonly used in keyboard remapping menus to uniquely identify a physical
 * key.
 *
 * @param[in] obj The object.
 * @param[in] val Name of the key that produced this event.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK void efl_input_key_name_set(Eo *obj, const char *val);

/**
 * @brief Name string of the physical key that produced this event.
 *
 * This typically matches what is printed on the key. For example, "1" or "a".
 * Note that both "a" and "A" are obtained with the same physical key, so both
 * events will have the same @ref efl_input_key_name_get "a" but different
 * @ref efl_input_key_sym_get.
 *
 * Commonly used in keyboard remapping menus to uniquely identify a physical
 * key.
 *
 * @param[in] obj The object.
 *
 * @return Name of the key that produced this event.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK const char *efl_input_key_name_get(const Eo *obj);

/**
 * @brief Name of the symbol produced by this key event.
 *
 * For example, "a", "A", "1" or "exclam". The same physical key can produce
 * different symbols when combined with other keys like "shift" or "alt gr".
 * For example, "a" and "A" have different @ref efl_input_key_sym_get but the
 * same @ref efl_input_key_name_get "a".
 *
 * This is the field you typically use to uniquely identify a keyboard symbol,
 * in keyboard shortcuts for example.
 *
 * @param[in] obj The object.
 * @param[in] val Symbol name produced by key event.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK void efl_input_key_sym_set(Eo *obj, const char *val);

/**
 * @brief Name of the symbol produced by this key event.
 *
 * For example, "a", "A", "1" or "exclam". The same physical key can produce
 * different symbols when combined with other keys like "shift" or "alt gr".
 * For example, "a" and "A" have different @ref efl_input_key_sym_get but the
 * same @ref efl_input_key_name_get "a".
 *
 * This is the field you typically use to uniquely identify a keyboard symbol,
 * in keyboard shortcuts for example.
 *
 * @param[in] obj The object.
 *
 * @return Symbol name produced by key event.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK const char *efl_input_key_sym_get(const Eo *obj);

/**
 * @brief A UTF8 string if this keystroke has produced a visible string to be
 * added.
 *
 * @param[in] obj The object.
 * @param[in] val Visible string produced by this key event, in UTF8.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK void efl_input_key_string_set(Eo *obj, const char *val);

/**
 * @brief A UTF8 string if this keystroke has produced a visible string to be
 * added.
 *
 * @param[in] obj The object.
 *
 * @return Visible string produced by this key event, in UTF8.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK const char *efl_input_key_string_get(const Eo *obj);

/**
 * @brief A UTF8 string if this keystroke has modified a string in the middle
 * of being composed.
 *
 * @note This string replaces the previous one.
 *
 * @param[in] obj The object.
 * @param[in] val Composed string in UTF8.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK void efl_input_key_compose_string_set(Eo *obj, const char *val);

/**
 * @brief A UTF8 string if this keystroke has modified a string in the middle
 * of being composed.
 *
 * @note This string replaces the previous one.
 *
 * @param[in] obj The object.
 *
 * @return Composed string in UTF8.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK const char *efl_input_key_compose_string_get(const Eo *obj);

/**
 * @brief Keyboard scan code of the physical key that produced this event.
 *
 * You typically do not need to use this field, because the system maps scan
 * codes to the more convenient @ref efl_input_key_name_get. Us this in
 * keyboard remapping applications or when trying to use a keyboard unknown to
 * your operating system.
 *
 * @param[in] obj The object.
 * @param[in] val Keyboard scan code.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK void efl_input_key_code_set(Eo *obj, int val);

/**
 * @brief Keyboard scan code of the physical key that produced this event.
 *
 * You typically do not need to use this field, because the system maps scan
 * codes to the more convenient @ref efl_input_key_name_get. Us this in
 * keyboard remapping applications or when trying to use a keyboard unknown to
 * your operating system.
 *
 * @param[in] obj The object.
 *
 * @return Keyboard scan code.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Key
 */
EVAS_API EVAS_API_WEAK int efl_input_key_code_get(const Eo *obj);

#endif
