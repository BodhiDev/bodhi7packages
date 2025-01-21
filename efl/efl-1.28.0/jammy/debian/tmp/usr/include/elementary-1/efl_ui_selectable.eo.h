#ifndef _EFL_UI_SELECTABLE_EO_H_
#define _EFL_UI_SELECTABLE_EO_H_

#ifndef _EFL_UI_SELECTABLE_EO_CLASS_TYPE
#define _EFL_UI_SELECTABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Selectable;

#endif

#ifndef _EFL_UI_SELECTABLE_EO_TYPES
#define _EFL_UI_SELECTABLE_EO_TYPES


#endif
/**
 * @brief Selectable interface for UI objects
 *
 * An object implementing this interface can be selected. When the selected
 * property of this object changes, the @[Efl.Ui.Selectable.selected,changed]
 * event is emitted.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_SELECTABLE_INTERFACE efl_ui_selectable_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_selectable_interface_get(void) EINA_CONST;

/**
 * @brief The selected state of this object
 *
 * A change to this property emits the changed event.
 *
 * @param[in] obj The object.
 * @param[in] selected The selected state of this object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Selectable
 */
EAPI EAPI_WEAK void efl_ui_selectable_selected_set(Eo *obj, Eina_Bool selected);

/**
 * @brief The selected state of this object
 *
 * A change to this property emits the changed event.
 *
 * @param[in] obj The object.
 *
 * @return The selected state of this object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Selectable
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_selectable_selected_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_SELECTED_CHANGED;

/** Called when the selected state has changed.
 * @return Eina_Bool
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_EVENT_SELECTED_CHANGED (&(_EFL_UI_EVENT_SELECTED_CHANGED))

#endif
