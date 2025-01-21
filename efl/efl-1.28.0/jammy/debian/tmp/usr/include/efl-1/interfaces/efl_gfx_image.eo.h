#ifndef _EFL_GFX_IMAGE_EO_H_
#define _EFL_GFX_IMAGE_EO_H_

#ifndef _EFL_GFX_IMAGE_EO_CLASS_TYPE
#define _EFL_GFX_IMAGE_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Image;

#endif

#ifndef _EFL_GFX_IMAGE_EO_TYPES
#define _EFL_GFX_IMAGE_EO_TYPES

/** How an image's data is to be treated by EFL, for optimization.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Content_Hint
 */
typedef enum
{
  EFL_GFX_IMAGE_CONTENT_HINT_NONE = 0, /**< No hint on the content (default).
                                        *
                                        * @since 1.23 */
  EFL_GFX_IMAGE_CONTENT_HINT_DYNAMIC = 1, /**< The content will change over
                                           * time.
                                           *
                                           * @since 1.23 */
  EFL_GFX_IMAGE_CONTENT_HINT_STATIC = 2 /**< The content won't change over time.
                                         *
                                         * @since 1.23 */
} Efl_Gfx_Image_Content_Hint;

/** How an image's data is to be treated by EFL, with regard to scaling cache.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Scale_Hint
 */
typedef enum
{
  EFL_GFX_IMAGE_SCALE_HINT_NONE = 0, /**< No hint on the scaling (default).
                                      *
                                      * @since 1.23 */
  EFL_GFX_IMAGE_SCALE_HINT_DYNAMIC = 1, /**< Image will be re-scaled over time,
                                         * thus turning scaling cache OFF for
                                         * its data.
                                         *
                                         * @since 1.23 */
  EFL_GFX_IMAGE_SCALE_HINT_STATIC = 2 /**< Image will not be re-scaled over
                                       * time, thus turning scaling cache ON
                                       * for its data.
                                       *
                                       * @since 1.23 */
} Efl_Gfx_Image_Scale_Hint;

/** Enumeration that defines scaling methods to be used when rendering an
 * image.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Scale_Method
 */
typedef enum
{
  EFL_GFX_IMAGE_SCALE_METHOD_NONE = 0, /**< Use the image's natural size.
                                        *
                                        * @since 1.23 */
  EFL_GFX_IMAGE_SCALE_METHOD_FILL, /**< Scale the image so that it matches the
                                    * object's area exactly. The image's aspect
                                    * ratio might be changed.
                                    *
                                    * @since 1.23 */
  EFL_GFX_IMAGE_SCALE_METHOD_FIT, /**< Scale the image so that it fits
                                   * completely inside the object's area while
                                   * maintaining the aspect ratio. At least one
                                   * of the dimensions of the image will be
                                   * equal to the corresponding dimension of
                                   * the object.
                                   *
                                   * @since 1.23 */
  EFL_GFX_IMAGE_SCALE_METHOD_FIT_WIDTH, /**< Scale the image so that it covers
                                         * the entire object area horizontally
                                         * while maintaining the aspect ratio.
                                         * The image may become taller than the
                                         * object.
                                         *
                                         * @since 1.23 */
  EFL_GFX_IMAGE_SCALE_METHOD_FIT_HEIGHT, /**< Scale the image so that it covers
                                          * the entire object area vertically
                                          * while maintaining the aspect ratio.
                                          * The image may become wider than the
                                          * object.
                                          *
                                          * @since 1.23 */
  EFL_GFX_IMAGE_SCALE_METHOD_EXPAND, /**< Scale the image so that it covers the
                                      * entire object area on one axis while
                                      * maintaining the aspect ratio,
                                      * preferring whichever axis is largest.
                                      * The image may become larger than the
                                      * object.
                                      *
                                      * @since 1.23 */
  EFL_GFX_IMAGE_SCALE_METHOD_TILE /**< Tile image at its original size.
                                   *
                                   * @since 1.23 */
} Efl_Gfx_Image_Scale_Method;

/**
 * @brief This struct holds the description of a stretchable region in one
 * dimension (vertical or horizontal). Used when scaling an image.
 *
 * @c offset + @c length should be smaller than image size in that dimension.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image_Stretch_Region
 */
typedef struct _Efl_Gfx_Image_Stretch_Region
{
  unsigned int offset; /**< First pixel of the stretchable region, starting at
                        * 0.
                        *
                        * @since 1.23 */
  unsigned int length; /**< Length of the stretchable region in pixels.
                        *
                        * @since 1.23 */
} Efl_Gfx_Image_Stretch_Region;


