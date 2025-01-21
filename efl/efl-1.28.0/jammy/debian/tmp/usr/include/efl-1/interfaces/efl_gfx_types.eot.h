#ifndef _EFL_GFX_TYPES_EOT_H_
#define _EFL_GFX_TYPES_EOT_H_

#ifndef _EFL_GFX_TYPES_EOT_TYPES
#define _EFL_GFX_TYPES_EOT_TYPES

/**
 * @brief Efl alignment type: As a horizontal component, 0.0 means the start of
 * the axis in the direction that the current language reads, 1.0 means the end
 * of the axis.
 *
 * As a vertical component, 0.0 is the top, 1.0 is the bottom.
 *
 * The default for this type is always 0.5 unless explicitly specified.
 *
 * @since 1.24
 *
 * @ingroup Efl_Gfx_Align
 */
typedef double Efl_Gfx_Align;

#ifdef EFL_BETA_API_SUPPORT
/** Graphics colorspace type
 *
 * @ingroup Efl_Gfx_Colorspace
 */
typedef enum
{
  EFL_GFX_COLORSPACE_ARGB8888 = 0, /**< ARGB 32 bits per pixel, high-byte is
                                    * Alpha, accessed one 32bit word at a time.
                                    */
  EFL_GFX_COLORSPACE_YCBCR422P601_PL, /**< YCbCr 4:2:2 Planar, ITU.BT-601
                                       * specifications. The data pointed to is
                                       * just an array of row pointer, pointing
                                       * to the Y rows, then the Cb, then Cr
                                       * rows. */
  EFL_GFX_COLORSPACE_YCBCR422P709_PL, /**< YCbCr 4:2:2 Planar, ITU.BT-709
                                       * specifications. The data pointed to is
                                       * just an array of row pointer, pointing
                                       * to the Y rows, then the Cb, then Cr
                                       * rows. */
  EFL_GFX_COLORSPACE_RGB565_A5P, /**< 16bit rgb565 + Alpha plane at end - 5 bits
                                  * of the 8 being used per alpha byte. */
  EFL_GFX_COLORSPACE_GRY8 = 4, /**< 8-bit gray image, or alpha only. */
  EFL_GFX_COLORSPACE_YCBCR422601_PL, /**< YCbCr 4:2:2, ITU.BT-601
                                      * specifications. The data pointed to is
                                      * just an array of row pointer, pointing
                                      * to line of Y,Cb,Y,Cr bytes. */
  EFL_GFX_COLORSPACE_YCBCR420NV12601_PL, /**< YCbCr 4:2:0, ITU.BT-601
                                          * specifications. The data pointed to
                                          * is just an array of row pointer,
                                          * pointing to the Y rows, then the
                                          * Cb,Cr rows.. */
  EFL_GFX_COLORSPACE_YCBCR420TM12601_PL, /**< YCbCr 4:2:0, ITU.BT-601
                                          * specifications. The data pointed to
                                          * is just an array of tiled row
                                          * pointer, pointing to the Y rows,
                                          * then the Cb,Cr rows.. */
  EFL_GFX_COLORSPACE_AGRY88 = 8, /**< AY 8bits Alpha and 8bits Grey, accessed 1
                                  * 16bits at a time. */
  EFL_GFX_COLORSPACE_ETC1 = 9, /**< OpenGL ETC1 encoding of RGB texture (4 bit
                                * per pixel)
                                *
                                * @since 1.10. */
  EFL_GFX_COLORSPACE_RGB8_ETC2 = 10, /**< OpenGL GL_COMPRESSED_RGB8_ETC2 texture
                                      * compression format (4 bit per pixel)
                                      *
                                      * @since 1.10. */
  EFL_GFX_COLORSPACE_RGBA8_ETC2_EAC = 11, /**< OpenGL
                                           * GL_COMPRESSED_RGBA8_ETC2_EAC
                                           * texture compression format,
                                           * supports alpha (8 bit per pixel)
                                           *
                                           * @since 1.10. */
  EFL_GFX_COLORSPACE_ETC1_ALPHA = 12, /**< ETC1 with alpha support using two
                                       * planes: ETC1 RGB and ETC1 grey for
                                       * alpha
                                       *
                                       * @since 1.11. */
  EFL_GFX_COLORSPACE_RGB_S3TC_DXT1 = 13, /**< OpenGL
                                          * COMPRESSED_RGB_S3TC_DXT1_EXT format
                                          * with RGB only.
                                          *
                                          * @since 1.11. */
  EFL_GFX_COLORSPACE_RGBA_S3TC_DXT1 = 14, /**< OpenGL
                                           * COMPRESSED_RGBA_S3TC_DXT1_EXT
                                           * format with RGBA punchthrough.
                                           *
                                           * @since 1.11. */
  EFL_GFX_COLORSPACE_RGBA_S3TC_DXT2 = 15, /**< DirectDraw DXT2 format with
                                           * premultiplied RGBA. Not supported
                                           * by OpenGL itself.
                                           *
                                           * @since 1.11. */
  EFL_GFX_COLORSPACE_RGBA_S3TC_DXT3 = 16, /**< OpenGL
                                           * COMPRESSED_RGBA_S3TC_DXT3_EXT
                                           * format with RGBA.
                                           *
                                           * @since 1.11. */
  EFL_GFX_COLORSPACE_RGBA_S3TC_DXT4 = 17, /**< DirectDraw DXT4 format with
                                           * premultiplied RGBA. Not supported
                                           * by OpenGL itself.
                                           *
                                           * @since 1.11. */
  EFL_GFX_COLORSPACE_RGBA_S3TC_DXT5 = 18 /**< OpenGL
                                          * COMPRESSED_RGBA_S3TC_DXT5_EXT
                                          * format with RGBA.
                                          *
                                          * @since 1.11. */
} Efl_Gfx_Colorspace;
#endif /* EFL_BETA_API_SUPPORT */

