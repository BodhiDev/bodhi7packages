#ifndef _EFL_UI_EOT_H_
#define _EFL_UI_EOT_H_

#ifndef _EFL_UI_EOT_TYPES
#define _EFL_UI_EOT_TYPES

EAPI EAPI_WEAK Eina_Error efl_ui_theme_apply_error_default_get(void);

/** Successfully applied the default style. The widget may look different from
 * the rest of the UI if a custom theme is in use, but it should be usable.
 *
 * @ingroup Efl_Ui_Theme_Apply_Error_DEFAULT
 */
#define EFL_UI_THEME_APPLY_ERROR_DEFAULT efl_ui_theme_apply_error_default_get()

EAPI EAPI_WEAK Eina_Error efl_ui_theme_apply_error_generic_get(void);

/** Failed to apply theme. The widget may become unusable.
 *
 * @ingroup Efl_Ui_Theme_Apply_Error_GENERIC
 */
#define EFL_UI_THEME_APPLY_ERROR_GENERIC efl_ui_theme_apply_error_generic_get()

EAPI EAPI_WEAK Eina_Error efl_ui_theme_apply_error_version_get(void);

/** The theme was applied. The widget may not function or look as expected.
 *
 * @ingroup Efl_Ui_Theme_Apply_Error_VERSION
 */
#define EFL_UI_THEME_APPLY_ERROR_VERSION efl_ui_theme_apply_error_version_get()

/** Focus directions.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Focus_Direction
 */
typedef enum
{
  EFL_UI_FOCUS_DIRECTION_PREVIOUS = 0, /**< previous direction
                                        *
                                        * @since 1.23 */
  EFL_UI_FOCUS_DIRECTION_NEXT = 1, /**< next direction
                                    *
                                    * @since 1.23 */
  EFL_UI_FOCUS_DIRECTION_UP = 2, /**< up direction
                                  *
                                  * @since 1.23 */
  EFL_UI_FOCUS_DIRECTION_DOWN = 3, /**< down direction
                                    *
                                    * @since 1.23 */
  EFL_UI_FOCUS_DIRECTION_RIGHT = 4, /**< right direction
                                     *
                                     * @since 1.23 */
  EFL_UI_FOCUS_DIRECTION_LEFT = 5, /**< left direction
                                    *
                                    * @since 1.23 */
  EFL_UI_FOCUS_DIRECTION_LAST = 6 /**< last direction
                                   *
                                   * @since 1.23 */
} Efl_Ui_Focus_Direction;

/** Focus Movement Policy.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Move_Policy
 */
typedef enum
{
  EFL_UI_FOCUS_MOVE_POLICY_CLICK = 0, /**< Move focus by mouse click or touch.
                                       * Elementary focus is set on mouse click
                                       * and this is checked at mouse up time.
                                       * (default)
                                       *
                                       * @since 1.22 */
  EFL_UI_FOCUS_MOVE_POLICY_MOVE_IN, /**< Move focus by mouse in. Elementary
                                     * focus is set on mouse move when the
                                     * mouse pointer is moved into an object.
                                     *
                                     * @since 1.22 */
  EFL_UI_FOCUS_MOVE_POLICY_KEY_ONLY /**< Move focus by key. Elementary focus is
                                     * set on key input like Left, Right, Up,
                                     * Down, Tab, or Shift+Tab.
                                     *
                                     * @since 1.22 */
} Efl_Ui_Focus_Move_Policy;

#ifdef EFL_BETA_API_SUPPORT
/** Focus Autoscroll Mode
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Autoscroll_Mode
 */
typedef enum
{
  EFL_UI_FOCUS_AUTOSCROLL_MODE_SHOW = 0, /**< Directly show the focused region
                                          * or item automatically.
                                          *
                                          * @since 1.22 */
  EFL_UI_FOCUS_AUTOSCROLL_MODE_NONE, /**< Do not show the focused region or item
                                      * automatically.
                                      *
                                      * @since 1.22 */
  EFL_UI_FOCUS_AUTOSCROLL_MODE_BRING_IN /**< Bring in the focused region or item
                                         * automatically which might invole the
                                         * scrolling.
                                         *
                                         * @since 1.22 */
} Efl_Ui_Focus_Autoscroll_Mode;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Software cursor mode.
 *
 * @ingroup Efl_Ui_Softcursor_Mode
 */
typedef enum
{
  EFL_UI_SOFTCURSOR_MODE_AUTO = 0, /**< Auto-detect if a software cursor should
                                    * be used (default). */
  EFL_UI_SOFTCURSOR_MODE_ON, /**< Always use a softcursor. */
  EFL_UI_SOFTCURSOR_MODE_OFF /**< Never use a softcursor. */
} Efl_Ui_Softcursor_Mode;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Accessibility
 *
 * @ingroup Efl_Ui_Activate
 */
typedef enum
{
  EFL_UI_ACTIVATE_DEFAULT = 0, /**< Activate default */
  EFL_UI_ACTIVATE_UP, /**< Activate up */
  EFL_UI_ACTIVATE_DOWN, /**< Activate down */
  EFL_UI_ACTIVATE_RIGHT, /**< Activate right */
  EFL_UI_ACTIVATE_LEFT, /**< Activate left */
  EFL_UI_ACTIVATE_BACK /**< Activate back */
} Efl_Ui_Activate;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Widget orientation mode, or how the theme handles screen orientation.
 *
 * @note Support for this feature is highly dependent on the theme in use. At
 * the time of writing, the default theme for EFL does not implement support
 * for orientation modes.
 *
 * @ingroup Efl_Ui_Widget_Orientation_Mode
 */
typedef enum
{
  EFL_UI_WIDGET_ORIENTATION_MODE_DEFAULT = 0, /**< Default or automatic mode: if
                                               * the widget's theme supports
                                               * orientation, it will be
                                               * handled automatically. */
  EFL_UI_WIDGET_ORIENTATION_MODE_DISABLED /**< No signal is sent to the widget's
                                           * theme. Widget's theme will not
                                           * change according to the window or
                                           * screen orientation. */
} Efl_Ui_Widget_Orientation_Mode;
#endif /* EFL_BETA_API_SUPPORT */

/** Type of multi selectable object.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Select_Mode
 */
typedef enum
{
  EFL_UI_SELECT_MODE_SINGLE = 0, /**< Only single child is selected. If a child
                                  * is selected, previous selected child will
                                  * be unselected.
                                  *
                                  * @since 1.24 */
  EFL_UI_SELECT_MODE_MULTI, /**< Allow multiple selection of children.
                             *
                             * @since 1.24 */
  EFL_UI_SELECT_MODE_NONE /**< No child can be selected at all.
                           *
                           * @since 1.24 */
} Efl_Ui_Select_Mode;


#endif

#endif
