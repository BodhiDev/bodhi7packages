#ifndef _EFL_TEXT_STYLE_EO_H_
#define _EFL_TEXT_STYLE_EO_H_

#ifndef _EFL_TEXT_STYLE_EO_CLASS_TYPE
#define _EFL_TEXT_STYLE_EO_CLASS_TYPE

typedef Eo Efl_Text_Style;

#endif

#ifndef _EFL_TEXT_STYLE_EO_TYPES
#define _EFL_TEXT_STYLE_EO_TYPES

/** Type of background to use behind each line of text.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style_Background_Type
 */
typedef enum
{
  EFL_TEXT_STYLE_BACKGROUND_TYPE_NONE = 0, /**< Do not use background.
                                            *
                                            * @since 1.24 */
  EFL_TEXT_STYLE_BACKGROUND_TYPE_SOLID_COLOR /**< Use a solid-color rectangle as
                                              * background. Requires
                                              * @ref efl_text_background_color_get.
                                              *
                                              * @since 1.24 */
} Efl_Text_Style_Background_Type;

/** Whether to add a strike-through decoration to the displayed text or not.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style_Strikethrough_Type
 */
typedef enum
{
  EFL_TEXT_STYLE_STRIKETHROUGH_TYPE_NONE = 0, /**< Do not use strike-through.
                                               *
                                               * @since 1.24 */
  EFL_TEXT_STYLE_STRIKETHROUGH_TYPE_SINGLE /**< Strike-through with a single
                                            * line. Requires
                                            * @ref efl_text_strikethrough_color_get.
                                            *
                                            * @since 1.24 */
} Efl_Text_Style_Strikethrough_Type;

/** Effect to apply to the displayed text.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style_Effect_Type
 */
typedef enum
{
  EFL_TEXT_STYLE_EFFECT_TYPE_NONE = 0, /**< No effect.
                                        *
                                        * @since 1.24 */
  EFL_TEXT_STYLE_EFFECT_TYPE_SHADOW, /**< Shadow effect. Uses
                                      * @ref efl_text_shadow_color_get and
                                      * @ref efl_text_shadow_direction_get.
                                      *
                                      * @since 1.24 */
  EFL_TEXT_STYLE_EFFECT_TYPE_FAR_SHADOW, /**< Far shadow effect. Uses
                                          * @ref efl_text_shadow_color_get and
                                          * @ref efl_text_shadow_direction_get.
                                          *
                                          * @since 1.24 */
  EFL_TEXT_STYLE_EFFECT_TYPE_SOFT_SHADOW, /**< Soft shadow effect. Uses
                                           * @ref efl_text_shadow_color_get and
                                           * @ref efl_text_shadow_direction_get.
                                           *
                                           * @since 1.24 */
  EFL_TEXT_STYLE_EFFECT_TYPE_FAR_SOFT_SHADOW, /**< Far and soft shadow effect.
                                               * Uses
                                               * @ref efl_text_shadow_color_get
                                               * and
                                               * @ref efl_text_shadow_direction_get.
                                               *
                                               * @since 1.24 */
  EFL_TEXT_STYLE_EFFECT_TYPE_GLOW, /**< Glow effect. Uses
                                    * @ref efl_text_glow_color_get and
                                    * @ref efl_text_secondary_glow_color_get.
                                    *
                                    * @since 1.24 */
  EFL_TEXT_STYLE_EFFECT_TYPE_OUTLINE, /**< Outline effect. Uses
                                       * @ref efl_text_outline_color_get.
                                       *
                                       * @since 1.24 */
  EFL_TEXT_STYLE_EFFECT_TYPE_SOFT_OUTLINE, /**< Soft outline effect. Uses
                                            * @ref efl_text_outline_color_get.
                                            *
                                            * @since 1.24 */
  EFL_TEXT_STYLE_EFFECT_TYPE_OUTLINE_SHADOW, /**< Outline + shadow effect. Uses
                                              * @ref efl_text_shadow_color_get,
                                              * @ref efl_text_shadow_direction_get
                                              * and
                                              * @ref efl_text_outline_color_get.
                                              *
                                              * @since 1.24 */
  EFL_TEXT_STYLE_EFFECT_TYPE_OUTLINE_SOFT_SHADOW /**< Outline + soft shadow
                                                  * effect. Uses
                                                  * @ref efl_text_shadow_color_get,
                                                  * @ref efl_text_shadow_direction_get
                                                  * and
                                                  * @ref efl_text_outline_color_get.
                                                  *
                                                  * @since 1.24 */
} Efl_Text_Style_Effect_Type;

/** Direction of the shadow effect.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style_Shadow_Direction
 */
