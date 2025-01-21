#ifndef _EFL_UI_FOCUS_MANAGER_EO_H_
#define _EFL_UI_FOCUS_MANAGER_EO_H_

#ifndef _EFL_UI_FOCUS_MANAGER_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Manager;

#endif

#ifndef _EFL_UI_FOCUS_MANAGER_EO_TYPES
#define _EFL_UI_FOCUS_MANAGER_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Structure holding the graph of relations between focusable objects.
 *
 * @ingroup Efl_Ui_Focus_Relations
 */
typedef struct _Efl_Ui_Focus_Relations
{
  Eina_Iterator *right; /**< List of objects to the right. */
  Eina_Iterator *left; /**< List of objects to the left. */
  Eina_Iterator *top; /**< List of objects above. */
  Eina_Iterator *down; /**< List of objects below. */
  Efl_Ui_Focus_Object *next; /**< Next object. */
  Efl_Ui_Focus_Object *prev; /**< Previous object. */
  Efl_Ui_Focus_Object *parent; /**< Parent object. */
  Efl_Ui_Focus_Manager *redirect; /**< Redirect manager. */
  Efl_Ui_Focus_Object *node; /**< The node where this information is from. */
  Eina_Bool logical; /**< @c true if this is a logical (non-regular) node. */
  int position_in_history; /**< The position in the history stack. */
} Efl_Ui_Focus_Relations;
#endif /* EFL_BETA_API_SUPPORT */

/** Structure holding the focus object with extra information on logical end.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager_Logical_End_Detail
 */
typedef struct _Efl_Ui_Focus_Manager_Logical_End_Detail
{
  Eina_Bool is_regular_end; /**< @c true if element is registered as regular
                             * element in the @ref Efl_Ui_Focus_Manager object.
                             *
                             * @since 1.22 */
  Efl_Ui_Focus_Object *element; /**< The last element of the logical chain in
                                 * the @ref Efl_Ui_Focus_Manager.
                                 *
                                 * @since 1.22 */
} Efl_Ui_Focus_Manager_Logical_End_Detail;


