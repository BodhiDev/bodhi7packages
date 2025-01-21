#ifndef _EFL_TEXT_FONT_PROPERTIES_EO_H_
#define _EFL_TEXT_FONT_PROPERTIES_EO_H_

#ifndef _EFL_TEXT_FONT_PROPERTIES_EO_CLASS_TYPE
#define _EFL_TEXT_FONT_PROPERTIES_EO_CLASS_TYPE

typedef Eo Efl_Text_Font_Properties;

#endif

#ifndef _EFL_TEXT_FONT_PROPERTIES_EO_TYPES
#define _EFL_TEXT_FONT_PROPERTIES_EO_TYPES

/** The weight of a particular font is the thickness of the character outlines
 * relative to their height. The given numerical values follow the TrueType
 * scale (from 100 to 900) and are approximate. It is up to each font to
 * provide all of them.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Weight
 */
typedef enum
{
  EFL_TEXT_FONT_WEIGHT_NORMAL = 0, /**< Normal font weight (400).
                                    *
                                    * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_THIN, /**< Thin font weight (100).
                              *
                              * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_ULTRALIGHT, /**< Ultralight font weight (200).
                                    *
                                    * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_EXTRALIGHT, /**< Extralight font weight (200).
                                    *
                                    * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_LIGHT, /**< Light font weight (300).
                               *
                               * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_BOOK, /**< Book font weight (350).
                              *
                              * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_MEDIUM, /**< Medium font weight (500).
                                *
                                * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_SEMIBOLD, /**< Semibold font weight (600).
                                  *
                                  * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_BOLD, /**< Bold font weight (700).
                              *
                              * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_ULTRABOLD, /**< Ultrabold font weight (800).
                                   *
                                   * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_EXTRABOLD, /**< Extrabold font weight (800).
                                   *
                                   * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_BLACK, /**< Black font weight (900).
                               *
                               * @since 1.24 */
  EFL_TEXT_FONT_WEIGHT_EXTRABLACK /**< Extrablack font weight (950).
                                   *
                                   * @since 1.24 */
} Efl_Text_Font_Weight;

/** Font width relative to its height. It is up to each font to provide all
 * these widths.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Width
 */
typedef enum
{
  EFL_TEXT_FONT_WIDTH_NORMAL = 0, /**< Normal font width.
                                   *
                                   * @since 1.24 */
  EFL_TEXT_FONT_WIDTH_ULTRACONDENSED, /**< Ultracondensed font width.
                                       *
                                       * @since 1.24 */
  EFL_TEXT_FONT_WIDTH_EXTRACONDENSED, /**< Extracondensed font width.
                                       *
                                       * @since 1.24 */
  EFL_TEXT_FONT_WIDTH_CONDENSED, /**< Condensed font width.
                                  *
                                  * @since 1.24 */
  EFL_TEXT_FONT_WIDTH_SEMICONDENSED, /**< Semicondensed font width.
                                      *
                                      * @since 1.24 */
  EFL_TEXT_FONT_WIDTH_SEMIEXPANDED, /**< Semiexpanded font width.
                                     *
                                     * @since 1.24 */
  EFL_TEXT_FONT_WIDTH_EXPANDED, /**< Expanded font width.
                                 *
                                 * @since 1.24 */
  EFL_TEXT_FONT_WIDTH_EXTRAEXPANDED, /**< Extraexpanded font width.
                                      *
                                      * @since 1.24 */
  EFL_TEXT_FONT_WIDTH_ULTRAEXPANDED /**< Ultraexpanded font width.
                                     *
                                     * @since 1.24 */
} Efl_Text_Font_Width;

/** Type of font slant.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Slant
 */
typedef enum
{
  EFL_TEXT_FONT_SLANT_NORMAL = 0, /**< Normal font slant: Sets the text to the
                                   * normal font (non-italicized).
                                   *
                                   * @since 1.24 */
  EFL_TEXT_FONT_SLANT_OBLIQUE, /**< Oblique font slant: Sets the text to use a
                                * simulated version of an italic font, created
                                * by algorithmically slanting the normal
                                * version.
                                *
                                * @since 1.24 */
  EFL_TEXT_FONT_SLANT_ITALIC /**< Italic font slant: Sets the text to use the
                              * italic version of the font if available. If not
                              * available, it will simulate italics with
                              * oblique instead.
                              *
                              * @since 1.24 */
} Efl_Text_Font_Slant;