/** Graphics render operation mode
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Render_Op
 */
typedef enum
{
  EFL_GFX_RENDER_OP_BLEND = 0, /**< Alpha blending onto destination (default); d
                                * = d*(1-sa) + s.
                                *
                                * @since 1.23 */
  EFL_GFX_RENDER_OP_COPY = 1, /**< Copy source to destination; d = s.
                               *
                               * @since 1.23 */
  EFL_GFX_RENDER_OP_LAST /**< Sentinel value to indicate last enum field during
                          * iteration
                          *
                          * @since 1.23 */
} Efl_Gfx_Render_Op;

/** These values determine how the points are interpreted in a stream of
 * points.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Path_Command_Type
 */
typedef enum
{
  EFL_GFX_PATH_COMMAND_TYPE_END = 0, /**< The end of stream , no more points to
                                      * process.
                                      *
                                      * @since 1.22 */
  EFL_GFX_PATH_COMMAND_TYPE_MOVE_TO, /**< The next point is the start point of a
                                      * sub path.
                                      *
                                      * @since 1.22 */
  EFL_GFX_PATH_COMMAND_TYPE_LINE_TO, /**< The next point is used to draw a line
                                      * from current point.
                                      *
                                      * @since 1.22 */
  EFL_GFX_PATH_COMMAND_TYPE_CUBIC_TO, /**< The next three point is used to draw
                                       * a cubic bezier curve from current
                                       * point.
                                       *
                                       * @since 1.22 */
  EFL_GFX_PATH_COMMAND_TYPE_CLOSE, /**< Close the current subpath by drawing a
                                    * line between current point and the first
                                    * point of current subpath.
                                    *
                                    * @since 1.22 */
  EFL_GFX_PATH_COMMAND_TYPE_LAST /**< Sentinel value to indicate last enum field
                                  * during iteration
                                  *
                                  * @since 1.22 */
} Efl_Gfx_Path_Command_Type;