#endif
/**
 * @brief Interface for managing focus objects.
 *
 * This interface is built in order to support movement of the focus property
 * in a set of widgets. The movement of the focus property can happen in a tree
 * manner, or a graph manner. The movement is also keeping track of the history
 * of focused elements. The tree interpretation differentiates between logical
 * and regular widgets: Logical widgets (typically containers) cannot receive
 * focus, whereas Regular ones (like buttons) can.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_INTERFACE efl_ui_focus_manager_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_focus_manager_interface_get(void) EINA_CONST;

/**
 * @brief Moves the focus in the given direction to the next regular widget.
 *
 * This call flushes all changes. This means all changes since last flush are
 * computed.
 *
 * @param[in] obj The object.
 * @param[in] direction The direction to move to.
 *
 * @return The element which is now focused.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Object *efl_ui_focus_manager_move(Eo *obj, Efl_Ui_Focus_Direction direction);

/**
 * @brief Returns the object in the @c direction from @c child.
 *
 * @param[in] obj The object.
 * @param[in] direction Direction to move focus.
 * @param[in] child The child to move from. Pass @c null to indicate the
 * currently focused child.
 * @param[in] logical Wether you want to have a logical node as result or a
 * regular. Note that in a @ref efl_ui_focus_manager_move call logical nodes
 * will not get focus.
 *
 * @return Object that would receive focus if moved in the given direction.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Object *efl_ui_focus_manager_request_move(Eo *obj, Efl_Ui_Focus_Direction direction, Efl_Ui_Focus_Object *child, Eina_Bool logical);

/**
 * @brief The element which is currently focused by this manager.
 *
 * Use this property to retrieve the object currently being focused, or to set
 * the focus to a new one. When @c focus is a logical child (which cannot
 * receive focus), the next regular object is selected instead. If there is no
 * such object, focus does not change.
 *
 * @param[in] obj The object.
 * @param[in] focus Currently focused element.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK void efl_ui_focus_manager_focus_set(Eo *obj, Efl_Ui_Focus_Object *focus);

/**
 * @brief The element which is currently focused by this manager.
 *
 * Use this property to retrieve the object currently being focused, or to set
 * the focus to a new one. When @c focus is a logical child (which cannot
 * receive focus), the next regular object is selected instead. If there is no
 * such object, focus does not change.
 *
 * @param[in] obj The object.
 *
 * @return Currently focused element.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Object *efl_ui_focus_manager_focus_get(const Eo *obj);

/**
 * @brief Add another manager to serve the move requests.
 *
 * If this value is set, all move requests are redirected to this manager
 * object. Set it to @c null once nothing should be redirected anymore.
 *
 * @param[in] obj The object.
 * @param[in] redirect The new focus manager.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK void efl_ui_focus_manager_redirect_set(Eo *obj, Efl_Ui_Focus_Manager *redirect);

/**
 * @brief Add another manager to serve the move requests.
 *
 * If this value is set, all move requests are redirected to this manager
 * object. Set it to @c null once nothing should be redirected anymore.
 *
 * @param[in] obj The object.
 *
 * @return The new focus manager.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Manager *efl_ui_focus_manager_redirect_get(const Eo *obj);

/**
 * @brief Elements which are at the border of the graph.
 *
 * This means one of the relations right,left or down,up are not set. This call
 * flushes all changes. See @ref efl_ui_focus_manager_move.
 *
 * @param[in] obj The object.
 *
 * @return An iterator over the border objects.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Eina_Iterator *efl_ui_focus_manager_border_elements_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Return @c true if the border elements have changed since the last
 * invocation of @ref efl_ui_focus_manager_border_elements_get
 *
 * @param[in] obj The object.
 *
 * @return @c true if there was a change, @c false if not
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_manager_border_elements_changed_get(const Eo *obj);

/**
 * @brief Elements that are at the border of the viewport
 *
 * Every element returned by this is located inside the viewport rectangle, but
 * has a right, left, down or up neighbor outside the viewport.
 *
 * @param[in] obj The object.
 * @param[in] viewport The rectangle defining the viewport.
 *
 * @return An iterator over the viewport border objects.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Eina_Iterator *efl_ui_focus_manager_viewport_elements_get(const Eo *obj, Eina_Rect viewport) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Root node for all logical sub-trees.
 *
 * This property can only be set once.
 *
 * @param[in] obj The object.
 * @param[in] root Object to register as the root of this manager object.
 *
 * @return @c true on success, @c false if it had already been set.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_manager_root_set(Eo *obj, Efl_Ui_Focus_Object *root);

/**
 * @brief Root node for all logical sub-trees.
 *
 * This property can only be set once.
 *
 * @param[in] obj The object.
 *
 * @return Object to register as the root of this manager object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Object *efl_ui_focus_manager_root_get(const Eo *obj);

/**
 * @brief Returns the widget in the direction next.
 *
 * The returned widget is a child of @c root. It's guaranteed that child will
 * not be prepared again, so you can call this function inside a
 * @ref efl_ui_focus_object_setup_order call.
 *
 * @param[in] obj The object.
 * @param[in] root Parent for returned child.
 *
 * @return Child of passed parameter.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Object *efl_ui_focus_manager_request_subchild(Eo *obj, Efl_Ui_Focus_Object *root);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Fetches the data from a registered node.
 *
 * @note This function triggers a computation of all dirty nodes.
 *
 * @param[in] obj The object.
 * @param[in] child The child object to inspect.
 *
 * @return The list of relations starting from @c child.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Relations *efl_ui_focus_manager_fetch(Eo *obj, Efl_Ui_Focus_Object *child) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Returns the last logical object.
 *
 * The returned object is the last object that would be returned if you start
 * at the root and move in the "next" direction.
 *
 * @param[in] obj The object.
 *
 * @return Last object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Manager_Logical_End_Detail efl_ui_focus_manager_logical_end(Eo *obj);

/**
 * @brief Resets the history stack of this manager object. This means the
 * uppermost element will be unfocused, and all other elements will be removed
 * from the remembered list.
 *
 * You should focus another element immediately after calling this, in order to
 * always have a focused object.
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK void efl_ui_focus_manager_reset_history(Eo *obj);

/**
 * @brief Removes the uppermost history element, and focuses the previous one.
 *
 * If there is an element that was focused before, it will be used. Otherwise,
 * the best fitting element from the registered elements will be focused.
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK void efl_ui_focus_manager_pop_history_stack(Eo *obj);

/**
 * @brief Called when this manager is set as redirect.
 *
 * In case that this is called as a result of a move call, @c direction and
 * @c entry will be set to the direction of the move call, and the @c entry
 * object will be set to the object that had this manager as redirect property.
 *
 * @param[in] obj The object.
 * @param[in] direction The direction in which this should be setup.
 * @param[in] entry The object that caused this manager to be redirect.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK void efl_ui_focus_manager_setup_on_first_touch(Eo *obj, Efl_Ui_Focus_Direction direction, Efl_Ui_Focus_Object *entry);

/**
 * @brief Disables the cache invalidation when an object is moved.
 *
 * Even if an object is moved, the focus manager will not recalculate its
 * relations. This can be used when you know that the set of widgets in the
 * focus manager is moved the same way, so the relations between the widgets in
 * the set do not change and complex calculations can be avoided. Use
 * @ref efl_ui_focus_manager_dirty_logic_unfreeze to re-enable relationship
 * calculation.
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK void efl_ui_focus_manager_dirty_logic_freeze(Eo *obj);

/**
 * @brief Enables the cache invalidation when an object is moved.
 *
 * This is the counterpart to @ref efl_ui_focus_manager_dirty_logic_freeze.
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EAPI EAPI_WEAK void efl_ui_focus_manager_dirty_logic_unfreeze(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_REDIRECT_CHANGED;

/** Redirect object has changed, the old manager is passed as an event
 * argument.
 * @return Efl_Ui_Focus_Manager *
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_EVENT_REDIRECT_CHANGED (&(_EFL_UI_FOCUS_MANAGER_EVENT_REDIRECT_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_FLUSH_PRE;

/** After this event, the manager object will calculate relations in the graph.
 * Can be used to add / remove children in a lazy fashion.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_EVENT_FLUSH_PRE (&(_EFL_UI_FOCUS_MANAGER_EVENT_FLUSH_PRE))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_COORDS_DIRTY;

/** Cached relationship calculation results have been invalidated.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_EVENT_COORDS_DIRTY (&(_EFL_UI_FOCUS_MANAGER_EVENT_COORDS_DIRTY))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_MANAGER_FOCUS_CHANGED;

/** The manager_focus property has changed. The previously focused object is
 * passed as an event argument.
 * @return Efl_Ui_Focus_Object *
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_EVENT_MANAGER_FOCUS_CHANGED (&(_EFL_UI_FOCUS_MANAGER_EVENT_MANAGER_FOCUS_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_DIRTY_LOGIC_FREEZE_CHANGED;

/** Called when this focus manager is frozen or thawed, even_info being @c true
 * indicates that it is now frozen, @c false indicates that it is thawed.
 * @return Eina_Bool
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_EVENT_DIRTY_LOGIC_FREEZE_CHANGED (&(_EFL_UI_FOCUS_MANAGER_EVENT_DIRTY_LOGIC_FREEZE_CHANGED))

#endif
