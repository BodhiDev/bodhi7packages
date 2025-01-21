#ifndef _EFL_ACCESS_TEXT_EO_H_
#define _EFL_ACCESS_TEXT_EO_H_

#ifndef _EFL_ACCESS_TEXT_EO_CLASS_TYPE
#define _EFL_ACCESS_TEXT_EO_CLASS_TYPE

typedef Eo Efl_Access_Text;

#endif

#ifndef _EFL_ACCESS_TEXT_EO_TYPES
#define _EFL_ACCESS_TEXT_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Text accessibility granularity
 *
 * @ingroup Efl_Access_Text_Granularity
 */
typedef enum
{
  EFL_ACCESS_TEXT_GRANULARITY_CHAR = 0, /**< Character granularity */
  EFL_ACCESS_TEXT_GRANULARITY_WORD, /**< Word granularity */
  EFL_ACCESS_TEXT_GRANULARITY_SENTENCE, /**< Sentence granularity */
  EFL_ACCESS_TEXT_GRANULARITY_LINE, /**< Line granularity */
  EFL_ACCESS_TEXT_GRANULARITY_PARAGRAPH /**< Paragraph granularity */
} Efl_Access_Text_Granularity;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Text clip type
 *
 * @ingroup Efl_Access_Text_Clip_Type
 */
typedef enum
{
  EFL_ACCESS_TEXT_CLIP_TYPE_NONE = 0, /**< No clip type */
  EFL_ACCESS_TEXT_CLIP_TYPE_MIN, /**< Minimum clip type */
  EFL_ACCESS_TEXT_CLIP_TYPE_MAX, /**< Maximum clip type */
  EFL_ACCESS_TEXT_CLIP_TYPE_BOTH /**< Both clip types */
} Efl_Access_Text_Clip_Type;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Text attribute
 *
 * @ingroup Efl_Access_Text_Attribute
 */
typedef struct _Efl_Access_Text_Attribute
{
  const char *name; /**< Text attribute name */
  const char *value; /**< Text attribute value */
} Efl_Access_Text_Attribute;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Text range
 *
 * @ingroup Efl_Access_Text_Range
 */
typedef struct _Efl_Access_Text_Range
{
  int start_offset; /**< Range start offset */
  int end_offset; /**< Range end offset */
  const char *content; /**< Range content */
} Efl_Access_Text_Range;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Text change information
 *
 * @ingroup Efl_Access_Text_Change_Info
 */
typedef struct _Efl_Access_Text_Change_Info
{
  const char *content; /**< Change content */
  Eina_Bool inserted; /**< @c true if text got inserted */
  size_t pos; /**< Change position */
  size_t len; /**< Change length */
} Efl_Access_Text_Change_Info;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary accessible text interface
 *
 * @ingroup Efl_Access_Text
 */
