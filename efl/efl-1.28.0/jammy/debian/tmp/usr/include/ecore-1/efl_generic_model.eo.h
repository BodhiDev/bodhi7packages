#ifndef _EFL_GENERIC_MODEL_EO_H_
#define _EFL_GENERIC_MODEL_EO_H_

#ifndef _EFL_GENERIC_MODEL_EO_CLASS_TYPE
#define _EFL_GENERIC_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Generic_Model;

#endif

#ifndef _EFL_GENERIC_MODEL_EO_TYPES
#define _EFL_GENERIC_MODEL_EO_TYPES


#endif
/**
 * @brief Generic model that allows any property to be manually set. Also
 * children of the same type can be added and deleted.
 *
 * Intended to be used in scenarios where the user needs a manually defined
 * data model, like in tests.
 *
 * It does not model anything in particular and does not affect anything else
 * in the system.
 *
 * @since 1.23
 *
 * @ingroup Efl_Generic_Model
 */
#define EFL_GENERIC_MODEL_CLASS efl_generic_model_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_generic_model_class_get(void) EINA_CONST;

#endif
