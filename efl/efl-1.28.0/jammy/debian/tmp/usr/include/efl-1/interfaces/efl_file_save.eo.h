#ifndef _EFL_FILE_SAVE_EO_H_
#define _EFL_FILE_SAVE_EO_H_

#ifndef _EFL_FILE_SAVE_EO_CLASS_TYPE
#define _EFL_FILE_SAVE_EO_CLASS_TYPE

typedef Eo Efl_File_Save;

#endif

#ifndef _EFL_FILE_SAVE_EO_TYPES
#define _EFL_FILE_SAVE_EO_TYPES

/** Info used to determine various attributes when saving a file.
 *
 * @since 1.22
 *
 * @ingroup Efl_File_Save_Info
 */
typedef struct _Efl_File_Save_Info
{
  unsigned int quality; /**< The quality level (0-100) to save the file with;
                         * commonly used when saving image files.
                         *
                         * @since 1.22 */
  unsigned int compression; /**< The compression level (0-100) to save the file
                             * with.
                             *
                             * @since 1.22 */
  const char *encoding; /**< The encoding to use when saving the file.
                         *
                         * @since 1.22 */
} Efl_File_Save_Info;


#endif
/** Efl file saving interface
 *
 * @since 1.22
 *
 * @ingroup Efl_File_Save
 */
#define EFL_FILE_SAVE_INTERFACE efl_file_save_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_file_save_interface_get(void) EINA_CONST;

/**
 * @brief Save the given image object's contents to an (image) file.
 *
 * The extension suffix on @c file will determine which saver module Evas is to
 * use when saving, thus the final file's format. If the file supports multiple
 * data stored in it (Eet ones), you can specify the key to be used as the
 * index of the image in it.
 *
 * You can specify some flags when saving the image.  Currently acceptable
 * flags are @c quality and @c compress. Eg.: "quality=100 compress=9".
 *
 * @param[in] obj The object.
 * @param[in] file The filename to be used to save the image (extension
 * obligatory).
 * @param[in] key The image key in the file (if an Eet one), or @c null,
 * otherwise.
 * @param[in] info The flags to be used ($null for defaults).
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_File_Save
 */
EAPI EAPI_WEAK Eina_Bool efl_file_save(const Eo *obj, const char *file, const char *key, const Efl_File_Save_Info *info);

#endif
