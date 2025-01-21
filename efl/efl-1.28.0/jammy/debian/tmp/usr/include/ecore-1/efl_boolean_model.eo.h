#ifndef _EFL_BOOLEAN_MODEL_EO_H_
#define _EFL_BOOLEAN_MODEL_EO_H_

#ifndef _EFL_BOOLEAN_MODEL_EO_CLASS_TYPE
#define _EFL_BOOLEAN_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Boolean_Model;

#endif

#ifndef _EFL_BOOLEAN_MODEL_EO_TYPES
#define _EFL_BOOLEAN_MODEL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief @ref Efl_Model that efficiently stores boolean properties (they can
 * only be @c true or @c false).
 *
 * Internally the values are stored in a compact bit buffer, taking up minimum
 * memory. An example usage is @ref Efl_Ui_Select_Model.
 *
 * @ingroup Efl_Boolean_Model
 */
#define EFL_BOOLEAN_MODEL_CLASS efl_boolean_model_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_boolean_model_class_get(void) EINA_CONST;

/**
 * @brief Adds a new named boolean property with a default value.
 *
 * @param[in] obj The object.
 * @param[in] name The name of the new boolean property.
 * @param[in] default_value Default value for new boolean property.
 *
 * @ingroup Efl_Boolean_Model
 */
EAPI EAPI_WEAK void efl_boolean_model_boolean_add(Eo *obj, const char *name, Eina_Bool default_value);

/**
 * @brief Deletes an existing named boolean property.
 *
 * @param[in] obj The object.
 * @param[in] name Name of the property to be deleted.
 *
 * @ingroup Efl_Boolean_Model
 */
EAPI EAPI_WEAK void efl_boolean_model_boolean_del(Eo *obj, const char *name);

/**
 * @brief Gets an iterator that will quickly find all the indices with the
 * requested value for a specific property.
 *
 * @param[in] obj The object.
 * @param[in] name The name of the property to examine.
 * @param[in] request The value to look for.
 *
 * @return The iterator that is valid until any change is made on the model.
 *
 * @ingroup Efl_Boolean_Model
 */
EAPI EAPI_WEAK Eina_Iterator *efl_boolean_model_boolean_iterator_get(Eo *obj, const char *name, Eina_Bool request) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif /* EFL_BETA_API_SUPPORT */

#endif