/** These values determine how the end of opened sub-paths are rendered in a
 * stroke. @ref efl_gfx_shape_stroke_cap_set
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Cap
 */
typedef enum
{
  EFL_GFX_CAP_BUTT = 0, /**< The end of lines is rendered as a full stop on the
                         * last point itself.
                         *
                         * @since 1.22 */
  EFL_GFX_CAP_ROUND, /**< The end of lines is rendered as a half-circle around
                      * the last point.
                      *
                      * @since 1.22 */
  EFL_GFX_CAP_SQUARE, /**< The end of lines is rendered as a square around the
                       * last point.
                       *
                       * @since 1.22 */
  EFL_GFX_CAP_LAST /**< Sentinel value to indicate last enum field during
                    * iteration
                    *
                    * @since 1.22 */
} Efl_Gfx_Cap;

/** These values determine how two joining lines are rendered in a stroker.
 * @ref efl_gfx_shape_stroke_join_set
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Join
 */
typedef enum
{
  EFL_GFX_JOIN_MITER = 0, /**< Used to render mitered line joins. The
                           * intersection of the strokes is clipped at a line
                           * perpendicular to the bisector of the angle between
                           * the strokes, at the distance from the intersection
                           * of the segments equal to the product of the miter
                           * limit value and the border radius.  This prevents
                           * long spikes being created.
                           *
                           * @since 1.22 */
  EFL_GFX_JOIN_ROUND, /**< Used to render rounded line joins. Circular arcs are
                       * used to join two lines smoothly.
                       *
                       * @since 1.22 */
  EFL_GFX_JOIN_BEVEL, /**< Used to render beveled line joins. The outer corner
                       * of the joined lines is filled by enclosing the
                       * triangular region of the corner with a straight line
                       * between the outer corners of each stroke.
                       *
                       * @since 1.22 */
  EFL_GFX_JOIN_LAST /**< Sentinel value to indicate last enum field during
                     * iteration
                     *
                     * @since 1.22 */
} Efl_Gfx_Join;

/** Specifies how the area outside the gradient area should be filled.
 * @ref efl_gfx_gradient_spread_set
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Gradient_Spread
 */
typedef enum
{
  EFL_GFX_GRADIENT_SPREAD_PAD = 0, /**< The area is filled with the closest stop
                                    * color. This is the default.
                                    *
                                    * @since 1.22 */
  EFL_GFX_GRADIENT_SPREAD_REFLECT, /**< The gradient is reflected outside the
                                    * gradient area.
                                    *
                                    * @since 1.22 */
  EFL_GFX_GRADIENT_SPREAD_REPEAT, /**< The gradient is repeated outside the
                                   * gradient area.
                                   *
                                   * @since 1.22 */
  EFL_GFX_GRADIENT_SPREAD_LAST /**< Sentinel value to indicate last enum field
                                * during iteration
                                *
                                * @since 1.22 */
} Efl_Gfx_Gradient_Spread;

#ifdef EFL_BETA_API_SUPPORT
/** Type defining how an image content get filled.
 *
 * @ingroup Efl_Gfx_Fill_Rule
 */
typedef enum
{
  EFL_GFX_FILL_RULE_WINDING = 0, /**< Draw a horizontal line from the point to a
                                  * location outside the shape. Determine
                                  * whether the direction of the line at each
                                  * intersection point is up or down. The
                                  * winding number is determined by summing the
                                  * direction of each intersection. If the
                                  * number is non zero, the point is inside the
                                  * shape. This mode is the default */
  EFL_GFX_FILL_RULE_ODD_EVEN = 1 /**< Draw a horizontal line from the point to a
                                  * location outside the shape, and count the
                                  * number of intersections. If the number of
                                  * intersections is an odd number, the point
                                  * is inside the shape. */
} Efl_Gfx_Fill_Rule;
#endif /* EFL_BETA_API_SUPPORT */