typedef enum
{
  EFL_TEXT_STYLE_SHADOW_DIRECTION_BOTTOM_RIGHT = 0, /**< Shadow towards bottom
                                                     * right.
                                                     *
                                                     * @since 1.24 */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_BOTTOM, /**< Shadow towards bottom.
                                           *
                                           * @since 1.24 */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_BOTTOM_LEFT, /**< Shadow towards bottom left.
                                                *
                                                * @since 1.24 */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_LEFT, /**< Shadow towards left.
                                         *
                                         * @since 1.24 */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_TOP_LEFT, /**< Shadow towards top left.
                                             *
                                             * @since 1.24 */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_TOP, /**< Shadow towards top.
                                        *
                                        * @since 1.24 */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_TOP_RIGHT, /**< Shadow towards top right.
                                              *
                                              * @since 1.24 */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_RIGHT /**< Shadow towards right.
                                         *
                                         * @since 1.24 */
} Efl_Text_Style_Shadow_Direction;

/** Type of underline for the displayed text.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style_Underline_Type
 */
typedef enum
{
  EFL_TEXT_STYLE_UNDERLINE_TYPE_NONE = 0, /**< Text without underline.
                                           *
                                           * @since 1.24 */
  EFL_TEXT_STYLE_UNDERLINE_TYPE_SINGLE, /**< Underlined with a single line.
                                         * Requires
                                         * @ref efl_text_underline_color_get.
                                         *
                                         * @since 1.24 */
  EFL_TEXT_STYLE_UNDERLINE_TYPE_DOUBLE, /**< Underlined with a double line.
                                         * Requires
                                         * @ref efl_text_underline_color_get
                                         * and
                                         * @ref efl_text_secondary_underline_color_get.
                                         *
                                         * @since 1.24 */
  EFL_TEXT_STYLE_UNDERLINE_TYPE_DASHED /**< Underlined with a dashed line.
                                        * Requires
                                        * @ref efl_text_underline_dashed_color_get,
                                        * @ref efl_text_underline_dashed_width_get
                                        * and
                                        * @ref efl_text_underline_dashed_gap_get.
                                        *
                                        * @since 1.24 */
} Efl_Text_Style_Underline_Type;


