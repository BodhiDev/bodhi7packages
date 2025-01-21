#ifndef _EFL_UI_MULTI_SELECTABLE_EO_H_
#define _EFL_UI_MULTI_SELECTABLE_EO_H_

#ifndef _EFL_UI_MULTI_SELECTABLE_EO_CLASS_TYPE
#define _EFL_UI_MULTI_SELECTABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Multi_Selectable;

#endif

#ifndef _EFL_UI_MULTI_SELECTABLE_EO_TYPES
#define _EFL_UI_MULTI_SELECTABLE_EO_TYPES


#endif
/**
 * @brief Interface for getting access to a range of selected items.
 *
 * The implementor of this interface provides the possibility to select
 * multiple Selectables. If not, only @ref Efl_Ui_Single_Selectable should be
 * implemented.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Multi_Selectable
 */
#define EFL_UI_MULTI_SELECTABLE_INTERFACE efl_ui_multi_selectable_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_multi_selectable_interface_get(void) EINA_CONST;

/**
 * @brief The mode type for children selection.
 *
 * @param[in] obj The object.
 * @param[in] mode Type of selection of children
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Multi_Selectable
 */
EAPI EAPI_WEAK void efl_ui_multi_selectable_select_mode_set(Eo *obj, Efl_Ui_Select_Mode mode);

/**
 * @brief The mode type for children selection.
 *
 * @param[in] obj The object.
 *
 * @return Type of selection of children
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Multi_Selectable
 */
EAPI EAPI_WEAK Efl_Ui_Select_Mode efl_ui_multi_selectable_select_mode_get(const Eo *obj);

/** Select all @ref Efl_Ui_Selectable
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Multi_Selectable
 */
EAPI EAPI_WEAK void efl_ui_multi_selectable_all_select(Eo *obj);

/** Unselect all @ref Efl_Ui_Selectable
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Multi_Selectable
 */
EAPI EAPI_WEAK void efl_ui_multi_selectable_all_unselect(Eo *obj);

#endif
