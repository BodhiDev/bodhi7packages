#ifndef _EFL_UI_ACTION_CONNECTOR_EO_H_
#define _EFL_UI_ACTION_CONNECTOR_EO_H_

#ifndef _EFL_UI_ACTION_CONNECTOR_EO_CLASS_TYPE
#define _EFL_UI_ACTION_CONNECTOR_EO_CLASS_TYPE

typedef Eo Efl_Ui_Action_Connector;

#endif

#ifndef _EFL_UI_ACTION_CONNECTOR_EO_TYPES
#define _EFL_UI_ACTION_CONNECTOR_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Helper class that connects theme signals or object events to the
 * interfaces which are for actions.
 *
 * For example, this simplifies creating widgets that implement the
 * @ref Efl_Input_Clickable interface.
 *
 * @ingroup Efl_Ui_Action_Connector
 */
#define EFL_UI_ACTION_CONNECTOR_CLASS efl_ui_action_connector_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_action_connector_class_get(void) EINA_CONST;

/**
 * @brief This will listen to the standard "click" events on a theme and emit
 * the appropriate events through the @ref Efl_Input_Clickable interface.
 *
 * Using these methods widgets do not need to listen to the theme signals. This
 * class does it and calls the correct clickable functions.
 *
 * This handles theme signals "efl,action,press", "efl,action,unpress" and
 * "efl,action,mouse_out", and the @[Efl.Input.Interface.pointer,move] event.
 *
 * @param[in] object The object to listen on.
 * @param[in] clickable The object to call the clickable methods on.
 *
 * @ingroup Efl_Ui_Action_Connector
 */
EAPI EAPI_WEAK void efl_ui_action_connector_bind_clickable_to_theme(Efl_Canvas_Layout *object, Efl_Input_Clickable *clickable);

/**
 * @brief This will listen to the standard "click" events on an object, and
 * emit the appropriate events through the @ref Efl_Input_Clickable interface.
 *
 * Using these methods widgets do not need to listen to the object events. This
 * class does it and calls the correct clickable functions.
 *
 * The handled events are @[Efl.Input.Interface.pointer,up] and
 * @[Efl.Input.Interface.pointer,down].
 *
 * @param[in] object The object to listen on.
 * @param[in] clickable The object to call the clickable methods on.
 *
 * @ingroup Efl_Ui_Action_Connector
 */
EAPI EAPI_WEAK void efl_ui_action_connector_bind_clickable_to_object(Efl_Input_Interface *object, Efl_Input_Clickable *clickable);
#endif /* EFL_BETA_API_SUPPORT */

#endif