#endif
/**
 * @brief Decorations to add to the text.
 *
 * Decorations include text color, glow, outline, underline, strike-through and
 * shadows.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
#define EFL_TEXT_STYLE_INTERFACE efl_text_style_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_text_style_interface_get(void) EINA_CONST;

/**
 * @brief Color of text, excluding all other decorations. By default it is
 * invisible.
 *
 * @param[in] obj The object.
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of text, excluding all other decorations. By default it is
 * invisible.
 *
 * @param[in] obj The object.
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Type of background to use behind each line of text.
 *
 * @param[in] obj The object.
 * @param[in] type Background type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_background_type_set(Eo *obj, Efl_Text_Style_Background_Type type);

/**
 * @brief Type of background to use behind each line of text.
 *
 * @param[in] obj The object.
 *
 * @return Background type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK Efl_Text_Style_Background_Type efl_text_background_type_get(const Eo *obj);

/**
 * @brief Color of the background behind each line of text. By default it is
 * invisible.
 *
 * @param[in] obj The object.
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_background_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of the background behind each line of text. By default it is
 * invisible.
 *
 * @param[in] obj The object.
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_background_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Type of underline to use for the text.
 *
 * @param[in] obj The object.
 * @param[in] type Underline type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_underline_type_set(Eo *obj, Efl_Text_Style_Underline_Type type);

/**
 * @brief Type of underline to use for the text.
 *
 * @param[in] obj The object.
 *
 * @return Underline type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK Efl_Text_Style_Underline_Type efl_text_underline_type_get(const Eo *obj);

/**
 * @brief Color of the primary underline. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_underline_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of the primary underline. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_underline_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Width (in pixels) of the single underline when
 * @ref efl_text_underline_type_get is
 * @ref EFL_TEXT_STYLE_UNDERLINE_TYPE_SINGLE.
 *
 * @param[in] obj The object.
 * @param[in] height Underline width in pixels.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_underline_height_set(Eo *obj, double height);

/**
 * @brief Width (in pixels) of the single underline when
 * @ref efl_text_underline_type_get is
 * @ref EFL_TEXT_STYLE_UNDERLINE_TYPE_SINGLE.
 *
 * @param[in] obj The object.
 *
 * @return Underline width in pixels.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK double efl_text_underline_height_get(const Eo *obj);

/**
 * @brief Color of the dashed underline. Only valid when
 * @ref efl_text_underline_type_get is
 * @ref EFL_TEXT_STYLE_UNDERLINE_TYPE_DASHED. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_underline_dashed_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of the dashed underline. Only valid when
 * @ref efl_text_underline_type_get is
 * @ref EFL_TEXT_STYLE_UNDERLINE_TYPE_DASHED. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_underline_dashed_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Length (in pixels) of the dashes when
 * @ref efl_text_underline_type_get is
 * @ref EFL_TEXT_STYLE_UNDERLINE_TYPE_DASHED.
 *
 * @param[in] obj The object.
 * @param[in] width Dash length in pixels.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_underline_dashed_width_set(Eo *obj, int width);

/**
 * @brief Length (in pixels) of the dashes when
 * @ref efl_text_underline_type_get is
 * @ref EFL_TEXT_STYLE_UNDERLINE_TYPE_DASHED.
 *
 * @param[in] obj The object.
 *
 * @return Dash length in pixels.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK int efl_text_underline_dashed_width_get(const Eo *obj);

/**
 * @brief Length (in pixels) of the gaps between the dashes when
 * @ref efl_text_underline_type_get is
 * @ref EFL_TEXT_STYLE_UNDERLINE_TYPE_DASHED.
 *
 * @param[in] obj The object.
 * @param[in] gap Gap length in pixels.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_underline_dashed_gap_set(Eo *obj, int gap);

/**
 * @brief Length (in pixels) of the gaps between the dashes when
 * @ref efl_text_underline_type_get is
 * @ref EFL_TEXT_STYLE_UNDERLINE_TYPE_DASHED.
 *
 * @param[in] obj The object.
 *
 * @return Gap length in pixels.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK int efl_text_underline_dashed_gap_get(const Eo *obj);

/**
 * @brief Color of the secondary underline. Only valid when
 * @ref efl_text_underline_type_get is
 * @ref EFL_TEXT_STYLE_UNDERLINE_TYPE_DOUBLE. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_secondary_underline_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of the secondary underline. Only valid when
 * @ref efl_text_underline_type_get is
 * @ref EFL_TEXT_STYLE_UNDERLINE_TYPE_DOUBLE. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_secondary_underline_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Enables crossed-out text.
 *
 * @param[in] obj The object.
 * @param[in] type Strike-through type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_strikethrough_type_set(Eo *obj, Efl_Text_Style_Strikethrough_Type type);

/**
 * @brief Enables crossed-out text.
 *
 * @param[in] obj The object.
 *
 * @return Strike-through type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK Efl_Text_Style_Strikethrough_Type efl_text_strikethrough_type_get(const Eo *obj);

/**
 * @brief Color of the line striking through the text. By default it is
 * invisible.
 *
 * @param[in] obj The object.
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_strikethrough_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of the line striking through the text. By default it is
 * invisible.
 *
 * @param[in] obj The object.
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_strikethrough_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Controls a number of decorations around the text, like shadow,
 * outline and glow, including combinations of them.
 *
 * @param[in] obj The object.
 * @param[in] type Effect type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_effect_type_set(Eo *obj, Efl_Text_Style_Effect_Type type);

/**
 * @brief Controls a number of decorations around the text, like shadow,
 * outline and glow, including combinations of them.
 *
 * @param[in] obj The object.
 *
 * @return Effect type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK Efl_Text_Style_Effect_Type efl_text_effect_type_get(const Eo *obj);

/**
 * @brief Color of the text outline. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_outline_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of the text outline. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_outline_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Direction of the shadow effect.
 *
 * @param[in] obj The object.
 * @param[in] type Shadow direction.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_shadow_direction_set(Eo *obj, Efl_Text_Style_Shadow_Direction type);

/**
 * @brief Direction of the shadow effect.
 *
 * @param[in] obj The object.
 *
 * @return Shadow direction.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK Efl_Text_Style_Shadow_Direction efl_text_shadow_direction_get(const Eo *obj);

/**
 * @brief Color of the text shadow. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_shadow_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of the text shadow. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_shadow_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Color of the text glow. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_glow_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of the text glow. By default it is invisible.
 *
 * @param[in] obj The object.
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_glow_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Color of the secondary glow decoration. This is the color of the
 * inner glow (where it touches the text) which gradually fades into
 * @ref efl_text_glow_color_get as it reaches the outer edge. By default it is
 * invisible.
 *
 * @param[in] obj The object.
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_secondary_glow_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of the secondary glow decoration. This is the color of the
 * inner glow (where it touches the text) which gradually fades into
 * @ref efl_text_glow_color_get as it reaches the outer edge. By default it is
 * invisible.
 *
 * @param[in] obj The object.
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_secondary_glow_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Program that applies a special filter
 *
 * See @ref Efl_Gfx_Filter.
 *
 * @param[in] obj The object.
 * @param[in] code Filter code.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK void efl_text_gfx_filter_set(Eo *obj, const char *code);

/**
 * @brief Program that applies a special filter
 *
 * See @ref Efl_Gfx_Filter.
 *
 * @param[in] obj The object.
 *
 * @return Filter code.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Style
 */
EAPI EAPI_WEAK const char *efl_text_gfx_filter_get(const Eo *obj);

#endif
