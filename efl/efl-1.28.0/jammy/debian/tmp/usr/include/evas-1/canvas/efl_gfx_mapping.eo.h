#ifndef _EFL_GFX_MAPPING_EO_H_
#define _EFL_GFX_MAPPING_EO_H_

#ifndef _EFL_GFX_MAPPING_EO_CLASS_TYPE
#define _EFL_GFX_MAPPING_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Mapping;

#endif

#ifndef _EFL_GFX_MAPPING_EO_TYPES
#define _EFL_GFX_MAPPING_EO_TYPES


#endif
/**
 * @brief Texture UV mapping for all objects (rotation, perspective, 3d, ...).
 *
 * Evas allows different transformations to be applied to all kinds of objects.
 * These are applied by means of UV mapping.
 *
 * With UV mapping, one maps points in the source object to a 3D space
 * positioning at target. This allows rotation, perspective, scale and lots of
 * other effects, depending on the map that is used.
 *
 * Each map point may carry a multiplier color. If properly calculated, these
 * can do shading effects on the object, producing 3D effects.
 *
 * At the moment of writing, maps can only have 4 points (no more, no less).
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
#define EFL_GFX_MAPPING_MIXIN efl_gfx_mapping_mixin_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_gfx_mapping_mixin_get(void) EINA_CONST;

/**
 * @brief Read-only property indicating whether an object is mapped.
 *
 * This will be @c true if any transformation is applied to this object.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the object is mapped.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_gfx_mapping_has(Eo *obj);

/**
 * @brief Resets the map transformation to its default state.
 *
 * This will reset all transformations to identity, meaning the points' colors,
 * positions and UV coordinates will be reset to their default values.
 * @ref efl_gfx_mapping_has will then return @c false. This function will not
 * modify the values of @ref efl_gfx_mapping_smooth_get or
 * @ref efl_gfx_mapping_alpha_get.
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_reset(Eo *obj);

/**
 * @brief Number of points of a map.
 *
 * This sets the number of points of map. Currently, the number of points must
 * be multiples of 4.
 *
 * @param[in] obj The object.
 * @param[in] count The number of points of map
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_point_count_set(Eo *obj, int count);

/**
 * @brief Number of points of a map.
 *
 * This sets the number of points of map. Currently, the number of points must
 * be multiples of 4.
 *
 * @param[in] obj The object.
 *
 * @return The number of points of map
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK int efl_gfx_mapping_point_count_get(const Eo *obj);

/**
 * @brief Clockwise state of a map (read-only).
 *
 * This determines if the output points (X and Y. Z is not used) are clockwise
 * or counter-clockwise. This can be used for "back-face culling". This is
 * where you hide objects that "face away" from you. In this case objects that
 * are not clockwise.
 *
 * @param[in] obj The object.
 *
 * @return @c true if clockwise, @c false if counter clockwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_gfx_mapping_clockwise_get(const Eo *obj);

/**
 * @brief Smoothing state for map rendering.
 *
 * This sets smoothing for map rendering. If the object is a type that has its
 * own smoothing settings, then both the smooth settings for this object and
 * the map must be turned off. By default smooth maps are enabled.
 *
 * @param[in] obj The object.
 * @param[in] smooth @c true by default.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_smooth_set(Eo *obj, Eina_Bool smooth);

/**
 * @brief Smoothing state for map rendering.
 *
 * This sets smoothing for map rendering. If the object is a type that has its
 * own smoothing settings, then both the smooth settings for this object and
 * the map must be turned off. By default smooth maps are enabled.
 *
 * @param[in] obj The object.
 *
 * @return @c true by default.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_gfx_mapping_smooth_get(const Eo *obj);

/**
 * @brief Alpha flag for map rendering.
 *
 * This sets alpha flag for map rendering. If the object is a type that has its
 * own alpha settings, then this will take precedence. Only image objects
 * support this currently (@Efl.Canvas.Image and its friends). Setting this to
 * off stops alpha blending of the map area, and is useful if you know the
 * object and/or all sub-objects is 100% solid.
 *
 * Note that this may conflict with @ref efl_gfx_mapping_smooth_get depending
 * on which algorithm is used for anti-aliasing.
 *
 * @param[in] obj The object.
 * @param[in] alpha @c true by default.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_alpha_set(Eo *obj, Eina_Bool alpha);

/**
 * @brief Alpha flag for map rendering.
 *
 * This sets alpha flag for map rendering. If the object is a type that has its
 * own alpha settings, then this will take precedence. Only image objects
 * support this currently (@Efl.Canvas.Image and its friends). Setting this to
 * off stops alpha blending of the map area, and is useful if you know the
 * object and/or all sub-objects is 100% solid.
 *
 * Note that this may conflict with @ref efl_gfx_mapping_smooth_get depending
 * on which algorithm is used for anti-aliasing.
 *
 * @param[in] obj The object.
 *
 * @return @c true by default.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_gfx_mapping_alpha_get(const Eo *obj);

/**
 * @brief A point's absolute coordinate on the canvas.
 *
 * This sets/gets the fixed point's coordinate in the map. Note that points
 * describe the outline of a quadrangle and are ordered either clockwise or
 * counter-clockwise. Try to keep your quadrangles concave and non-complex.
 * Though these polygon modes may work, they may not render a desired set of
 * output. The quadrangle will use points 0 and 1 , 1 and 2, 2 and 3, and 3 and
 * 0 to describe the edges of the quadrangle.
 *
 * The X and Y and Z coordinates are in canvas units. Z is optional and may or
 * may not be honored in drawing. Z is a hint and does not affect the X and Y
 * rendered coordinates. It may be used for calculating fills with perspective
 * correct rendering.
 *
 * Remember all coordinates are canvas global ones as with move and resize in
 * the canvas.
 *
 * This property can be read to get the 4 points positions on the canvas, or
 * set to manually place them.
 *
 * @param[in] obj The object.
 * @param[in] idx ID of the point, from 0 to 3 (included).
 * @param[in] x Point X coordinate in absolute pixel coordinates.
 * @param[in] y Point Y coordinate in absolute pixel coordinates.
 * @param[in] z Point Z coordinate hint (pre-perspective transform).
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_coord_absolute_set(Eo *obj, int idx, double x, double y, double z);

/**
 * @brief A point's absolute coordinate on the canvas.
 *
 * This sets/gets the fixed point's coordinate in the map. Note that points
 * describe the outline of a quadrangle and are ordered either clockwise or
 * counter-clockwise. Try to keep your quadrangles concave and non-complex.
 * Though these polygon modes may work, they may not render a desired set of
 * output. The quadrangle will use points 0 and 1 , 1 and 2, 2 and 3, and 3 and
 * 0 to describe the edges of the quadrangle.
 *
 * The X and Y and Z coordinates are in canvas units. Z is optional and may or
 * may not be honored in drawing. Z is a hint and does not affect the X and Y
 * rendered coordinates. It may be used for calculating fills with perspective
 * correct rendering.
 *
 * Remember all coordinates are canvas global ones as with move and resize in
 * the canvas.
 *
 * This property can be read to get the 4 points positions on the canvas, or
 * set to manually place them.
 *
 * @param[in] obj The object.
 * @param[in] idx ID of the point, from 0 to 3 (included).
 * @param[out] x Point X coordinate in absolute pixel coordinates.
 * @param[out] y Point Y coordinate in absolute pixel coordinates.
 * @param[out] z Point Z coordinate hint (pre-perspective transform).
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_coord_absolute_get(const Eo *obj, int idx, double *x, double *y, double *z);

/**
 * @brief Map point's U and V texture source point.
 *
 * This sets/gets the U and V coordinates for the point. This determines which
 * coordinate in the source image is mapped to the given point, much like
 * OpenGL and textures. Valid values range from 0.0 to 1.0.
 *
 * By default the points are set in a clockwise order, as such: - 0: top-left,
 * i.e. (0.0, 0.0), - 1: top-right, i.e. (1.0, 0.0), - 2: bottom-right, i.e.
 * (1.0, 1.0), - 3: bottom-left, i.e. (0.0, 1.0).
 *
 * @param[in] obj The object.
 * @param[in] idx ID of the point, from 0 to 3 (included).
 * @param[in] u Relative X coordinate within the image, from 0 to 1.
 * @param[in] v Relative Y coordinate within the image, from 0 to 1.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_uv_set(Eo *obj, int idx, double u, double v);

/**
 * @brief Map point's U and V texture source point.
 *
 * This sets/gets the U and V coordinates for the point. This determines which
 * coordinate in the source image is mapped to the given point, much like
 * OpenGL and textures. Valid values range from 0.0 to 1.0.
 *
 * By default the points are set in a clockwise order, as such: - 0: top-left,
 * i.e. (0.0, 0.0), - 1: top-right, i.e. (1.0, 0.0), - 2: bottom-right, i.e.
 * (1.0, 1.0), - 3: bottom-left, i.e. (0.0, 1.0).
 *
 * @param[in] obj The object.
 * @param[in] idx ID of the point, from 0 to 3 (included).
 * @param[out] u Relative X coordinate within the image, from 0 to 1.
 * @param[out] v Relative Y coordinate within the image, from 0 to 1.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_uv_get(const Eo *obj, int idx, double *u, double *v);

/**
 * @brief Color of a vertex in the map.
 *
 * This sets the color of the vertex in the map. Colors will be linearly
 * interpolated between vertex points through the map. Color will multiply the
 * "texture" pixels (like GL_MODULATE in OpenGL). The default color of a vertex
 * in a map is white solid (255, 255, 255, 255) which means it will have no
 * affect on modifying the texture pixels.
 *
 * The color values must be premultiplied (ie. @c a >= {$r, @c g, @c b}).
 *
 * @param[in] obj The object.
 * @param[in] idx ID of the point, from 0 to 3 (included). -1 can be used to
 * set the color for all points, but it is invalid for get().
 * @param[in] r Red (0 - 255)
 * @param[in] g Green (0 - 255)
 * @param[in] b Blue (0 - 255)
 * @param[in] a Alpha (0 - 255)
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_color_set(Eo *obj, int idx, int r, int g, int b, int a);

/**
 * @brief Color of a vertex in the map.
 *
 * This sets the color of the vertex in the map. Colors will be linearly
 * interpolated between vertex points through the map. Color will multiply the
 * "texture" pixels (like GL_MODULATE in OpenGL). The default color of a vertex
 * in a map is white solid (255, 255, 255, 255) which means it will have no
 * affect on modifying the texture pixels.
 *
 * The color values must be premultiplied (ie. @c a >= {$r, @c g, @c b}).
 *
 * @param[in] obj The object.
 * @param[in] idx ID of the point, from 0 to 3 (included). -1 can be used to
 * set the color for all points, but it is invalid for get().
 * @param[out] r Red (0 - 255)
 * @param[out] g Green (0 - 255)
 * @param[out] b Blue (0 - 255)
 * @param[out] a Alpha (0 - 255)
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_color_get(const Eo *obj, int idx, int *r, int *g, int *b, int *a);

/**
 * @brief Apply a translation to the object using map.
 *
 * This does not change the real geometry of the object but will affect its
 * visible position.
 *
 * @param[in] obj The object.
 * @param[in] dx Distance in pixels along the X axis.
 * @param[in] dy Distance in pixels along the Y axis.
 * @param[in] dz Distance in pixels along the Z axis.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_translate(Eo *obj, double dx, double dy, double dz);

/**
 * @brief Apply a rotation to the object.
 *
 * This rotates the object clockwise by @c degrees degrees, around the center
 * specified by the relative position ($cx, @c cy) in the @c pivot object. If
 * @c pivot is @c null then this object is used as its own pivot center. 360
 * degrees is a full rotation, equivalent to no rotation. Negative values for
 * @c degrees will rotate clockwise by that amount.
 *
 * The coordinates are set relative to the given @c pivot object. If its
 * geometry changes, then the absolute position of the rotation center will
 * change accordingly.
 *
 * By default, the center is at (0.5, 0.5). 0.0 means left or top while 1.0
 * means right or bottom of the @c pivot object.
 *
 * @param[in] obj The object.
 * @param[in] degrees CCW rotation in degrees.
 * @param[in] pivot A pivot object for the center point, can be @c null.
 * @param[in] cx X relative coordinate of the center point.
 * @param[in] cy y relative coordinate of the center point.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_rotate(Eo *obj, double degrees, const Efl_Gfx_Entity *pivot, double cx, double cy);

/**
 * @brief Rotate the object around 3 axes in 3D.
 *
 * This will rotate in 3D, not just around the "Z" axis as is the case with
 * @ref efl_gfx_mapping_rotate. You can rotate around the X, Y and Z axes. The
 * Z axis points "into" the screen with low values at the screen and higher
 * values further away. The X axis runs from left to right on the screen and
 * the Y axis from top to bottom.
 *
 * As with @ref efl_gfx_mapping_rotate, you provide a pivot and center point to
 * rotate around (in 3D). The Z coordinate of this center point is an absolute
 * value, and not a relative one like X and Y, as objects are flat in a 2D
 * space.
 *
 * @param[in] obj The object.
 * @param[in] dx Rotation in degrees around X axis (0 to 360).
 * @param[in] dy Rotation in degrees around Y axis (0 to 360).
 * @param[in] dz Rotation in degrees around Z axis (0 to 360).
 * @param[in] pivot A pivot object for the center point, can be @c null.
 * @param[in] cx X relative coordinate of the center point.
 * @param[in] cy y relative coordinate of the center point.
 * @param[in] cz Z absolute coordinate of the center point.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_rotate_3d(Eo *obj, double dx, double dy, double dz, const Efl_Gfx_Entity *pivot, double cx, double cy, double cz);

/**
 * @brief Rotate the object in 3D using a unit quaternion.
 *
 * This is similar to @ref efl_gfx_mapping_rotate_3d but uses a unit quaternion
 * (also known as versor) rather than a direct angle-based rotation around a
 * center point. Use this to avoid gimbal locks.
 *
 * As with @ref efl_gfx_mapping_rotate, you provide a pivot and center point to
 * rotate around (in 3D). The Z coordinate of this center point is an absolute
 * value, and not a relative one like X and Y, as objects are flat in a 2D
 * space.
 *
 * @param[in] obj The object.
 * @param[in] qx The x component of the imaginary part of the quaternion.
 * @param[in] qy The y component of the imaginary part of the quaternion.
 * @param[in] qz The z component of the imaginary part of the quaternion.
 * @param[in] qw The w component of the real part of the quaternion.
 * @param[in] pivot A pivot object for the center point, can be @c null.
 * @param[in] cx X relative coordinate of the center point.
 * @param[in] cy y relative coordinate of the center point.
 * @param[in] cz Z absolute coordinate of the center point.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_rotate_quat(Eo *obj, double qx, double qy, double qz, double qw, const Efl_Gfx_Entity *pivot, double cx, double cy, double cz);

/**
 * @brief Apply a zoom to the object.
 *
 * This zooms the points of the map from a center point. That center is defined
 * by @c cx and @c cy. The @c zoomx and @c zoomy parameters specify how much to
 * zoom in the X and Y direction respectively. A value of 1.0 means "don't
 * zoom". 2.0 means "double the size". 0.5 is "half the size" etc.
 *
 * By default, the center is at (0.5, 0.5). 0.0 means left or top while 1.0
 * means right or bottom.
 *
 * @param[in] obj The object.
 * @param[in] zoomx Zoom in X direction
 * @param[in] zoomy Zoom in Y direction
 * @param[in] pivot A pivot object for the center point, can be @c null.
 * @param[in] cx X relative coordinate of the center point.
 * @param[in] cy y relative coordinate of the center point.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_zoom(Eo *obj, double zoomx, double zoomy, const Efl_Gfx_Entity *pivot, double cx, double cy);

/**
 * @brief Apply a lighting effect on the object.
 *
 * This is used to apply lighting calculations (from a single light source) to
 * a given mapped object. The R, G and B values of each vertex will be modified
 * to reflect the lighting based on the light point coordinates, the light
 * color and the ambient color, and at what angle the map is facing the light
 * source. A surface should have its points be declared in a clockwise fashion
 * if the face is "facing" towards you (as opposed to away from you) as faces
 * have a "logical" side for lighting.
 *
 * The coordinates are set relative to the given @c pivot object. If its
 * geometry changes, then the absolute position of the rotation center will
 * change accordingly. The Z position is absolute. If the @c pivot is @c null
 * then this object will be its own pivot.
 *
 * @param[in] obj The object.
 * @param[in] pivot A pivot object for the light point, can be @c null.
 * @param[in] lx X relative coordinate in space of light point.
 * @param[in] ly Y relative coordinate in space of light point.
 * @param[in] lz Z absolute coordinate in space of light point.
 * @param[in] lr Light red value (0 - 255).
 * @param[in] lg Light green value (0 - 255).
 * @param[in] lb Light blue value (0 - 255).
 * @param[in] ar Ambient color red value (0 - 255).
 * @param[in] ag Ambient color green value (0 - 255).
 * @param[in] ab Ambient color blue value (0 - 255).
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_lighting_3d(Eo *obj, const Efl_Gfx_Entity *pivot, double lx, double ly, double lz, int lr, int lg, int lb, int ar, int ag, int ab);

/**
 * @brief Apply a perspective transform to the map
 *
 * This applies a given perspective (3D) to the map coordinates. X, Y and Z
 * values are used. The px and py points specify the "infinite distance" point
 * in the 3D conversion (where all lines converge to like when artists draw 3D
 * by hand). The @c z0 value specifies the z value at which there is a 1:1
 * mapping between spatial coordinates and screen coordinates. Any points on
 * this z value will not have their X and Y values modified in the transform.
 * Those further away (Z value higher) will shrink into the distance, and those
 * under this value will expand and become bigger. The @c foc value determines
 * the "focal length" of the camera. This is in reality the distance between
 * the camera lens plane itself (at or closer than this rendering results are
 * undefined) and the "z0" z value. This allows for some "depth" control and
 * @c foc must be greater than 0.
 *
 * The coordinates are set relative to the given @c pivot object. If its
 * geometry changes, then the absolute position of the rotation center will
 * change accordingly. The Z position is absolute. If the @c pivot is @c null
 * then this object will be its own pivot.
 *
 * @param[in] obj The object.
 * @param[in] pivot A pivot object for the infinite point, can be @c null.
 * @param[in] px The perspective distance X relative coordinate.
 * @param[in] py The perspective distance Y relative coordinate.
 * @param[in] z0 The "0" Z plane value.
 * @param[in] foc The focal distance, must be greater than 0.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_perspective_3d(Eo *obj, const Efl_Gfx_Entity *pivot, double px, double py, double z0, double foc);

/**
 * @brief Apply a rotation to the object, using absolute coordinates.
 *
 * This rotates the object clockwise by @c degrees degrees, around the center
 * specified by the relative position ($cx, @c cy) in the @c pivot object. If
 * @c pivot is @c null then this object is used as its own pivot center. 360
 * degrees is a full rotation, equivalent to no rotation. Negative values for
 * @c degrees will rotate clockwise by that amount.
 *
 * The given coordinates are absolute values in pixels. See also
 * @ref efl_gfx_mapping_rotate for a relative coordinate version.
 *
 * @param[in] obj The object.
 * @param[in] degrees CCW rotation in degrees.
 * @param[in] cx X absolute coordinate in pixels of the center point.
 * @param[in] cy y absolute coordinate in pixels of the center point.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_rotate_absolute(Eo *obj, double degrees, double cx, double cy);

/**
 * @brief Rotate the object around 3 axes in 3D, using absolute coordinates.
 *
 * This will rotate in 3D and not just around the "Z" axis as the case with
 * @ref efl_gfx_mapping_rotate. This will rotate around the X, Y and Z axes.
 * The Z axis points "into" the screen with low values at the screen and higher
 * values further away. The X axis runs from left to right on the screen and
 * the Y axis from top to bottom.
 *
 * The coordinates of the center point are given in absolute canvas
 * coordinates. See also @ref efl_gfx_mapping_rotate_3d for a pivot-based 3D
 * rotation.
 *
 * @param[in] obj The object.
 * @param[in] dx Rotation in degrees around X axis (0 to 360).
 * @param[in] dy Rotation in degrees around Y axis (0 to 360).
 * @param[in] dz Rotation in degrees around Z axis (0 to 360).
 * @param[in] cx X absolute coordinate in pixels of the center point.
 * @param[in] cy y absolute coordinate in pixels of the center point.
 * @param[in] cz Z absolute coordinate of the center point.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_rotate_3d_absolute(Eo *obj, double dx, double dy, double dz, double cx, double cy, double cz);

/**
 * @brief Rotate the object in 3D using a unit quaternion, using absolute
 * coordinates.
 *
 * This is similar to @ref efl_gfx_mapping_rotate_3d but uses a unit quaternion
 * (also known as versor) rather than a direct angle-based rotation around a
 * center point. Use this to avoid gimbal locks.
 *
 * The coordinates of the center point are given in absolute canvas
 * coordinates. See also @ref efl_gfx_mapping_rotate_quat for a pivot-based 3D
 * rotation.
 *
 * @param[in] obj The object.
 * @param[in] qx The x component of the imaginary part of the quaternion.
 * @param[in] qy The y component of the imaginary part of the quaternion.
 * @param[in] qz The z component of the imaginary part of the quaternion.
 * @param[in] qw The w component of the real part of the quaternion.
 * @param[in] cx X absolute coordinate in pixels of the center point.
 * @param[in] cy y absolute coordinate in pixels of the center point.
 * @param[in] cz Z absolute coordinate of the center point.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_rotate_quat_absolute(Eo *obj, double qx, double qy, double qz, double qw, double cx, double cy, double cz);

/**
 * @brief Apply a zoom to the object, using absolute coordinates.
 *
 * This zooms the points of the map from a center point. That center is defined
 * by @c cx and @c cy. The @c zoomx and @c zoomy parameters specify how much to
 * zoom in the X and Y direction respectively. A value of 1.0 means "don't
 * zoom". 2.0 means "double the size". 0.5 is "half the size" etc.
 *
 * The coordinates of the center point are given in absolute canvas
 * coordinates. See also @ref efl_gfx_mapping_zoom for a pivot-based zoom.
 *
 * @param[in] obj The object.
 * @param[in] zoomx Zoom in X direction
 * @param[in] zoomy Zoom in Y direction
 * @param[in] cx X absolute coordinate in pixels of the center point.
 * @param[in] cy y absolute coordinate in pixels of the center point.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_zoom_absolute(Eo *obj, double zoomx, double zoomy, double cx, double cy);

/**
 * @brief Apply a lighting effect to the object.
 *
 * This is used to apply lighting calculations (from a single light source) to
 * a given mapped object. The RGB values of each vertex will be modified to
 * reflect the lighting based on the light point coordinates, the light color,
 * the ambient color and at what angle the map is facing the light source. A
 * surface should have its points be declared in a clockwise fashion if the
 * face is "facing" towards you (as opposed to away from you) as faces have a
 * "logical" side for lighting.
 *
 * The coordinates of the center point are given in absolute canvas
 * coordinates. See also @ref efl_gfx_mapping_lighting_3d for a pivot-based
 * lighting effect.
 *
 * @param[in] obj The object.
 * @param[in] lx X absolute coordinate in pixels of the light point.
 * @param[in] ly y absolute coordinate in pixels of the light point.
 * @param[in] lz Z absolute coordinate in space of light point.
 * @param[in] lr Light red value (0 - 255).
 * @param[in] lg Light green value (0 - 255).
 * @param[in] lb Light blue value (0 - 255).
 * @param[in] ar Ambient color red value (0 - 255).
 * @param[in] ag Ambient color green value (0 - 255).
 * @param[in] ab Ambient color blue value (0 - 255).
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_lighting_3d_absolute(Eo *obj, double lx, double ly, double lz, int lr, int lg, int lb, int ar, int ag, int ab);

/**
 * @brief Apply a perspective transform to the map
 *
 * This applies a given perspective (3D) to the map coordinates. X, Y and Z
 * values are used. The px and py points specify the "infinite distance" point
 * in the 3D conversion (where all lines converge to like when artists draw 3D
 * by hand). The @c z0 value specifies the z value at which there is a 1:1
 * mapping between spatial coordinates and screen coordinates. Any points on
 * this z value will not have their X and Y values modified in the transform.
 * Those further away (Z value higher) will shrink into the distance, and those
 * less than this value will expand and become bigger. The @c foc value
 * determines the "focal length" of the camera. This is in reality the distance
 * between the camera lens plane itself (at or closer than this rendering
 * results are undefined) and the "z0" z value. This allows for some "depth"
 * control and @c foc must be greater than 0.
 *
 * The coordinates of the center point are given in absolute canvas
 * coordinates. See also @ref efl_gfx_mapping_perspective_3d for a pivot-based
 * perspective effect.
 *
 * @param[in] obj The object.
 * @param[in] px The perspective distance X relative coordinate.
 * @param[in] py The perspective distance Y relative coordinate.
 * @param[in] z0 The "0" Z plane value.
 * @param[in] foc The focal distance, must be greater than 0.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Mapping
 */
EVAS_API EVAS_API_WEAK void efl_gfx_mapping_perspective_3d_absolute(Eo *obj, double px, double py, double z0, double foc);

#endif
