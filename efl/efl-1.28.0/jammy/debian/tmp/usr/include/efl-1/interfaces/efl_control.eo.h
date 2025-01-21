#ifndef _EFL_CONTROL_EO_H_
#define _EFL_CONTROL_EO_H_

#ifndef _EFL_CONTROL_EO_CLASS_TYPE
#define _EFL_CONTROL_EO_CLASS_TYPE

typedef Eo Efl_Control;

#endif

#ifndef _EFL_CONTROL_EO_TYPES
#define _EFL_CONTROL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl control interface
 *
 * @ingroup Efl_Control
 */
#define EFL_CONTROL_INTERFACE efl_control_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_control_interface_get(void) EINA_CONST;

/**
 * @brief Control the priority of the object.
 *
 * @param[in] obj The object.
 * @param[in] priority The priority of the object
 *
 * @ingroup Efl_Control
 */
EAPI EAPI_WEAK void efl_control_priority_set(Eo *obj, int priority);

/**
 * @brief Control the priority of the object.
 *
 * @param[in] obj The object.
 *
 * @return The priority of the object
 *
 * @ingroup Efl_Control
 */
EAPI EAPI_WEAK int efl_control_priority_get(const Eo *obj);

/**
 * @brief Controls whether the object is suspended or not.
 *
 * @param[in] obj The object.
 * @param[in] suspend Controls whether the object is suspended or not.
 *
 * @ingroup Efl_Control
 */
EAPI EAPI_WEAK void efl_control_suspend_set(Eo *obj, Eina_Bool suspend);

/**
 * @brief Controls whether the object is suspended or not.
 *
 * @param[in] obj The object.
 *
 * @return Controls whether the object is suspended or not.
 *
 * @ingroup Efl_Control
 */
EAPI EAPI_WEAK Eina_Bool efl_control_suspend_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
