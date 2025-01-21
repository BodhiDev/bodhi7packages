#ifndef _EFL_CANVAS_ANIMATION_TYPES_EOT_H_
#define _EFL_CANVAS_ANIMATION_TYPES_EOT_H_

#ifndef _EFL_CANVAS_ANIMATION_TYPES_EOT_TYPES
#define _EFL_CANVAS_ANIMATION_TYPES_EOT_TYPES

/** Animation repeat mode.
 *
 * @since 1.24
 *
 * @ingroup Efl_Canvas_Animation_Repeat_Mode
 */
typedef enum
{
  EFL_CANVAS_ANIMATION_REPEAT_MODE_RESTART = 0, /**< Restart animation when the
                                                 * animation ends: The
                                                 * animation will play again
                                                 * from the beginning to the
                                                 * end.
                                                 *
                                                 * @since 1.24 */
  EFL_CANVAS_ANIMATION_REPEAT_MODE_REVERSE = 1, /**< Reverse animation when the
                                                 * animation ends: The
                                                 * animation will continue
                                                 * playing from the end to the
                                                 * beginning.
                                                 *
                                                 * @since 1.24 */
  EFL_CANVAS_ANIMATION_REPEAT_MODE_LAST
} Efl_Canvas_Animation_Repeat_Mode;


#endif

#endif
