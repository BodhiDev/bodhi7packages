#ifndef _EFL_OBSERVER_EO_H_
#define _EFL_OBSERVER_EO_H_

#ifndef _EFL_OBSERVER_EO_CLASS_TYPE
#define _EFL_OBSERVER_EO_CLASS_TYPE

typedef Eo Efl_Observer;

#endif

#ifndef _EFL_OBSERVER_EO_TYPES
#define _EFL_OBSERVER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl observer interface
 *
 * @ingroup Efl_Observer
 */
#define EFL_OBSERVER_INTERFACE efl_observer_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_observer_interface_get(void) EINA_CONST;

/**
 * @brief Update observer according to the changes of observable object.
 *
 * @param[in] obj The object.
 * @param[in] obs An observable object
 * @param[in] key A key to classify observer groups
 * @param[in] data Required data to update the observer, usually passed by
 * observable object
 *
 * @ingroup Efl_Observer
 */
EAPI EAPI_WEAK void efl_observer_update(Eo *obj, Efl_Object *obs, const char *key, void *data);
#endif /* EFL_BETA_API_SUPPORT */

#endif
