#ifndef _EFL_UI_FOCUS_OBJECT_EO_H_
#define _EFL_UI_FOCUS_OBJECT_EO_H_

#ifndef _EFL_UI_FOCUS_OBJECT_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_OBJECT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Object;

#endif

#ifndef _EFL_UI_FOCUS_OBJECT_EO_TYPES
#define _EFL_UI_FOCUS_OBJECT_EO_TYPES


#endif
/** Functions of focusable objects.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
#define EFL_UI_FOCUS_OBJECT_MIXIN efl_ui_focus_object_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_focus_object_mixin_get(void) EINA_CONST;

/**
 * @brief The geometry (that is, the bounding rectangle) used to calculate the
 * relationship with other objects.
 *
 * @param[in] obj The object.
 *
 * @return The geometry to use.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EAPI EAPI_WEAK Eina_Rect efl_ui_focus_object_focus_geometry_get(const Eo *obj);

#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
/**
 * @brief Whether the widget is currently focused or not.
 *
 * This is called by the manager and should never be called by anyone else.
 *
 * The function emits the focus state events, if focus is different to the
 * previous state.
 *
 * @param[in] obj The object.
 * @param[in] focus The focused state of the object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EAPI EAPI_WEAK void efl_ui_focus_object_focus_set(Eo *obj, Eina_Bool focus);
#endif

/**
 * @brief Whether the widget is currently focused or not.
 *
 * @param[in] obj The object.
 *
 * @return The focused state of the object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_object_focus_get(const Eo *obj);

/**
 * @brief This is the focus manager where this focus object is registered in.
 * The element which is the @c root of an @ref Efl_Ui_Focus_Manager will not
 * have this focus manager as this object, but rather the focus manager where
 * that is registered in.
 *
 * @param[in] obj The object.
 *
 * @return The manager object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Manager *efl_ui_focus_object_focus_manager_get(const Eo *obj);

/**
 * @brief The logical parent used by this object.
 *
 * @param[in] obj The object.
 *
 * @return The focus parent.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Object *efl_ui_focus_object_focus_parent_get(const Eo *obj);

#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
/**
 * @brief Indicates if a child of this object has focus set to true.
 *
 * @param[in] obj The object.
 * @param[in] child_focus @c true if a child has focus.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EAPI EAPI_WEAK void efl_ui_focus_object_child_focus_set(Eo *obj, Eina_Bool child_focus);
#endif

#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
/**
 * @brief Indicates if a child of this object has focus set to true.
 *
 * @param[in] obj The object.
 *
 * @return @c true if a child has focus.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_object_child_focus_get(const Eo *obj);
#endif

/** Tells the object that its children will be queried soon by the focus
 * manager. Overwrite this to have a chance to update the order of the
 * children. Deleting items in this call will result in undefined behaviour and
 * may cause your system to crash.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EAPI EAPI_WEAK void efl_ui_focus_object_setup_order(Eo *obj);

#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
/** This is called when @ref efl_ui_focus_object_setup_order is called, but
 * only on the first call, additional recursive calls to
 * @ref efl_ui_focus_object_setup_order will not call this function again.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EAPI EAPI_WEAK void efl_ui_focus_object_setup_order_non_recursive(Eo *obj);
#endif

#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
/**
 * @brief Virtual function handling focus in/out events on the widget.
 *
 * @param[in] obj The object.
 *
 * @return @c true if this widget can handle focus, @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_object_on_focus_update(Eo *obj);
#endif

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_CHANGED;

/** Emitted if the focus state has changed.
 * @return Eina_Bool
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
#define EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_CHANGED (&(_EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_MANAGER_CHANGED;

/** Emitted when a new manager is the parent for this object.
 * @return Efl_Ui_Focus_Manager *
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
#define EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_MANAGER_CHANGED (&(_EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_MANAGER_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_PARENT_CHANGED;

/** Emitted when a new logical parent should be used.
 * @return Efl_Ui_Focus_Object *
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
#define EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_PARENT_CHANGED (&(_EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_PARENT_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FOCUS_OBJECT_EVENT_CHILD_FOCUS_CHANGED;

/** Emitted if child_focus has changed.
 * @return Eina_Bool
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
#define EFL_UI_FOCUS_OBJECT_EVENT_CHILD_FOCUS_CHANGED (&(_EFL_UI_FOCUS_OBJECT_EVENT_CHILD_FOCUS_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_GEOMETRY_CHANGED;

/** Emitted if focus geometry of this object has changed.
 * @return Eina_Rect
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Focus_Object
 */
#define EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_GEOMETRY_CHANGED (&(_EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_GEOMETRY_CHANGED))

#endif
