#ifndef _EFL_UI_POSITION_MANAGER_ENTITY_EO_H_
#define _EFL_UI_POSITION_MANAGER_ENTITY_EO_H_

#ifndef _EFL_UI_POSITION_MANAGER_ENTITY_EO_CLASS_TYPE
#define _EFL_UI_POSITION_MANAGER_ENTITY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Position_Manager_Entity;

#endif

#ifndef _EFL_UI_POSITION_MANAGER_ENTITY_EO_TYPES
#define _EFL_UI_POSITION_MANAGER_ENTITY_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** A structure containing the updated range of visible items in this position
 * manger.
 *
 * @ingroup Efl_Ui_Position_Manager_Range_Update
 */
typedef struct _Efl_Ui_Position_Manager_Range_Update
{
  unsigned int start_id; /**< The first item that is visible */
  unsigned int end_id; /**< The last item that is visible */
} Efl_Ui_Position_Manager_Range_Update;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This abstracts the basic placement of items in a not-defined form
 * under a viewport.
 *
 * The interface gets a defined set of elements that is meant to be displayed.
 * The implementation provides a way to calculate the size that is required to
 * display all items. Every time this absolute size of items is changed,
 * @[Efl.Ui.Position_Manager.Entity.content_size,changed] is emitted.
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
#define EFL_UI_POSITION_MANAGER_ENTITY_INTERFACE efl_ui_position_manager_entity_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_position_manager_entity_interface_get(void) EINA_CONST;

/**
 * @brief Returns the version of Data_Access that is used. This object needs to
 * implement the interface @ref Efl_Ui_Position_Manager_Data_Access_V1 if 1 is
 * returned.
 *
 * @param[in] obj The object.
 * @param[in] max The maximum version that is available from the data-provider.
 *
 * @return The version that should be used here. 0 is an error.
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
EAPI EAPI_WEAK int efl_ui_position_manager_entity_version(Eo *obj, int max);

/**
 * @brief This is the position and size of the viewport, where elements are
 * displayed in. Entities outside this viewport will not be shown.
 *
 * @param[in] obj The object.
 * @param[in] viewport
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
EAPI EAPI_WEAK void efl_ui_position_manager_entity_viewport_set(Eo *obj, Eina_Rect viewport);

/**
 * @brief Move the items relative to the viewport.
 *
 * The items that are managed with this position manager might be bigger than
 * the actual viewport. The positioning of the layer where all items are on is
 * described by these values. 0.0,0.0 means that layer is moved that the top
 * left items are shown, 1.0,1.0 means, that the lower right items are shown.
 *
 * @param[in] obj The object.
 * @param[in] x X position of the scroller, valid form 0 to 1.0
 * @param[in] y Y position of the scroller, valid form 0 to 1.0
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
EAPI EAPI_WEAK void efl_ui_position_manager_entity_scroll_position_set(Eo *obj, double x, double y);

/**
 * @brief Return the position and size of item idx.
 *
 * This method returns the size and position of the item at @c idx. Even if the
 * item is outside the viewport, the returned rectangle must be valid. The
 * result can be used for scrolling calculations.
 *
 * @param[in] obj The object.
 * @param[in] idx The id for the item
 *
 * @return Position and Size in canvas coordinates.
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
EAPI EAPI_WEAK Eina_Rect efl_ui_position_manager_entity_position_single_item(Eo *obj, int idx);

/**
 * @brief The new item @c subobj has been added at the @c added_index field.
 *
 * The accessor provided through
 * @ref efl_ui_position_manager_data_access_v1_data_access_set will contain
 * updated Entities.
 *
 * @param[in] obj The object.
 * @param[in] added_index
 * @param[in] subobj
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
EAPI EAPI_WEAK void efl_ui_position_manager_entity_item_added(Eo *obj, int added_index, Efl_Gfx_Entity *subobj);

/**
 * @brief The item @c subobj previously at position @c removed_index has been
 * removed. The accessor provided through
 * @ref efl_ui_position_manager_data_access_v1_data_access_set will contain
 * updated Entities.
 *
 * @param[in] obj The object.
 * @param[in] removed_index
 * @param[in] subobj
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
EAPI EAPI_WEAK void efl_ui_position_manager_entity_item_removed(Eo *obj, int removed_index, Efl_Gfx_Entity *subobj);

/**
 * @brief The size of the items from @c start_id to @c end_id have been
 * changed. The positioning and sizing of all items will be updated
 *
 * @param[in] obj The object.
 * @param[in] start_id The first item that has a new size
 * @param[in] end_id The last item that has a new size
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
EAPI EAPI_WEAK void efl_ui_position_manager_entity_item_size_changed(Eo *obj, int start_id, int end_id);

/**
 * @brief The items from @c start_id to @c end_id now have their entities ready
 *
 * The position manager will reapply the geometry to the elements if they are
 * visible.
 *
 * @param[in] obj The object.
 * @param[in] start_id The first item that is available
 * @param[in] end_id The last item that is available
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
EAPI EAPI_WEAK void efl_ui_position_manager_entity_entities_ready(Eo *obj, unsigned int start_id, unsigned int end_id);

/**
 * @brief Translates the @c current_id, into a new id which is oriented in the
 * @c direction of @c current_id. In case that there is no item, -1 is returned
 *
 * @param[in] obj The object.
 * @param[in] current_id The id where the direction is oriented at
 * @param[in] direction The direction where the new id is
 * @param[out] index The relative item index after the translation has been
 * applied.
 *
 * @return @c true if there is a next item, @c false otherwise.
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_position_manager_entity_relative_item(Eo *obj, unsigned int current_id, Efl_Ui_Focus_Direction direction, unsigned int *index);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_POSITION_MANAGER_ENTITY_EVENT_CONTENT_SIZE_CHANGED;

/** Emitted when the aggregate size of all items has changed. This can be used
 * to resize an enclosing Pan object.
 * @return Eina_Size2D
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
#define EFL_UI_POSITION_MANAGER_ENTITY_EVENT_CONTENT_SIZE_CHANGED (&(_EFL_UI_POSITION_MANAGER_ENTITY_EVENT_CONTENT_SIZE_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_POSITION_MANAGER_ENTITY_EVENT_CONTENT_MIN_SIZE_CHANGED;

/** Emitted when the minimum size of all items has changed. The minimum size is
 * the size that this position_manager needs to display a single item.
 * @return Eina_Size2D
 *
 * @ingroup Efl_Ui_Position_Manager_Entity
 */
#define EFL_UI_POSITION_MANAGER_ENTITY_EVENT_CONTENT_MIN_SIZE_CHANGED (&(_EFL_UI_POSITION_MANAGER_ENTITY_EVENT_CONTENT_MIN_SIZE_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_POSITION_MANAGER_ENTITY_EVENT_VISIBLE_RANGE_CHANGED;

/**
 * No description
 * @return Efl_Ui_Position_Manager_Range_Update
 */
#define EFL_UI_POSITION_MANAGER_ENTITY_EVENT_VISIBLE_RANGE_CHANGED (&(_EFL_UI_POSITION_MANAGER_ENTITY_EVENT_VISIBLE_RANGE_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
