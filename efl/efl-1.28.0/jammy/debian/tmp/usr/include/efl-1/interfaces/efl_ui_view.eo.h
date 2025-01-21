#ifndef _EFL_UI_VIEW_EO_H_
#define _EFL_UI_VIEW_EO_H_

#ifndef _EFL_UI_VIEW_EO_CLASS_TYPE
#define _EFL_UI_VIEW_EO_CLASS_TYPE

typedef Eo Efl_Ui_View;

#endif

#ifndef _EFL_UI_VIEW_EO_TYPES
#define _EFL_UI_VIEW_EO_TYPES

/** Every time the model is changed on the object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Model_Changed_Event
 */
typedef struct _Efl_Model_Changed_Event
{
  Efl_Model *current; /**< The newly set model.
                       *
                       * @since 1.23 */
  Efl_Model *previous; /**< The previously set model.
                        *
                        * @since 1.23 */
} Efl_Model_Changed_Event;


#endif
/** Efl UI view interface.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View
 */
#define EFL_UI_VIEW_INTERFACE efl_ui_view_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_view_interface_get(void) EINA_CONST;

/**
 * @brief Model that is/will be
 *
 * @param[in] obj The object.
 * @param[in] model Efl model
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View
 */
EAPI EAPI_WEAK void efl_ui_view_model_set(Eo *obj, Efl_Model *model);

/**
 * @brief Model that is/will be
 *
 * @param[in] obj The object.
 *
 * @return Efl model
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View
 */
EAPI EAPI_WEAK Efl_Model *efl_ui_view_model_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_VIEW_EVENT_MODEL_CHANGED;

/** Event dispatched when a new model is set.
 * @return Efl_Model_Changed_Event
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View
 */
#define EFL_UI_VIEW_EVENT_MODEL_CHANGED (&(_EFL_UI_VIEW_EVENT_MODEL_CHANGED))

#endif
