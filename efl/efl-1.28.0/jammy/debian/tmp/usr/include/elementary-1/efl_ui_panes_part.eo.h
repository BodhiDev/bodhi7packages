#ifndef _EFL_UI_PANES_PART_EO_H_
#define _EFL_UI_PANES_PART_EO_H_

#ifndef _EFL_UI_PANES_PART_EO_CLASS_TYPE
#define _EFL_UI_PANES_PART_EO_CLASS_TYPE

typedef Eo Efl_Ui_Panes_Part;

#endif

#ifndef _EFL_UI_PANES_PART_EO_TYPES
#define _EFL_UI_PANES_PART_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary Panes internal part class
 *
 * @ingroup Efl_Ui_Panes_Part
 */
#define EFL_UI_PANES_PART_CLASS efl_ui_panes_part_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_panes_part_class_get(void) EINA_CONST;

/**
 * @brief Allows the user to set size hints to be respected and ignored
 * combined with a minimum size. If this flag is set, the minimum size set by
 * @ref efl_gfx_hint_size_min_set is respected forcefully.
 *
 * @param[in] obj The object.
 * @param[in] allow If @c true minimum size is forced
 *
 * @ingroup Efl_Ui_Panes_Part
 */
EAPI EAPI_WEAK void efl_ui_panes_part_hint_min_allow_set(Eo *obj, Eina_Bool allow);

/**
 * @brief Allows the user to set size hints to be respected and ignored
 * combined with a minimum size. If this flag is set, the minimum size set by
 * @ref efl_gfx_hint_size_min_set is respected forcefully.
 *
 * @param[in] obj The object.
 *
 * @return If @c true minimum size is forced
 *
 * @ingroup Efl_Ui_Panes_Part
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_panes_part_hint_min_allow_get(const Eo *obj);

/**
 * @brief Controls the relative minimum size of panes widget's part.
 *
 * If @ref efl_gfx_hint_size_min_set is also used along with
 * @ref efl_ui_panes_part_split_ratio_min_set, maximum value is set as minimum
 * size to part.
 *
 * @param[in] obj The object.
 * @param[in] size Value between 0.0 and 1.0 representing size proportion of
 * first part's minimum size.
 *
 * @ingroup Efl_Ui_Panes_Part
 */
EAPI EAPI_WEAK void efl_ui_panes_part_split_ratio_min_set(Eo *obj, double size);

/**
 * @brief Controls the relative minimum size of panes widget's part.
 *
 * If @ref efl_gfx_hint_size_min_set is also used along with
 * @ref efl_ui_panes_part_split_ratio_min_set, maximum value is set as minimum
 * size to part.
 *
 * @param[in] obj The object.
 *
 * @return Value between 0.0 and 1.0 representing size proportion of first
 * part's minimum size.
 *
 * @ingroup Efl_Ui_Panes_Part
 */
EAPI EAPI_WEAK double efl_ui_panes_part_split_ratio_min_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
