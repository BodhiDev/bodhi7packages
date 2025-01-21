#ifndef _EFL_FILE_EO_H_
#define _EFL_FILE_EO_H_

#ifndef _EFL_FILE_EO_CLASS_TYPE
#define _EFL_FILE_EO_CLASS_TYPE

typedef Eo Efl_File;

#endif

#ifndef _EFL_FILE_EO_TYPES
#define _EFL_FILE_EO_TYPES


#endif
/** Efl file interface
 *
 * @since 1.22
 *
 * @ingroup Efl_File
 */
#define EFL_FILE_MIXIN efl_file_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_file_mixin_get(void) EINA_CONST;

/**
 * @brief The mmaped file from where an object will fetch the real data (it
 * must be an @ref Eina_File).
 *
 * If mmap is set during object construction, the object will automatically
 * call @ref efl_file_load during the finalize phase of construction.
 *
 * @param[in] obj The object.
 * @param[in] f The handle to the @ref Eina_File that will be used
 *
 * @return 0 on success, error code otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_File
 */
EAPI EAPI_WEAK Eina_Error efl_file_mmap_set(Eo *obj, const Eina_File *f);

/**
 * @brief The mmaped file from where an object will fetch the real data (it
 * must be an @ref Eina_File).
 *
 * If mmap is set during object construction, the object will automatically
 * call @ref efl_file_load during the finalize phase of construction.
 *
 * @param[in] obj The object.
 *
 * @return The handle to the @ref Eina_File that will be used
 *
 * @since 1.22
 *
 * @ingroup Efl_File
 */
EAPI EAPI_WEAK const Eina_File *efl_file_mmap_get(const Eo *obj);

/**
 * @brief The file path from where an object will fetch the data.
 *
 * If file is set during object construction, the object will automatically
 * call @ref efl_file_load during the finalize phase of construction.
 *
 * You must not modify the strings on the returned pointers.
 *
 * @param[in] obj The object.
 * @param[in] file The file path.
 *
 * @return 0 on success, error code otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_File
 */
EAPI EAPI_WEAK Eina_Error efl_file_set(Eo *obj, const char *file);

/**
 * @brief The file path from where an object will fetch the data.
 *
 * If file is set during object construction, the object will automatically
 * call @ref efl_file_load during the finalize phase of construction.
 *
 * You must not modify the strings on the returned pointers.
 *
 * @param[in] obj The object.
 *
 * @return The file path.
 *
 * @since 1.22
 *
 * @ingroup Efl_File
 */
EAPI EAPI_WEAK const char *efl_file_get(const Eo *obj);

/**
 * @brief The key which corresponds to the target data within a file.
 *
 * Some file types can contain multiple data streams which are indexed by a
 * key. Use this property for such cases (See for example @ref Efl_Ui_Image or
 * @ref Efl_Ui_Layout).
 *
 * You must not modify the strings on the returned pointers.
 *
 * @param[in] obj The object.
 * @param[in] key The group that the data belongs to. See the class
 * documentation for particular implementations of this interface to see how
 * this property is used.
 *
 * @since 1.22
 *
 * @ingroup Efl_File
 */
EAPI EAPI_WEAK void efl_file_key_set(Eo *obj, const char *key);

/**
 * @brief The key which corresponds to the target data within a file.
 *
 * Some file types can contain multiple data streams which are indexed by a
 * key. Use this property for such cases (See for example @ref Efl_Ui_Image or
 * @ref Efl_Ui_Layout).
 *
 * You must not modify the strings on the returned pointers.
 *
 * @param[in] obj The object.
 *
 * @return The group that the data belongs to. See the class documentation for
 * particular implementations of this interface to see how this property is
 * used.
 *
 * @since 1.22
 *
 * @ingroup Efl_File
 */
EAPI EAPI_WEAK const char *efl_file_key_get(const Eo *obj);

/**
 * @brief The load state of the object.
 *
 * @param[in] obj The object.
 *
 * @return @c true if the object is loaded, @c false otherwise.
 *
 * @since 1.22
 *
 * @ingroup Efl_File
 */
EAPI EAPI_WEAK Eina_Bool efl_file_loaded_get(const Eo *obj);

/**
 * @brief Perform all necessary operations to open and load file data into the
 * object using the @ref efl_file_get (or @ref efl_file_mmap_get) and
 * @ref efl_file_key_get properties.
 *
 * In the case where @ref efl_file_set has been called on an object, this will
 * internally open the file and call @ref efl_file_mmap_set on the object using
 * the opened file handle.
 *
 * Calling @ref efl_file_load on an object which has already performed file
 * operations based on the currently set properties will have no effect.
 *
 * @param[in] obj The object.
 *
 * @return 0 on success, error code otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_File
 */
EAPI EAPI_WEAK Eina_Error efl_file_load(Eo *obj);

/**
 * @brief Perform all necessary operations to unload file data from the object.
 *
 * In the case where @ref efl_file_mmap_set has been externally called on an
 * object, the file handle stored in the object will be preserved.
 *
 * Calling @ref efl_file_unload on an object which is not currently loaded will
 * have no effect.
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_File
 */
EAPI EAPI_WEAK void efl_file_unload(Eo *obj);

#endif
