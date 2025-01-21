#ifndef _EFL_GFX_ARRANGEMENT_EO_H_
#define _EFL_GFX_ARRANGEMENT_EO_H_

#ifndef _EFL_GFX_ARRANGEMENT_EO_CLASS_TYPE
#define _EFL_GFX_ARRANGEMENT_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Arrangement;

#endif

#ifndef _EFL_GFX_ARRANGEMENT_EO_TYPES
#define _EFL_GFX_ARRANGEMENT_EO_TYPES


#endif
/** This interface provides methods for manipulating how contents are arranged
 * within a container, providing more granularity for content positioning.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Arrangement
 */
#define EFL_GFX_ARRANGEMENT_INTERFACE efl_gfx_arrangement_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_arrangement_interface_get(void) EINA_CONST;

/**
 * @brief This property determines how contents will be aligned within a
 * container if there is unused space.
 *
 * It is different than the @ref efl_gfx_hint_align_get property in that it
 * affects the position of all the contents within the container instead of the
 * container itself. For example, if a box widget has extra space on the
 * horizontal axis, this property can be used to align the box's contents to
 * the left or the right side.
 *
 * See also @ref efl_gfx_hint_align_get.
 *
 * @param[in] obj The object.
 * @param[in] align_horiz Controls the horizontal alignment.
 * @param[in] align_vert Controls the vertical alignment.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Arrangement
 */
EAPI EAPI_WEAK void efl_gfx_arrangement_content_align_set(Eo *obj, Efl_Gfx_Align align_horiz, Efl_Gfx_Align align_vert);

/**
 * @brief This property determines how contents will be aligned within a
 * container if there is unused space.
 *
 * It is different than the @ref efl_gfx_hint_align_get property in that it
 * affects the position of all the contents within the container instead of the
 * container itself. For example, if a box widget has extra space on the
 * horizontal axis, this property can be used to align the box's contents to
 * the left or the right side.
 *
 * See also @ref efl_gfx_hint_align_get.
 *
 * @param[in] obj The object.
 * @param[out] align_horiz Controls the horizontal alignment.
 * @param[out] align_vert Controls the vertical alignment.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Arrangement
 */
EAPI EAPI_WEAK void efl_gfx_arrangement_content_align_get(const Eo *obj, Efl_Gfx_Align *align_horiz, Efl_Gfx_Align *align_vert);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This property determines the space between a container's content
 * items.
 *
 * It is different than the @ref efl_gfx_hint_margin_get property in that it is
 * applied to each content item within the container instead of a single item.
 * The calculation for these two properties is cumulative.
 *
 * See also @ref efl_gfx_hint_margin_get.
 *
 * @param[in] obj The object.
 * @param[in] pad_horiz Horizontal padding.
 * @param[in] pad_vert Vertical padding.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Arrangement
 */
EAPI EAPI_WEAK void efl_gfx_arrangement_content_padding_set(Eo *obj, unsigned int pad_horiz, unsigned int pad_vert);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This property determines the space between a container's content
 * items.
 *
 * It is different than the @ref efl_gfx_hint_margin_get property in that it is
 * applied to each content item within the container instead of a single item.
 * The calculation for these two properties is cumulative.
 *
 * See also @ref efl_gfx_hint_margin_get.
 *
 * @param[in] obj The object.
 * @param[out] pad_horiz Horizontal padding.
 * @param[out] pad_vert Vertical padding.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Arrangement
 */
EAPI EAPI_WEAK void efl_gfx_arrangement_content_padding_get(const Eo *obj, unsigned int *pad_horiz, unsigned int *pad_vert);
#endif /* EFL_BETA_API_SUPPORT */

#endif
