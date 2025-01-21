#ifndef _ELDBUS_MODEL_EO_H_
#define _ELDBUS_MODEL_EO_H_

#ifndef _ELDBUS_MODEL_EO_CLASS_TYPE
#define _ELDBUS_MODEL_EO_CLASS_TYPE

typedef Eo Eldbus_Model;

#endif

#ifndef _ELDBUS_MODEL_EO_TYPES
#define _ELDBUS_MODEL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
#define ELDBUS_MODEL_CLASS eldbus_model_class_get()

EAPI EAPI_WEAK const Efl_Class *eldbus_model_class_get(void) EINA_CONST;

/**
 * @brief Define connection parameters.
 *
 * @param[in] obj The object.
 * @param[in] type The connection type
 * @param[in] address Remote address of DBus
 * @param[in] priv Non shared dbus connection
 *
 * @since 1.21
 *
 * @ingroup Eldbus_Model
 */
EAPI EAPI_WEAK void eldbus_model_connect(Eo *obj, Eldbus_Connection_Type type, const char *address, Eina_Bool priv);

/**
 * @brief Define the connection.
 *
 * @param[in] obj The object.
 * @param[in] dbus The connection
 *
 * @since 1.21
 *
 * @ingroup Eldbus_Model
 */
EAPI EAPI_WEAK void eldbus_model_connection_set(Eo *obj, Eldbus_Connection *dbus);

/**
 * @brief Define the connection.
 *
 * @param[in] obj The object.
 *
 * @return The connection
 *
 * @since 1.21
 *
 * @ingroup Eldbus_Model
 */
EAPI EAPI_WEAK Eldbus_Connection *eldbus_model_connection_get(const Eo *obj);

/**
 * @brief Connection type
 *
 * @param[in] obj The object.
 *
 * @return Connection type
 *
 * @ingroup Eldbus_Model
 */
EAPI EAPI_WEAK Eldbus_Connection_Type eldbus_model_type_get(const Eo *obj);

/**
 * @brief Remote DBus address
 *
 * @param[in] obj The object.
 *
 * @return Address
 *
 * @ingroup Eldbus_Model
 */
EAPI EAPI_WEAK const char *eldbus_model_address_get(const Eo *obj);

/**
 * @brief Indicate if the DBus connection is shared or private
 *
 * @param[in] obj The object.
 *
 * @return Private DBus connection
 *
 * @ingroup Eldbus_Model
 */
EAPI EAPI_WEAK Eina_Bool eldbus_model_private_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
