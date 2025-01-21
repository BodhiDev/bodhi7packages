#ifndef _EFL_UI_CONTAINER_SELECTABLE_EO_H_
#define _EFL_UI_CONTAINER_SELECTABLE_EO_H_

#ifndef _EFL_UI_CONTAINER_SELECTABLE_EO_CLASS_TYPE
#define _EFL_UI_CONTAINER_SELECTABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Container_Selectable;

#endif

#ifndef _EFL_UI_CONTAINER_SELECTABLE_EO_TYPES
#define _EFL_UI_CONTAINER_SELECTABLE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Temporare interface, this is here until collection_view lands
 *
 * @ingroup Efl_Ui_Container_Selectable
 */
#define EFL_UI_CONTAINER_SELECTABLE_INTERFACE efl_ui_container_selectable_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_container_selectable_interface_get(void) EINA_CONST;

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_ITEM_SELECTED;

/** Called when selected
 * @return Efl_Object *
 *
 * @ingroup Efl_Ui_Container_Selectable
 */
#define EFL_UI_EVENT_ITEM_SELECTED (&(_EFL_UI_EVENT_ITEM_SELECTED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_ITEM_UNSELECTED;

/** Called when no longer selected
 * @return Efl_Object *
 *
 * @ingroup Efl_Ui_Container_Selectable
 */
#define EFL_UI_EVENT_ITEM_UNSELECTED (&(_EFL_UI_EVENT_ITEM_UNSELECTED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
