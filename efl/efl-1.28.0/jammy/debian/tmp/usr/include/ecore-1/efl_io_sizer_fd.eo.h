#ifndef _EFL_IO_SIZER_FD_EO_H_
#define _EFL_IO_SIZER_FD_EO_H_

#ifndef _EFL_IO_SIZER_FD_EO_CLASS_TYPE
#define _EFL_IO_SIZER_FD_EO_CLASS_TYPE

typedef Eo Efl_Io_Sizer_Fd;

#endif

#ifndef _EFL_IO_SIZER_FD_EO_TYPES
#define _EFL_IO_SIZER_FD_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Resizes fd usign ftruncate(2).
 *
 * @ingroup Efl_Io_Sizer_Fd
 */
#define EFL_IO_SIZER_FD_MIXIN efl_io_sizer_fd_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_io_sizer_fd_mixin_get(void) EINA_CONST;

#ifdef EFL_IO_SIZER_FD_PROTECTED
/**
 * @brief Sizer file descriptor
 *
 * @param[in] obj The object.
 * @param[in] fd File descriptor
 *
 * @ingroup Efl_Io_Sizer_Fd
 */
EAPI EAPI_WEAK void efl_io_sizer_fd_set(Eo *obj, int fd);
#endif

/**
 * @brief Sizer file descriptor
 *
 * @param[in] obj The object.
 *
 * @return File descriptor
 *
 * @ingroup Efl_Io_Sizer_Fd
 */
EAPI EAPI_WEAK int efl_io_sizer_fd_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
