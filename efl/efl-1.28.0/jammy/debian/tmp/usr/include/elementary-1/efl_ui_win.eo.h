#ifndef _EFL_UI_WIN_EO_H_
#define _EFL_UI_WIN_EO_H_

#ifndef _EFL_UI_WIN_EO_CLASS_TYPE
#define _EFL_UI_WIN_EO_CLASS_TYPE

typedef Eo Efl_Ui_Win;

#endif

#ifndef _EFL_UI_WIN_EO_TYPES
#define _EFL_UI_WIN_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Defines the types of window that can be created.
 *
 * These are hints set on a window so that a running Window Manager knows how
 * the window should be handled and/or what kind of decorations it should have.
 *
 * Currently, only the X11 backed engines use them.
 *
 * @ingroup Efl_Ui_Win_Type
 */
typedef enum
{
  EFL_UI_WIN_TYPE_UNKNOWN = -1 /* +1 */, /**< Default, unknown type. */
  EFL_UI_WIN_TYPE_BASIC, /**< A normal window. Indicates a normal, top-level
                          * window. Almost every window will be created with
                          * this type. */
  EFL_UI_WIN_TYPE_DIALOG_BASIC, /**< Used for simple dialog windows. */
  EFL_UI_WIN_TYPE_DESKTOP, /**< For special desktop windows, like a background
                            * window holding desktop icons. */
  EFL_UI_WIN_TYPE_DOCK, /**< The window is used as a dock or panel. Usually
                         * would be kept on top of any other window by the
                         * Window Manager. */
  EFL_UI_WIN_TYPE_TOOLBAR, /**< The window is used to hold a floating toolbar or
                            * similar. */
  EFL_UI_WIN_TYPE_MENU, /**< Similar to @ref EFL_UI_WIN_TYPE_TOOLBAR. */
  EFL_UI_WIN_TYPE_UTILITY, /**< A persistent utility window, like a toolbox or
                            * palette. */
  EFL_UI_WIN_TYPE_SPLASH, /**< Splash window for a starting up application. */
  EFL_UI_WIN_TYPE_DROPDOWN_MENU, /**< The window is a dropdown menu, as when an
                                  *  entry in a menu bar is clicked. This hint
                                  * exists for completeness' sake, as the EFL
                                  * way of implementing a menu would not
                                  * normally use a separate window for its
                                  * contents. */
  EFL_UI_WIN_TYPE_POPUP_MENU, /**< Like @ref EFL_UI_WIN_TYPE_DROPDOWN_MENU, but
                               * for the menu triggered by right-clicking an
                               * object. */
  EFL_UI_WIN_TYPE_TOOLTIP, /**< The window is a tooltip. A short piece of
                            * explanatory text that typically appear after the
                            * mouse cursor hovers over an object for a while.
                            * Not commonly used in the EFL. */
  EFL_UI_WIN_TYPE_NOTIFICATION, /**< A notification window, like a warning about
                                 * battery life or a new E-Mail received. */
  EFL_UI_WIN_TYPE_COMBO, /**< A window holding the contents of a combo box. Not
                          * commonly used in the EFL. */
  EFL_UI_WIN_TYPE_DND, /**< Internal use. */
  EFL_UI_WIN_TYPE_INLINED_IMAGE, /**< Internal use. */
  EFL_UI_WIN_TYPE_SOCKET_IMAGE, /**< Internal use. */
  EFL_UI_WIN_TYPE_FAKE, /**< Internal use. */
  EFL_UI_WIN_TYPE_NAVIFRAME_BASIC = 17 /**< Used for naviframe style replacement
                                        * with a back button instead of a close
                                        * button. */
} Efl_Ui_Win_Type;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The different layouts that can be requested for the virtual keyboard.
 *
 * When the application window is being managed by Illume it may request any of
 * the following layouts for the virtual keyboard.
 *
 * @ingroup Efl_Ui_Win_Keyboard_Mode
 */
typedef enum
{
  EFL_UI_WIN_KEYBOARD_MODE_UNKNOWN = 0, /**< Unknown keyboard state */
  EFL_UI_WIN_KEYBOARD_MODE_OFF, /**< Request to deactivate the keyboard */
  EFL_UI_WIN_KEYBOARD_MODE_ON, /**< Enable keyboard with default layout */
  EFL_UI_WIN_KEYBOARD_MODE_ALPHA, /**< Alpha (a-z) keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_NUMERIC, /**< Numeric keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_PIN, /**< PIN keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_PHONE_NUMBER, /**< Phone keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_HEX, /**< Hexadecimal numeric keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_TERMINAL, /**< Full (QWERTY) keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_PASSWORD, /**< Password keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_IP, /**< IP keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_HOST, /**< Host keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_FILE, /**< File keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_URL, /**< URL keyboard layout */
  EFL_UI_WIN_KEYBOARD_MODE_KEYPAD, /**< Keypad layout */
  EFL_UI_WIN_KEYBOARD_MODE_J2ME /**< J2ME keyboard layout */
} Efl_Ui_Win_Keyboard_Mode;
#endif /* EFL_BETA_API_SUPPORT */

/** Defines the type indicator that can be shown.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win_Indicator_Mode
 */
