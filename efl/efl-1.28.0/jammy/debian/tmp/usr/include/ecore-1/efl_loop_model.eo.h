#ifndef _EFL_LOOP_MODEL_EO_H_
#define _EFL_LOOP_MODEL_EO_H_

#ifndef _EFL_LOOP_MODEL_EO_CLASS_TYPE
#define _EFL_LOOP_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Loop_Model;

#endif

#ifndef _EFL_LOOP_MODEL_EO_TYPES
#define _EFL_LOOP_MODEL_EO_TYPES


#endif
/** The Efl Loop Model class
 *
 * @since 1.23
 *
 * @ingroup Efl_Loop_Model
 */
#define EFL_LOOP_MODEL_CLASS efl_loop_model_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_loop_model_class_get(void) EINA_CONST;

/**
 * @brief To be called when a Child model is created by
 * @ref efl_model_children_slice_get by the one creating the child object.
 *
 * This function is used to properly define the lifecycle of the new Child
 * Model object and make sure that once it has 0 ref except its parent Model,
 * it will be destroyed. This function should only be called once per child. It
 * is useful for @ref Efl_Model who have a lot of children and shouldn't keep
 * more than what is used in memory.
 *
 * @param[in] obj The object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Loop_Model
 */
EAPI EAPI_WEAK void efl_loop_model_volatile_make(Eo *obj);

#endif
