#ifndef _EFL_CANVAS_LAYOUT_TYPES_EOT_H_
#define _EFL_CANVAS_LAYOUT_TYPES_EOT_H_

#ifndef _EFL_CANVAS_LAYOUT_TYPES_EOT_TYPES
#define _EFL_CANVAS_LAYOUT_TYPES_EOT_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Type of a part in an Efl.Canvas.Layout object (edje object).
 *
 * @ingroup Efl_Canvas_Layout_Part_Type
 */
typedef enum
{
  EFL_CANVAS_LAYOUT_PART_TYPE_NONE = 0, /**< None type value, indicates invalid
                                         * parts. */
  EFL_CANVAS_LAYOUT_PART_TYPE_RECTANGLE = 1, /**< Rectangle type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_TEXT = 2, /**< Text type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_IMAGE = 3, /**< Image type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_SWALLOW = 4, /**< Swallow  type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_TEXTBLOCK = 5, /**< Text block type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_GRADIENT = 6, /**< Gradient type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_GROUP = 7, /**< Group type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_BOX = 8, /**< Box type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_TABLE = 9, /**< Table type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_EXTERNAL = 10, /**< External type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_PROXY = 11, /**< Proxy type value. */
  EFL_CANVAS_LAYOUT_PART_TYPE_SPACER = 12, /**< Spacer type value
                                            *
                                            * @since 1.7. */
  EFL_CANVAS_LAYOUT_PART_TYPE_SNAPSHOT = 16, /**< Snapshot
                                              *
                                              * @since 1.16. */
  EFL_CANVAS_LAYOUT_PART_TYPE_VECTOR = 17, /**< Vector
                                            *
                                            * @since 1.18. */
  EFL_CANVAS_LAYOUT_PART_TYPE_LAST = 18 /**< Last type value. */
} Efl_Canvas_Layout_Part_Type;
#endif /* EFL_BETA_API_SUPPORT */


#endif

#endif
