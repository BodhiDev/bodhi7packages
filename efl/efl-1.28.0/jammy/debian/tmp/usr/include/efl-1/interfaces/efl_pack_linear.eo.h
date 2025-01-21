#ifndef _EFL_PACK_LINEAR_EO_H_
#define _EFL_PACK_LINEAR_EO_H_

#ifndef _EFL_PACK_LINEAR_EO_CLASS_TYPE
#define _EFL_PACK_LINEAR_EO_CLASS_TYPE

typedef Eo Efl_Pack_Linear;

#endif

#ifndef _EFL_PACK_LINEAR_EO_TYPES
#define _EFL_PACK_LINEAR_EO_TYPES


#endif
/**
 * @brief Common interface for objects (containers) with multiple contents
 * (sub-objects) which can be added and removed at runtime in a linear fashion.
 *
 * This means the sub-objects are internally organized in an ordered list.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Linear
 */
#define EFL_PACK_LINEAR_INTERFACE efl_pack_linear_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_pack_linear_interface_get(void) EINA_CONST;

/**
 * @brief Prepend an object at the beginning of this container.
 *
 * This is the same as @ref efl_pack_at with a <tt>0</tt> index.
 *
 * When this container is deleted, it will request deletion of the given
 * @c subobj. Use @ref efl_pack_unpack to remove @c subobj from this container
 * without deleting it.
 *
 * @param[in] obj The object.
 * @param[in] subobj Object to pack at the beginning.
 *
 * @return @c false if @c subobj could not be packed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Linear
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_begin(Eo *obj, Efl_Gfx_Entity *subobj);

/**
 * @brief Append object at the end of this container.
 *
 * This is the same as @ref efl_pack_at with a <tt>-1</tt> index.
 *
 * When this container is deleted, it will request deletion of the given
 * @c subobj. Use @ref efl_pack_unpack to remove @c subobj from this container
 * without deleting it.
 *
 * @param[in] obj The object.
 * @param[in] subobj Object to pack at the end.
 *
 * @return @c false if @c subobj could not be packed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Linear
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_end(Eo *obj, Efl_Gfx_Entity *subobj);

/**
 * @brief Prepend an object before the @c existing sub-object.
 *
 * When this container is deleted, it will request deletion of the given
 * @c subobj. Use @ref efl_pack_unpack to remove @c subobj from this container
 * without deleting it.
 *
 * If @c existing is @c NULL this method behaves like @ref efl_pack_begin.
 *
 * @param[in] obj The object.
 * @param[in] subobj Object to pack before @c existing.
 * @param[in] existing Existing reference sub-object. Must already belong to
 * the container or be @c NULL.
 *
 * @return @c false if @c existing could not be found or @c subobj could not be
 * packed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Linear
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_before(Eo *obj, Efl_Gfx_Entity *subobj, const Efl_Gfx_Entity *existing);

/**
 * @brief Append an object after the @c existing sub-object.
 *
 * When this container is deleted, it will request deletion of the given
 * @c subobj. Use @ref efl_pack_unpack to remove @c subobj from this container
 * without deleting it.
 *
 * If @c existing is @c NULL this method behaves like @ref efl_pack_end.
 *
 * @param[in] obj The object.
 * @param[in] subobj Object to pack after @c existing.
 * @param[in] existing Existing reference sub-object. Must already belong to
 * the container or be @c NULL.
 *
 * @return @c false if @c existing could not be found or @c subobj could not be
 * packed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Linear
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_after(Eo *obj, Efl_Gfx_Entity *subobj, const Efl_Gfx_Entity *existing);

/**
 * @brief Inserts @c subobj BEFORE the sub-object at position @c index.
 *
 * @c index ranges from <tt>-count</tt> to <tt>count-1</tt>, where
 * positive numbers go from first sub-object ($[0]) to last ($[count-1]), and
 * negative numbers go from last sub-object ($[-1]) to first ($[-count]).
 * @c count is the number of sub-objects currently in the container as returned
 * by @ref efl_content_count.
 *
 * If @c index is less than <tt>-count</tt>, it will trigger
 * @ref efl_pack_begin whereas @c index greater than <tt>count-1</tt> will
 * trigger @ref efl_pack_end.
 *
 * When this container is deleted, it will request deletion of the given
 * @c subobj. Use @ref efl_pack_unpack to remove @c subobj from this container
 * without deleting it.
 *
 * @param[in] obj The object.
 * @param[in] subobj Object to pack.
 * @param[in] index Index of existing sub-object to insert BEFORE. Valid range
 * is <tt>-count</tt> to <tt>count-1</tt>).
 *
 * @return @c false if @c subobj could not be packed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Linear
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_at(Eo *obj, Efl_Gfx_Entity *subobj, int index);

/**
 * @brief Sub-object at a given @c index in this container.
 *
 * @c index ranges from <tt>-count</tt> to <tt>count-1</tt>, where
 * positive numbers go from first sub-object ($[0]) to last ($[count-1]), and
 * negative numbers go from last sub-object ($[-1]) to first ($[-count]).
 * @c count is the number of sub-objects currently in the container as returned
 * by @ref efl_content_count.
 *
 * If @c index is less than <tt>-count</tt>, it will return the first
 * sub-object whereas @c index greater than <tt>count-1</tt> will return
 * the last sub-object.
 *
 * @param[in] obj The object.
 * @param[in] index Index of the existing sub-object to retrieve. Valid range
 * is <tt>-count</tt> to <tt>count-1</tt>.
 *
 * @return The sub-object contained at the given @c index.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Linear
 */
EAPI EAPI_WEAK Efl_Gfx_Entity *efl_pack_content_get(Eo *obj, int index);

/**
 * @brief Get the index of a sub-object in this container.
 *
 * @param[in] obj The object.
 * @param[in] subobj An existing sub-object in this container.
 *
 * @return -1 in case @c subobj is not found, or the index of @c subobj in the
 * range <tt>0</tt> to <tt>count-1</tt>.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Linear
 */
EAPI EAPI_WEAK int efl_pack_index_get(Eo *obj, const Efl_Gfx_Entity *subobj);

/**
 * @brief Pop out (remove) the sub-object at the specified @c index.
 *
 * @c index ranges from <tt>-count</tt> to <tt>count-1</tt>, where
 * positive numbers go from first sub-object ($[0]) to last ($[count-1]), and
 * negative numbers go from last sub-object ($[-1]) to first ($[-count]).
 * @c count is the number of sub-objects currently in the container as returned
 * by @ref efl_content_count.
 *
 * If @c index is less than -$count, it will remove the first sub-object
 * whereas @c index greater than @c count-1 will remove the last sub-object.
 *
 * @param[in] obj The object.
 * @param[in] index Index of the sub-object to remove. Valid range is
 * <tt>-count</tt> to <tt>count-1</tt>.
 *
 * @return The sub-object if it could be removed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Linear
 */
EAPI EAPI_WEAK Efl_Gfx_Entity *efl_pack_unpack_at(Eo *obj, int index);

#endif
