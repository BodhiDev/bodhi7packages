#ifndef _EFL_FILTER_MODEL_EO_H_
#define _EFL_FILTER_MODEL_EO_H_

#ifndef _EFL_FILTER_MODEL_EO_CLASS_TYPE
#define _EFL_FILTER_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Filter_Model;

#endif

#ifndef _EFL_FILTER_MODEL_EO_TYPES
#define _EFL_FILTER_MODEL_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** EflFilterModel function
 *
 * @ingroup EflFilterModel
 */
typedef Eina_Future * (*EflFilterModel)(void *data, Efl_Filter_Model *parent, Efl_Model *child);
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Filtering data that @ref Efl_Model provides is the main feature of this
 * class. This class provides a filter function so only children that match it
 * are returned.
 *
 * @ingroup Efl_Filter_Model
 */
#define EFL_FILTER_MODEL_CLASS efl_filter_model_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_filter_model_class_get(void) EINA_CONST;

/**
 * @brief Set a filter function that will catch children from the composited
 * model.
 *
 * @param[in] obj The object.
 * @param[in] filter Filter callback.
 *
 * @ingroup Efl_Filter_Model
 */
EAPI EAPI_WEAK void efl_filter_model_filter_set(Eo *obj, void *filter_data, EflFilterModel filter, Eina_Free_Cb filter_free_cb);
#endif /* EFL_BETA_API_SUPPORT */

#endif
