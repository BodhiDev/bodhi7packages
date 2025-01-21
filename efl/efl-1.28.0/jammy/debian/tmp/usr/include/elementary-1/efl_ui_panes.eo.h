#ifndef _EFL_UI_PANES_EO_H_
#define _EFL_UI_PANES_EO_H_

#ifndef _EFL_UI_PANES_EO_CLASS_TYPE
#define _EFL_UI_PANES_EO_CLASS_TYPE

typedef Eo Efl_Ui_Panes;

#endif

#ifndef _EFL_UI_PANES_EO_TYPES
#define _EFL_UI_PANES_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary panes class
 *
 * @ingroup Efl_Ui_Panes
 */
#define EFL_UI_PANES_CLASS efl_ui_panes_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_panes_class_get(void) EINA_CONST;

/**
 * @brief Set the split ratio between panes widget first and second parts.
 *
 * By default it's homogeneous, i.e., both sides have the same size.
 *
 * If something different is required, it can be set with this function. For
 * example, if the first content should be displayed over 75% of the panes
 * size, @c ratio should be passed as 0.75. This way, second content will be
 * resized to 25% of panes size.
 *
 * If displayed vertically, first content is displayed at top, and second
 * content at bottom.
 *
 * @note This ratio will change when user drags the panes bar.
 *
 * @param[in] obj The object.
 * @param[in] ratio Value between 0.0 and 1.0 representing split ratio between
 * panes first and second parts.
 *
 * @ingroup Efl_Ui_Panes
 */
EAPI EAPI_WEAK void efl_ui_panes_split_ratio_set(Eo *obj, double ratio);

/**
 * @brief Set the split ratio between panes widget first and second parts.
 *
 * By default it's homogeneous, i.e., both sides have the same size.
 *
 * If something different is required, it can be set with this function. For
 * example, if the first content should be displayed over 75% of the panes
 * size, @c ratio should be passed as 0.75. This way, second content will be
 * resized to 25% of panes size.
 *
 * If displayed vertically, first content is displayed at top, and second
 * content at bottom.
 *
 * @note This ratio will change when user drags the panes bar.
 *
 * @param[in] obj The object.
 *
 * @return Value between 0.0 and 1.0 representing split ratio between panes
 * first and second parts.
 *
 * @ingroup Efl_Ui_Panes
 */
EAPI EAPI_WEAK double efl_ui_panes_split_ratio_get(const Eo *obj);

/**
 * @brief Set whether the left and right panes can be resized by user
 * interaction.
 *
 * By default panes' contents are resizable by user interaction.
 *
 * @param[in] obj The object.
 * @param[in] fixed Use @c true to fix the left and right panes sizes and make
 * them not to be resized by user interaction. Use @c false to make them
 * resizable.
 *
 * @ingroup Efl_Ui_Panes
 */
EAPI EAPI_WEAK void efl_ui_panes_fixed_set(Eo *obj, Eina_Bool fixed);

/**
 * @brief Set whether the left and right panes can be resized by user
 * interaction.
 *
 * By default panes' contents are resizable by user interaction.
 *
 * @param[in] obj The object.
 *
 * @return Use @c true to fix the left and right panes sizes and make them not
 * to be resized by user interaction. Use @c false to make them resizable.
 *
 * @ingroup Efl_Ui_Panes
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_panes_fixed_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
