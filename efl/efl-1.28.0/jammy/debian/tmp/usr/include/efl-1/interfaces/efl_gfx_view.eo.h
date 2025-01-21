#ifndef _EFL_GFX_VIEW_EO_H_
#define _EFL_GFX_VIEW_EO_H_

#ifndef _EFL_GFX_VIEW_EO_CLASS_TYPE
#define _EFL_GFX_VIEW_EO_CLASS_TYPE

typedef Eo Efl_Gfx_View;

#endif

#ifndef _EFL_GFX_VIEW_EO_TYPES
#define _EFL_GFX_VIEW_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Interface for graphical objects with a native size which might be different
 * from the desired rendered size (controlled through the
 * @ref efl_gfx_view_size_get property).
 *
 * @ingroup Efl_Gfx_View
 */
#define EFL_GFX_VIEW_INTERFACE efl_gfx_view_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_view_interface_get(void) EINA_CONST;

/**
 * @brief The dimensions of this object's viewport.
 *
 * This property represents the size of an image (file on disk, vector
 * graphics, GL or 3D scene, ...) view: this is the logical size of a view, not
 * the number of pixels in the buffer, nor its visible size on the window.
 *
 * For scalable scenes (vector graphics, 3D or GL), this means scaling the
 * contents of the scene and drawing more pixels as a result; For pixmaps this
 * means zooming and stretching up or down the backing buffer to fit this view.
 *
 * In most cases the view should have the same dimensions as the object on the
 * canvas, for best quality.
 *
 * @ref efl_gfx_view_size_set may not be implemented. If it is, it might
 * trigger a complete recalculation of the scene, or reload of the pixel data.
 *
 * Refer to each implementing class specific documentation for more details.
 *
 * @param[in] obj The object.
 * @param[in] size Size of the view.
 *
 * @ingroup Efl_Gfx_View
 */
EAPI EAPI_WEAK void efl_gfx_view_size_set(Eo *obj, Eina_Size2D size);

/**
 * @brief The dimensions of this object's viewport.
 *
 * This property represents the size of an image (file on disk, vector
 * graphics, GL or 3D scene, ...) view: this is the logical size of a view, not
 * the number of pixels in the buffer, nor its visible size on the window.
 *
 * For scalable scenes (vector graphics, 3D or GL), this means scaling the
 * contents of the scene and drawing more pixels as a result; For pixmaps this
 * means zooming and stretching up or down the backing buffer to fit this view.
 *
 * In most cases the view should have the same dimensions as the object on the
 * canvas, for best quality.
 *
 * @ref efl_gfx_view_size_set may not be implemented. If it is, it might
 * trigger a complete recalculation of the scene, or reload of the pixel data.
 *
 * Refer to each implementing class specific documentation for more details.
 *
 * @param[in] obj The object.
 *
 * @return Size of the view.
 *
 * @ingroup Efl_Gfx_View
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_view_size_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
