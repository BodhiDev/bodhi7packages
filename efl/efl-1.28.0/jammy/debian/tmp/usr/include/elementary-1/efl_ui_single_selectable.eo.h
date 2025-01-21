#ifndef _EFL_UI_SINGLE_SELECTABLE_EO_H_
#define _EFL_UI_SINGLE_SELECTABLE_EO_H_

#ifndef _EFL_UI_SINGLE_SELECTABLE_EO_CLASS_TYPE
#define _EFL_UI_SINGLE_SELECTABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Single_Selectable;

#endif

#ifndef _EFL_UI_SINGLE_SELECTABLE_EO_TYPES
#define _EFL_UI_SINGLE_SELECTABLE_EO_TYPES


#endif
/**
 * @brief Interface for getting access to a single selected item in the
 * implementor.
 *
 * The implementor is free to allow a specific number of selectables being
 * selected or not. This interface just covers always the latest selected
 * selectable.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Single_Selectable
 */
#define EFL_UI_SINGLE_SELECTABLE_INTERFACE efl_ui_single_selectable_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_single_selectable_interface_get(void) EINA_CONST;

/**
 * @brief The selectable that was selected most recently.
 *
 * @param[in] obj The object.
 *
 * @return The latest selected item.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Single_Selectable
 */
EAPI EAPI_WEAK Efl_Ui_Selectable *efl_ui_selectable_last_selected_get(const Eo *obj);

/**
 * @brief A object that will be selected in case nothing is selected
 *
 * A object set to this property will be selected instead of no item being
 * selected. Which means, there will be always at least one element selected.
 * If this property is @c NULL, the state of "no item is selected" can be
 * reached.
 *
 * Setting this property as a result of selection events results in undefined
 * behavior.
 *
 * @param[in] obj The object.
 * @param[in] fallback
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Single_Selectable
 */
EAPI EAPI_WEAK void efl_ui_selectable_fallback_selection_set(Eo *obj, Efl_Ui_Selectable *fallback);

/**
 * @brief A object that will be selected in case nothing is selected
 *
 * A object set to this property will be selected instead of no item being
 * selected. Which means, there will be always at least one element selected.
 * If this property is @c NULL, the state of "no item is selected" can be
 * reached.
 *
 * Setting this property as a result of selection events results in undefined
 * behavior.
 *
 * @param[in] obj The object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Single_Selectable
 */
EAPI EAPI_WEAK Efl_Ui_Selectable *efl_ui_selectable_fallback_selection_get(const Eo *obj);

/**
 * @brief This controlls if a selected item can be deselected due to clicking
 *
 * @param[in] obj The object.
 * @param[in] allow_manual_deselection @c true if clicking while selected
 * results in a state change to unselected
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Single_Selectable
 */
EAPI EAPI_WEAK void efl_ui_selectable_allow_manual_deselection_set(Eo *obj, Eina_Bool allow_manual_deselection);

/**
 * @brief This controlls if a selected item can be deselected due to clicking
 *
 * @param[in] obj The object.
 *
 * @return @c true if clicking while selected results in a state change to
 * unselected
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Single_Selectable
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_selectable_allow_manual_deselection_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SELECTABLE_EVENT_SELECTION_CHANGED;

/** Emitted when there is a change in the selection state. This event will
 * collect all the item selection change events that are happening within one
 * loop iteration. This means, you will only get this event once, even if a lot
 * of items have changed. If you are interested in detailed changes, subscribe
 * to the individual @[Efl.Ui.Selectable.selected,changed] events of each item.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Single_Selectable
 */
#define EFL_UI_SELECTABLE_EVENT_SELECTION_CHANGED (&(_EFL_UI_SELECTABLE_EVENT_SELECTION_CHANGED))

#endif