typedef enum
{
  EFL_UI_WIN_INDICATOR_MODE_OFF = 0, /**< Request to deactivate the indicator.
                                      *
                                      * @since 1.22 */
  EFL_UI_WIN_INDICATOR_MODE_BG_OPAQUE, /**< The indicator icon is opaque, as is
                                        * the indicator background. The content
                                        * of window is located at the end of
                                        * the indicator. The area of indicator
                                        * and window content are not
                                        * overlapped.
                                        *
                                        * @since 1.22 */
  EFL_UI_WIN_INDICATOR_MODE_BG_TRANSPARENT, /**< The icon of indicator is
                                             * opaque, but the background is
                                             * transparent. The content of
                                             * window is located under the
                                             * indicator in Z-order. The area
                                             * of indicator and window content
                                             * are overlapped.
                                             *
                                             * @since 1.22 */
  EFL_UI_WIN_INDICATOR_MODE_HIDDEN /**< The indicator is hidden so user can see
                                    * only the content of window such as in
                                    * video mode. If user flicks the upper side
                                    * of window, the indicator is shown
                                    * temporarily.
                                    *
                                    * @since 1.22 */
} Efl_Ui_Win_Indicator_Mode;

#ifdef EFL_BETA_API_SUPPORT
/** Defines the mode of a modal window.
 *
 * @ingroup Efl_Ui_Win_Modal_Mode
 */
typedef enum
{
  EFL_UI_WIN_MODAL_MODE_NONE = 0, /**< The window is not a modal window. */
  EFL_UI_WIN_MODAL_MODE_MODAL /**< The window is a modal window. */
} Efl_Ui_Win_Modal_Mode;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Defines the mode of a urgent window.
 *
 * @ingroup Efl_Ui_Win_Urgent_Mode
 */
typedef enum
{
  EFL_UI_WIN_URGENT_MODE_NONE = 0, /**< The window is not a urgent window. */
  EFL_UI_WIN_URGENT_MODE_URGENT /**< The window is a urgent window. */
} Efl_Ui_Win_Urgent_Mode;
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Define the move or resize mode of a window.
 *
 * The user can request the display server to start moving or resizing the
 * window by combining these modes. However only limited combinations are
 * allowed.
 *
 * Currently, only the following 9 combinations are permitted. More
 * combinations may be added in future: 1. move, 2. top, 3. bottom, 4. left, 5.
 * right, 6. top | left, 7. top | right, 8. bottom | left, 9. bottom | right.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win_Move_Resize_Mode
 */
typedef enum
{
  EFL_UI_WIN_MOVE_RESIZE_MODE_MOVE = 1, /**< Start moving window
                                         *
                                         * @since 1.22 */
  EFL_UI_WIN_MOVE_RESIZE_MODE_TOP = 2 /* 1 >> 1 */, /**< Start resizing window
                                                     * to the top
                                                     *
                                                     * @since 1.22 */
  EFL_UI_WIN_MOVE_RESIZE_MODE_BOTTOM = 4 /* 1 >> 2 */, /**< Start resizing
                                                        * window to the bottom
                                                        *
                                                        * @since 1.22 */
  EFL_UI_WIN_MOVE_RESIZE_MODE_LEFT = 8 /* 1 >> 3 */, /**< Start resizing window
                                                      * to the left
                                                      *
                                                      * @since 1.22 */
  EFL_UI_WIN_MOVE_RESIZE_MODE_RIGHT = 16 /* 1 >> 4 */ /**< Start resizing window
                                                       * to the right
                                                       *
                                                       * @since 1.22 */
} Efl_Ui_Win_Move_Resize_Mode;