/** Type describing dash. @ref efl_gfx_shape_stroke_dash_set
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Dash
 */
typedef struct _Efl_Gfx_Dash
{
  double length; /**< Dash drawing length.
                  *
                  * @since 1.22 */
  double gap; /**< Distance between two dashes.
               *
               * @since 1.22 */
} Efl_Gfx_Dash;

/** Type defining gradient stops. Describes the location and color of a
 * transition point in a gradient.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Gradient_Stop
 */
typedef struct _Efl_Gfx_Gradient_Stop
{
  double offset; /**< The location of the gradient stop within the gradient
                  * vector
                  *
                  * @since 1.22 */
  int r; /**< The component R color of the gradient stop
          *
          * @since 1.22 */
  int g; /**< The component G color of the gradient stop
          *
          * @since 1.22 */
  int b; /**< The component B color of the gradient stop
          *
          * @since 1.22 */
  int a; /**< The component A color of the gradient stop
          *
          * @since 1.22 */
} Efl_Gfx_Gradient_Stop;

#ifdef EFL_BETA_API_SUPPORT
/** Internal structure for @ref Efl_Gfx_Stroke.
 *
 * @ingroup Efl_Gfx_Stroke_Color
 */
typedef struct _Efl_Gfx_Stroke_Color
{
  int r; /**< The component R color of the stroke */
  int g; /**< The component G color of the stroke */
  int b; /**< The component B color of the stroke */
  int a; /**< The component A color of the stroke */
} Efl_Gfx_Stroke_Color;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Type defining stroke information. Describes the properties to define the
 * path stroke.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Stroke
 */
typedef struct _Efl_Gfx_Stroke
{
  double scale; /**< Stroke scale
                 *
                 * @since 1.14 */
  double width; /**< Stroke width
                 *
                 * @since 1.14 */
  double centered; /**< Stroke centered
                    *
                    * @since 1.14 */
  Efl_Gfx_Stroke_Color color; /**< Stroke color
                               *
                               * @since 1.14 */
  Efl_Gfx_Dash *dash; /**< Stroke dash
                       *
                       * @since 1.14 */
  unsigned int dash_length; /**< Stroke dash length
                             *
                             * @since 1.14 */
  Efl_Gfx_Cap cap; /**< Stroke cap
                    *
                    * @since 1.14 */
  Efl_Gfx_Join join; /**< Stroke join
                      *
                      * @since 1.14 */
  double miterlimit; /**< Stroke miterlimit
                      *
                      * @since 1.14 */
} Efl_Gfx_Stroke;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Public shape
 *
 * @ingroup Efl_Gfx_Shape_Public
 */
typedef struct _Efl_Gfx_Shape_Public
{
  Efl_Gfx_Stroke stroke; /**< Internal representation as stroke */
} Efl_Gfx_Shape_Public;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
typedef enum
{
  EFL_GFX_VG_COMPOSITE_METHOD_NONE = 0,
  EFL_GFX_VG_COMPOSITE_METHOD_MATTE_ALPHA,
  EFL_GFX_VG_COMPOSITE_METHOD_MATTE_ALPHA_INVERSE,
  EFL_GFX_VG_COMPOSITE_METHOD_MASK_ADD,
  EFL_GFX_VG_COMPOSITE_METHOD_MASK_SUBSTRACT,
  EFL_GFX_VG_COMPOSITE_METHOD_MASK_INTERSECT,
  EFL_GFX_VG_COMPOSITE_METHOD_MASK_DIFFERENCE
} Efl_Gfx_Vg_Composite_Method;
#endif /* EFL_BETA_API_SUPPORT */

/** How an image's center region (the complement to the border region) should
 * be rendered by EFL
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Center_Fill_Mode
 */
