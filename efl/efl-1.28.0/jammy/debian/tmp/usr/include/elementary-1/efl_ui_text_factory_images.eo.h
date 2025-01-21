#ifndef _EFL_UI_TEXT_FACTORY_IMAGES_EO_H_
#define _EFL_UI_TEXT_FACTORY_IMAGES_EO_H_

#ifndef _EFL_UI_TEXT_FACTORY_IMAGES_EO_CLASS_TYPE
#define _EFL_UI_TEXT_FACTORY_IMAGES_EO_CLASS_TYPE

typedef Eo Efl_Ui_Text_Factory_Images;

#endif

#ifndef _EFL_UI_TEXT_FACTORY_IMAGES_EO_TYPES
#define _EFL_UI_TEXT_FACTORY_IMAGES_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Factory that creates images given key string
 *
 * The key can be either a full image path, or associated with one. The factory
 * will fallback if key was not matches with an image, and try to load it as a
 * full path.
 *
 * @ingroup Efl_Ui_Text_Factory_Images
 */
#define EFL_UI_TEXT_FACTORY_IMAGES_CLASS efl_ui_text_factory_images_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_text_factory_images_class_get(void) EINA_CONST;

/**
 * @brief Associates given name with a path of an image or EET file.
 *
 * This can be used for quick retrieval (instead of providing actual filenames.
 *
 * This @c file is associated with @c name is considered a full file path.
 *
 * see @ref efl_ui_text_factory_images_matches_mmap_add for mmap version see
 * @ref efl_ui_text_factory_images_matches_del
 *
 * @param[in] obj The object.
 * @param[in] name the name associated with filename
 * @param[in] path the image or EET file path
 * @param[in] key the key to use (in cases of loading an EET file
 *
 * @return @c true if successful, @c false otherwise
 *
 * @ingroup Efl_Ui_Text_Factory_Images
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_text_factory_images_matches_add(Eo *obj, const char *name, const char *path, const char *key);

/**
 * @brief Deletes an association of @c key with its respective file path.
 *
 * see @ref efl_ui_text_factory_images_matches_add
 *
 * @param[in] obj The object.
 * @param[in] key the entry's key to delete
 *
 * @return @c true if successful, @c false otherwise
 *
 * @ingroup Efl_Ui_Text_Factory_Images
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_text_factory_images_matches_del(Eo *obj, const char *key);

/**
 * @brief Associates given name with a mmap'd image or EET file and key.
 *
 * see @ref efl_ui_text_factory_images_matches_add for string file path version
 * see @ref efl_ui_text_factory_images_matches_mmap_del
 *
 * @param[in] obj The object.
 * @param[in] name the name associated with filename
 * @param[in] file the image or EET file
 * @param[in] key the key to use (in cases of loading an EET file
 *
 * @return @c true if successful, @c false otherwise
 *
 * @ingroup Efl_Ui_Text_Factory_Images
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_text_factory_images_matches_mmap_add(Eo *obj, const char *name, const Eina_File *file, const char *key);

/**
 * @brief Deletes an association of @c key with its respective file.
 *
 * see @ref efl_ui_text_factory_images_matches_mmap_add
 *
 * @param[in] obj The object.
 * @param[in] key the entry's key to delete
 *
 * @return @c true if successful, @c false otherwise
 *
 * @ingroup Efl_Ui_Text_Factory_Images
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_text_factory_images_matches_mmap_del(Eo *obj, const char *key);
#endif /* EFL_BETA_API_SUPPORT */

#endif
