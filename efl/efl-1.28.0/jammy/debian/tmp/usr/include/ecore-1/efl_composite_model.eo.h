#ifndef _EFL_COMPOSITE_MODEL_EO_H_
#define _EFL_COMPOSITE_MODEL_EO_H_

#ifndef _EFL_COMPOSITE_MODEL_EO_CLASS_TYPE
#define _EFL_COMPOSITE_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Composite_Model;

#endif

#ifndef _EFL_COMPOSITE_MODEL_EO_TYPES
#define _EFL_COMPOSITE_MODEL_EO_TYPES


#endif
/**
 * @brief Efl model for all composite class which provide a unified API to set
 * source of data.
 *
 * This class also provide an @ref efl_model_property_get "child.index" that
 * match the value of @ref efl_composite_model_index_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Composite_Model
 */
#define EFL_COMPOSITE_MODEL_CLASS efl_composite_model_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_composite_model_class_get(void) EINA_CONST;

/**
 * @brief Position of this object in the parent model.
 *
 * It can only be set before the object is finalized but after the Model it
 * composes is set (and only if that Model does not provide an index already).
 * It can only be retrieved after the object has been finalized.
 *
 * @param[in] obj The object.
 * @param[in] index Index of the object in the parent model. The index is
 * unique and starts from zero.
 *
 * @since 1.23
 *
 * @ingroup Efl_Composite_Model
 */
EAPI EAPI_WEAK void efl_composite_model_index_set(Eo *obj, unsigned int index);

/**
 * @brief Position of this object in the parent model.
 *
 * It can only be set before the object is finalized but after the Model it
 * composes is set (and only if that Model does not provide an index already).
 * It can only be retrieved after the object has been finalized.
 *
 * @param[in] obj The object.
 *
 * @return Index of the object in the parent model. The index is unique and
 * starts from zero.
 *
 * @since 1.23
 *
 * @ingroup Efl_Composite_Model
 */
EAPI EAPI_WEAK unsigned int efl_composite_model_index_get(const Eo *obj);

#endif