#endif
/** Efl UI window class.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_CLASS efl_ui_win_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_win_class_get(void) EINA_CONST;

/**
 * @brief In some environments you may have an indicator that shows battery
 * status, reception, time etc. This is the indicator.
 *
 * Sometimes you don't want this because you provide the same functionality
 * inside your app, so this will request that the indicator is disabled in such
 * circumstances. The default settings depends on the environment. For example,
 * on phones, the default is to enable the indicator. The indicator is disabled
 * on devices like televisions however.
 *
 * @param[in] obj The object.
 * @param[in] type The type, one of @ref Efl_Ui_Win_Indicator_Mode.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_indicator_mode_set(Eo *obj, Efl_Ui_Win_Indicator_Mode type);

/**
 * @brief In some environments you may have an indicator that shows battery
 * status, reception, time etc. This is the indicator.
 *
 * Sometimes you don't want this because you provide the same functionality
 * inside your app, so this will request that the indicator is disabled in such
 * circumstances. The default settings depends on the environment. For example,
 * on phones, the default is to enable the indicator. The indicator is disabled
 * on devices like televisions however.
 *
 * @param[in] obj The object.
 *
 * @return The type, one of @ref Efl_Ui_Win_Indicator_Mode.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Efl_Ui_Win_Indicator_Mode efl_ui_win_indicator_mode_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The keyboard mode of the window.
 *
 * @param[in] obj The object.
 * @param[in] mode The mode, one of @ref Efl_Ui_Win_Keyboard_Mode.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_keyboard_mode_set(Eo *obj, Efl_Ui_Win_Keyboard_Mode mode);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The keyboard mode of the window.
 *
 * @param[in] obj The object.
 *
 * @return The mode, one of @ref Efl_Ui_Win_Keyboard_Mode.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Efl_Ui_Win_Keyboard_Mode efl_ui_win_keyboard_mode_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Defines which rotations this window supports.
 *
 * The window manager will refer to these hints and rotate the window
 * accordingly, depending on the device orientation, for instance.
 *
 * @param[in] obj The object.
 * @param[in] allow_0 Normal orientation.
 * @param[in] allow_90 Rotated 90 degrees CCW.
 * @param[in] allow_180 Rotated 180 degrees.
 * @param[in] allow_270 Rotated 270 degrees CCW (i.e. 90 CW).
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_wm_available_rotations_set(Eo *obj, Eina_Bool allow_0, Eina_Bool allow_90, Eina_Bool allow_180, Eina_Bool allow_270);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Defines which rotations this window supports.
 *
 * The window manager will refer to these hints and rotate the window
 * accordingly, depending on the device orientation, for instance.
 *
 * @param[in] obj The object.
 * @param[out] allow_0 Normal orientation.
 * @param[out] allow_90 Rotated 90 degrees CCW.
 * @param[out] allow_180 Rotated 180 degrees.
 * @param[out] allow_270 Rotated 270 degrees CCW (i.e. 90 CW).
 *
 * @return Returns @c false if available rotations were not specified.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_wm_available_rotations_get(const Eo *obj, Eina_Bool *allow_0, Eina_Bool *allow_90, Eina_Bool *allow_180, Eina_Bool *allow_270);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Available profiles on a window.
 *
 * @param[in] obj The object.
 * @param[in] profiles A list of profiles.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_wm_available_profiles_set(Eo *obj, const Eina_Array *profiles);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Available profiles on a window.
 *
 * @param[in] obj The object.
 *
 * @return A list of profiles.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK const Eina_Array *efl_ui_win_wm_available_profiles_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Constrain the maximum width and height of a window to the width and
 * height of the screen.
 *
 * When @c constrain is @c true, @c obj will never resize larger than the
 * screen.
 *
 * @param[in] obj The object.
 * @param[in] constrain @c true to restrict the window's maximum size.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_screen_constrain_set(Eo *obj, Eina_Bool constrain);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Constrain the maximum width and height of a window to the width and
 * height of the screen.
 *
 * When @c constrain is @c true, @c obj will never resize larger than the
 * screen.
 *
 * @param[in] obj The object.
 *
 * @return @c true to restrict the window's maximum size.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_screen_constrain_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Set the window to be skipped by keyboard focus.
 *
 * This sets the window to be skipped by normal keyboard input. This means a
 * window manager will be asked not to focus this window as well as omit it
 * from things like the taskbar, pager, "alt-tab" list etc. etc.
 *
 * Call this and enable it on a window BEFORE you show it for the first time,
 * otherwise it may have no effect.
 *
 * Use this for windows that have only output information or might only be
 * interacted with by the mouse or touchscreen, never for typing. This may have
 * side-effects like making the window non-accessible in some cases unless the
 * window is specially handled. Use this with care.
 *
 * @param[in] obj The object.
 * @param[in] skip The skip flag state ($true if it is to be skipped).
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_prop_focus_skip_set(Eo *obj, Eina_Bool skip);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Window's autohide state.
 *
 * When closing the window in any way outside of the program control, like
 * pressing the X button in the titlebar or using a command from the Window
 * Manager, a "delete,request" signal is emitted to indicate that this event
 * occurred and the developer can take any action, which may include, or not,
 * destroying the window object.
 *
 * When this property is set to @c true, the window will be automatically
 * hidden when this event occurs, after the signal is emitted. If this property
 * is @c false nothing will happen, beyond the event emission.
 *
 * C applications can use this option along with the quit policy
 * @c ELM_POLICY_QUIT_LAST_WINDOW_HIDDEN which allows exiting EFL's main loop
 * when all the windows are hidden.
 *
 * @note @c autodel and @c autohide are not mutually exclusive. The window will
 * be deleted if both are set to @c true.
 *
 * @param[in] obj The object.
 * @param[in] autohide If @c true, the window will automatically hide itself
 * when closed.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_autohide_set(Eo *obj, Eina_Bool autohide);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Window's autohide state.
 *
 * When closing the window in any way outside of the program control, like
 * pressing the X button in the titlebar or using a command from the Window
 * Manager, a "delete,request" signal is emitted to indicate that this event
 * occurred and the developer can take any action, which may include, or not,
 * destroying the window object.
 *
 * When this property is set to @c true, the window will be automatically
 * hidden when this event occurs, after the signal is emitted. If this property
 * is @c false nothing will happen, beyond the event emission.
 *
 * C applications can use this option along with the quit policy
 * @c ELM_POLICY_QUIT_LAST_WINDOW_HIDDEN which allows exiting EFL's main loop
 * when all the windows are hidden.
 *
 * @note @c autodel and @c autohide are not mutually exclusive. The window will
 * be deleted if both are set to @c true.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, the window will automatically hide itself when closed.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_autohide_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Enable quitting the main loop when this window is closed.
 *
 * When set, the window's loop object will exit using the passed exit code if
 * the window is closed.
 *
 * The @ref Eina_Value passed should be @c EMPTY to unset this state or an int
 * value to be used as the exit code.
 *
 * Note this is different from @ref efl_ui_win_exit_on_all_windows_closed_get
 * which exits when ALL windows are closed.
 *
 * @param[in] obj The object.
 * @param[in] exit_code The exit code to use when exiting
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_exit_on_close_set(Eo *obj, const Eina_Value *exit_code);

/**
 * @brief Enable quitting the main loop when this window is closed.
 *
 * When set, the window's loop object will exit using the passed exit code if
 * the window is closed.
 *
 * The @ref Eina_Value passed should be @c EMPTY to unset this state or an int
 * value to be used as the exit code.
 *
 * Note this is different from @ref efl_ui_win_exit_on_all_windows_closed_get
 * which exits when ALL windows are closed.
 *
 * @param[in] obj The object.
 *
 * @return The exit code to use when exiting
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK const Eina_Value *efl_ui_win_exit_on_close_get(const Eo *obj);

/**
 * @brief A window object's icon.
 *
 * This sets an image to be used as the icon for the given window, in the
 * window manager decoration part. The exact pixel dimensions of the object
 * (not object size) will be used and the image pixels will be used as-is when
 * this function is called. If the image object has been updated, then call
 * this function again to source the image pixels and place them in the
 * window's icon. Note that only objects of type @ref Efl_Canvas_Image or
 * @ref Efl_Ui_Image are allowed.
 *
 * @param[in] obj The object.
 * @param[in] icon The image object to use for an icon.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_icon_object_set(Eo *obj, Efl_Canvas_Object *icon);

/**
 * @brief A window object's icon.
 *
 * This sets an image to be used as the icon for the given window, in the
 * window manager decoration part. The exact pixel dimensions of the object
 * (not object size) will be used and the image pixels will be used as-is when
 * this function is called. If the image object has been updated, then call
 * this function again to source the image pixels and place them in the
 * window's icon. Note that only objects of type @ref Efl_Canvas_Image or
 * @ref Efl_Ui_Image are allowed.
 *
 * @param[in] obj The object.
 *
 * @return The Evas image object to use for an icon.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK const Efl_Canvas_Object *efl_ui_win_icon_object_get(const Eo *obj);

/**
 * @brief The minimized state of a window.
 *
 * @param[in] obj The object.
 * @param[in] state If @c true, the window is minimized.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_minimized_set(Eo *obj, Eina_Bool state);

/**
 * @brief The minimized state of a window.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, the window is minimized.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_minimized_get(const Eo *obj);

/**
 * @brief The maximized state of a window.
 *
 * @param[in] obj The object.
 * @param[in] maximized If @c true, the window is maximized.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_maximized_set(Eo *obj, Eina_Bool maximized);

/**
 * @brief The maximized state of a window.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, the window is maximized.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_maximized_get(const Eo *obj);

/**
 * @brief The fullscreen state of a window.
 *
 * @param[in] obj The object.
 * @param[in] fullscreen If @c true, the window is fullscreen.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_fullscreen_set(Eo *obj, Eina_Bool fullscreen);

/**
 * @brief The fullscreen state of a window.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, the window is fullscreen.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_fullscreen_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The sticky state of the window.
 *
 * Hints the Window Manager that the window in @c obj should be left fixed at
 * its position even when the virtual desktop it's on moves or changes.
 *
 * @param[in] obj The object.
 * @param[in] sticky If @c true, the window's sticky state is enabled.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_sticky_set(Eo *obj, Eina_Bool sticky);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The sticky state of the window.
 *
 * Hints the Window Manager that the window in @c obj should be left fixed at
 * its position even when the virtual desktop it's on moves or changes.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, the window's sticky state is enabled.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_sticky_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The urgent state of a window.
 *
 * @param[in] obj The object.
 * @param[in] urgent The mode of a urgent window, one of
 * @ref Efl_Ui_Win_Urgent_Mode.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_urgent_set(Eo *obj, Efl_Ui_Win_Urgent_Mode urgent);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The urgent state of a window.
 *
 * @param[in] obj The object.
 *
 * @return The mode of a urgent window, one of @ref Efl_Ui_Win_Urgent_Mode.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Efl_Ui_Win_Urgent_Mode efl_ui_win_urgent_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The modal state of a window.
 *
 * @param[in] obj The object.
 * @param[in] modal The mode of a window, one of @ref Efl_Ui_Win_Modal_Mode.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_modal_set(Eo *obj, Efl_Ui_Win_Modal_Mode modal);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The modal state of a window.
 *
 * @param[in] obj The object.
 *
 * @return The mode of a window, one of @ref Efl_Ui_Win_Modal_Mode.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Efl_Ui_Win_Modal_Mode efl_ui_win_modal_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The borderless state of a window.
 *
 * This function requests the Window Manager not to draw any decoration around
 * the window.
 *
 * @param[in] obj The object.
 * @param[in] borderless If @c true, the window is borderless.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_borderless_set(Eo *obj, Eina_Bool borderless);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The borderless state of a window.
 *
 * This function requests the Window Manager not to draw any decoration around
 * the window.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, the window is borderless.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_borderless_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The role of the window.
 *
 * It is a hint of how the Window Manager should handle it. Unlike
 * @ref efl_ui_win_type_get and @ref efl_ui_win_name_get this can be changed at
 * runtime.
 *
 * The returned string is an internal one and should not be freed or modified.
 * It will also be invalid if a new role is set or if the window is destroyed.
 *
 * @param[in] obj The object.
 * @param[in] role The role to set.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_role_set(Eo *obj, const char *role);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The role of the window.
 *
 * It is a hint of how the Window Manager should handle it. Unlike
 * @ref efl_ui_win_type_get and @ref efl_ui_win_name_get this can be changed at
 * runtime.
 *
 * The returned string is an internal one and should not be freed or modified.
 * It will also be invalid if a new role is set or if the window is destroyed.
 *
 * @param[in] obj The object.
 *
 * @return The role to set.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK const char *efl_ui_win_role_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief The window name.
 *
 * The meaning of name depends on the underlying windowing system.
 *
 * The window name is a construction property that can only be set at creation
 * time, before finalize. In C this means inside @c efl_add().
 *
 * @note Once set, it cannot be modified afterwards.
 *
 * @param[in] obj The object.
 * @param[in] name Window name
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_name_set(Eo *obj, const char *name);

/**
 * @brief The window name.
 *
 * The meaning of name depends on the underlying windowing system.
 *
 * The window name is a construction property that can only be set at creation
 * time, before finalize. In C this means inside @c efl_add().
 *
 * @note Once set, it cannot be modified afterwards.
 *
 * @param[in] obj The object.
 *
 * @return Window name
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK const char *efl_ui_win_name_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The type of the window.
 *
 * It is a hint of how the Window Manager should handle it.
 *
 * The window type is a construction property that can only be set at creation
 * time, before finalize. In C this means inside @c efl_add().
 *
 * @note Once set, it cannot be modified afterward.
 *
 * If the object is not window object, returns @ref EFL_UI_WIN_TYPE_UNKNOWN.
 *
 * @param[in] obj The object.
 * @param[in] type Window type
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_type_set(Eo *obj, Efl_Ui_Win_Type type);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The type of the window.
 *
 * It is a hint of how the Window Manager should handle it.
 *
 * The window type is a construction property that can only be set at creation
 * time, before finalize. In C this means inside @c efl_add().
 *
 * @note Once set, it cannot be modified afterward.
 *
 * If the object is not window object, returns @ref EFL_UI_WIN_TYPE_UNKNOWN.
 *
 * @param[in] obj The object.
 *
 * @return Window type
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Efl_Ui_Win_Type efl_ui_win_type_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The hardware acceleration preference for this window.
 *
 * This is a constructor function and can only be called before
 * @ref efl_finalize.
 *
 * This property overrides the global EFL configuration option
 * "accel_preference" for this single window, and accepts the same syntax.
 *
 * The @c accel string is a freeform C string that indicates what kind of
 * acceleration is preferred. Here "acceleration" generally refers to rendering
 * and the hardware with which the unit application renders GUIs. This may or
 * may not be honored but a best attempt will be made. Known strings are as
 * follows:
 *
 * "gl", "opengl" - try use OpenGL. "3d" - try to use a 3d acceleration unit.
 * "hw", "hardware", "accel" - try any acceleration unit (best possible) "none"
 * - use no acceleration but software instead (since 1.16)
 *
 * Since 1.14, it is also possible to specify some GL properties for the GL
 * window surface. This allows applications to use GLView with depth, stencil
 * and MSAA buffers with direct rendering. The new accel preference string
 * format is thus "{HW Accel}[:depth{value}[:stencil{value}[:msaa{str}$]$]$]".
 *
 * Accepted values for depth are for instance "depth", "depth16", "depth24".
 * Accepted values for stencil are "stencil", "stencil1", "stencil8". For MSAA,
 * only predefined strings are accepted: "msaa", "msaa_low", "msaa_mid" and
 * "msaa_high". The selected configuration is not guaranteed and is only valid
 * in case of GL acceleration. Only the base acceleration string will be saved
 * (e.g. "gl" or "hw").
 *
 * Full examples include:
 *
 * "gl", - try to use OpenGL "hw:depth:stencil", - use HW acceleration with
 * default depth and stencil buffers "opengl:depth24:stencil8:msaa_mid" - use
 * OpenGL with 24-bit depth, 8-bit stencil and a medium number of MSAA samples
 * in the backbuffer.
 *
 * Note that this option may be overriden by environment variables or the
 * configuration option "accel_preference_override".
 *
 * @param[in] obj The object.
 * @param[in] accel Acceleration
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_accel_preference_set(Eo *obj, const char *accel);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The hardware acceleration preference for this window.
 *
 * This is a constructor function and can only be called before
 * @ref efl_finalize.
 *
 * This property overrides the global EFL configuration option
 * "accel_preference" for this single window, and accepts the same syntax.
 *
 * The @c accel string is a freeform C string that indicates what kind of
 * acceleration is preferred. Here "acceleration" generally refers to rendering
 * and the hardware with which the unit application renders GUIs. This may or
 * may not be honored but a best attempt will be made. Known strings are as
 * follows:
 *
 * "gl", "opengl" - try use OpenGL. "3d" - try to use a 3d acceleration unit.
 * "hw", "hardware", "accel" - try any acceleration unit (best possible) "none"
 * - use no acceleration but software instead (since 1.16)
 *
 * Since 1.14, it is also possible to specify some GL properties for the GL
 * window surface. This allows applications to use GLView with depth, stencil
 * and MSAA buffers with direct rendering. The new accel preference string
 * format is thus "{HW Accel}[:depth{value}[:stencil{value}[:msaa{str}$]$]$]".
 *
 * Accepted values for depth are for instance "depth", "depth16", "depth24".
 * Accepted values for stencil are "stencil", "stencil1", "stencil8". For MSAA,
 * only predefined strings are accepted: "msaa", "msaa_low", "msaa_mid" and
 * "msaa_high". The selected configuration is not guaranteed and is only valid
 * in case of GL acceleration. Only the base acceleration string will be saved
 * (e.g. "gl" or "hw").
 *
 * Full examples include:
 *
 * "gl", - try to use OpenGL "hw:depth:stencil", - use HW acceleration with
 * default depth and stencil buffers "opengl:depth24:stencil8:msaa_mid" - use
 * OpenGL with 24-bit depth, 8-bit stencil and a medium number of MSAA samples
 * in the backbuffer.
 *
 * Note that this option may be overriden by environment variables or the
 * configuration option "accel_preference_override".
 *
 * @param[in] obj The object.
 *
 * @return Acceleration
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK const char *efl_ui_win_accel_preference_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief The alpha channel state of a window.
 *
 * If @c alpha is true, the alpha channel of the canvas will be enabled
 * possibly making parts of the window completely or partially transparent.
 * This is also subject to the underlying system supporting it, for example a
 * system using a compositing manager.
 *
 * @note Alpha window can be enabled automatically by window theme style's
 * property. If "alpha" data.item is "1" or "true" in window style(eg.
 * elm/win/base/default), the window is switched to alpha automatically without
 * the explicit api call.
 *
 * @param[in] obj The object.
 * @param[in] alpha @c true if the window alpha channel is enabled, @c false
 * otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_alpha_set(Eo *obj, Eina_Bool alpha);

/**
 * @brief The alpha channel state of a window.
 *
 * If @c alpha is true, the alpha channel of the canvas will be enabled
 * possibly making parts of the window completely or partially transparent.
 * This is also subject to the underlying system supporting it, for example a
 * system using a compositing manager.
 *
 * @note Alpha window can be enabled automatically by window theme style's
 * property. If "alpha" data.item is "1" or "true" in window style(eg.
 * elm/win/base/default), the window is switched to alpha automatically without
 * the explicit api call.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the window alpha channel is enabled, @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_alpha_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Get the stack ID string of the window as an opaque string.
 *
 * This ID is immutable and can never be modified. It will be an opaque string
 * that has no specific defined format or content other than being a string (no
 * character with a value of 0).
 *
 * This string is intended for use as a stack master ID to be use by other
 * windows to make this window part of a stack of windows to be placed on top
 * of each other as if they are a series of dialogs or questions one after the
 * other, allowing you to go back through history.
 *
 * @param[in] obj The object.
 *
 * @return An opaque string that has no specific format but identifies a
 * specific unique window on the display.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK const char *efl_ui_win_stack_id_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The window stack ID to use as the master top-level.
 *
 * This sets the ID string to be used as the master top-level window as the
 * base of a stack of windows. This must be set before the first time the
 * window is shown and should never be changed afterwards.
 *
 * @param[in] obj The object.
 * @param[in] id An opaque string that has no specific format, but identifies a
 * specific unique window on the display.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_stack_master_id_set(Eo *obj, const char *id);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The window stack ID to use as the master top-level.
 *
 * This sets the ID string to be used as the master top-level window as the
 * base of a stack of windows. This must be set before the first time the
 * window is shown and should never be changed afterwards.
 *
 * @param[in] obj The object.
 *
 * @return An opaque string that has no specific format, but identifies a
 * specific unique window on the display.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK const char *efl_ui_win_stack_master_id_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The stack base state of this window
 *
 * This is a boolean flag that determines if this window will become the base
 * of a stack at all. You must enable this on a base (the bottom of a window
 * stack) for things to work correctly.
 *
 * This state should be set before a window is shown for the first time and
 * never changed afterwards.
 *
 * @param[in] obj The object.
 * @param[in] base @c true if this is a stack base window, @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_stack_base_set(Eo *obj, Eina_Bool base);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The stack base state of this window
 *
 * This is a boolean flag that determines if this window will become the base
 * of a stack at all. You must enable this on a base (the bottom of a window
 * stack) for things to work correctly.
 *
 * This state should be set before a window is shown for the first time and
 * never changed afterwards.
 *
 * @param[in] obj The object.
 *
 * @return @c true if this is a stack base window, @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_stack_base_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Pop (delete) all windows in the stack above this window.
 *
 * This will try and delete all the windows in the stack that are above the
 * window.
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_stack_pop_to(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Enable quitting the main loop when all windows are closed.
 *
 * When set, the main loop will quit with the passed exit code once all windows
 * have been closed.
 *
 * The @ref Eina_Value passed should be @c EMPTY to unset this state or an int
 * value to be used as the exit code.
 *
 * Note this is different from @ref efl_ui_win_exit_on_close_get which exits
 * when a given window is closed.
 *
 * @param[in] exit_code The exit code to use when exiting.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_exit_on_all_windows_closed_set(const Eina_Value *exit_code);

/**
 * @brief Enable quitting the main loop when all windows are closed.
 *
 * When set, the main loop will quit with the passed exit code once all windows
 * have been closed.
 *
 * The @ref Eina_Value passed should be @c EMPTY to unset this state or an int
 * value to be used as the exit code.
 *
 * Note this is different from @ref efl_ui_win_exit_on_close_get which exits
 * when a given window is closed.
 *
 * @return The exit code to use when exiting.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK const Eina_Value *efl_ui_win_exit_on_all_windows_closed_get(void);

/**
 * @brief Activate a window object.
 *
 * This function sends a request to the Window Manager to activate the window
 * pointed by @c obj. If honored by the WM, the window will receive the
 * keyboard focus.
 *
 * @note This is just a request that a Window Manager may ignore, so calling
 * this function does not ensure in any way that the window will be the active
 * one afterwards.
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_activate(Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Center a window on the screen.
 *
 * This function centers window @c obj horizontally and/or vertically based on
 * the values of @c h and @c v.
 *
 * @note This is just a request that a Window Manager may ignore, so calling
 * this function does not ensure in any way that the window will be centered
 * afterwards.
 *
 * @param[in] obj The object.
 * @param[in] h If @c true, center horizontally. If @c false, do not change
 * horizontal location.
 * @param[in] v If @c true, center vertically. If @c false, do not change
 * vertical location.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_center(Eo *obj, Eina_Bool h, Eina_Bool v);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Start moving or resizing the window.
 *
 * The user can request the display server to start moving or resizing the
 * window by combining modes from @ref Efl_Ui_Win_Move_Resize_Mode. This API
 * can only be called if none of the following conditions is true:
 *
 * 1. Called in the absence of a pointer down event, 2. Called more than once
 * before a pointer up event, 3. Called when the window is already being
 * resized or moved, 4. Called with an unsupported combination of modes.
 *
 * Right usage: 1. Pointer (mouse or touch) down event, 2.
 * @ref efl_ui_win_move_resize_start called only once with a supported mode, 3.
 * Pointer (mouse or touch) up event.
 *
 * If a pointer up event occurs after calling the function, it automatically
 * ends the window move and resize operation.
 *
 * Currently, only the following 9 combinations are allowed, and possibly more
 * combinations may be added in the future: 1.
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_MOVE 2.
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_TOP 3.
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_BOTTOM 4.
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_LEFT 5.
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_RIGHT 6.
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_TOP | @ref EFL_UI_WIN_MOVE_RESIZE_MODE_LEFT
 * 7. @ref EFL_UI_WIN_MOVE_RESIZE_MODE_TOP |
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_RIGHT 8.
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_BOTTOM |
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_LEFT 9.
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_BOTTOM |
 * @ref EFL_UI_WIN_MOVE_RESIZE_MODE_RIGHT
 *
 * In particular move and resize cannot happen simultaneously.
 *
 * @note the result of this API can only guarantee that the request has been
 * forwarded to the server, but there is no guarantee that the request can be
 * processed by the display server.
 *
 * @param[in] obj The object.
 * @param[in] mode The requested move or resize mode.
 *
 * @return @c true if the request was successfully sent to the display server,
 * @c false in case of error.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_move_resize_start(Eo *obj, Efl_Ui_Win_Move_Resize_Mode mode);

/**
 * @brief Base size for objects with sizing restrictions.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @ref efl_ui_win_hint_base_get + N x @ref efl_ui_win_hint_step_get is what is
 * calculated for object sizing restrictions.
 *
 * See also @ref efl_ui_win_hint_step_get.
 *
 * @param[in] obj The object.
 * @param[in] sz Base size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_hint_base_set(Eo *obj, Eina_Size2D sz);

/**
 * @brief Base size for objects with sizing restrictions.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @ref efl_ui_win_hint_base_get + N x @ref efl_ui_win_hint_step_get is what is
 * calculated for object sizing restrictions.
 *
 * See also @ref efl_ui_win_hint_step_get.
 *
 * @param[in] obj The object.
 *
 * @return Base size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Size2D efl_ui_win_hint_base_get(const Eo *obj);

/**
 * @brief Step size for objects with sizing restrictions.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Set this to for an object to scale up by steps and not continuously.
 *
 * @ref efl_ui_win_hint_base_get + N x @ref efl_ui_win_hint_step_get is what is
 * calculated for object sizing restrictions.
 *
 * @param[in] obj The object.
 * @param[in] sz Step size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_hint_step_set(Eo *obj, Eina_Size2D sz);

/**
 * @brief Step size for objects with sizing restrictions.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Set this to for an object to scale up by steps and not continuously.
 *
 * @ref efl_ui_win_hint_base_get + N x @ref efl_ui_win_hint_step_get is what is
 * calculated for object sizing restrictions.
 *
 * @param[in] obj The object.
 *
 * @return Step size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Size2D efl_ui_win_hint_step_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Returns an iterator over the current known pointer positions.
 *
 * This is used to iterate over the current known multi-touch positions,
 * including the first finger. Each pointer position is represented by an
 * object of type @ref Efl_Input_Pointer.
 *
 * Each finger in a multi touch environment can then be identified by the
 * @ref efl_input_pointer_touch_id_get property. The order of the pointers in
 * this iterator is not defined.
 *
 * @note If the input surface supports hovering input, some pointers may not be
 * in a "down" state. To retrieve the list of such pointers, set the @c hover
 * value to @c true. Remember though that most devices currently don't support
 * this.
 *
 * @param[in] obj The object.
 * @param[in] hover @c false by default, @c true means to include fingers that
 * are currently hovering.
 *
 * @return Iterator to pointer positions
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Iterator *efl_ui_win_pointer_iterate(const Eo *obj, Eina_Bool hover) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The rotation of this window
 *
 * The value will automatically change when the Window Manager of this window
 * changes its rotation. This rotation is automatically applied to all
 * @ref Efl_Ui_Layout objects.
 *
 * @param[in] obj The object.
 * @param[in] rotation The rotation of the window
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_rotation_set(Eo *obj, int rotation);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The rotation of this window
 *
 * The value will automatically change when the Window Manager of this window
 * changes its rotation. This rotation is automatically applied to all
 * @ref Efl_Ui_Layout objects.
 *
 * @param[in] obj The object.
 *
 * @return The rotation of the window
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK int efl_ui_win_rotation_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Whether focus highlight is enabled or not on this window, regardless
 * of the global setting.
 *
 * See also @ref efl_ui_win_focus_highlight_style_get. See also
 * @ref efl_ui_win_focus_highlight_animate_get.
 *
 * @param[in] obj The object.
 * @param[in] enabled The enabled value for the highlight.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_focus_highlight_enabled_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief Whether focus highlight is enabled or not on this window, regardless
 * of the global setting.
 *
 * See also @ref efl_ui_win_focus_highlight_style_get. See also
 * @ref efl_ui_win_focus_highlight_animate_get.
 *
 * @param[in] obj The object.
 *
 * @return The enabled value for the highlight.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_focus_highlight_enabled_get(const Eo *obj);

/**
 * @brief Control the widget focus highlight style.
 *
 * If @c style is @c null, the default will be used.
 *
 * See also @ref efl_ui_win_focus_highlight_enabled_get. See also
 * @ref efl_ui_win_focus_highlight_animate_get.
 *
 * @param[in] obj The object.
 * @param[in] style The name of the focus highlight style.
 *
 * @return @c true on success, @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_focus_highlight_style_set(Eo *obj, const char *style);

/**
 * @brief Control the widget focus highlight style.
 *
 * If @c style is @c null, the default will be used.
 *
 * See also @ref efl_ui_win_focus_highlight_enabled_get. See also
 * @ref efl_ui_win_focus_highlight_animate_get.
 *
 * @param[in] obj The object.
 *
 * @return The name of the focus highlight style.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK const char *efl_ui_win_focus_highlight_style_get(const Eo *obj);

/**
 * @brief Whether focus highlight should animate or not.
 *
 * See also @ref efl_ui_win_focus_highlight_style_get. See also
 * @ref efl_ui_win_focus_highlight_enabled_get.
 *
 * @param[in] obj The object.
 * @param[in] animate The enabled value for the highlight animation.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK void efl_ui_win_focus_highlight_animate_set(Eo *obj, Eina_Bool animate);

/**
 * @brief Whether focus highlight should animate or not.
 *
 * See also @ref efl_ui_win_focus_highlight_style_get. See also
 * @ref efl_ui_win_focus_highlight_enabled_get.
 *
 * @param[in] obj The object.
 *
 * @return The enabled value for the highlight animation.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_focus_highlight_animate_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_DELETE_REQUEST;

/** Called when the window receives a delete request
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_DELETE_REQUEST (&(_EFL_UI_WIN_EVENT_DELETE_REQUEST))
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_WITHDRAWN;

/** Called when window is withdrawn
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_WITHDRAWN (&(_EFL_UI_WIN_EVENT_WITHDRAWN))
#endif /* EFL_BETA_API_SUPPORT */

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_MINIMIZED;

