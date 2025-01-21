#ifndef _EFL_UI_FACTORY_BIND_EO_H_
#define _EFL_UI_FACTORY_BIND_EO_H_

#ifndef _EFL_UI_FACTORY_BIND_EO_CLASS_TYPE
#define _EFL_UI_FACTORY_BIND_EO_CLASS_TYPE

typedef Eo Efl_Ui_Factory_Bind;

#endif

#ifndef _EFL_UI_FACTORY_BIND_EO_TYPES
#define _EFL_UI_FACTORY_BIND_EO_TYPES


#endif
/** Efl UI Property interface. view object can have @ref Efl_Model and need to
 * set cotent with those model stored data. the interface can help binding the
 * factory to create object with model property data. see @ref Efl_Model see
 * @ref Efl_Ui_Factory
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Factory_Bind
 */
#define EFL_UI_FACTORY_BIND_INTERFACE efl_ui_factory_bind_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_factory_bind_interface_get(void) EINA_CONST;

/**
 * @brief bind the factory with the given key string. when the data is ready or
 * changed, factory create the object and bind the data to the key action and
 * process promised work. Note: the input @ref Efl_Ui_Factory need to be
 * @ref efl_ui_property_bind at least once.
 *
 * @param[in] obj The object.
 * @param[in] key Key string for bind model property data
 * @param[in] factory @ref Efl_Ui_Factory for create and bind model property
 * data
 *
 * @return 0 when it succeed, an error code otherwise.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Factory_Bind
 */
EAPI EAPI_WEAK Eina_Error efl_ui_factory_bind(Eo *obj, const char *key, Efl_Ui_Factory *factory);

#endif
