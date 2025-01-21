#ifndef _EFL_CONTAINER_MODEL_EO_H_
#define _EFL_CONTAINER_MODEL_EO_H_

#ifndef _EFL_CONTAINER_MODEL_EO_CLASS_TYPE
#define _EFL_CONTAINER_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Container_Model;

#endif

#ifndef _EFL_CONTAINER_MODEL_EO_TYPES
#define _EFL_CONTAINER_MODEL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Class used to create data models from Eina containers.
 *
 * Each container supplied represents a series of property values, each item
 * being the property value for a child object.
 *
 * The data in the given containers are copied and stored internally.
 *
 * Several containers can be supplied and the number of allocated children is
 * based on the container of the largest size.
 *
 * @ingroup Efl_Container_Model
 */
#define EFL_CONTAINER_MODEL_CLASS efl_container_model_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_container_model_class_get(void) EINA_CONST;

/**
 * @brief Gets the type of the given property.
 *
 * @param[in] obj The object.
 * @param[in] name Property name
 *
 * @return Property type
 *
 * @ingroup Efl_Container_Model
 */
EAPI EAPI_WEAK const Eina_Value_Type *efl_container_model_child_property_value_type_get(Eo *obj, const char *name);

/**
 * @brief Adds the given property to child objects and supply the values.
 *
 * Each item will represent the value of the given property in the respective
 * child within the data model.
 *
 * New children objects are allocated as necessary.
 *
 * Value type is required for compatibility with the @ref Efl_Model API.
 *
 * @param[in] obj The object.
 * @param[in] name Property name
 * @param[in] type Property type
 * @param[in] values Values to be added
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Container_Model
 */
EAPI EAPI_WEAK Eina_Bool efl_container_model_child_property_add(Eo *obj, const char *name, const Eina_Value_Type *type, Eina_Iterator *values EFL_TRANSFER_OWNERSHIP);
#endif /* EFL_BETA_API_SUPPORT */

#endif
