#ifndef _EFL_GFX_VG_VALUE_PROVIDER_EO_H_
#define _EFL_GFX_VG_VALUE_PROVIDER_EO_H_

#ifndef _EFL_GFX_VG_VALUE_PROVIDER_EO_CLASS_TYPE
#define _EFL_GFX_VG_VALUE_PROVIDER_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Vg_Value_Provider;

#endif

#ifndef _EFL_GFX_VG_VALUE_PROVIDER_EO_TYPES
#define _EFL_GFX_VG_VALUE_PROVIDER_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Property information applied to value provider.
 *
 * @since 1.24
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider_Flags
 */
typedef enum
{
  EFL_GFX_VG_VALUE_PROVIDER_FLAGS_NONE = 0, /**< Nothing changed.
                                             *
                                             * @since 1.24 */
  EFL_GFX_VG_VALUE_PROVIDER_FLAGS_FILL_COLOR = 1, /**< Fill color changed.
                                                   *
                                                   * @since 1.24 */
  EFL_GFX_VG_VALUE_PROVIDER_FLAGS_STROKE_COLOR = 2, /**< Stroke color changed.
                                                     *
                                                     * @since 1.24 */
  EFL_GFX_VG_VALUE_PROVIDER_FLAGS_STROKE_WIDTH = 4, /**< Stroke width changed.
                                                     *
                                                     * @since 1.24 */
  EFL_GFX_VG_VALUE_PROVIDER_FLAGS_TRANSFORM_MATRIX = 8 /**< Transform matrix
                                                        * changed.
                                                        *
                                                        * @since 1.24 */
} Efl_Gfx_Vg_Value_Provider_Flags;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Efl Vector Value Provider class.
 *
 * This class is a set of that contain the value of several properties provided
 * by content. User can use this class to change the properties for the
 * specific content specified by the keypath.
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
#define EFL_GFX_VG_VALUE_PROVIDER_CLASS efl_gfx_vg_value_provider_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_gfx_vg_value_provider_class_get(void) EINA_CONST;

/**
 * @brief Keypath is the target a specific content or a set of contents that
 * will be updated. It can include the specific name of the contents,
 * wildcard(*) or Globstar(**).
 *
 * @param[in] obj The object.
 * @param[in] keypath The keypath of contents
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK void efl_gfx_vg_value_provider_keypath_set(Eo *obj, Eina_Stringshare *keypath);

/**
 * @brief Keypath is the target a specific content or a set of contents that
 * will be updated. It can include the specific name of the contents,
 * wildcard(*) or Globstar(**).
 *
 * @param[in] obj The object.
 *
 * @return The keypath of contents
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK Eina_Stringshare *efl_gfx_vg_value_provider_keypath_get(const Eo *obj);

/**
 * @brief User can adjust transform value of the content specified by the
 * keypath.
 *
 * @param[in] obj The object.
 * @param[in] m Matrix Value.
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK void efl_gfx_vg_value_provider_transform_set(Eo *obj, Eina_Matrix4 *m);

/**
 * @brief User can adjust transform value of the content specified by the
 * keypath.
 *
 * @param[in] obj The object.
 *
 * @return Matrix Value.
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK Eina_Matrix4 *efl_gfx_vg_value_provider_transform_get(const Eo *obj);

/**
 * @brief User can adjust color value of the fill content specified by the
 * keypath.
 *
 * @param[in] obj The object.
 * @param[in] r Red color value of fill.
 * @param[in] g Green color value of fill.
 * @param[in] b Blue color value of fill.
 * @param[in] a Alpha value of fill.
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK void efl_gfx_vg_value_provider_fill_color_set(Eo *obj, int r, int g, int b, int a);

/**
 * @brief User can adjust color value of the fill content specified by the
 * keypath.
 *
 * @param[in] obj The object.
 * @param[out] r Red color value of fill.
 * @param[out] g Green color value of fill.
 * @param[out] b Blue color value of fill.
 * @param[out] a Alpha value of fill.
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK void efl_gfx_vg_value_provider_fill_color_get(const Eo *obj, int *r, int *g, int *b, int *a);

/**
 * @brief User can adjust color value of the stroke content specified by the
 * keypath.
 *
 * @param[in] obj The object.
 * @param[in] r Red color value of stroke.
 * @param[in] g Green color value of stroke.
 * @param[in] b Blue color value of stroke.
 * @param[in] a Alpha value of stroke.
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK void efl_gfx_vg_value_provider_stroke_color_set(Eo *obj, int r, int g, int b, int a);

/**
 * @brief User can adjust color value of the stroke content specified by the
 * keypath.
 *
 * @param[in] obj The object.
 * @param[out] r Red color value of stroke.
 * @param[out] g Green color value of stroke.
 * @param[out] b Blue color value of stroke.
 * @param[out] a Alpha value of stroke.
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK void efl_gfx_vg_value_provider_stroke_color_get(const Eo *obj, int *r, int *g, int *b, int *a);

/**
 * @brief User can adjust width value of the stroke content specified by the
 * keypath.
 *
 * @param[in] obj The object.
 * @param[in] width Width value of stroke.
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK void efl_gfx_vg_value_provider_stroke_width_set(Eo *obj, double width);

/**
 * @brief User can adjust width value of the stroke content specified by the
 * keypath.
 *
 * @param[in] obj The object.
 *
 * @return Width value of stroke.
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK double efl_gfx_vg_value_provider_stroke_width_get(const Eo *obj);

/**
 * @brief Flag of properties updated in value provider object.
 *
 * @param[in] obj The object.
 *
 * @return Flag of the changed property.
 *
 * @ingroup Efl_Gfx_Vg_Value_Provider
 */
EVAS_API EVAS_API_WEAK Efl_Gfx_Vg_Value_Provider_Flags efl_gfx_vg_value_provider_updated_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
