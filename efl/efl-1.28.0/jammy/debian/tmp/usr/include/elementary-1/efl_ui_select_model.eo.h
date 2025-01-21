#ifndef _EFL_UI_SELECT_MODEL_EO_H_
#define _EFL_UI_SELECT_MODEL_EO_H_

#ifndef _EFL_UI_SELECT_MODEL_EO_CLASS_TYPE
#define _EFL_UI_SELECT_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Ui_Select_Model;

#endif

#ifndef _EFL_UI_SELECT_MODEL_EO_TYPES
#define _EFL_UI_SELECT_MODEL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl ui select model class
 *
 * @ingroup Efl_Ui_Select_Model
 */
#define EFL_UI_SELECT_MODEL_CLASS efl_ui_select_model_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_select_model_class_get(void) EINA_CONST;

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SELECT_MODEL_EVENT_SELECTED;

/**
 * No description
 * @return Efl_Object *
 */
#define EFL_UI_SELECT_MODEL_EVENT_SELECTED (&(_EFL_UI_SELECT_MODEL_EVENT_SELECTED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SELECT_MODEL_EVENT_UNSELECTED;

/**
 * No description
 * @return Efl_Object *
 */
#define EFL_UI_SELECT_MODEL_EVENT_UNSELECTED (&(_EFL_UI_SELECT_MODEL_EVENT_UNSELECTED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
