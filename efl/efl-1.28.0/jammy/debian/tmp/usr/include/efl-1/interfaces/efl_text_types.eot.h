#ifndef _EFL_TEXT_TYPES_EOT_H_
#define _EFL_TEXT_TYPES_EOT_H_

#ifndef _EFL_TEXT_TYPES_EOT_TYPES
#define _EFL_TEXT_TYPES_EOT_TYPES

/** Bidirectionaltext type
 *
 * @since 1.23
 *
 * @ingroup Efl_Text_Bidirectional_Type
 */
typedef enum
{
  EFL_TEXT_BIDIRECTIONAL_TYPE_NATURAL = 0, /**< Natural text type, same as
                                            * neutral
                                            *
                                            * @since 1.23 */
  EFL_TEXT_BIDIRECTIONAL_TYPE_NEUTRAL = 0, /**< Neutral text type, same as
                                            * natural
                                            *
                                            * @since 1.23 */
  EFL_TEXT_BIDIRECTIONAL_TYPE_LTR, /**< Left to right text type
                                    *
                                    * @since 1.23 */
  EFL_TEXT_BIDIRECTIONAL_TYPE_RTL, /**< Right to left text type
                                    *
                                    * @since 1.23 */
  EFL_TEXT_BIDIRECTIONAL_TYPE_INHERIT /**< Inherit text type
                                       *
                                       * @since 1.23 */
} Efl_Text_Bidirectional_Type;

/** Text change type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Change_Type
 */
typedef enum
{
  EFL_TEXT_CHANGE_TYPE_INSERT = 0, /**< the content was inserted.
                                    *
                                    * @since 1.24 */
  EFL_TEXT_CHANGE_TYPE_REMOVE /**< the content was removed.
                               *
                               * @since 1.24 */
} Efl_Text_Change_Type;

/**
 * @brief This structure includes all the information about content changes.
 *
 * It's meant to be used to implement undo/redo.
 *
 * @since 1.24
 *
 * @ingroup Efl_Text_Change_Info
 */
typedef struct _Efl_Text_Change_Info
{
  const char *content; /**< The content added/removed
                        *
                        * @since 1.24 */
  size_t position; /**< The position where it was added/removed
                    *
                    * @since 1.24 */
  size_t length; /**< The length of content in characters (not bytes, actual
                  * unicode characters)
                  *
                  * @since 1.24 */
  Efl_Text_Change_Type type; /**< Text change type
                              *
                              * @since 1.24 */
  Eina_Bool mergeable; /**< @c true if can be merged with the previous one. Used
                        * for example with insertion when something is already
                        * selected
                        *
                        * @since 1.24 */
} Efl_Text_Change_Info;


#endif

#endif
