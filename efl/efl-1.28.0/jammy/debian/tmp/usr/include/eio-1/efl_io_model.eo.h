#ifndef _EFL_IO_MODEL_EO_H_
#define _EFL_IO_MODEL_EO_H_

#ifndef _EFL_IO_MODEL_EO_CLASS_TYPE
#define _EFL_IO_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Io_Model;

#endif

#ifndef _EFL_IO_MODEL_EO_TYPES
#define _EFL_IO_MODEL_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** EflIoFilter function
 *
 * @ingroup EflIoFilter
 */
typedef int (*EflIoFilter)(void *data, Efl_Io_Model *model, Eina_File_Direct_Info *entry);
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Efl Io model class
 *
 * Model is populated asynchronously from a monitoring thread, so values won't
 * be correct immediately.
 *
 * @ingroup Efl_Io_Model
 */
#define EFL_IO_MODEL_CLASS efl_io_model_class_get()

EIO_API EIO_API_WEAK const Efl_Class *efl_io_model_class_get(void) EINA_CONST;

/**
 * @brief Set children filter callback.
 *
 * This function sets, along with user's private data userdata, the Eio's
 * Eio_Filter_Direct_Cb which is a mid-step before receiving the real data.
 * Once in filter callback we can decide, by returning either EINA_FALSE, to
 * abort the notification or EINA_TRUE to keep it.
 *
 * See also @ref efl_model_children_slice_get.
 *
 * @param[in] obj The object.
 * @param[in] filter Filter callback
 *
 * @ingroup Efl_Io_Model
 */
EIO_API EIO_API_WEAK void efl_io_model_children_filter_set(Eo *obj, void *filter_data, EflIoFilter filter, Eina_Free_Cb filter_free_cb);

/**
 * @brief Define the root path of a model.
 *
 * Only possible during construction.
 *
 * @param[in] obj The object.
 * @param[in] path Root path of the model.
 *
 * @ingroup Efl_Io_Model
 */
EIO_API EIO_API_WEAK void efl_io_model_path_set(Eo *obj, const char *path);

/**
 * @brief Define the root path of a model.
 *
 * @param[in] obj The object.
 *
 * @return Root path of the model.
 *
 * @ingroup Efl_Io_Model
 */
EIO_API EIO_API_WEAK const char *efl_io_model_path_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
