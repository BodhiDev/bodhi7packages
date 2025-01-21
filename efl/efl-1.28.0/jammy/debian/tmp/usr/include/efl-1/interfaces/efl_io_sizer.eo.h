#ifndef _EFL_IO_SIZER_EO_H_
#define _EFL_IO_SIZER_EO_H_

#ifndef _EFL_IO_SIZER_EO_CLASS_TYPE
#define _EFL_IO_SIZER_EO_CLASS_TYPE

typedef Eo Efl_Io_Sizer;

#endif

#ifndef _EFL_IO_SIZER_EO_TYPES
#define _EFL_IO_SIZER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Generic interface for objects that can resize or report size of
 * themselves.
 *
 * This interface allows external objects to transparently resize or report its
 * size.
 *
 * @ingroup Efl_Io_Sizer
 */
#define EFL_IO_SIZER_MIXIN efl_io_sizer_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_io_sizer_mixin_get(void) EINA_CONST;

/**
 * @brief Resize object
 *
 * @param[in] obj The object.
 * @param[in] size Object size
 *
 * @return 0 on succeed, a mapping of errno otherwise
 *
 * @ingroup Efl_Io_Sizer
 */
EAPI EAPI_WEAK Eina_Error efl_io_sizer_resize(Eo *obj, uint64_t size);

/**
 * @brief Size property
 *
 * Try to resize the object, check with get if the value was accepted or not.
 *
 * @param[in] obj The object.
 * @param[in] size Object size
 *
 * @return @c true if could resize, @c false if errors.
 *
 * @ingroup Efl_Io_Sizer
 */
EAPI EAPI_WEAK Eina_Bool efl_io_sizer_size_set(Eo *obj, uint64_t size);

/**
 * @brief Size property
 *
 * @param[in] obj The object.
 *
 * @return Object size
 *
 * @ingroup Efl_Io_Sizer
 */
EAPI EAPI_WEAK uint64_t efl_io_sizer_size_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_SIZER_EVENT_SIZE_CHANGED;

/** Notifies size changed
 *
 * @ingroup Efl_Io_Sizer
 */
#define EFL_IO_SIZER_EVENT_SIZE_CHANGED (&(_EFL_IO_SIZER_EVENT_SIZE_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