#define EFL_ACCESS_TEXT_INTERFACE efl_access_text_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_access_text_interface_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Gets single character present in accessible widget's text at given
 * offset.
 *
 * @param[in] obj The object.
 * @param[in] offset Position in text.
 *
 * @return Character at offset. 0 when out-of bounds offset has been given.
 * Codepoints between DC80 and DCFF indicate that string includes invalid UTF8
 * chars.
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK Eina_Unicode efl_access_text_character_get(const Eo *obj, int offset);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Gets string, start and end offset in text according to given initial
 * offset and granularity.
 *
 * @param[in] obj The object.
 * @param[in] granularity Text granularity
 * @param[out] start_offset Offset indicating start of string according to
 * given granularity. -1 in case of error.
 * @param[out] end_offset Offset indicating end of string according to given
 * granularity. -1 in case of error.
 * @param[out] string Newly allocated UTF-8 encoded string. Must be free by a
 * user.
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK void efl_access_text_string_get(const Eo *obj, Efl_Access_Text_Granularity granularity, int *start_offset, int *end_offset, char **string EFL_TRANSFER_OWNERSHIP);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Gets text of accessible widget.
 *
 * @param[in] obj The object.
 * @param[in] start_offset Position in text.
 * @param[in] end_offset End offset of text.
 *
 * @return UTF-8 encoded text.
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK char *efl_access_text_get(const Eo *obj, int start_offset, int end_offset) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Offset position of the caret (cursor).
 *
 * @param[in] obj The object.
 * @param[in] offset Offset
 *
 * @return @c true if caret was successfully moved, @c false otherwise.
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_text_caret_offset_set(Eo *obj, int offset);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Offset position of the caret (cursor).
 *
 * @param[in] obj The object.
 *
 * @return Offset
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK int efl_access_text_caret_offset_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Indicate if a text attribute with a given name is set
 *
 * @param[in] obj The object.
 * @param[in] name Text attribute name
 * @param[out] start_offset Position in text from which given attribute is set.
 * @param[out] end_offset Position in text to which given attribute is set.
 * @param[out] value Value of text attribute. Should be free()
 *
 * @return @c true if attribute name is set, @c false otherwise
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_text_attribute_get(const Eo *obj, const char *name, int *start_offset, int *end_offset, char **value EFL_TRANSFER_OWNERSHIP);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Gets list of all text attributes.
 *
 * @param[in] obj The object.
 * @param[out] start_offset Start offset
 * @param[out] end_offset End offset
 * @param[out] attributes List of text attributes
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK void efl_access_text_attributes_get(const Eo *obj, int *start_offset, int *end_offset, Eina_List **attributes EFL_TRANSFER_OWNERSHIP);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Default attributes
 *
 * @param[in] obj The object.
 *
 * @return List of default attributes
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK Eina_List *efl_access_text_default_attributes_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Character extents
 *
 * @param[in] obj The object.
 * @param[in] offset Offset
 * @param[in] screen_coords If @c true, x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[out] rect Extents rectangle
 *
 * @return @c true if character extents, @c false otherwise
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_text_character_extents_get(const Eo *obj, int offset, Eina_Bool screen_coords, Eina_Rect *rect);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Character count
 *
 * @param[in] obj The object.
 *
 * @return Character count
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK int efl_access_text_character_count_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Offset at given point
 *
 * @param[in] obj The object.
 * @param[in] screen_coords If @c true, x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 *
 * @return Offset
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK int efl_access_text_offset_at_point_get(const Eo *obj, Eina_Bool screen_coords, int x, int y);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Bounded ranges
 *
 * @param[in] obj The object.
 * @param[in] screen_coords If @c true, x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] rect Bounding box
 * @param[in] xclip xclip
 * @param[in] yclip yclip
 *
 * @return List of ranges
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK Eina_List *efl_access_text_bounded_ranges_get(const Eo *obj, Eina_Bool screen_coords, Eina_Rect rect, Efl_Access_Text_Clip_Type xclip, Efl_Access_Text_Clip_Type yclip) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Range extents
 *
 * @param[in] obj The object.
 * @param[in] screen_coords If @c true, x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] start_offset Start offset
 * @param[in] end_offset End offset
 * @param[out] rect Range rectangle
 *
 * @return @c true if range extents, @c false otherwise
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_text_range_extents_get(const Eo *obj, Eina_Bool screen_coords, int start_offset, int end_offset, Eina_Rect *rect);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Selection count property
 *
 * @param[in] obj The object.
 *
 * @return Selection counter
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK int efl_access_text_selections_count_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Selection property
 *
 * @param[in] obj The object.
 * @param[in] selection_number Selection number for identification
 * @param[in] start_offset Selection start offset
 * @param[in] end_offset Selection end offset
 *
 * @return @c true if selection was set, @c false otherwise
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_text_access_selection_set(Eo *obj, int selection_number, int start_offset, int end_offset);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Selection property
 *
 * @param[in] obj The object.
 * @param[in] selection_number Selection number for identification
 * @param[out] start_offset Selection start offset
 * @param[out] end_offset Selection end offset
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK void efl_access_text_access_selection_get(const Eo *obj, int selection_number, int *start_offset, int *end_offset);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Add selection
 *
 * @param[in] obj The object.
 * @param[in] start_offset Start selection from this offset
 * @param[in] end_offset End selection at this offset
 *
 * @return @c true if selection was added, @c false otherwise
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_text_selection_add(Eo *obj, int start_offset, int end_offset);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
/**
 * @brief Remove selection
 *
 * @param[in] obj The object.
 * @param[in] selection_number Selection number to be removed
 *
 * @return @c true if selection was removed, @c false otherwise
 *
 * @ingroup Efl_Access_Text
 */
EAPI EAPI_WEAK Eina_Bool efl_access_text_selection_remove(Eo *obj, int selection_number);
#endif
#endif /* EFL_BETA_API_SUPPORT */

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED;

/** Caret moved
 *
 * @ingroup Efl_Access_Text
 */
#define EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED (&(_EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_INSERTED;

/** Text was inserted
 * @return Efl_Access_Text_Change_Info
 *
 * @ingroup Efl_Access_Text
 */
#define EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_INSERTED (&(_EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_INSERTED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_REMOVED;

/** Text was removed
 * @return Efl_Access_Text_Change_Info
 *
 * @ingroup Efl_Access_Text
 */
#define EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_REMOVED (&(_EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_REMOVED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED;

/** Text selection has changed
 *
 * @ingroup Efl_Access_Text
 */
#define EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED (&(_EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
