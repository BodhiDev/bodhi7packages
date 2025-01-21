#ifndef _EFL_UI_FACTORY_EO_H_
#define _EFL_UI_FACTORY_EO_H_

#ifndef _EFL_UI_FACTORY_EO_CLASS_TYPE
#define _EFL_UI_FACTORY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Factory;

#endif

#ifndef _EFL_UI_FACTORY_EO_TYPES
#define _EFL_UI_FACTORY_EO_TYPES

/** EFL UI Factory event structure provided when an item was just created.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Factory_Item_Created_Event
 */
typedef struct _Efl_Ui_Factory_Item_Created_Event
{
  Efl_Model *model; /**< The model already set on the new item.
                     *
                     * @since 1.23 */
  Efl_Gfx_Entity *item; /**< The item that was just created.
                         *
                         * @since 1.23 */
} Efl_Ui_Factory_Item_Created_Event;


#endif
/**
 * @brief Interface for factory-pattern object creation.
 *
 * This object represents a Factory in the factory pattern. Objects should be
 * created via the method @ref efl_ui_view_factory_create_with_event, which
 * will in turn call the necessary APIs from this interface. Objects created
 * this way should be removed using @ref efl_ui_factory_release.
 *
 * It is recommended to not create your own @ref Efl_Ui_Factory and use event
 * handler as much as possible.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Factory
 */
#define EFL_UI_FACTORY_INTERFACE efl_ui_factory_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_factory_interface_get(void) EINA_CONST;

#ifdef EFL_UI_FACTORY_PROTECTED
/**
 * @brief Create a UI object from the necessary properties in the specified
 * model.
 *
 * @note This is the function you need to implement for a custom factory, but
 * if you want to use a factory, you should rely on
 * @ref efl_ui_view_factory_create_with_event.
 *
 * @param[in] obj The object.
 * @param[in] models Efl iterator providing the model to be associated to the
 * new item. It should remain valid until the end of the function call.
 *
 * @return Created UI object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Factory
 */
EAPI EAPI_WEAK Eina_Future *efl_ui_factory_create(Eo *obj, Eina_Iterator *models EFL_TRANSFER_OWNERSHIP) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif

/**
 * @brief Release a UI object and disconnect from models.
 *
 * @param[in] obj The object.
 * @param[in] ui_views Object to remove.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Factory
 */
EAPI EAPI_WEAK void efl_ui_factory_release(Eo *obj, Eina_Iterator *ui_views EFL_TRANSFER_OWNERSHIP);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FACTORY_EVENT_ITEM_CONSTRUCTING;

/** Event emitted when an item is under construction (between the
 * @ref efl_constructor and @ref efl_finalize call on the item). Note: If the
 * @ref Efl_Ui_Factory keeps a cache of objects, this won't be called when
 * objects are pulled from the cache.
 * @return Efl_Gfx_Entity *
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Factory
 */
#define EFL_UI_FACTORY_EVENT_ITEM_CONSTRUCTING (&(_EFL_UI_FACTORY_EVENT_ITEM_CONSTRUCTING))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FACTORY_EVENT_ITEM_BUILDING;

/** Event emitted when an item has processed @ref efl_finalize, but before all
 * the factory are done building it. Note: If the @ref Efl_Ui_Factory keeps a
 * cache of objects, this will be called when objects are pulled from the
 * cache.
 * @return Efl_Gfx_Entity *
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Factory
 */
#define EFL_UI_FACTORY_EVENT_ITEM_BUILDING (&(_EFL_UI_FACTORY_EVENT_ITEM_BUILDING))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FACTORY_EVENT_ITEM_CREATED;

/** Event emitted when an item has been successfully created by the factory and
 * is about to be used by an @ref Efl_Ui_View.
 * @return Efl_Gfx_Entity *
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Factory
 */
#define EFL_UI_FACTORY_EVENT_ITEM_CREATED (&(_EFL_UI_FACTORY_EVENT_ITEM_CREATED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FACTORY_EVENT_ITEM_RELEASING;

/** Event emitted when an item is being released by the @ref Efl_Ui_Factory. It
 * must be assumed that after this call, the object can be recycles to another
 * @ref Efl_Ui_View and there can be more than one call for the same item.
 * @return Efl_Gfx_Entity *
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Factory
 */
#define EFL_UI_FACTORY_EVENT_ITEM_RELEASING (&(_EFL_UI_FACTORY_EVENT_ITEM_RELEASING))

#endif
