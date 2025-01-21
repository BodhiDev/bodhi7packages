#ifndef _EFL_MODEL_EO_H_
#define _EFL_MODEL_EO_H_

#ifndef _EFL_MODEL_EO_CLASS_TYPE
#define _EFL_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Model;

#endif

#ifndef _EFL_MODEL_EO_TYPES
#define _EFL_MODEL_EO_TYPES

/** EFL model property event data structure
 *
 * @since 1.23
 *
 * @ingroup Efl_Model_Property_Event
 */
typedef struct _Efl_Model_Property_Event
{
  Eina_Array *changed_properties; /**< List of changed properties
                                   *
                                   * @since 1.23 */
  Eina_Array *invalidated_properties; /**< Removed properties identified by name
                                       *
                                       * @since 1.23 */
} Efl_Model_Property_Event;

/** Every time a child is added the event @[Efl.Model.child,added] is
 * dispatched passing along this structure.
 *
 * @since 1.24
 *
 * @ingroup Efl_Model_Children_Event
 */
typedef struct _Efl_Model_Children_Event
{
  unsigned int index; /**< index is a hint and is intended to provide a way for
                       * applications to control/know children relative
                       * positions through listings.
                       *
                       * @since 1.24 */
  Efl_Object *child; /**< If an object has been built for this index and it is
                      * currently tracked by the parent, it will be available
                      * here.
                      *
                      * @since 1.24 */
} Efl_Model_Children_Event;