/** When are bitmap fonts allowed to be scaled.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Bitmap_Scalable
 */
typedef enum
{
  EFL_TEXT_FONT_BITMAP_SCALABLE_NONE = 0, /**< Disable scaling for bitmap fonts.
                                           *
                                           * @since 1.24 */
  EFL_TEXT_FONT_BITMAP_SCALABLE_COLOR = 1 /* 1 >> 0 */ /**< Enable scaling for
                                                        * color bitmap fonts.
                                                        *
                                                        * @since 1.24 */
} Efl_Text_Font_Bitmap_Scalable;


#endif
/** Properties related to font handling.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
#define EFL_TEXT_FONT_PROPERTIES_INTERFACE efl_text_font_properties_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_text_font_properties_interface_get(void) EINA_CONST;

/**
 * @brief The font family, filename for a given text object.
 *
 * This property controls the font name of a text object. The font string has
 * to follow fontconfig's convention for naming fonts, as it's the underlying
 * library used to query system fonts by EFL (see the <tt>fc-list</tt>
 * command's output, on your system, to get an idea). Alternatively, you can
 * use the full path to a font file.
 *
 * When reading it, the font name string is still owned by EFL and should not
 * be freed. See also @ref efl_text_font_source_get.
 *
 * @param[in] obj The object.
 * @param[in] font The font family name or filename.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK void efl_text_font_family_set(Eo *obj, const char *font);

/**
 * @brief The font family, filename for a given text object.
 *
 * This property controls the font name of a text object. The font string has
 * to follow fontconfig's convention for naming fonts, as it's the underlying
 * library used to query system fonts by EFL (see the <tt>fc-list</tt>
 * command's output, on your system, to get an idea). Alternatively, you can
 * use the full path to a font file.
 *
 * When reading it, the font name string is still owned by EFL and should not
 * be freed. See also @ref efl_text_font_source_get.
 *
 * @param[in] obj The object.
 *
 * @return The font family name or filename.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK const char *efl_text_font_family_get(const Eo *obj);

/**
 * @brief The font size to use, in points.
 *
 * If the specified @ref efl_text_font_family_get does not provide this
 * particular size, it will be scaled.
 *
 * @param[in] obj The object.
 * @param[in] size The font size, in points.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK void efl_text_font_size_set(Eo *obj, Efl_Font_Size size);

/**
 * @brief The font size to use, in points.
 *
 * If the specified @ref efl_text_font_family_get does not provide this
 * particular size, it will be scaled.
 *
 * @param[in] obj The object.
 *
 * @return The font size, in points.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK Efl_Font_Size efl_text_font_size_get(const Eo *obj);

/**
 * @brief The font (source) file to be used on a given text object.
 *
 * This function allows the font file to be explicitly set for a given text
 * object, overriding system lookup, which will first occur in the given file's
 * contents.
 *
 * See also @ref efl_text_font_family_get.
 *
 * @param[in] obj The object.
 * @param[in] font_source The font file's path.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK void efl_text_font_source_set(Eo *obj, const char *font_source);

/**
 * @brief The font (source) file to be used on a given text object.
 *
 * This function allows the font file to be explicitly set for a given text
 * object, overriding system lookup, which will first occur in the given file's
 * contents.
 *
 * See also @ref efl_text_font_family_get.
 *
 * @param[in] obj The object.
 *
 * @return The font file's path.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK const char *efl_text_font_source_get(const Eo *obj);

/**
 * @brief Comma-separated list of font fallbacks.
 *
 * Will be used in case the primary font isn't available.
 *
 * @param[in] obj The object.
 * @param[in] font_fallbacks List of fallback font names.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK void efl_text_font_fallbacks_set(Eo *obj, const char *font_fallbacks);

/**
 * @brief Comma-separated list of font fallbacks.
 *
 * Will be used in case the primary font isn't available.
 *
 * @param[in] obj The object.
 *
 * @return List of fallback font names.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK const char *efl_text_font_fallbacks_get(const Eo *obj);

/**
 * @brief Type of weight (e.g. bold or normal) of the displayed font
 *
 * Default is @ref EFL_TEXT_FONT_WEIGHT_NORMAL.
 *
 * @param[in] obj The object.
 * @param[in] font_weight Font weight.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK void efl_text_font_weight_set(Eo *obj, Efl_Text_Font_Weight font_weight);

/**
 * @brief Type of weight (e.g. bold or normal) of the displayed font
 *
 * Default is @ref EFL_TEXT_FONT_WEIGHT_NORMAL.
 *
 * @param[in] obj The object.
 *
 * @return Font weight.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK Efl_Text_Font_Weight efl_text_font_weight_get(const Eo *obj);

/**
 * @brief Type of slant (e.g. italic or normal) of the displayed font.
 *
 * Default is @ref EFL_TEXT_FONT_SLANT_NORMAL.
 *
 * @param[in] obj The object.
 * @param[in] style Font slant.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK void efl_text_font_slant_set(Eo *obj, Efl_Text_Font_Slant style);

/**
 * @brief Type of slant (e.g. italic or normal) of the displayed font.
 *
 * Default is @ref EFL_TEXT_FONT_SLANT_NORMAL.
 *
 * @param[in] obj The object.
 *
 * @return Font slant.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK Efl_Text_Font_Slant efl_text_font_slant_get(const Eo *obj);

/**
 * @brief Type of width (e.g. condensed, expanded or normal) of the displayed
 * font.
 *
 * Default is @ref EFL_TEXT_FONT_WIDTH_NORMAL.
 *
 * @param[in] obj The object.
 * @param[in] width Font width.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK void efl_text_font_width_set(Eo *obj, Efl_Text_Font_Width width);

/**
 * @brief Type of width (e.g. condensed, expanded or normal) of the displayed
 * font.
 *
 * Default is @ref EFL_TEXT_FONT_WIDTH_NORMAL.
 *
 * @param[in] obj The object.
 *
 * @return Font width.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK Efl_Text_Font_Width efl_text_font_width_get(const Eo *obj);

/**
 * @brief Specific language of the displayed font
 *
 * This is used to lookup fonts suitable to the specified language, as well as
 * helping the font shaper backend. The language @c lang can be either a code
 * e.g "en_US", "auto" to use the system locale, or "none".
 *
 * @param[in] obj The object.
 * @param[in] lang Language code.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK void efl_text_font_lang_set(Eo *obj, const char *lang);

/**
 * @brief Specific language of the displayed font
 *
 * This is used to lookup fonts suitable to the specified language, as well as
 * helping the font shaper backend. The language @c lang can be either a code
 * e.g "en_US", "auto" to use the system locale, or "none".
 *
 * @param[in] obj The object.
 *
 * @return Language code.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK const char *efl_text_font_lang_get(const Eo *obj);

/**
 * @brief Bitmap fonts have fixed size glyphs for several available sizes.
 * Other sizes need to be algorithmically scaled, resulting in blurry glyphs.
 * This property controls whether scaling of non-provided sizes is allowed.
 *
 * Default is @ref EFL_TEXT_FONT_BITMAP_SCALABLE_NONE.
 *
 * @param[in] obj The object.
 * @param[in] scalable When should bitmap fonts be scaled.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK void efl_text_font_bitmap_scalable_set(Eo *obj, Efl_Text_Font_Bitmap_Scalable scalable);

/**
 * @brief Bitmap fonts have fixed size glyphs for several available sizes.
 * Other sizes need to be algorithmically scaled, resulting in blurry glyphs.
 * This property controls whether scaling of non-provided sizes is allowed.
 *
 * Default is @ref EFL_TEXT_FONT_BITMAP_SCALABLE_NONE.
 *
 * @param[in] obj The object.
 *
 * @return When should bitmap fonts be scaled.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Font_Properties
 */
EAPI EAPI_WEAK Efl_Text_Font_Bitmap_Scalable efl_text_font_bitmap_scalable_get(const Eo *obj);

#endif
