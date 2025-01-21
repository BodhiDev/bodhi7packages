#ifndef _EFL_GFX_BUFFER_EO_H_
#define _EFL_GFX_BUFFER_EO_H_

#ifndef _EFL_GFX_BUFFER_EO_CLASS_TYPE
#define _EFL_GFX_BUFFER_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Buffer;

#endif

#ifndef _EFL_GFX_BUFFER_EO_TYPES
#define _EFL_GFX_BUFFER_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Graphics buffer access mode
 *
 * @ingroup Efl_Gfx_Buffer_Access_Mode
 */
typedef enum
{
  EFL_GFX_BUFFER_ACCESS_MODE_NONE = 0, /**< No buffer access */
  EFL_GFX_BUFFER_ACCESS_MODE_READ = 1, /**< Read access to buffer */
  EFL_GFX_BUFFER_ACCESS_MODE_WRITE = 2, /**< Write aces to buffer */
  EFL_GFX_BUFFER_ACCESS_MODE_COW = 4 /**< Forces copy-on-write if already mapped
                                      * as read-only. Requires write. */
} Efl_Gfx_Buffer_Access_Mode;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Common APIs for all objects representing images and 2D pixel buffers.
 *
 * @ingroup Efl_Gfx_Buffer
 */
#define EFL_GFX_BUFFER_INTERFACE efl_gfx_buffer_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_buffer_interface_get(void) EINA_CONST;