#endif
/**
 * @brief Basic Model abstraction.
 *
 * A model in EFL can have a set of key-value properties, where key can only be
 * a string. The value can be anything within an Eina_Value. If a property is
 * not yet available EAGAIN is returned.
 *
 * Additionally a model can have a list of children. The fetching of the
 * children is asynchronous, this has the advantage of having as few data sets
 * as possible in the memory itself.
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
#define EFL_MODEL_INTERFACE efl_model_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_model_interface_get(void) EINA_CONST;

/**
 * @brief Get properties from model.
 *
 * Properties_get is due to provide callers a way the fetch the current
 * properties implemented/used by the model. The event
 * @[Efl.Model.properties,changed] will be raised to notify listeners of any
 * modifications in the properties.
 *
 * See also @[Efl.Model.properties,changed].
 *
 * @param[in] obj The object.
 *
 * @return Array of current properties
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
EAPI EAPI_WEAK Eina_Iterator *efl_model_properties_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief No description supplied.
 *
 * Set a property value of a given property name.
 *
 * The caller must first read @ref efl_model_properties_get to obtain the list
 * of available properties before being able to access them through
 * @ref efl_model_property_get. This function sets a new property value into
 * given property name. Once the operation is completed the concrete
 * implementation should raise @[Efl.Model.properties,changed] event in order
 * to notify listeners of the new value of the property.
 *
 * If the model doesn't have the property then there are two possibilities,
 * either raise an error or create the new property in model
 *
 * See @ref efl_model_property_get, @[Efl.Model.properties,changed]
 *
 * @param[in] obj The object.
 * @param[in] property Property name
 * @param[in] value Property value
 *
 * @return Return an error in case the property could not be set, or the value
 * that was set otherwise.
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
EAPI EAPI_WEAK Eina_Future *efl_model_property_set(Eo *obj, const char *property, Eina_Value *value);

/**
 * @brief No description supplied.
 *
 * Retrieve the value of a given property name.
 *
 * At this point the caller is free to get values from properties. The event
 * @[Efl.Model.properties,changed] may be raised to notify listeners of the
 * property/value.
 *
 * See @ref efl_model_properties_get, @[Efl.Model.properties,changed]
 *
 * @param[in] obj The object.
 * @param[in] property Property name
 *
 * @return Property value
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
EAPI EAPI_WEAK Eina_Value *efl_model_property_get(const Eo *obj, const char *property);

/**
 * @brief Get a future value when it changes to something that is not
 * error:EAGAIN
 *
 * @ref efl_model_property_get can return an error with code EAGAIN when it
 * doesn't have any meaningful value. To make life easier, this future will
 * resolve when the error:EAGAIN disappears. Either into a failed future in
 * case the error code changed to something else or a success with the value of
 * the property whenever the property finally changes.
 *
 * The future can also be canceled if the model itself gets destroyed.
 *
 * @param[in] obj The object.
 * @param[in] property Property name.
 *
 * @return Future to be resolved when the property changes to anything other
 * than error:EAGAIN
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
EAPI EAPI_WEAK Eina_Future *efl_model_property_ready_get(Eo *obj, const char *property);

/**
 * @brief Get children slice OR full range.
 *
 * @ref efl_model_children_slice_get behaves in two different ways, it may
 * provide the slice if @c count is non-zero OR full range otherwise.
 *
 * Since 'slice' is a range, for example if we have 20 children a slice could
 * be the range from 3(start) with 4(count), see:
 *
 * child 0  [no] child 1  [no] child 2  [no] child 3  [yes] child 4  [yes]
 * child 5  [yes] child 6  [yes] child 7  [no]
 *
 * Optionally the user can call @ref efl_model_children_count_get to know the
 * number of children so a valid range can be known in advance.
 *
 * See @ref efl_model_children_count_get
 *
 * @note The returned children will live only as long as the future itself.
 * Once the future is done, if you want to keep the object alive, you need to
 * take a reference for yourself.
 *
 * @param[in] obj The object.
 * @param[in] start Range begin - start from here.
 * @param[in] count Range size. If count is 0, start is ignored.
 *
 * @return Array of children
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
EAPI EAPI_WEAK Eina_Future *efl_model_children_slice_get(Eo *obj, unsigned int start, unsigned int count);

/**
 * @brief Get children as specified by iterator.
 *
 * Provided index have to be between 0 and @ref efl_model_children_count_get.
 *
 * This function might rely on @ref efl_model_children_slice_get as a fallback.
 *
 * @param[in] obj The object.
 * @param[in] indices Indices of the requested children.
 *
 * @return Array of children
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
EAPI EAPI_WEAK Eina_Future *efl_model_children_index_get(Eo *obj, Eina_Iterator *indices);

/**
 * @brief Number of children.
 *
 * After @[.properties,changed] is emitted, @ref efl_model_children_count_get
 * can be used to get the number of children. @ref efl_model_children_count_get
 * can also be used before calling @ref efl_model_children_slice_get so a valid
 * range is known. Event @[Efl.Model.children,count,changed] is emitted when
 * count is finished.
 *
 * See also @ref efl_model_children_slice_get.
 *
 * @param[in] obj The object.
 *
 * @return Current known children count
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
EAPI EAPI_WEAK unsigned int efl_model_children_count_get(const Eo *obj);

/**
 * @brief Add a new child.
 *
 * Add a new child, possibly dummy, depending on the implementation, of a
 * internal keeping. When the child is effectively added the event
 * @[Efl.Model.child,added] is then raised and the new child is kept along with
 * other children.
 *
 * @param[in] obj The object.
 *
 * @return Child object
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
EAPI EAPI_WEAK Efl_Object *efl_model_child_add(Eo *obj);

/**
 * @brief Remove a child.
 *
 * Remove a child of a internal keeping. When the child is effectively removed
 * the event @[Efl.Model.child,removed] is then raised to give a chance for
 * listeners to perform any cleanup and/or update references.
 *
 * @param[in] obj The object.
 * @param[in] child Child to be removed
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
EAPI EAPI_WEAK void efl_model_child_del(Eo *obj, Efl_Object *child);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_MODEL_EVENT_PROPERTIES_CHANGED;

/** Event dispatched when properties list is available.
 * @return Efl_Model_Property_Event
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
#define EFL_MODEL_EVENT_PROPERTIES_CHANGED (&(_EFL_MODEL_EVENT_PROPERTIES_CHANGED))
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_MODEL_EVENT_CHILD_ADDED;

/** Event dispatched when new child is added.
 * @return Efl_Model_Children_Event
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
#define EFL_MODEL_EVENT_CHILD_ADDED (&(_EFL_MODEL_EVENT_CHILD_ADDED))
#endif /* EFL_BETA_API_SUPPORT */
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_MODEL_EVENT_CHILD_REMOVED;

/** Event dispatched when child is removed.
 * @return Efl_Model_Children_Event
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
#define EFL_MODEL_EVENT_CHILD_REMOVED (&(_EFL_MODEL_EVENT_CHILD_REMOVED))
#endif /* EFL_BETA_API_SUPPORT */

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_MODEL_EVENT_CHILDREN_COUNT_CHANGED;

/** Event dispatched when children count is finished.
 *
 * @since 1.23
 *
 * @ingroup Efl_Model
 */
#define EFL_MODEL_EVENT_CHILDREN_COUNT_CHANGED (&(_EFL_MODEL_EVENT_CHILDREN_COUNT_CHANGED))

#endif
