#ifndef _EFL_PACK_EO_H_
#define _EFL_PACK_EO_H_

#ifndef _EFL_PACK_EO_CLASS_TYPE
#define _EFL_PACK_EO_CLASS_TYPE

typedef Eo Efl_Pack;

#endif

#ifndef _EFL_PACK_EO_TYPES
#define _EFL_PACK_EO_TYPES


#endif
/** Common interface for objects (containers) with multiple contents
 * (sub-objects) which can be added and removed at runtime.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack
 */
#define EFL_PACK_INTERFACE efl_pack_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_pack_interface_get(void) EINA_CONST;

/**
 * @brief Removes all packed sub-objects and unreferences them.
 *
 * @param[in] obj The object.
 *
 * @return @c true on success, @c false otherwise.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_clear(Eo *obj);

/**
 * @brief Removes all packed sub-objects without unreferencing them.
 *
 * Use with caution.
 *
 * @param[in] obj The object.
 *
 * @return @c true on success, @c false otherwise.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_unpack_all(Eo *obj);

/**
 * @brief Removes an existing sub-object from the container without deleting
 * it.
 *
 * @param[in] obj The object.
 * @param[in] subobj The sub-object to unpack.
 *
 * @return @c false if @c subobj wasn't in the container or couldn't be
 * removed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_unpack(Eo *obj, Efl_Gfx_Entity *subobj);

/**
 * @brief Adds a sub-object to this container.
 *
 * Depending on the container this will either fill in the default spot,
 * replacing any already existing element or append to the end of the container
 * if there is no default part.
 *
 * When this container is deleted, it will request deletion of the given
 * @c subobj. Use @ref efl_pack_unpack to remove @c subobj from this container
 * without deleting it.
 *
 * @param[in] obj The object.
 * @param[in] subobj The object to pack.
 *
 * @return @c false if @c subobj could not be packed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack
 */
EAPI EAPI_WEAK Eina_Bool efl_pack(Eo *obj, Efl_Gfx_Entity *subobj);

#endif
