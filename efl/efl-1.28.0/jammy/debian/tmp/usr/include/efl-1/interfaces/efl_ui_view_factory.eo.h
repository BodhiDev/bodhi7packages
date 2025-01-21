#ifndef _EFL_UI_VIEW_FACTORY_EO_H_
#define _EFL_UI_VIEW_FACTORY_EO_H_

#ifndef _EFL_UI_VIEW_FACTORY_EO_CLASS_TYPE
#define _EFL_UI_VIEW_FACTORY_EO_CLASS_TYPE

typedef Eo Efl_Ui_View_Factory;

#endif

#ifndef _EFL_UI_VIEW_FACTORY_EO_TYPES
#define _EFL_UI_VIEW_FACTORY_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This class provide a utility function that class that wish to use
 * @ref efl_ui_factory_create should use.
 *
 * @ingroup Efl_Ui_View_Factory
 */
#define EFL_UI_VIEW_FACTORY_CLASS efl_ui_view_factory_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_view_factory_class_get(void) EINA_CONST;

/**
 * @brief Create a UI object from the necessary properties in the specified
 * model and generate the created event on the factory when the object is done
 * building. This function must be use by all @ref Efl_Ui_View that need to
 * create object. They should not use @ref efl_ui_factory_create directly.
 *
 * @param[in] factory The factory to use for requesting the new object from and
 * generating the created event onto.
 * @param[in] models Efl iterator providing the model to be associated to the
 * new item. It should remain valid until the end of the function call.
 *
 * @return Created UI object
 *
 * @ingroup Efl_Ui_View_Factory
 */
EAPI EAPI_WEAK Eina_Future *efl_ui_view_factory_create_with_event(Efl_Ui_Factory *factory, Eina_Iterator *models EFL_TRANSFER_OWNERSHIP);
#endif /* EFL_BETA_API_SUPPORT */

#endif