typedef enum
{
  EFL_GFX_CENTER_FILL_MODE_NONE = 0, /**< Image's center region is @c not to be
                                      * rendered
                                      *
                                      * @since 1.23 */
  EFL_GFX_CENTER_FILL_MODE_DEFAULT = 1, /**< Image's center region is to be
                                         * @c blended with objects underneath
                                         * it, if it has transparency. This is
                                         * the default behavior for image
                                         * objects
                                         *
                                         * @since 1.23 */
  EFL_GFX_CENTER_FILL_MODE_SOLID = 2 /**< Image's center region is to be made
                                      * solid, even if it has transparency on
                                      * it
                                      *
                                      * @since 1.23 */
} Efl_Gfx_Center_Fill_Mode;

/** What property got changed for this object
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Change_Flag
 */
typedef enum
{
  EFL_GFX_CHANGE_FLAG_NONE = 0, /**< Nothing changed.
                                 *
                                 * @since 1.22 */
  EFL_GFX_CHANGE_FLAG_MATRIX = 1, /**< Matrix got changed.
                                   *
                                   * @since 1.22 */
  EFL_GFX_CHANGE_FLAG_PATH = 2, /**< Path got changed.
                                 *
                                 * @since 1.22 */
  EFL_GFX_CHANGE_FLAG_FILL = 4, /**< Coloring or fill information changed, not
                                 * geometry.
                                 *
                                 * @since 1.22 */
  EFL_GFX_CHANGE_FLAG_ALL = 65535 /**< All properties got changed.
                                   *
                                   * @since 1.22 */
} Efl_Gfx_Change_Flag;

#ifdef EFL_BETA_API_SUPPORT
/** Data sent along a "render,post" event, after a frame has been rendered.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Event_Render_Post
 */
typedef struct _Efl_Gfx_Event_Render_Post
{
  Eina_List *updated_area; /**< A list of rectangles that were updated in the
                            * canvas.
                            *
                            * @since 1.23 */
} Efl_Gfx_Event_Render_Post;
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Aspect types/policies for scaling size hints.
 *
 * See also @ref efl_gfx_hint_aspect_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Hint_Aspect
 */
typedef enum
{
  EFL_GFX_HINT_ASPECT_NONE = 0, /**< No preference on either direction of the
                                 * container for aspect ratio control.
                                 *
                                 * @since 1.23 */
  EFL_GFX_HINT_ASPECT_NEITHER = 1, /**< Same effect as disabling aspect ratio
                                    * preference
                                    *
                                    * @since 1.23 */
  EFL_GFX_HINT_ASPECT_HORIZONTAL = 2, /**< Use all horizontal container space to
                                       * place an object, using the given
                                       * aspect.
                                       *
                                       * @since 1.23 */
  EFL_GFX_HINT_ASPECT_VERTICAL = 3, /**< Use all vertical container space to
                                     * place an object, using the given aspect.
                                     *
                                     * @since 1.23 */
  EFL_GFX_HINT_ASPECT_BOTH = 4 /**< Use all horizontal and vertical container
                                * spaces to place an object (never growing it
                                * out of those bounds), using the given aspect.
                                *
                                * @since 1.23 */
} Efl_Gfx_Hint_Aspect;

#ifdef EFL_BETA_API_SUPPORT
/** Efl Gfx Color Class layer enum
 *
 * @ingroup Efl_Gfx_Color_Class_Layer
 */
typedef enum
{
  EFL_GFX_COLOR_CLASS_LAYER_NORMAL = 0, /**< Default color */
  EFL_GFX_COLOR_CLASS_LAYER_OUTLINE, /**< Outline color */
  EFL_GFX_COLOR_CLASS_LAYER_SHADOW /**< Shadow color */
} Efl_Gfx_Color_Class_Layer;
#endif /* EFL_BETA_API_SUPPORT */

/** Efl font size type
 *
 * @since 1.24
 *
 * @ingroup Efl_Font_Size
 */
typedef int Efl_Font_Size;


#endif

#endif
