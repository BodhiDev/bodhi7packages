#ifndef _EFL_UI_PROGRESSBAR_EO_H_
#define _EFL_UI_PROGRESSBAR_EO_H_

#ifndef _EFL_UI_PROGRESSBAR_EO_CLASS_TYPE
#define _EFL_UI_PROGRESSBAR_EO_CLASS_TYPE

typedef Eo Efl_Ui_Progressbar;

#endif

#ifndef _EFL_UI_PROGRESSBAR_EO_TYPES
#define _EFL_UI_PROGRESSBAR_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Progress bar widget.
 *
 * It shows a graphical indication of the current progress of some lengthy
 * operation, typically as a bar that gradually fills or a pointer that moves
 * from one side of the bar to the other. The bar can be horizontal or
 * vertical, controlled with @ref Efl_Ui_Layout_Orientable.
 *
 * The minimum and maximum values (or starting and ending values), along with
 * the current value can be set using the @ref Efl_Ui_Range_Display interface.
 *
 * @ref efl_ui_progressbar_infinite_mode_get can be set when the progress state
 * is unknown. An optional textual label can be shown to indicate the exact
 * numerical value of the progress.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Progressbar
 */
#define EFL_UI_PROGRESSBAR_CLASS efl_ui_progressbar_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_progressbar_class_get(void) EINA_CONST;

/**
 * @brief When this mode is enabled the progress bar indicates that there is an
 * operation going on, but does not give information about its progress. This
 * is typically shown as a "pulsing" animation or an endless spinning bar,
 * depending on the theme.
 *
 * @param[in] obj The object.
 * @param[in] state @c true if the progress bar should animate infinitely.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Progressbar
 */
EAPI EAPI_WEAK void efl_ui_progressbar_infinite_mode_set(Eo *obj, Eina_Bool state);

/**
 * @brief When this mode is enabled the progress bar indicates that there is an
 * operation going on, but does not give information about its progress. This
 * is typically shown as a "pulsing" animation or an endless spinning bar,
 * depending on the theme.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the progress bar should animate infinitely.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Progressbar
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_progressbar_infinite_mode_get(const Eo *obj);

/**
 * @brief Whether a textual progress label is shown alongside the progress bar
 * to give an exact numerical indication of the current progress. Control the
 * conversion of the numerical value to a text string using @ref Efl_Ui_Format.
 *
 * Not to be confused with the widget label set through @ref efl_text_get.
 *
 * The exact location and appearance of the progress label depend on the theme.
 *
 * @param[in] obj The object.
 * @param[in] show @c true to show the progress label.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Progressbar
 */
EAPI EAPI_WEAK void efl_ui_progressbar_show_progress_label_set(Eo *obj, Eina_Bool show);

/**
 * @brief Whether a textual progress label is shown alongside the progress bar
 * to give an exact numerical indication of the current progress. Control the
 * conversion of the numerical value to a text string using @ref Efl_Ui_Format.
 *
 * Not to be confused with the widget label set through @ref efl_text_get.
 *
 * The exact location and appearance of the progress label depend on the theme.
 *
 * @param[in] obj The object.
 *
 * @return @c true to show the progress label.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Progressbar
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_progressbar_show_progress_label_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
