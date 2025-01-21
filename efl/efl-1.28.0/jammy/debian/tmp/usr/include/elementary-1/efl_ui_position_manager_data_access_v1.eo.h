#ifndef _EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_EO_H_
#define _EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_EO_H_

#ifndef _EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_EO_CLASS_TYPE
#define _EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_EO_CLASS_TYPE

typedef Eo Efl_Ui_Position_Manager_Data_Access_V1;

#endif

#ifndef _EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_EO_TYPES
#define _EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Representing the range of a request.
 *
 * @ingroup Efl_Ui_Position_Manager_Request_Range
 */
typedef struct _Efl_Ui_Position_Manager_Request_Range
{
  unsigned int start_id; /**< The first item that must be filled into the passed
                          * slice. */
  unsigned int end_id; /**< The last item that must be filled into the passed
                        * slice. */
} Efl_Ui_Position_Manager_Request_Range;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Struct that is getting filled by the object function callback.
 *
 * @ingroup Efl_Ui_Position_Manager_Object_Batch_Entity
 */
typedef struct _Efl_Ui_Position_Manager_Object_Batch_Entity
{
  Efl_Gfx_Entity *entity; /**< The canvas object. */
  unsigned char element_depth; /**< The depth change in this returned entity.
                                * Every Element has a depth, if the parent is
                                * @c null the depth is 0. Every step deeper
                                * into the hierarchy is exactly one depth
                                * deeper. If this depth has been different to
                                * the previous item, then this element can be
                                * seen as the group leader. The following
                                * elements with the same depth are in the same
                                * group. */
  Eina_Bool depth_leader; /**< @c true if this is the leader of a group */
} Efl_Ui_Position_Manager_Object_Batch_Entity;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Struct that is getting filled by the size function callback.
 *
 * @ingroup Efl_Ui_Position_Manager_Size_Batch_Entity
 */
typedef struct _Efl_Ui_Position_Manager_Size_Batch_Entity
{
  Eina_Size2D size; /**< The size of the element. */
  unsigned char element_depth; /**< The depth change in this returned entity.
                                * Every Element has a depth, if the parent is
                                * @c null the depth is 0. Every step deeper
                                * into the hierarchy is exactly one depth
                                * deeper. If this depth has been different to
                                * the previous item, then this element can be
                                * seen as the group leader. The following
                                * elements with the same depth are in the same
                                * group. */
  Eina_Bool depth_leader; /**< @c true if this is the leader of a group */
} Efl_Ui_Position_Manager_Size_Batch_Entity;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Struct returned by the size access callback.
 *
 * @ingroup Efl_Ui_Position_Manager_Size_Batch_Result
 */
typedef struct _Efl_Ui_Position_Manager_Size_Batch_Result
{
  Eina_Size2D parent_size; /**< The group size of the group where the first item
                            * is part of. */
  unsigned char parent_depth; /**< The depth of the parent */
  unsigned int filled_items; /**< The number of items that are filled into the
                              * slice. */
} Efl_Ui_Position_Manager_Size_Batch_Result;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Struct that is returned by the function callbacks.
 *
 * @ingroup Efl_Ui_Position_Manager_Size_Call_Config
 */
typedef struct _Efl_Ui_Position_Manager_Size_Call_Config
{
  Efl_Ui_Position_Manager_Request_Range range; /**< The range of items to fill
                                                * into @.memory. The length of
                                                * memory must be bigger or
                                                * equal to the requested items
                                                */
  Eina_Bool cache_request; /**< Indicate if this request is made for caching or
                            * displaying. If it's for caching, the
                            * data-provider will fill in approximations,
                            * instead of doing heavy lifting from some
                            * back-end. If this is not a caching call, the
                            * exact size should be requested and delivered at
                            * some later point. */
} Efl_Ui_Position_Manager_Size_Call_Config;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Struct returned by the object access callback
 *
 * @ingroup Efl_Ui_Position_Manager_Object_Batch_Result
 */