#endif
/**
 * @brief This interface defines a set of common APIs which should be
 * implemented by image objects.
 *
 * These APIs provide the ability to manipulate how images will be rendered,
 * e.g., determining whether to allow upscaling and downscaling at render time,
 * as well as functionality for detecting errors during the loading process.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
#define EFL_GFX_IMAGE_INTERFACE efl_gfx_image_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_image_interface_get(void) EINA_CONST;

/**
 * @brief Whether to use high-quality image scaling algorithm for this image.
 *
 * When enabled, a higher quality image scaling algorithm is used when scaling
 * images to sizes other than the source image's original one. This gives
 * better results but is more computationally expensive.
 *
 * @param[in] obj The object.
 * @param[in] smooth_scale Whether to use smooth scale or not.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_smooth_scale_set(Eo *obj, Eina_Bool smooth_scale);

/**
 * @brief Whether to use high-quality image scaling algorithm for this image.
 *
 * When enabled, a higher quality image scaling algorithm is used when scaling
 * images to sizes other than the source image's original one. This gives
 * better results but is more computationally expensive.
 *
 * @param[in] obj The object.
 *
 * @return Whether to use smooth scale or not.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_image_smooth_scale_get(const Eo *obj);

/**
 * @brief Determine how the image is scaled at render time.
 *
 * This allows more granular controls for how an image object should display
 * its internal buffer. The underlying image data will not be modified.
 *
 * @param[in] obj The object.
 * @param[in] scale_method Image scale type to use.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_scale_method_set(Eo *obj, Efl_Gfx_Image_Scale_Method scale_method);

/**
 * @brief Determine how the image is scaled at render time.
 *
 * This allows more granular controls for how an image object should display
 * its internal buffer. The underlying image data will not be modified.
 *
 * @param[in] obj The object.
 *
 * @return Image scale type to use.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Efl_Gfx_Image_Scale_Method efl_gfx_image_scale_method_get(const Eo *obj);

/**
 * @brief If @c true, the image may be scaled to a larger size. If @c false,
 * the image will never be resized larger than its native size.
 *
 * @param[in] obj The object.
 * @param[in] upscale Whether to allow image upscaling.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_can_upscale_set(Eo *obj, Eina_Bool upscale);

/**
 * @brief If @c true, the image may be scaled to a larger size. If @c false,
 * the image will never be resized larger than its native size.
 *
 * @param[in] obj The object.
 *
 * @return Whether to allow image upscaling.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_image_can_upscale_get(const Eo *obj);

/**
 * @brief If @c true, the image may be scaled to a smaller size. If @c false,
 * the image will never be resized smaller than its native size.
 *
 * @param[in] obj The object.
 * @param[in] downscale Whether to allow image downscaling.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_can_downscale_set(Eo *obj, Eina_Bool downscale);

/**
 * @brief If @c true, the image may be scaled to a smaller size. If @c false,
 * the image will never be resized smaller than its native size.
 *
 * @param[in] obj The object.
 *
 * @return Whether to allow image downscaling.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_image_can_downscale_get(const Eo *obj);

/**
 * @brief The native width/height ratio of the image.
 *
 * The ratio will be 1.0 if it cannot be calculated (e.g. height = 0).
 *
 * @param[in] obj The object.
 *
 * @return The image's ratio.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK double efl_gfx_image_ratio_get(const Eo *obj);

/**
 * @brief Return the relative area enclosed inside the image where content is
 * expected.
 *
 * We do expect content to be inside the limit defined by the border or inside
 * the stretch region. If a stretch region is provided, the content region will
 * encompass the non-stretchable area that are surrounded by stretchable area.
 * If no border and no stretch region is set, they are assumed to be zero and
 * the full object geometry is where content can be layout on top. The area
 * size change with the object size.
 *
 * The geometry of the area is expressed relative to the geometry of the
 * object.
 *
 * @param[in] obj The object.
 *
 * @return A rectangle inside the object boundary where content is expected.
 * The default value is the image object's geometry with the
 * @ref efl_gfx_image_border_insets_get values subtracted.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Eina_Rect efl_gfx_image_content_region_get(const Eo *obj);

/**
 * @brief Dimensions of this image's border, a region that does not scale with
 * the center area.
 *
 * When EFL renders an image, its source may be scaled to fit the size of the
 * object. This function sets an area from the borders of the image inwards
 * which is not to be scaled. This function is useful for making frames and for
 * widget theming, where, for example, buttons may be of varying sizes, but
 * their border size must remain constant.
 *
 * The units used for @c l, @c r, @c t and @c b are canvas units (pixels).
 *
 * @note The border region itself may be scaled by the
 * @ref efl_gfx_image_border_insets_scale_set function.
 *
 * @note By default, image objects have no borders set, i.e. @c l, @c r, @c t
 * and @c b start as 0.
 *
 * @note Similar to the concepts of 9-patch images or cap insets.
 *
 * @param[in] obj The object.
 * @param[in] l The border's left width.
 * @param[in] r The border's right width.
 * @param[in] t The border's top height.
 * @param[in] b The border's bottom height.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_border_insets_set(Eo *obj, int l, int r, int t, int b);

/**
 * @brief Dimensions of this image's border, a region that does not scale with
 * the center area.
 *
 * When EFL renders an image, its source may be scaled to fit the size of the
 * object. This function sets an area from the borders of the image inwards
 * which is not to be scaled. This function is useful for making frames and for
 * widget theming, where, for example, buttons may be of varying sizes, but
 * their border size must remain constant.
 *
 * The units used for @c l, @c r, @c t and @c b are canvas units (pixels).
 *
 * @note The border region itself may be scaled by the
 * @ref efl_gfx_image_border_insets_scale_set function.
 *
 * @note By default, image objects have no borders set, i.e. @c l, @c r, @c t
 * and @c b start as 0.
 *
 * @note Similar to the concepts of 9-patch images or cap insets.
 *
 * @param[in] obj The object.
 * @param[out] l The border's left width.
 * @param[out] r The border's right width.
 * @param[out] t The border's top height.
 * @param[out] b The border's bottom height.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_border_insets_get(const Eo *obj, int *l, int *r, int *t, int *b);

/**
 * @brief Scaling factor applied to the image borders.
 *
 * This value multiplies the size of the @ref efl_gfx_image_border_insets_get
 * when scaling an object.
 *
 * @param[in] obj The object.
 * @param[in] scale The scale factor.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_border_insets_scale_set(Eo *obj, double scale);

/**
 * @brief Scaling factor applied to the image borders.
 *
 * This value multiplies the size of the @ref efl_gfx_image_border_insets_get
 * when scaling an object.
 *
 * @param[in] obj The object.
 *
 * @return The scale factor.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK double efl_gfx_image_border_insets_scale_get(const Eo *obj);

/**
 * @brief Specifies how the center part of the object (not the borders) should
 * be drawn when EFL is rendering it.
 *
 * This function sets how the center part of the image object's source image is
 * to be drawn, which must be one of the values in
 * @ref Efl_Gfx_Center_Fill_Mode. By center we mean the complementary part of
 * that defined by @ref efl_gfx_image_border_insets_set. This is very useful
 * for making frames and decorations. You would most probably also be using a
 * filled image (as in @ref efl_gfx_fill_auto_get) to use as a frame.
 *
 * @param[in] obj The object.
 * @param[in] fill Fill mode of the center region. The default behavior is to
 * render and scale the center area, respecting its transparency.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_center_fill_mode_set(Eo *obj, Efl_Gfx_Center_Fill_Mode fill);

/**
 * @brief Specifies how the center part of the object (not the borders) should
 * be drawn when EFL is rendering it.
 *
 * This function sets how the center part of the image object's source image is
 * to be drawn, which must be one of the values in
 * @ref Efl_Gfx_Center_Fill_Mode. By center we mean the complementary part of
 * that defined by @ref efl_gfx_image_border_insets_set. This is very useful
 * for making frames and decorations. You would most probably also be using a
 * filled image (as in @ref efl_gfx_fill_auto_get) to use as a frame.
 *
 * @param[in] obj The object.
 *
 * @return Fill mode of the center region. The default behavior is to render
 * and scale the center area, respecting its transparency.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Efl_Gfx_Center_Fill_Mode efl_gfx_image_center_fill_mode_get(const Eo *obj);

/**
 * @brief This property defines the stretchable pixels region of an image.
 *
 * When the regions are set by the user, the method will walk the iterators
 * once and then destroy them. When the regions are retrieved by the user, it
 * is his responsibility to destroy the iterators.. It will remember the
 * information for the lifetime of the object. It will ignore all value of
 * @ref efl_gfx_image_border_insets_get,
 * @ref efl_gfx_image_border_insets_scale_get and
 * @ref efl_gfx_image_center_fill_mode_get . To reset the object you can just
 * pass @c null to both horizontal and vertical at the same time.
 *
 * @param[in] obj The object.
 * @param[in] horizontal Representation of areas that are stretchable in the
 * image horizontal space.
 * @param[in] vertical Representation of areas that are stretchable in the
 * image vertical space.
 *
 * @return Return an error code if the provided values are incorrect.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Eina_Error efl_gfx_image_stretch_region_set(Eo *obj, Eina_Iterator *horizontal EFL_TRANSFER_OWNERSHIP, Eina_Iterator *vertical EFL_TRANSFER_OWNERSHIP);

/**
 * @brief This property defines the stretchable pixels region of an image.
 *
 * When the regions are set by the user, the method will walk the iterators
 * once and then destroy them. When the regions are retrieved by the user, it
 * is his responsibility to destroy the iterators.. It will remember the
 * information for the lifetime of the object. It will ignore all value of
 * @ref efl_gfx_image_border_insets_get,
 * @ref efl_gfx_image_border_insets_scale_get and
 * @ref efl_gfx_image_center_fill_mode_get . To reset the object you can just
 * pass @c null to both horizontal and vertical at the same time.
 *
 * @param[in] obj The object.
 * @param[out] horizontal Representation of areas that are stretchable in the
 * image horizontal space.
 * @param[out] vertical Representation of areas that are stretchable in the
 * image vertical space.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_stretch_region_get(const Eo *obj, Eina_Iterator **horizontal EFL_TRANSFER_OWNERSHIP, Eina_Iterator **vertical EFL_TRANSFER_OWNERSHIP);

/**
 * @brief This represents the size of the original image in pixels.
 *
 * This may be different from the actual geometry on screen or even the size of
 * the loaded pixel buffer. This is the size of the image as stored in the
 * original file.
 *
 * This is a read-only property and may return 0x0.
 *
 * @param[in] obj The object.
 *
 * @return The size in pixels. The default value is the size of the image's
 * internal buffer.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_image_size_get(const Eo *obj);

/**
 * @brief Content hint setting for the image. These hints might be used by EFL
 * to enable optimizations.
 *
 * For example, if you're on the GL engine and your driver implementation
 * supports it, setting this hint to @ref EFL_GFX_IMAGE_CONTENT_HINT_DYNAMIC
 * will make it need zero copies at texture upload time, which is an
 * "expensive" operation.
 *
 * @param[in] obj The object.
 * @param[in] hint Dynamic or static content hint.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_content_hint_set(Eo *obj, Efl_Gfx_Image_Content_Hint hint);

/**
 * @brief Content hint setting for the image. These hints might be used by EFL
 * to enable optimizations.
 *
 * For example, if you're on the GL engine and your driver implementation
 * supports it, setting this hint to @ref EFL_GFX_IMAGE_CONTENT_HINT_DYNAMIC
 * will make it need zero copies at texture upload time, which is an
 * "expensive" operation.
 *
 * @param[in] obj The object.
 *
 * @return Dynamic or static content hint.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Efl_Gfx_Image_Content_Hint efl_gfx_image_content_hint_get(const Eo *obj);

/**
 * @brief The scale hint of a given image of the canvas.
 *
 * The scale hint affects how EFL is to cache scaled versions of its original
 * source image.
 *
 * @param[in] obj The object.
 * @param[in] hint Scalable or static size hint.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK void efl_gfx_image_scale_hint_set(Eo *obj, Efl_Gfx_Image_Scale_Hint hint);

/**
 * @brief The scale hint of a given image of the canvas.
 *
 * The scale hint affects how EFL is to cache scaled versions of its original
 * source image.
 *
 * @param[in] obj The object.
 *
 * @return Scalable or static size hint.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Efl_Gfx_Image_Scale_Hint efl_gfx_image_scale_hint_get(const Eo *obj);

/**
 * @brief The (last) file loading error for a given object. This value is set
 * to a nonzero value if an error has occurred.
 *
 * @param[in] obj The object.
 *
 * @return The load error code. A value of $0 indicates no error.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
EAPI EAPI_WEAK Eina_Error efl_gfx_image_load_error_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_GFX_IMAGE_EVENT_IMAGE_PRELOAD_STATE_CHANGED;

/** If @c true, image data has been preloaded and can be displayed. If
 * @c false, the image data has been unloaded and can no longer be displayed.
 * @return Eina_Bool
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
#define EFL_GFX_IMAGE_EVENT_IMAGE_PRELOAD_STATE_CHANGED (&(_EFL_GFX_IMAGE_EVENT_IMAGE_PRELOAD_STATE_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_GFX_IMAGE_EVENT_IMAGE_RESIZED;

/** Image was resized (its pixel data). The event data is the image's new size.
 * @return Eina_Size2D
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Image
 */
#define EFL_GFX_IMAGE_EVENT_IMAGE_RESIZED (&(_EFL_GFX_IMAGE_EVENT_IMAGE_RESIZED))

#endif
