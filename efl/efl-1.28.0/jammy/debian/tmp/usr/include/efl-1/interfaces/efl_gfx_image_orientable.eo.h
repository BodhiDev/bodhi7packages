#ifndef _EFL_GFX_IMAGE_ORIENTABLE_EO_H_
#define _EFL_GFX_IMAGE_ORIENTABLE_EO_H_

#ifndef _EFL_GFX_IMAGE_ORIENTABLE_EO_CLASS_TYPE
#define _EFL_GFX_IMAGE_ORIENTABLE_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Image_Orientable;

#endif

#ifndef _EFL_GFX_IMAGE_ORIENTABLE_EO_TYPES
#define _EFL_GFX_IMAGE_ORIENTABLE_EO_TYPES

/**
 * @brief An orientation type, to rotate and flip images.
 *
 * This is similar to EXIF's orientation. Directional values ($up, @c down,
 * @c left, @c right) indicate the final direction in which the top of the
 * image will be facing (e.g. a picture of a house will have its roof pointing
 * to the right if the @c right orientation is used). Flipping values
 * ($flip_horizontal and @c flip_vertical) can be additionally added to produce
 * a mirroring in each axis. Not to be confused with
 * @ref Efl_Ui_Layout_Orientation which is meant for widgets, rather than
 * images and canvases. This enum is used to rotate images, videos and the
 * like.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Orientation
 */
typedef enum
{
  EFL_GFX_IMAGE_ORIENTATION_NONE = 0, /**< Default, same as up, do not rotate.
                                       *
                                       * @since 1.23 */
  EFL_GFX_IMAGE_ORIENTATION_UP = 0, /**< Orient up, do not rotate.
                                     *
                                     * @since 1.23 */
  EFL_GFX_IMAGE_ORIENTATION_RIGHT = 1, /**< Orient right, rotate 90 degrees
                                        * clock-wise.
                                        *
                                        * @since 1.23 */
  EFL_GFX_IMAGE_ORIENTATION_DOWN = 2, /**< Orient down, rotate 180 degrees.
                                       *
                                       * @since 1.23 */
  EFL_GFX_IMAGE_ORIENTATION_LEFT = 3, /**< Orient left, rotate 270 degrees
                                       * clock-wise.
                                       *
                                       * @since 1.23 */
  EFL_GFX_IMAGE_ORIENTATION_ROTATION_BITMASK = 3, /**< Bitmask that can be used
                                                   * to isolate rotation
                                                   * values, that is, @c none,
                                                   * @c up, @c down, @c left
                                                   * and @c right.
                                                   *
                                                   * @since 1.23 */
  EFL_GFX_IMAGE_ORIENTATION_FLIP_HORIZONTAL = 4, /**< Mirror horizontally. Can
                                                  * be added to the other
                                                  * values.
                                                  *
                                                  * @since 1.23 */
  EFL_GFX_IMAGE_ORIENTATION_FLIP_VERTICAL = 8, /**< Mirror vertically. Can be
                                                * added to the other values.
                                                *
                                                * @since 1.23 */
  EFL_GFX_IMAGE_ORIENTATION_FLIP_BITMASK = 12 /**< Bitmask that can be used to
                                               * isolate flipping values, that
                                               * is, @c flip_vertical and
                                               * @c flip_horizontal.
                                               *
                                               * @since 1.23 */
} Efl_Gfx_Image_Orientation;


#endif
/**
 * @brief Interface for images which can be rotated or flipped (mirrored).
 *
 * Compare with @ref Efl_Ui_Layout_Orientable which works for layout objects
 * and does not include rotation.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Orientable
 */
#define EFL_GFX_IMAGE_ORIENTABLE_INTERFACE efl_gfx_image_orientable_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_image_orientable_interface_get(void) EINA_CONST;

/**
 * @brief Control the orientation (rotation and flipping) of a visual object.
 *
 * This can be used to set the rotation on an image or a window, for instance.
 *
 * @param[in] obj The object.
 * @param[in] dir The final orientation of the object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Orientable
 */
EAPI EAPI_WEAK void efl_gfx_image_orientation_set(Eo *obj, Efl_Gfx_Image_Orientation dir);

/**
 * @brief Control the orientation (rotation and flipping) of a visual object.
 *
 * This can be used to set the rotation on an image or a window, for instance.
 *
 * @param[in] obj The object.
 *
 * @return The final orientation of the object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Orientable
 */
EAPI EAPI_WEAK Efl_Gfx_Image_Orientation efl_gfx_image_orientation_get(const Eo *obj);

#endif
