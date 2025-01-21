#ifndef _EFL_INPUT_DEVICE_EO_H_
#define _EFL_INPUT_DEVICE_EO_H_

#ifndef _EFL_INPUT_DEVICE_EO_CLASS_TYPE
#define _EFL_INPUT_DEVICE_EO_CLASS_TYPE

typedef Eo Efl_Input_Device;

#endif

#ifndef _EFL_INPUT_DEVICE_EO_TYPES
#define _EFL_INPUT_DEVICE_EO_TYPES

/**
 * @brief General type of input device.
 *
 * Legacy support since 1.8 as @c Evas_Device_Class.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device_Type
 */
typedef enum
{
  EFL_INPUT_DEVICE_TYPE_NONE = 0, /**< Not a device.
                                   *
                                   * @since 1.23 */
  EFL_INPUT_DEVICE_TYPE_SEAT, /**< The user/seat (the user themselves).
                               *
                               * @since 1.23 */
  EFL_INPUT_DEVICE_TYPE_KEYBOARD, /**< A regular keyboard, numberpad or attached
                                   * buttons.
                                   *
                                   * @since 1.23 */
  EFL_INPUT_DEVICE_TYPE_MOUSE, /**< A mouse, trackball or touchpad relative
                                * motion device.
                                *
                                * @since 1.23 */
  EFL_INPUT_DEVICE_TYPE_TOUCH, /**< A touchscreen with fingers or stylus.
                                *
                                * @since 1.23 */
  EFL_INPUT_DEVICE_TYPE_PEN, /**< A special pen device.
                              *
                              * @since 1.23 */
  EFL_INPUT_DEVICE_TYPE_WAND, /**< A laser pointer, wii-style or "Minority
                               * Report" pointing device.
                               *
                               * @since 1.23 */
  EFL_INPUT_DEVICE_TYPE_GAMEPAD /**< A gamepad controller or joystick.
                                 *
                                 * @since 1.23 */
} Efl_Input_Device_Type;


#endif
/** Represents a pointing device such as a touch finger, pen or mouse.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
#define EFL_INPUT_DEVICE_CLASS efl_input_device_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_input_device_class_get(void) EINA_CONST;

/**
 * @brief Device type property
 *
 * @param[in] obj The object.
 * @param[in] klass Input device class
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
EVAS_API EVAS_API_WEAK void efl_input_device_type_set(Eo *obj, Efl_Input_Device_Type klass);

/**
 * @brief Device type property
 *
 * @param[in] obj The object.
 *
 * @return Input device class
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
EVAS_API EVAS_API_WEAK Efl_Input_Device_Type efl_input_device_type_get(const Eo *obj);

/**
 * @brief Device source property
 *
 * @param[in] obj The object.
 * @param[in] src Input device
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
EVAS_API EVAS_API_WEAK void efl_input_device_source_set(Eo *obj, Efl_Input_Device *src);

/**
 * @brief Device source property
 *
 * @param[in] obj The object.
 *
 * @return Input device
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
EVAS_API EVAS_API_WEAK Efl_Input_Device *efl_input_device_source_get(const Eo *obj);

/**
 * @brief Get the @ref Efl_Input_Device that represents a seat.
 *
 * This method will find the seat the device belongs to.
 *
 * For this, it walk through device's parents looking for a device with
 * @ref EFL_INPUT_DEVICE_TYPE_SEAT. It may be the device itself.
 *
 * In case no seat is found, @c null is returned.
 *
 * @param[in] obj The object.
 *
 * @return The seat this device belongs to.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
EVAS_API EVAS_API_WEAK Efl_Input_Device *efl_input_device_seat_get(const Eo *obj);

/**
 * @brief Seat id number
 *
 * @param[in] obj The object.
 * @param[in] id The id of the seat
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
EVAS_API EVAS_API_WEAK void efl_input_device_seat_id_set(Eo *obj, unsigned int id);

/**
 * @brief Seat id number
 *
 * @param[in] obj The object.
 *
 * @return The id of the seat
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
EVAS_API EVAS_API_WEAK unsigned int efl_input_device_seat_id_get(const Eo *obj);

/**
 * @brief Lists the children attached to this device.
 *
 * This is only meaningful with seat devices, as they are groups of real input
 * devices.
 *
 * @param[in] obj The object.
 *
 * @return List of device children
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
EVAS_API EVAS_API_WEAK Eina_Iterator *efl_input_device_children_iterate(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief The number of pointer devices in this seat.
 *
 * Pointer devices are the ones whose @ref efl_input_device_type_get is
 * @c mouse, @c pen, @c touch or @c wand. In case this device is not of the
 * type @c seat, -1 is returned.
 *
 * @param[in] obj The object.
 *
 * @return The number of pointer devices.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
EVAS_API EVAS_API_WEAK int efl_input_device_pointer_device_count_get(const Eo *obj);

/**
 * @brief @c true if @ref efl_input_device_type_get is @c mouse, @c pen,
 * @c touch or @c wand.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the device has pointing capabilities.
 *
 * @since 1.23
 *
 * @ingroup Efl_Input_Device
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_input_device_is_pointer_type_get(const Eo *obj);

#endif
