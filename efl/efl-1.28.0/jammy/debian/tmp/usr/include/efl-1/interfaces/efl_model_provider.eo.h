#ifndef _EFL_MODEL_PROVIDER_EO_H_
#define _EFL_MODEL_PROVIDER_EO_H_

#ifndef _EFL_MODEL_PROVIDER_EO_CLASS_TYPE
#define _EFL_MODEL_PROVIDER_EO_CLASS_TYPE

typedef Eo Efl_Model_Provider;

#endif

#ifndef _EFL_MODEL_PROVIDER_EO_TYPES
#define _EFL_MODEL_PROVIDER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief EFL object that provide a model to all.
 *
 * You can use this when you would otherwise have to call
 * @ref efl_ui_view_model_set on multiple widgets by registering this object
 * using @ref efl_provider_register on a parent that they all depends on.
 *
 * @ingroup Efl_Model_Provider
 */
#define EFL_MODEL_PROVIDER_CLASS efl_model_provider_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_model_provider_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