/** Called when window is minimized
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_MINIMIZED (&(_EFL_UI_WIN_EVENT_MINIMIZED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_NORMAL;

/** Called when window is set to normal state
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_NORMAL (&(_EFL_UI_WIN_EVENT_NORMAL))
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_STICK;

/** Called when window is set as sticky
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_STICK (&(_EFL_UI_WIN_EVENT_STICK))
#endif /* EFL_BETA_API_SUPPORT */
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_UNSTICK;

/** Called when window is no  longer set as sticky
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_UNSTICK (&(_EFL_UI_WIN_EVENT_UNSTICK))
#endif /* EFL_BETA_API_SUPPORT */

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_FULLSCREEN_CHANGED;

/** Called when window is set to or from fullscreen
 * @return Eina_Bool
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_FULLSCREEN_CHANGED (&(_EFL_UI_WIN_EVENT_FULLSCREEN_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_MAXIMIZED_CHANGED;

/** Called when window is set to or from maximized
 * @return Eina_Bool
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_MAXIMIZED_CHANGED (&(_EFL_UI_WIN_EVENT_MAXIMIZED_CHANGED))
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_INDICATOR_PROP_CHANGED;

/** Called when indicator is property changed
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_INDICATOR_PROP_CHANGED (&(_EFL_UI_WIN_EVENT_INDICATOR_PROP_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_WIN_ROTATION_CHANGED;

/** Called when window rotation is changed, sends current rotation in degrees
 * @return int
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_WIN_ROTATION_CHANGED (&(_EFL_UI_WIN_EVENT_WIN_ROTATION_CHANGED))
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_PROFILE_CHANGED;

/** Called when profile is changed
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_PROFILE_CHANGED (&(_EFL_UI_WIN_EVENT_PROFILE_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_WM_ROTATION_CHANGED;

/** Called when window manager rotation is changed
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_WM_ROTATION_CHANGED (&(_EFL_UI_WIN_EVENT_WM_ROTATION_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_THEME_CHANGED;

/** Called when theme is changed
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_THEME_CHANGED (&(_EFL_UI_WIN_EVENT_THEME_CHANGED))
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_ELM_ACTION_BLOCK_MENU;

/** Called when elementary block menu action occurs
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_ELM_ACTION_BLOCK_MENU (&(_EFL_UI_WIN_EVENT_ELM_ACTION_BLOCK_MENU))
#endif /* EFL_BETA_API_SUPPORT */

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_PAUSE;

/** Called when the window is not going be displayed for some time
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_PAUSE (&(_EFL_UI_WIN_EVENT_PAUSE))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_WIN_EVENT_RESUME;

/** Called before a window is rendered after a pause event
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_RESUME (&(_EFL_UI_WIN_EVENT_RESUME))

#endif
