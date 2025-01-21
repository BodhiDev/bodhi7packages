#ifndef _EFL_UI_PROPERTY_BIND_EO_H_
#define _EFL_UI_PROPERTY_BIND_EO_H_

#ifndef _EFL_UI_PROPERTY_BIND_EO_CLASS_TYPE
#define _EFL_UI_PROPERTY_BIND_EO_CLASS_TYPE

typedef Eo Efl_Ui_Property_Bind;

#endif

#ifndef _EFL_UI_PROPERTY_BIND_EO_TYPES
#define _EFL_UI_PROPERTY_BIND_EO_TYPES

/** EFL Ui property event data structure triggered when an object property
 * change due to the interaction on the object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Property_Event
 */
typedef struct _Efl_Ui_Property_Event
{
  Eina_Array *changed_properties; /**< List of changed properties
                                   *
                                   * @since 1.23 */
} Efl_Ui_Property_Event;


#endif
/** Efl UI Property_Bind interface. view object can have @ref Efl_Model to
 * manage the data, the interface can help loading and tracking child data from
 * the model property. see @ref Efl_Model see @ref Efl_Ui_Factory
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Property_Bind
 */
#define EFL_UI_PROPERTY_BIND_INTERFACE efl_ui_property_bind_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_property_bind_interface_get(void) EINA_CONST;

/**
 * @brief bind property data with the given key string. when the data is ready
 * or changed, bind the data to the key action and process promised work.
 *
 * @param[in] obj The object.
 * @param[in] key key string for bind model property data
 * @param[in] property Model property name
 *
 * @return 0 when it succeed, an error code otherwise.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Property_Bind
 */
EAPI EAPI_WEAK Eina_Error efl_ui_property_bind(Eo *obj, const char *key, const char *property);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_PROPERTY_BIND_EVENT_PROPERTIES_CHANGED;

/** Event dispatched when a property on the object has changed due to a user
 * interaction on the object that a model could be interested in.
 * @return Efl_Ui_Property_Event
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Property_Bind
 */
#define EFL_UI_PROPERTY_BIND_EVENT_PROPERTIES_CHANGED (&(_EFL_UI_PROPERTY_BIND_EVENT_PROPERTIES_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_PROPERTY_BIND_EVENT_PROPERTY_BOUND;

/** Event dispatched when a property on the object is bound to a model. This is
 * useful to avoid generating too many events.
 * @return Eina_Stringshare *
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Property_Bind
 */
#define EFL_UI_PROPERTY_BIND_EVENT_PROPERTY_BOUND (&(_EFL_UI_PROPERTY_BIND_EVENT_PROPERTY_BOUND))

#endif
