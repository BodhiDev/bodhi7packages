#ifndef _EFL_GFX_IMAGE_LOAD_CONTROLLER_EO_H_
#define _EFL_GFX_IMAGE_LOAD_CONTROLLER_EO_H_

#ifndef _EFL_GFX_IMAGE_LOAD_CONTROLLER_EO_CLASS_TYPE
#define _EFL_GFX_IMAGE_LOAD_CONTROLLER_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Image_Load_Controller;

#endif

#ifndef _EFL_GFX_IMAGE_LOAD_CONTROLLER_EO_TYPES
#define _EFL_GFX_IMAGE_LOAD_CONTROLLER_EO_TYPES


#endif
/** Common APIs for all loadable 2D images.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
#define EFL_GFX_IMAGE_LOAD_CONTROLLER_INTERFACE efl_gfx_image_load_controller_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_image_load_controller_interface_get(void) EINA_CONST;

/**
 * @brief Begin preloading an image object's image data in the background.
 *
 * Once the background task is complete the event @[.load,done] will be emitted
 * if loading succeeded, @[.load,error] otherwise.
 *
 * @param[in] obj The object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK void efl_gfx_image_load_controller_load_async_start(Eo *obj);

/**
 * @brief Cancel preloading an image object's image data in the background.
 *
 * The object should be left in a state where it has no image data. If cancel
 * is called too late, the image will be kept in memory.
 *
 * @param[in] obj The object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK void efl_gfx_image_load_controller_load_async_cancel(Eo *obj);

/**
 * @brief The load size of an image.
 *
 * The image will be loaded into memory as if it was the specified size instead
 * of its original size. This can save a lot of memory and is important for
 * scalable types like SVG.
 *
 * EFL will try to load an image of the requested size but does not guarantee
 * an exact match between the request and the loaded image dimensions.
 *
 * By default, the load size is not specified, so it is <tt>0x0</tt>.
 *
 * @param[in] obj The object.
 * @param[in] size The image load size.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK void efl_gfx_image_load_controller_load_size_set(Eo *obj, Eina_Size2D size);

/**
 * @brief The load size of an image.
 *
 * The image will be loaded into memory as if it was the specified size instead
 * of its original size. This can save a lot of memory and is important for
 * scalable types like SVG.
 *
 * EFL will try to load an image of the requested size but does not guarantee
 * an exact match between the request and the loaded image dimensions.
 *
 * By default, the load size is not specified, so it is <tt>0x0</tt>.
 *
 * @param[in] obj The object.
 *
 * @return The image load size.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_image_load_controller_load_size_get(const Eo *obj);

/**
 * @brief The DPI resolution of an image object's source image.
 *
 * Most useful for the SVG image loader.
 *
 * @param[in] obj The object.
 * @param[in] dpi The DPI resolution.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK void efl_gfx_image_load_controller_load_dpi_set(Eo *obj, double dpi);

/**
 * @brief The DPI resolution of an image object's source image.
 *
 * Most useful for the SVG image loader.
 *
 * @param[in] obj The object.
 *
 * @return The DPI resolution.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK double efl_gfx_image_load_controller_load_dpi_get(const Eo *obj);

/**
 * @brief Indicates whether the
 * @ref efl_gfx_image_load_controller_load_region_get property is supported for
 * the current file.
 *
 * @param[in] obj The object.
 *
 * @return @c true if region load of the image is supported, @c false
 * otherwise.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_image_load_controller_load_region_support_get(const Eo *obj);

/**
 * @brief Inform a given image object to load a selective region of its source
 * image.
 *
 * This property is useful when one is not showing all of an image's area on
 * its image object.
 *
 * @note The image loader for the image format in question has to support
 * selective region loading in order for this function to work (see
 * @ref efl_gfx_image_load_controller_load_region_support_get).
 *
 * @param[in] obj The object.
 * @param[in] region A region of the image.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK void efl_gfx_image_load_controller_load_region_set(Eo *obj, Eina_Rect region);

/**
 * @brief Inform a given image object to load a selective region of its source
 * image.
 *
 * This property is useful when one is not showing all of an image's area on
 * its image object.
 *
 * @note The image loader for the image format in question has to support
 * selective region loading in order for this function to work (see
 * @ref efl_gfx_image_load_controller_load_region_support_get).
 *
 * @param[in] obj The object.
 *
 * @return A region of the image.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK Eina_Rect efl_gfx_image_load_controller_load_region_get(const Eo *obj);

/**
 * @brief Defines whether the orientation information in the image file should
 * be honored.
 *
 * The orientation can for instance be set in the EXIF tags of a JPEG image. If
 * this flag is @c false, then the orientation will be ignored at load time,
 * otherwise the image will be loaded with the proper orientation.
 *
 * @param[in] obj The object.
 * @param[in] enable @c true means that it should honor the orientation
 * information.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK void efl_gfx_image_load_controller_load_orientation_set(Eo *obj, Eina_Bool enable);

/**
 * @brief Defines whether the orientation information in the image file should
 * be honored.
 *
 * The orientation can for instance be set in the EXIF tags of a JPEG image. If
 * this flag is @c false, then the orientation will be ignored at load time,
 * otherwise the image will be loaded with the proper orientation.
 *
 * @param[in] obj The object.
 *
 * @return @c true means that it should honor the orientation information.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_image_load_controller_load_orientation_get(const Eo *obj);

/**
 * @brief The scale down factor is a divider on the original image size.
 *
 * Setting the scale down factor can reduce load time and memory usage at the
 * cost of having a scaled down image in memory.
 *
 * This function sets the scale down factor of a given canvas image. Most
 * useful for the SVG image loader but also applies to JPEG, PNG and BMP.
 *
 * Powers of two (2, 4, 8, ...) are best supported (especially with JPEG).
 *
 * @param[in] obj The object.
 * @param[in] div The scale down dividing factor.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK void efl_gfx_image_load_controller_load_scale_down_set(Eo *obj, int div);

/**
 * @brief The scale down factor is a divider on the original image size.
 *
 * Setting the scale down factor can reduce load time and memory usage at the
 * cost of having a scaled down image in memory.
 *
 * This function sets the scale down factor of a given canvas image. Most
 * useful for the SVG image loader but also applies to JPEG, PNG and BMP.
 *
 * Powers of two (2, 4, 8, ...) are best supported (especially with JPEG).
 *
 * @param[in] obj The object.
 *
 * @return The scale down dividing factor.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK int efl_gfx_image_load_controller_load_scale_down_get(const Eo *obj);

/**
 * @brief Initial load should skip header check and leave it all to data load.
 *
 * If this is @c true, then future loads of images will defer header loading to
 * a preload stage and/or data load later on rather than at the start when the
 * load begins (e.g. when file is set).
 *
 * @param[in] obj The object.
 * @param[in] skip @c true if header is to be skipped.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK void efl_gfx_image_load_controller_load_skip_header_set(Eo *obj, Eina_Bool skip);

/**
 * @brief Initial load should skip header check and leave it all to data load.
 *
 * If this is @c true, then future loads of images will defer header loading to
 * a preload stage and/or data load later on rather than at the start when the
 * load begins (e.g. when file is set).
 *
 * @param[in] obj The object.
 *
 * @return @c true if header is to be skipped.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Load_Controller
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_image_load_controller_load_skip_header_get(const Eo *obj);

#endif
