#ifndef _ELDBUS_MODEL_OBJECT_EO_H_
#define _ELDBUS_MODEL_OBJECT_EO_H_

#ifndef _ELDBUS_MODEL_OBJECT_EO_CLASS_TYPE
#define _ELDBUS_MODEL_OBJECT_EO_CLASS_TYPE

typedef Eo Eldbus_Model_Object;

#endif

#ifndef _ELDBUS_MODEL_OBJECT_EO_TYPES
#define _ELDBUS_MODEL_OBJECT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Eldbus model object class
 *
 * @ingroup Eldbus_Model_Object
 */
#define ELDBUS_MODEL_OBJECT_CLASS eldbus_model_object_class_get()

EAPI EAPI_WEAK const Efl_Class *eldbus_model_object_class_get(void) EINA_CONST;

/**
 * @brief DBus Name or unique-id
 *
 * @param[in] obj The object.
 * @param[in] bus DBus name
 *
 * @ingroup Eldbus_Model_Object
 */
EAPI EAPI_WEAK void eldbus_model_object_bus_set(Eo *obj, const char *bus);

/**
 * @brief DBus Name or unique-id
 *
 * @param[in] obj The object.
 *
 * @return DBus name
 *
 * @ingroup Eldbus_Model_Object
 */
EAPI EAPI_WEAK const char *eldbus_model_object_bus_get(const Eo *obj);

/**
 * @brief DBus path
 *
 * @param[in] obj The object.
 * @param[in] path DBus path
 *
 * @ingroup Eldbus_Model_Object
 */
EAPI EAPI_WEAK void eldbus_model_object_path_set(Eo *obj, const char *path);

/**
 * @brief DBus path
 *
 * @param[in] obj The object.
 *
 * @return DBus path
 *
 * @ingroup Eldbus_Model_Object
 */
EAPI EAPI_WEAK const char *eldbus_model_object_path_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
