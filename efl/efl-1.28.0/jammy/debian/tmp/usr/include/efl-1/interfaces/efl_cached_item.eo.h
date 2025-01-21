#ifndef _EFL_CACHED_ITEM_EO_H_
#define _EFL_CACHED_ITEM_EO_H_

#ifndef _EFL_CACHED_ITEM_EO_CLASS_TYPE
#define _EFL_CACHED_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Cached_Item;

#endif

#ifndef _EFL_CACHED_ITEM_EO_TYPES
#define _EFL_CACHED_ITEM_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Interface for objects which can be cached in memory.
 *
 * Since memory is a limited resource, it is interesting to know how much of it
 * an object requires. This interface provides a read-only property for objects
 * to report their memory consumption.
 *
 * Keep in mind that this should not only take into account by the object
 * structure itself, but any dynamic memory it might allocate.
 *
 * This is used by @ref Efl_Ui_Caching_Factory, for example, to keep track of
 * the total amount of memory used by the objects the factory creates.
 *
 * @ingroup Efl_Cached_Item
 */
#define EFL_CACHED_ITEM_INTERFACE efl_cached_item_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_cached_item_interface_get(void) EINA_CONST;

/**
 * @brief The amount of memory currently used by this object.
 *
 * @param[in] obj The object.
 *
 * @return Bytes of memory.
 *
 * @ingroup Efl_Cached_Item
 */
EAPI EAPI_WEAK unsigned int efl_cached_item_memory_size_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
