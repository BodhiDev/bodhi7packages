#ifndef _EFL_IO_MANAGER_EO_H_
#define _EFL_IO_MANAGER_EO_H_

#ifndef _EFL_IO_MANAGER_EO_CLASS_TYPE
#define _EFL_IO_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Io_Manager;

#endif

#ifndef _EFL_IO_MANAGER_EO_TYPES
#define _EFL_IO_MANAGER_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** A structure to handle arbitrary data to be sent over Promises.
 *
 * @ingroup Eio_Data
 */
typedef struct _Eio_Data
{
  void *data; /**< Private data pointer */
  unsigned int size; /**< Size of private data */
} Eio_Data;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** EflIoPath function
 *
 * @ingroup EflIoPath
 */
typedef void (*EflIoPath)(void *data, Eina_Array *paths);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** EflIoDirectInfo function
 *
 * @ingroup EflIoDirectInfo
 */
typedef void (*EflIoDirectInfo)(void *data, Eina_Array *entries);
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Class representing an asynchronous file operation.
 *
 * @ingroup Efl_Io_Manager
 */
#define EFL_IO_MANAGER_CLASS efl_io_manager_class_get()

EIO_API EIO_API_WEAK const Efl_Class *efl_io_manager_class_get(void) EINA_CONST;

/**
 * @brief Lists entries in a given path. See @ref Eina_File.
 *
 * @param[in] obj The object.
 * @param[in] path Path we want to list entries for
 * @param[in] paths Callback called for each packet of files found
 *
 * @return Amount of files found during the listing of the directory
 *
 * @ingroup Efl_Io_Manager
 */
EIO_API EIO_API_WEAK Eina_Future *efl_io_manager_ls(const Eo *obj, const char *path, void *paths_data, EflIoPath paths, Eina_Free_Cb paths_free_cb) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Lists entries in a given path with more information.
 *
 * @param[in] obj The object.
 * @param[in] path Path we want to list entries for
 * @param[in] recursive If @c true, list entries recursively, @c false
 * otherwise
 * @param[in] info Callback called for each packet of
 * @ref Eina_File_Direct_Info
 *
 * @return Amount of files found during the listing of the directory
 *
 * @ingroup Efl_Io_Manager
 */
EIO_API EIO_API_WEAK Eina_Future *efl_io_manager_direct_ls(const Eo *obj, const char *path, Eina_Bool recursive, void *info_data, EflIoDirectInfo info, Eina_Free_Cb info_free_cb) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Lists entries in a given path with stat information.
 *
 * @param[in] obj The object.
 * @param[in] path Path we want to list entries for
 * @param[in] recursive If @c true, list entries recursively, @c false
 * otherwise
 * @param[in] info Callback called for each packet of
 * @ref Eina_File_Direct_Info
 *
 * @return Amount of files found during the listing of the directory
 *
 * @ingroup Efl_Io_Manager
 */
EIO_API EIO_API_WEAK Eina_Future *efl_io_manager_stat_ls(const Eo *obj, const char *path, Eina_Bool recursive, void *info_data, EflIoDirectInfo info, Eina_Free_Cb info_free_cb) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Lists all extended attributes asynchronously.
 *
 * @param[in] obj The object.
 * @param[in] path Path we want to list entries for
 * @param[in] paths Callback called for each packet of extended attributes
 * found.
 *
 * @return Amount of extended attributes found
 *
 * @ingroup Efl_Io_Manager
 */
EIO_API EIO_API_WEAK Eina_Future *efl_io_manager_xattr_ls(const Eo *obj, const char *path, void *paths_data, EflIoPath paths, Eina_Free_Cb paths_free_cb) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Get stat info on a given file/directory.
 *
 * @param[in] obj The object.
 * @param[in] path Path we want to get stat information for
 *
 * @return Stat information
 *
 * @ingroup Efl_Io_Manager
 */
EIO_API EIO_API_WEAK Eina_Future *efl_io_manager_stat(const Eo *obj, const char *path);

/**
 * @brief Retrieves or sets information of a given extended attribute.
 *
 * @param[in] obj The object.
 * @param[in] path File path
 * @param[in] attribute Attribute name
 * @param[in] data Data to set as information
 * @param[in] flags Extended attributes flags
 *
 * @return Future for asynchronous set operation
 *
 * @ingroup Efl_Io_Manager
 */
EIO_API EIO_API_WEAK Eina_Future *efl_io_manager_xattr_set(Eo *obj, const char *path, const char *attribute, Eina_Binbuf *data, Eina_Xattr_Flags flags) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Retrieves or sets information of a given extended attribute.
 *
 * @param[in] obj The object.
 * @param[in] path File path
 * @param[in] attribute Attribute name
 *
 * @return Information
 *
 * @ingroup Efl_Io_Manager
 */
EIO_API EIO_API_WEAK Eina_Future *efl_io_manager_xattr_get(const Eo *obj, const char *path, const char *attribute) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Opens a file.
 *
 * The fulfilled value in the promise will be the Eina.File*.
 *
 * @param[in] obj The object.
 * @param[in] path Path to file
 * @param[in] shared @c true if the file can be accessed by others, @c false
 * otherwise
 *
 * @return Eina file handle
 *
 * @ingroup Efl_Io_Manager
 */
EIO_API EIO_API_WEAK Eina_Future *efl_io_manager_open(const Eo *obj, const char *path, Eina_Bool shared) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Closes an open Eina.File.
 *
 * @param[in] obj The object.
 * @param[in] file Eina file handle
 *
 * @return Close return code
 *
 * @ingroup Efl_Io_Manager
 */
EIO_API EIO_API_WEAK Eina_Future *efl_io_manager_close(const Eo *obj, Eina_File *file) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif /* EFL_BETA_API_SUPPORT */

#endif
