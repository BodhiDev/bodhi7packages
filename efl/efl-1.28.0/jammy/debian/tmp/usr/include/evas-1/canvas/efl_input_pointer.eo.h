#ifndef _EFL_INPUT_POINTER_EO_H_
#define _EFL_INPUT_POINTER_EO_H_

#ifndef _EFL_INPUT_POINTER_EO_CLASS_TYPE
#define _EFL_INPUT_POINTER_EO_CLASS_TYPE

typedef Eo Efl_Input_Pointer;

#endif

#ifndef _EFL_INPUT_POINTER_EO_TYPES
#define _EFL_INPUT_POINTER_EO_TYPES


#endif
/** Event data carried over with any pointer event (mouse, touch, pen, ...)
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
#define EFL_INPUT_POINTER_CLASS efl_input_pointer_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_input_pointer_class_get(void) EINA_CONST;

/**
 * @brief The action represented by this event.
 *
 * @param[in] obj The object.
 * @param[in] act Event action
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_action_set(Eo *obj, Efl_Pointer_Action act);

/**
 * @brief The action represented by this event.
 *
 * @param[in] obj The object.
 *
 * @return Event action
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Efl_Pointer_Action efl_input_pointer_action_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief @c true if this event carries a valid value for the specified @c key.
 *
 * @param[in] obj The object.
 * @param[in] key Pressed @c key
 *
 * @return @c true if input value is valid, @c false otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_pointer_value_has_get(const Eo *obj, Efl_Input_Value key);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Represents a generic value for this event.
 *
 * Refer to the documentation of @ref Efl_Input_Value for each value's meaning,
 * type and range. Call @ref efl_input_pointer_value_has_get to determine
 * whether the returned value is valid or not for this event.
 *
 * Most values are precise floating point values, usually in pixels, radians,
 * or in a range of [-1, 1] or [0, 1]. Some values are discrete values
 * (integers) and thus should preferably be queried with the other methods of
 * this class.
 *
 * @param[in] obj The object.
 * @param[in] key @c key
 * @param[in] val @c key value
 *
 * @return @c false if the value could not be set.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_pointer_value_set(Eo *obj, Efl_Input_Value key, double val);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Represents a generic value for this event.
 *
 * Refer to the documentation of @ref Efl_Input_Value for each value's meaning,
 * type and range. Call @ref efl_input_pointer_value_has_get to determine
 * whether the returned value is valid or not for this event.
 *
 * Most values are precise floating point values, usually in pixels, radians,
 * or in a range of [-1, 1] or [0, 1]. Some values are discrete values
 * (integers) and thus should preferably be queried with the other methods of
 * this class.
 *
 * @param[in] obj The object.
 * @param[in] key @c key
 *
 * @return @c key value
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK double efl_input_pointer_value_get(const Eo *obj, Efl_Input_Value key);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief The mouse button that triggered the event.
 *
 * Valid if and only if @ref efl_input_pointer_value_has_get($button) is
 * @c true.
 *
 * @param[in] obj The object.
 * @param[in] but 1 to 32, 0 if not a button event.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_button_set(Eo *obj, int but);

/**
 * @brief The mouse button that triggered the event.
 *
 * Valid if and only if @ref efl_input_pointer_value_has_get($button) is
 * @c true.
 *
 * @param[in] obj The object.
 *
 * @return 1 to 32, 0 if not a button event.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK int efl_input_pointer_button_get(const Eo *obj);

/**
 * @brief Whether a mouse button is pressed at the moment of the event.
 *
 * Valid if and only if @ref efl_input_pointer_value_has_get($button_pressed)
 * is @c true.
 *
 * @param[in] obj The object.
 * @param[in] button 1 to 32, 0 if not a button event.
 * @param[in] pressed @c true when the button was pressed, @c false otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_button_pressed_set(Eo *obj, int button, Eina_Bool pressed);

/**
 * @brief Whether a mouse button is pressed at the moment of the event.
 *
 * Valid if and only if @ref efl_input_pointer_value_has_get($button_pressed)
 * is @c true.
 *
 * @param[in] obj The object.
 * @param[in] button 1 to 32, 0 if not a button event.
 *
 * @return @c true when the button was pressed, @c false otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_pointer_button_pressed_get(const Eo *obj, int button);

/**
 * @brief Position where the event happened, relative to the window.
 *
 * See @ref efl_input_pointer_precise_position_get for floating point precision
 * (subpixel location).
 *
 * @param[in] obj The object.
 * @param[in] pos The position of the event, in pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_position_set(Eo *obj, Eina_Position2D pos);

/**
 * @brief Position where the event happened, relative to the window.
 *
 * See @ref efl_input_pointer_precise_position_get for floating point precision
 * (subpixel location).
 *
 * @param[in] obj The object.
 *
 * @return The position of the event, in pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Eina_Position2D efl_input_pointer_position_get(const Eo *obj);

/**
 * @brief Position where the event happened, relative to the window.
 *
 * This position is in floating point values, for more precise coordinates, in
 * subpixels. Note that many input devices are unable to give better precision
 * than a single pixel, so this may be equal to
 * @ref efl_input_pointer_position_get.
 *
 * See also @ref efl_input_pointer_position_get.
 *
 * @param[in] obj The object.
 * @param[in] pos The position of the event, in pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_precise_position_set(Eo *obj, Eina_Vector2 pos);

/**
 * @brief Position where the event happened, relative to the window.
 *
 * This position is in floating point values, for more precise coordinates, in
 * subpixels. Note that many input devices are unable to give better precision
 * than a single pixel, so this may be equal to
 * @ref efl_input_pointer_position_get.
 *
 * See also @ref efl_input_pointer_position_get.
 *
 * @param[in] obj The object.
 *
 * @return The position of the event, in pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Eina_Vector2 efl_input_pointer_precise_position_get(const Eo *obj);

/**
 * @brief Position of the previous event, valid for move events.
 *
 * Relative to the window. May be equal to @ref efl_input_pointer_position_get
 * (by default).
 *
 * This position, in integers, is an approximation of
 * @ref efl_input_pointer_value_get($previous_x),
 * @ref efl_input_pointer_value_get($previous_y). Use
 * @ref efl_input_pointer_previous_position_get if you need simple pixel
 * positions, but prefer the generic interface if you need precise coordinates.
 *
 * @param[in] obj The object.
 * @param[in] pos The position of the event, in pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_previous_position_set(Eo *obj, Eina_Position2D pos);

/**
 * @brief Position of the previous event, valid for move events.
 *
 * Relative to the window. May be equal to @ref efl_input_pointer_position_get
 * (by default).
 *
 * This position, in integers, is an approximation of
 * @ref efl_input_pointer_value_get($previous_x),
 * @ref efl_input_pointer_value_get($previous_y). Use
 * @ref efl_input_pointer_previous_position_get if you need simple pixel
 * positions, but prefer the generic interface if you need precise coordinates.
 *
 * @param[in] obj The object.
 *
 * @return The position of the event, in pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Eina_Position2D efl_input_pointer_previous_position_get(const Eo *obj);

/**
 * @brief The ID associated with this pointer.
 *
 * In case there are multiple pointers (for example when multiple fingers are
 * touching the screen) this number uniquely identifies each pointer, for as
 * long as it is present. This is, when a finger is lifted its ID can be later
 * reused by another finger touching the screen.
 *
 * @param[in] obj The object.
 * @param[in] id An ID uniquely identifying this pointer among the currently
 * present pointers.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_touch_id_set(Eo *obj, int id);

/**
 * @brief The ID associated with this pointer.
 *
 * In case there are multiple pointers (for example when multiple fingers are
 * touching the screen) this number uniquely identifies each pointer, for as
 * long as it is present. This is, when a finger is lifted its ID can be later
 * reused by another finger touching the screen.
 *
 * @param[in] obj The object.
 *
 * @return An ID uniquely identifying this pointer among the currently present
 * pointers.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK int efl_input_pointer_touch_id_get(const Eo *obj);

/**
 * @brief The object where this event first originated, in case of propagation
 * or repetition of the event.
 *
 * @param[in] obj The object.
 * @param[in] src Source object: @ref Efl_Gfx_Entity
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_source_set(Eo *obj, Efl_Object *src);

/**
 * @brief The object where this event first originated, in case of propagation
 * or repetition of the event.
 *
 * @param[in] obj The object.
 *
 * @return Source object: @ref Efl_Gfx_Entity
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Efl_Object *efl_input_pointer_source_get(const Eo *obj);

/**
 * @brief Double or triple click information.
 *
 * @param[in] obj The object.
 * @param[in] flags Button information flags
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_button_flags_set(Eo *obj, Efl_Pointer_Flags flags);

/**
 * @brief Double or triple click information.
 *
 * @param[in] obj The object.
 *
 * @return Button information flags
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Efl_Pointer_Flags efl_input_pointer_button_flags_get(const Eo *obj);

/**
 * @brief @c true if @ref efl_input_pointer_button_flags_get indicates a double
 * click (2nd press).
 *
 * This is just a helper function around
 * @ref efl_input_pointer_button_flags_get.
 *
 * @param[in] obj The object.
 * @param[in] val @c true if the button press was a double click, @c false
 * otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_double_click_set(Eo *obj, Eina_Bool val);

/**
 * @brief @c true if @ref efl_input_pointer_button_flags_get indicates a double
 * click (2nd press).
 *
 * This is just a helper function around
 * @ref efl_input_pointer_button_flags_get.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the button press was a double click, @c false otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_pointer_double_click_get(const Eo *obj);

/**
 * @brief @c true if @ref efl_input_pointer_button_flags_get indicates a triple
 * click (3rd press).
 *
 * This is just a helper function around
 * @ref efl_input_pointer_button_flags_get.
 *
 * @param[in] obj The object.
 * @param[in] val @c true if the button press was a triple click, @c false
 * otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_triple_click_set(Eo *obj, Eina_Bool val);

/**
 * @brief @c true if @ref efl_input_pointer_button_flags_get indicates a triple
 * click (3rd press).
 *
 * This is just a helper function around
 * @ref efl_input_pointer_button_flags_get.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the button press was a triple click, @c false otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_pointer_triple_click_get(const Eo *obj);

/**
 * @brief Direction of the wheel, usually vertical.
 *
 * @param[in] obj The object.
 * @param[in] horizontal If @c true this was a horizontal wheel.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_wheel_horizontal_set(Eo *obj, Eina_Bool horizontal);

/**
 * @brief Direction of the wheel, usually vertical.
 *
 * @param[in] obj The object.
 *
 * @return If @c true this was a horizontal wheel.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_pointer_wheel_horizontal_get(const Eo *obj);

/**
 * @brief Delta movement of the wheel in discrete steps.
 *
 * @param[in] obj The object.
 * @param[in] dist Wheel movement delta
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK void efl_input_pointer_wheel_delta_set(Eo *obj, int dist);

/**
 * @brief Delta movement of the wheel in discrete steps.
 *
 * @param[in] obj The object.
 *
 * @return Wheel movement delta
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Pointer
 */
EVAS_API EVAS_API_WEAK int efl_input_pointer_wheel_delta_get(const Eo *obj);

#endif
