#ifndef _EFL_CANVAS_LAYOUT_PART_TEXT_EO_H_
#define _EFL_CANVAS_LAYOUT_PART_TEXT_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_PART_TEXT_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_PART_TEXT_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Part_Text;

#endif

#ifndef _EFL_CANVAS_LAYOUT_PART_TEXT_EO_TYPES
#define _EFL_CANVAS_LAYOUT_PART_TEXT_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Text layout policy to enforce. If none is set, only min/max descriptions
 * are taken into account.
 *
 * @ingroup Efl_Canvas_Layout_Part_Text_Expand
 */
typedef enum
{
  EFL_CANVAS_LAYOUT_PART_TEXT_EXPAND_NONE = 0, /**< No policy. Use default
                                                * description parameters. */
  EFL_CANVAS_LAYOUT_PART_TEXT_EXPAND_MIN_X = 1, /**< Text is tied to the left
                                                 * side of the container. */
  EFL_CANVAS_LAYOUT_PART_TEXT_EXPAND_MIN_Y = 2 /* 1 >> 1 */, /**< Text is tied to the top side of the
                                                              * container. */
  EFL_CANVAS_LAYOUT_PART_TEXT_EXPAND_MAX_X = 4 /* 1 >> 2 */, /**< Text is tied to the right side of
                                                              * the container. */
  EFL_CANVAS_LAYOUT_PART_TEXT_EXPAND_MAX_Y = 8 /* 1 >> 3 */ /**< Text is tied to the bottom side of
                                                             * the container. */
} Efl_Canvas_Layout_Part_Text_Expand;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Represents a TEXT part of a layout
 *
 * Its lifetime is limited to one function call only, unless an extra reference
 * is explicitly held.
 *
 * @ingroup Efl_Canvas_Layout_Part_Text
 */
#define EFL_CANVAS_LAYOUT_PART_TEXT_CLASS efl_canvas_layout_part_text_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_canvas_layout_part_text_class_get(void) EINA_CONST;

/**
 * @brief Sizing policy for text parts.
 *
 * This will determine whether to consider height or width constraints, if
 * text-specific behaviors occur (such as ellipsis, line-wrapping etc.
 *
 * @param[in] obj The object.
 * @param[in] type Desired sizing policy.
 *
 * @ingroup Efl_Canvas_Layout_Part_Text
 */
EAPI EAPI_WEAK void efl_canvas_layout_part_text_expand_set(Eo *obj, Efl_Canvas_Layout_Part_Text_Expand type);

/**
 * @brief Sizing policy for text parts.
 *
 * This will determine whether to consider height or width constraints, if
 * text-specific behaviors occur (such as ellipsis, line-wrapping etc.
 *
 * @param[in] obj The object.
 *
 * @return Desired sizing policy.
 *
 * @ingroup Efl_Canvas_Layout_Part_Text
 */
EAPI EAPI_WEAK Efl_Canvas_Layout_Part_Text_Expand efl_canvas_layout_part_text_expand_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
