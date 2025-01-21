#ifndef _EFL_UI_CACHING_FACTORY_EO_H_
#define _EFL_UI_CACHING_FACTORY_EO_H_

#ifndef _EFL_UI_CACHING_FACTORY_EO_CLASS_TYPE
#define _EFL_UI_CACHING_FACTORY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Caching_Factory;

#endif

#ifndef _EFL_UI_CACHING_FACTORY_EO_TYPES
#define _EFL_UI_CACHING_FACTORY_EO_TYPES


#endif
/**
 * @brief Efl UI Factory that provides object caching.
 *
 * This factory handles caching of one type of object that must be an
 * @ref Efl_Gfx_Entity with an @ref Efl_Ui_View interface defined. This factory
 * will rely on its parent class @ref Efl_Ui_Widget_Factory for creating the
 * subset of class that match the @ref Efl_Ui_Widget interface. The factory
 * will automatically empty the cache when the application goes into the
 * background (@[Efl.App.pause] event).
 *
 * Creating objects is costly and time consuming, keeping a few on hand for
 * when you next will need them helps a lot. This is what this factory caching
 * infrastructure provides. It will create the object from the class defined on
 * it and set the parent and the model as needed for all created items. The
 * View has to release the Item using the release function of the Factory
 * interface for all of this to work properly.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Caching_Factory
 */
#define EFL_UI_CACHING_FACTORY_CLASS efl_ui_caching_factory_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_caching_factory_class_get(void) EINA_CONST;

/**
 * @brief Define the maximum size in Bytes that all the objects waiting on
 * standby in the cache can take. They must provide the @ref Efl_Cached_Item
 * interface for an accurate accounting.
 *
 * @param[in] obj The object.
 * @param[in] limit When set to zero, there is no limit on the amount of memory
 * the cache will use.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Caching_Factory
 */
EAPI EAPI_WEAK void efl_ui_caching_factory_memory_limit_set(Eo *obj, unsigned int limit);

/**
 * @brief Define the maximum size in Bytes that all the objects waiting on
 * standby in the cache can take. They must provide the @ref Efl_Cached_Item
 * interface for an accurate accounting.
 *
 * @param[in] obj The object.
 *
 * @return When set to zero, there is no limit on the amount of memory the
 * cache will use.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Caching_Factory
 */
EAPI EAPI_WEAK unsigned int efl_ui_caching_factory_memory_limit_get(const Eo *obj);

/**
 * @brief Define how many maximum number of items are waiting on standby in the
 * cache.
 *
 * @param[in] obj The object.
 * @param[in] limit When set to zero, there is no limit to the amount of items
 * stored in the cache.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Caching_Factory
 */
EAPI EAPI_WEAK void efl_ui_caching_factory_items_limit_set(Eo *obj, unsigned int limit);

/**
 * @brief Define how many maximum number of items are waiting on standby in the
 * cache.
 *
 * @param[in] obj The object.
 *
 * @return When set to zero, there is no limit to the amount of items stored in
 * the cache.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Caching_Factory
 */
EAPI EAPI_WEAK unsigned int efl_ui_caching_factory_items_limit_get(const Eo *obj);

#endif
