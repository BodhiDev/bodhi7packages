#ifndef _EFL_UI_ITEM_EO_H_
#define _EFL_UI_ITEM_EO_H_

#ifndef _EFL_UI_ITEM_EO_CLASS_TYPE
#define _EFL_UI_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Ui_Item;

#endif

#ifndef _EFL_UI_ITEM_EO_TYPES
#define _EFL_UI_ITEM_EO_TYPES


#endif
/**
 * @brief Selectable Item abstraction.
 *
 * This class serves as the basis to create widgets acting as selectable items
 * inside containers like @ref Efl_Ui_List or @ref Efl_Ui_Grid, for example.
 *
 * @ref Efl_Ui_Item provides user interaction through the
 * @ref Efl_Input_Clickable mixin. Items can be pressed, long-pressed, etc, and
 * appropriate events are generated. @ref Efl_Ui_Item also implements the
 * @ref Efl_Ui_Selectable interface, meaning that "selected" and "unselected"
 * events are automatically generated.
 *
 * Classes inheriting from this one only need to deal with the visual
 * representation of the widget. See for example @ref Efl_Ui_Grid_Default_Item
 * and @ref Efl_Ui_List_Default_Item.
 *
 * Some events are converted to edje signals so the theme can react to them:
 * @[Efl.Input.Clickable.pressed] -> "efl,state,pressed",
 * @[Efl.Input.Clickable.unpressed] -> "efl,state,unpressed",
 * @[Efl.Ui.Selectable.selected,changed] (true) -> "efl,state,selected",
 * @[Efl.Ui.Selectable.selected,changed] (false) -> "efl,state,unselected".
 *
 * Item grouping inside containers is handled through the
 * @ref Efl_Ui_Group_Item class.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Item
 */
#define EFL_UI_ITEM_CLASS efl_ui_item_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_item_class_get(void) EINA_CONST;

/**
 * @brief The index of this item inside its container.
 *
 * The container must be set through the @ref efl_ui_item_container_get
 * property and be exposing an @ref Efl_Pack_Linear interface. If the container
 * is not an @ref Efl_Pack_Linear, -1 will be returned.
 *
 * Finally, it is a very slow API that must not be used in any performance
 * constrained case.
 *
 * @param[in] obj The object.
 *
 * @return The index where to find this item in its
 * @ref efl_ui_item_container_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Item
 */
EAPI EAPI_WEAK int efl_ui_item_index_get(const Eo *obj);

/**
 * @brief The container this object is part of.
 *
 * You should never use this property directly, the container will set it when
 * the item is added. Unsetting this while the item is packed inside a
 * container does not remove the item from the container.
 *
 * @param[in] obj The object.
 * @param[in] container The container this item is in.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Item
 */
EAPI EAPI_WEAK void efl_ui_item_container_set(Eo *obj, Efl_Ui_Widget *container);

/**
 * @brief The container this object is part of.
 *
 * You should never use this property directly, the container will set it when
 * the item is added. Unsetting this while the item is packed inside a
 * container does not remove the item from the container.
 *
 * @param[in] obj The object.
 *
 * @return The container this item is in.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Item
 */
EAPI EAPI_WEAK Efl_Ui_Widget *efl_ui_item_container_get(const Eo *obj);

/**
 * @brief The parent of the item.
 *
 * This property expresses a tree structure of items. If the parent is @c NULL
 * the item is added to the root level of the content. The item parent can only
 * be set once. When the object is invalidated, the item parent is set to
 * @c NULL and still cannot be reset.
 *
 * @param[in] obj The object.
 * @param[in] parent
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Item
 */
EAPI EAPI_WEAK void efl_ui_item_parent_set(Eo *obj, Efl_Ui_Item *parent);

/**
 * @brief The parent of the item.
 *
 * This property expresses a tree structure of items. If the parent is @c NULL
 * the item is added to the root level of the content. The item parent can only
 * be set once. When the object is invalidated, the item parent is set to
 * @c NULL and still cannot be reset.
 *
 * @param[in] obj The object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Item
 */
EAPI EAPI_WEAK Efl_Ui_Item *efl_ui_item_parent_get(const Eo *obj);

/**
 * @brief If the item has its calc locked it will not trigger
 * @ref efl_canvas_group_need_recalculate_set done.
 *
 * This is done automatically by @ref Efl_Ui_Widget_Factory, but you can use
 * this information to meaningfully set the hint when items are not
 * @ref efl_ui_item_calc_locked_get.
 *
 * @param[in] obj The object.
 * @param[in] locked If set to @c true, no more
 * @ref efl_canvas_group_need_recalculate_set
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Item
 */
EAPI EAPI_WEAK void efl_ui_item_calc_locked_set(Eo *obj, Eina_Bool locked);

/**
 * @brief If the item has its calc locked it will not trigger
 * @ref efl_canvas_group_need_recalculate_set done.
 *
 * This is done automatically by @ref Efl_Ui_Widget_Factory, but you can use
 * this information to meaningfully set the hint when items are not
 * @ref efl_ui_item_calc_locked_get.
 *
 * @param[in] obj The object.
 *
 * @return If set to @c true, no more
 * @ref efl_canvas_group_need_recalculate_set
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Item
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_item_calc_locked_get(const Eo *obj);

#endif
