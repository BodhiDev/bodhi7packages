#ifndef _EFL_IO_FILE_EO_H_
#define _EFL_IO_FILE_EO_H_

#ifndef _EFL_IO_FILE_EO_CLASS_TYPE
#define _EFL_IO_FILE_EO_CLASS_TYPE

typedef Eo Efl_Io_File;

#endif

#ifndef _EFL_IO_FILE_EO_TYPES
#define _EFL_IO_FILE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief File access (open, close, read, write, lseek, ftruncate)
 *
 * @ref efl_io_closer_close_on_exec_get and
 * @ref efl_io_closer_close_on_invalidate_get are respected and default to
 * @c true. @ref efl_io_closer_close_on_exec_set sets flag O_CLOEXEC.
 *
 * @ingroup Efl_Io_File
 */
#define EFL_IO_FILE_CLASS efl_io_file_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_io_file_class_get(void) EINA_CONST;

/**
 * @brief Bitwise OR'ed flags to open the file, like O_CREAT, O_APPEND...
 *
 * Defaults to O_RDONLY | O_CLOEXEC.
 *
 * The flag O_CLOEXEC will be also managed by
 * @ref efl_io_closer_close_on_exec_set. Setting the property after the file is
 * opened will change its blocking behavior.
 *
 * Constructor property to define flags to open the file
 *
 * @param[in] obj The object.
 * @param[in] flags Flags to open file, see man:open(2).
 *
 * @ingroup Efl_Io_File
 */
EAPI EAPI_WEAK void efl_io_file_flags_set(Eo *obj, uint32_t flags);

/**
 * @brief Bitwise OR'ed flags to open the file, like O_CREAT, O_APPEND...
 *
 * Defaults to O_RDONLY | O_CLOEXEC.
 *
 * The flag O_CLOEXEC will be also managed by
 * @ref efl_io_closer_close_on_exec_set. Setting the property after the file is
 * opened will change its blocking behavior.
 *
 * @param[in] obj The object.
 *
 * @return Flags to open file, see man:open(2).
 *
 * @ingroup Efl_Io_File
 */
EAPI EAPI_WEAK uint32_t efl_io_file_flags_get(const Eo *obj);

/**
 * @brief Mode property
 *
 * Constructor property to define mode to open the file
 *
 * @param[in] obj The object.
 * @param[in] mode Mode to open file, see man:open(2).
 *
 * @ingroup Efl_Io_File
 */
EAPI EAPI_WEAK void efl_io_file_mode_set(Eo *obj, uint32_t mode);

/**
 * @brief Mode property
 *
 * @param[in] obj The object.
 *
 * @return Mode to open file, see man:open(2).
 *
 * @ingroup Efl_Io_File
 */
EAPI EAPI_WEAK uint32_t efl_io_file_mode_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