typedef struct _Efl_Ui_Position_Manager_Object_Batch_Result
{
  Efl_Ui_Item *group; /**< The group where the first item is part of */
  unsigned char parent_depth; /**< The depth of the parent */
  unsigned int filled_items; /**< The number of items that are filled into the
                              * slice */
} Efl_Ui_Position_Manager_Object_Batch_Result;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Function callback for getting a batch of items.
 *
 * @ingroup Efl_Ui_Position_Manager_Object_Batch_Callback
 */
typedef Efl_Ui_Position_Manager_Object_Batch_Result (*Efl_Ui_Position_Manager_Object_Batch_Callback)(void *data, Efl_Ui_Position_Manager_Request_Range range, Eina_Rw_Slice memory);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Function callback for getting sizes of a batch of items.
 *
 * @ingroup Efl_Ui_Position_Manager_Size_Batch_Callback
 */
typedef Efl_Ui_Position_Manager_Size_Batch_Result (*Efl_Ui_Position_Manager_Size_Batch_Callback)(void *data, Efl_Ui_Position_Manager_Size_Call_Config conf, Eina_Rw_Slice memory);
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Interface for abstracting the data access of the position managers.
 *
 * The idea here is that a data-provider calls
 * @ref efl_ui_position_manager_data_access_v1_data_access_set on the position
 * manager object and passes the functions that are defined here. Later, the
 * position manager can call these function callbacks to get sizes or objects.
 * A data-provider should always fill all requested items. If an item is not
 * available @c null should be inserted. If a size is not available, an
 * as-close-as-possible approximation should be inserted. The Size callback is
 * equipped with a parameter to specify caching requests. This flag can be used
 * to differentiate between two use cases: When the size is being requested to
 * build up a cache over all items, and when the size is being requested to
 * apply it to the object. Since the data-provider might need to do expensive
 * operations to find the exact size, the as-close-as-possible approximation is
 * usually enough when building caches. If real object placement is happening,
 * then real sizes must be requested. If a size changes after it was returned
 * due to batching, this change still should be announced with the
 * @ref efl_ui_position_manager_entity_item_size_changed function.
 *
 * The depth of the items is used to express a hierarchical structure on the
 * items themselves. Any given depth might or might not have a @c depth_leader.
 * A group is ended when there is either a lower depth, or another
 * @c depth_leader.
 *
 * @ingroup Efl_Ui_Position_Manager_Data_Access_V1
 */
#define EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_INTERFACE efl_ui_position_manager_data_access_v1_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_position_manager_data_access_v1_interface_get(void) EINA_CONST;

/**
 * @brief This gives access to items to be managed. The manager reads this
 * information and modifies the retrieved items' positions and sizes.
 *
 * @c obj_access gives access to the graphical entities to manage. Some of them
 * might be @c NULL, meaning they are not yet ready to be displayed. Their size
 * in the @c size_access array will be correct, though, so other entities can
 * still be positioned correctly. Typically, only entities inside the viewport
 * will be retrieved.
 *
 * @c size_access gives access to the 2D sizes for the items to manage. All
 * sizes will always be valid, and might change over time (indicated through
 * the @ref efl_ui_position_manager_entity_item_size_changed method). The whole
 * range might need to be traversed in order to calculate the position of all
 * items in some arrangements.
 *
 * You can access a batch of objects or sizes by calling the here passed
 * function callbacks. Further details can be found at the function
 * definitions.
 *
 * @param[in] obj The object.
 * @param[in] canvas Will use this object to freeze/thaw canvas events.
 * @param[in] obj_access Function callback for canvas objects, even if the
 * start_id is valid, the returned objects may be @c NULL.
 * @param[in] size_access Function callback for the size, returned values are
 * always valid, but might be changed later on.
 * @param[in] size valid size for start_id, 0 <= i < size
 *
 * @ingroup Efl_Ui_Position_Manager_Data_Access_V1
 */
EAPI EAPI_WEAK void efl_ui_position_manager_data_access_v1_data_access_set(Eo *obj, Efl_Ui_Win *canvas, void *obj_access_data, Efl_Ui_Position_Manager_Object_Batch_Callback obj_access, Eina_Free_Cb obj_access_free_cb, void *size_access_data, Efl_Ui_Position_Manager_Size_Batch_Callback size_access, Eina_Free_Cb size_access_free_cb, int size);
#endif /* EFL_BETA_API_SUPPORT */

#endif
