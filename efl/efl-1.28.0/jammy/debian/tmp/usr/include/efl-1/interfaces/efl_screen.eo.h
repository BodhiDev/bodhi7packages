#ifndef _EFL_SCREEN_EO_H_
#define _EFL_SCREEN_EO_H_

#ifndef _EFL_SCREEN_EO_CLASS_TYPE
#define _EFL_SCREEN_EO_CLASS_TYPE

typedef Eo Efl_Screen;

#endif

#ifndef _EFL_SCREEN_EO_TYPES
#define _EFL_SCREEN_EO_TYPES


#endif
/** Efl screen interface
 *
 * @since 1.22
 *
 * @ingroup Efl_Screen
 */
#define EFL_SCREEN_INTERFACE efl_screen_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_screen_interface_get(void) EINA_CONST;

/**
 * @brief Screen size (in pixels) for the screen.
 *
 * Note that on some display systems this information is not available and a
 * value of 0x0 will be returned.
 *
 * @param[in] obj The object.
 *
 * @return The screen size in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Screen
 */
EAPI EAPI_WEAK Eina_Size2D efl_screen_size_in_pixels_get(const Eo *obj);

/**
 * @brief Screen scaling factor.
 *
 * This is the factor by which window contents will be scaled on the screen.
 *
 * Note that on some display systems this information is not available and a
 * value of 1.0 will be returned.
 *
 * @param[in] obj The object.
 *
 * @return The screen scaling factor.
 *
 * @since 1.22
 *
 * @ingroup Efl_Screen
 */
EAPI EAPI_WEAK float efl_screen_scale_factor_get(const Eo *obj);

/**
 * @brief The rotation of the screen.
 *
 * Most engines only return multiples of 90.
 *
 * @param[in] obj The object.
 *
 * @return Screen rotation in degrees.
 *
 * @since 1.22
 *
 * @ingroup Efl_Screen
 */
EAPI EAPI_WEAK int efl_screen_rotation_get(const Eo *obj);

/**
 * @brief The pixel density in DPI (Dots Per Inch) for the screen that a window
 * is on.
 *
 * @param[in] obj The object.
 * @param[out] xdpi Horizontal DPI.
 * @param[out] ydpi Vertical DPI.
 *
 * @since 1.22
 *
 * @ingroup Efl_Screen
 */
EAPI EAPI_WEAK void efl_screen_dpi_get(const Eo *obj, int *xdpi, int *ydpi);

#endif
