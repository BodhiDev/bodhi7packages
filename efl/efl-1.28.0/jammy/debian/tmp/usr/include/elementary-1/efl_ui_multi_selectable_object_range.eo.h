#ifndef _EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_EO_H_
#define _EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_EO_H_

#ifndef _EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_EO_CLASS_TYPE
#define _EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Multi_Selectable_Object_Range;

#endif

#ifndef _EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_EO_TYPES
#define _EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_EO_TYPES


#endif
/**
 * @brief Interface for getting access to a range of selected items.
 *
 * The implementor of this interface provides the possibility to select
 * multiple Selectables. If not, only @ref Efl_Ui_Single_Selectable should be
 * implemented. A widget can only provide either this interface or
 * @ref Efl_Ui_Multi_Selectable_Index_Range, but not both.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Multi_Selectable_Object_Range
 */
#define EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_INTERFACE efl_ui_multi_selectable_object_range_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_multi_selectable_object_range_interface_get(void) EINA_CONST;

/**
 * @brief Get the selected items in an iterator. The iterator sequence will be
 * decided by selection.
 *
 * @param[in] obj The object.
 *
 * @return User has to free the iterator after usage.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Multi_Selectable_Object_Range
 */
EAPI EAPI_WEAK Eina_Iterator *efl_ui_multi_selectable_selected_iterator_new(Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Select a range of @ref Efl_Ui_Selectable.
 *
 * This will select the range of @ref Efl_Ui_Selectable objects from @c a to
 * @c b or from @c b to @c a depending on which one comes first. If @c a or
 * @c b are not part of the widget, an error is returned, and no change is
 * applied. @c NULL is not allowed as either of the parameters. Both of the
 * passed values will also be selected.
 *
 * @param[in] obj The object.
 * @param[in] a One side of the range.
 * @param[in] b The other side of the range.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Multi_Selectable_Object_Range
 */
EAPI EAPI_WEAK void efl_ui_multi_selectable_range_select(Eo *obj, Efl_Ui_Selectable *a, Efl_Ui_Selectable *b);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Unselect a range of @ref Efl_Ui_Selectable.
 *
 * This will unselect the range of @ref Efl_Ui_Selectable objects from @c a to
 * @c b or from @c b to @c a depending on which one comes first. If @c a or
 * @c b are not part of the widget, an error is returned, and no change is
 * applied. @c NULL is not allowed as either of the parameters. Both of the
 * passed values will also be unselected.
 *
 * @param[in] obj The object.
 * @param[in] a One side of the range.
 * @param[in] b The other side of the range.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Multi_Selectable_Object_Range
 */
EAPI EAPI_WEAK void efl_ui_multi_selectable_range_unselect(Eo *obj, Efl_Ui_Selectable *a, Efl_Ui_Selectable *b);
#endif /* EFL_BETA_API_SUPPORT */

#endif