/**
 * @brief Rectangular size of the pixel buffer as allocated in memory.
 *
 * Potentially not implemented, @ref efl_gfx_buffer_size_get may be read-only.
 *
 * @param[in] obj The object.
 * @param[in] sz Size of the buffer in pixels.
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK void efl_gfx_buffer_size_set(Eo *obj, Eina_Size2D sz);

/**
 * @brief Rectangular size of the pixel buffer as allocated in memory.
 *
 * @param[in] obj The object.
 *
 * @return Size of the buffer in pixels.
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_buffer_size_get(const Eo *obj);

/**
 * @brief The colorspace defines how pixels are encoded in the image in memory.
 *
 * By default, images are encoded in 32-bit BGRA, ie. each pixel takes 4 bytes
 * in memory, with each channel B,G,R,A encoding the color with values from 0
 * to 255.
 *
 * All images used in EFL use alpha-premultipied BGRA values, which means that
 * for each pixel, B <= A, G <= A and R <= A.
 *
 * Returns the current encoding of this buffer's pixels.
 *
 * See @ref Efl_Gfx_Colorspace for more information on the supported formats.
 *
 * @param[in] obj The object.
 *
 * @return Colorspace
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK Efl_Gfx_Colorspace efl_gfx_buffer_colorspace_get(const Eo *obj);

/**
 * @brief Indicates whether the alpha channel should be used.
 *
 * This does not indicate whether the image source file contains an alpha
 * channel, only whether to respect it or discard it.
 *
 * Change alpha channel usage for this object.
 *
 * This function sets a flag on an image object indicating whether or not to
 * use alpha channel data. A value of @c true makes it use alpha channel data,
 * and @c false makes it ignore that data. Note that this has nothing to do
 * with an object's color as manipulated by @ref efl_gfx_color_set.
 *
 * @param[in] obj The object.
 * @param[in] alpha Whether to use alpha channel ($true) data or not ($false).
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK void efl_gfx_buffer_alpha_set(Eo *obj, Eina_Bool alpha);

/**
 * @brief Indicates whether the alpha channel should be used.
 *
 * This does not indicate whether the image source file contains an alpha
 * channel, only whether to respect it or discard it.
 *
 * Retrieve whether alpha channel data is used on this object.
 *
 * @param[in] obj The object.
 *
 * @return Whether to use alpha channel ($true) data or not ($false).
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_buffer_alpha_get(const Eo *obj);

/**
 * @brief Length in bytes of one row of pixels in memory.
 *
 * Usually this will be equal to width * 4, with a plain BGRA image. This may
 * return 0 if the stride is not applicable.
 *
 * When applicable, this will include the @ref efl_gfx_buffer_borders_get as
 * well as potential extra padding.
 *
 * @param[in] obj The object.
 *
 * @return Stride
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK int efl_gfx_buffer_stride_get(const Eo *obj);

/**
 * @brief Mark a sub-region of the given image object to be redrawn.
 *
 * This function schedules a particular rectangular region of an image object
 * to be updated (redrawn) at the next rendering cycle.
 *
 * @param[in] obj The object.
 * @param[in] region The updated region.
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK void efl_gfx_buffer_update_add(Eo *obj, const Eina_Rect *region);

/**
 * @brief Duplicated pixel borders inside this buffer.
 *
 * Internally, EFL may require an image to have its border pixels duplicated,
 * in particular for GL textures. This property exposes the internal duplicated
 * borders to allow calling @ref efl_gfx_buffer_map with the entire pixel data,
 * including those edge pixels.
 *
 * @param[in] obj The object.
 * @param[out] l Left border pixels, usually 0 or 1
 * @param[out] r Right border pixels, usually 0 or 1
 * @param[out] t Top border pixels, usually 0 or 1
 * @param[out] b Bottom border pixels, usually 0 or 1
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK void efl_gfx_buffer_borders_get(const Eo *obj, unsigned int *l, unsigned int *r, unsigned int *t, unsigned int *b);

/**
 * @brief Map a region of this buffer for read or write access by the CPU.
 *
 * Fetches data from the GPU if needed. This operation may be slow if
 * cpu_readable_fast or cpu_writeable_fast are not true, or if the required
 * colorspace is different from the internal one.
 *
 * Note that if the buffer has @ref efl_gfx_buffer_borders_get, then @c x and
 * @c y may be negative.
 *
 * @param[in] obj The object.
 * @param[in] mode Specifies whether to map for read-only, write-only or
 * read-write access (OR combination of flags).
 * @param[in] region The region to map.
 * @param[in] cspace Requested colorspace. If different from the internal
 * cspace, map should try to convert the data into a new buffer. argb8888 by
 * default.
 * @param[in] plane Plane ID. 0 by default. Useful for planar formats only.
 * @param[out] stride Returns the length in bytes of a mapped line
 *
 * @return The data slice. In case of failure, the memory pointer will be
 * @c null.
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK Eina_Rw_Slice efl_gfx_buffer_map(Eo *obj, Efl_Gfx_Buffer_Access_Mode mode, const Eina_Rect *region, Efl_Gfx_Colorspace cspace, int plane, int *stride);

/**
 * @brief Unmap a region of this buffer, and update the internal data if
 * needed.
 *
 * EFL will update the internal image if the map had write access.
 *
 * @note The @c slice struct does not need to be the one returned by
 * @ref efl_gfx_buffer_map, only its contents ($mem and @c len) must match. But
 * after a call to @ref efl_gfx_buffer_unmap the original @c slice structure is
 * not valid anymore.
 *
 * @param[in] obj The object.
 * @param[in] slice Data slice returned by a previous call to map.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_buffer_unmap(Eo *obj, Eina_Rw_Slice slice);

/**
 * @brief Set the pixels for this buffer by copying them, or allocate a new
 * memory region.
 *
 * This will allocate a new buffer in memory and copy the input @c pixels to
 * it. The internal colorspace is not guaranteed to be preserved, and
 * colorspace conversion may happen internally.
 *
 * If @c pixels is @c null, then a new empty buffer will be allocated. If the
 * buffer already had pixel data, the previous image data will be dropped. This
 * is the same as @ref efl_gfx_buffer_managed_set.
 *
 * The memory buffer @c pixels must be large enough to hold @c width x
 * @c height pixels encoded in the colorspace @c cspace.
 *
 * @c slice should not be the return value of @ref efl_gfx_buffer_managed_get.
 *
 * @param[in] obj The object.
 * @param[in] slice If @c null, allocates an empty buffer
 * @param[in] size The size in pixels.
 * @param[in] stride If 0, automatically guessed from the @c width.
 * @param[in] cspace argb8888 by default.
 * @param[in] plane Plane ID. 0 by default. Useful for planar formats only.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_buffer_copy_set(Eo *obj, const Eina_Slice *slice, Eina_Size2D size, int stride, Efl_Gfx_Colorspace cspace, int plane);

/**
 * @brief Set the pixels for this buffer, managed externally by the client.
 *
 * EFL will use the pixel data directly, and update the GPU-side texture if
 * required. This will mark the image as dirty. If @c slice is @c null, this
 * will detach the pixel data.
 *
 * If the buffer already had pixel data, the previous image data will be
 * dropped. This is the same as @ref efl_gfx_buffer_copy_set.
 *
 * The memory buffer @c pixels must be large enough to hold @c width x
 * @c height pixels encoded in the colorspace @c cspace.
 *
 * See also @ref efl_gfx_buffer_copy_set if you want EFL to copy the input
 * buffer internally.
 *
 * @param[in] obj The object.
 * @param[in] slice If @c null, detaches the previous buffer.
 * @param[in] size The size in pixels.
 * @param[in] stride If 0, automatically guessed from the @c width.
 * @param[in] cspace argb8888 by default.
 * @param[in] plane Plane ID. 0 by default. Useful for planar formats only.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_buffer_managed_set(Eo *obj, const Eina_Slice *slice, Eina_Size2D size, int stride, Efl_Gfx_Colorspace cspace, int plane);

/**
 * @brief Get a direct pointer to the internal pixel data, if available.
 *
 * This will return @c null unless @ref efl_gfx_buffer_managed_set was used to
 * pass in an external data pointer.
 *
 * @param[in] obj The object.
 * @param[in] plane Plane ID. 0 by default. Useful for planar formats only.
 *
 * @return The data slice. The memory pointer will be @c null in case of
 * failure.
 *
 * @ingroup Efl_Gfx_Buffer
 */
EAPI EAPI_WEAK Eina_Slice efl_gfx_buffer_managed_get(Eo *obj, int plane);
#endif /* EFL_BETA_API_SUPPORT */

#endif
