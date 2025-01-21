#ifndef _EFL_GFX_SHAPE_EO_H_
#define _EFL_GFX_SHAPE_EO_H_

#ifndef _EFL_GFX_SHAPE_EO_CLASS_TYPE
#define _EFL_GFX_SHAPE_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Shape;

#endif

#ifndef _EFL_GFX_SHAPE_EO_TYPES
#define _EFL_GFX_SHAPE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** EFL graphics shape object interface
 *
 * @ingroup Efl_Gfx_Shape
 */
#define EFL_GFX_SHAPE_MIXIN efl_gfx_shape_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_shape_mixin_get(void) EINA_CONST;

/**
 * @brief The stroke scale to be used for stroking the path. Will be used along
 * with stroke width property.
 *
 * @param[in] obj The object.
 * @param[in] s Stroke scale value
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_stroke_scale_set(Eo *obj, double s);

/**
 * @brief The stroke scale to be used for stroking the path. Will be used along
 * with stroke width property.
 *
 * @param[in] obj The object.
 *
 * @return Stroke scale value
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK double efl_gfx_shape_stroke_scale_get(const Eo *obj);

/**
 * @brief The color to be used for stroking the path.
 *
 * @param[in] obj The object.
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_stroke_color_set(Eo *obj, int r, int g, int b, int a);

/**
 * @brief The color to be used for stroking the path.
 *
 * @param[in] obj The object.
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_stroke_color_get(const Eo *obj, int *r, int *g, int *b, int *a);

/**
 * @brief The stroke width to be used for stroking the path.
 *
 * @param[in] obj The object.
 * @param[in] w Stroke width to be used
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_stroke_width_set(Eo *obj, double w);

/**
 * @brief The stroke width to be used for stroking the path.
 *
 * @param[in] obj The object.
 *
 * @return Stroke width to be used
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK double efl_gfx_shape_stroke_width_get(const Eo *obj);

/**
 * @brief Not implemented
 *
 * @param[in] obj The object.
 * @param[in] centered Centered stroke location
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_stroke_location_set(Eo *obj, double centered);

/**
 * @brief Not implemented
 *
 * @param[in] obj The object.
 *
 * @return Centered stroke location
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK double efl_gfx_shape_stroke_location_get(const Eo *obj);

/**
 * @brief Set stroke dash pattern. A dash pattern is specified by dashes, an
 * array of @ref Efl_Gfx_Dash. @ref Efl_Gfx_Dash values(length, gap) must be
 * positive.
 *
 * See also @ref Efl_Gfx_Dash
 *
 * @param[in] obj The object.
 * @param[in] dash Stroke dash
 * @param[in] length Stroke dash length
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_stroke_dash_set(Eo *obj, const Efl_Gfx_Dash *dash, unsigned int length);

/**
 * @brief Set stroke dash pattern. A dash pattern is specified by dashes, an
 * array of @ref Efl_Gfx_Dash. @ref Efl_Gfx_Dash values(length, gap) must be
 * positive.
 *
 * See also @ref Efl_Gfx_Dash
 *
 * @param[in] obj The object.
 * @param[out] dash Stroke dash
 * @param[out] length Stroke dash length
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_stroke_dash_get(const Eo *obj, const Efl_Gfx_Dash **dash, unsigned int *length);

/**
 * @brief The cap style to be used for stroking the path. The cap will be used
 * for capping the end point of a open subpath.
 *
 * See also @ref Efl_Gfx_Cap.
 *
 * @param[in] obj The object.
 * @param[in] c Cap style to use, default is @ref EFL_GFX_CAP_BUTT
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_stroke_cap_set(Eo *obj, Efl_Gfx_Cap c);

/**
 * @brief The cap style to be used for stroking the path. The cap will be used
 * for capping the end point of a open subpath.
 *
 * See also @ref Efl_Gfx_Cap.
 *
 * @param[in] obj The object.
 *
 * @return Cap style to use, default is @ref EFL_GFX_CAP_BUTT
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK Efl_Gfx_Cap efl_gfx_shape_stroke_cap_get(const Eo *obj);

/**
 * @brief The join style to be used for stroking the path. The join style will
 * be used for joining the two line segment while stroking the path.
 *
 * See also @ref Efl_Gfx_Join.
 *
 * @param[in] obj The object.
 * @param[in] j Join style to use, default is @ref EFL_GFX_JOIN_MITER
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_stroke_join_set(Eo *obj, Efl_Gfx_Join j);

/**
 * @brief The join style to be used for stroking the path. The join style will
 * be used for joining the two line segment while stroking the path.
 *
 * See also @ref Efl_Gfx_Join.
 *
 * @param[in] obj The object.
 *
 * @return Join style to use, default is @ref EFL_GFX_JOIN_MITER
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK Efl_Gfx_Join efl_gfx_shape_stroke_join_get(const Eo *obj);

/**
 * @brief The stroke_miterlimit is a presentation defining a limit on the ratio
 * of the miter length to the stroke-width used to draw a miter join.
 *
 * @param[in] obj The object.
 * @param[in] miterlimit Limit value on the ratio of the miter.
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_stroke_miterlimit_set(Eo *obj, double miterlimit);

/**
 * @brief The stroke_miterlimit is a presentation defining a limit on the ratio
 * of the miter length to the stroke-width used to draw a miter join.
 *
 * @param[in] obj The object.
 *
 * @return Limit value on the ratio of the miter.
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK double efl_gfx_shape_stroke_miterlimit_get(const Eo *obj);

/**
 * @brief The fill rule of the given shape object.
 * @ref EFL_GFX_FILL_RULE_WINDING or @ref EFL_GFX_FILL_RULE_ODD_EVEN.
 *
 * @param[in] obj The object.
 * @param[in] fill_rule The current fill rule of the shape object. One of
 * @ref EFL_GFX_FILL_RULE_WINDING or @ref EFL_GFX_FILL_RULE_ODD_EVEN
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK void efl_gfx_shape_fill_rule_set(Eo *obj, Efl_Gfx_Fill_Rule fill_rule);

/**
 * @brief The fill rule of the given shape object.
 * @ref EFL_GFX_FILL_RULE_WINDING or @ref EFL_GFX_FILL_RULE_ODD_EVEN.
 *
 * @param[in] obj The object.
 *
 * @return The current fill rule of the shape object. One of
 * @ref EFL_GFX_FILL_RULE_WINDING or @ref EFL_GFX_FILL_RULE_ODD_EVEN
 *
 * @ingroup Efl_Gfx_Shape
 */
EAPI EAPI_WEAK Efl_Gfx_Fill_Rule efl_gfx_shape_fill_rule_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
