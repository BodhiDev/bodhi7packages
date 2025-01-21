#ifndef _EFL_UI_IMAGE_EO_H_
#define _EFL_UI_IMAGE_EO_H_

#ifndef _EFL_UI_IMAGE_EO_CLASS_TYPE
#define _EFL_UI_IMAGE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Image;

#endif

#ifndef _EFL_UI_IMAGE_EO_TYPES
#define _EFL_UI_IMAGE_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Structure associated with smart callback 'download,progress'.
 *
 * @ingroup Efl_Ui_Image_Progress
 */
typedef struct _Efl_Ui_Image_Progress
{
  double now; /**< Current percentage */
  double total; /**< Total percentage */
} Efl_Ui_Image_Progress;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Structure associated with smart callback 'download,progress'.
 *
 * @ingroup Efl_Ui_Image_Error
 */
typedef struct _Efl_Ui_Image_Error
{
  int status; /**< Error status of the download */
  Eina_Bool open_error; /**< @c true if the error happened when opening the
                         * file, @c false otherwise */
} Efl_Ui_Image_Error;
#endif /* EFL_BETA_API_SUPPORT */


#endif
/**
 * @brief Efl UI image class
 *
 * When loading images from a file, the @ref efl_file_key_get property can be
 * used to access different streams. For example, when accessing Evas image
 * caches.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image
 */
#define EFL_UI_IMAGE_CLASS efl_ui_image_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_image_class_get(void) EINA_CONST;

/**
 * @brief The image name, using icon standards names.
 *
 * For example, freedesktop.org defines standard icon names such as "home" and
 * "network". There can be different icon sets to match those icon keys. The
 * "name" given as parameter is one of these "keys" and will be used to look in
 * the freedesktop.org paths and elementary theme.
 *
 * If the name is not found in any of the expected locations and is the
 * absolute path of an image file, this image will be used. Lookup order used
 * by @ref efl_ui_image_icon_set can be set using "icon_theme" in config.
 *
 * If the image was set using @ref efl_file_get instead of
 * @ref efl_ui_image_icon_set, then reading this property will return null.
 *
 * @note The image set by this function is changed when @ref efl_file_load is
 * called.
 *
 * @note This function does not accept relative icon paths.
 *
 * @param[in] obj The object.
 * @param[in] name The icon name
 *
 * @return @c true on success, @c false on error
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_image_icon_set(Eo *obj, const char *name);

/**
 * @brief The image name, using icon standards names.
 *
 * For example, freedesktop.org defines standard icon names such as "home" and
 * "network". There can be different icon sets to match those icon keys. The
 * "name" given as parameter is one of these "keys" and will be used to look in
 * the freedesktop.org paths and elementary theme.
 *
 * If the name is not found in any of the expected locations and is the
 * absolute path of an image file, this image will be used. Lookup order used
 * by @ref efl_ui_image_icon_set can be set using "icon_theme" in config.
 *
 * If the image was set using @ref efl_file_get instead of
 * @ref efl_ui_image_icon_set, then reading this property will return null.
 *
 * @note The image set by this function is changed when @ref efl_file_load is
 * called.
 *
 * @note This function does not accept relative icon paths.
 *
 * @param[in] obj The object.
 *
 * @return The icon name
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image
 */
EAPI EAPI_WEAK const char *efl_ui_image_icon_get(const Eo *obj);
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_IMAGE_EVENT_DROP;

/** Called when drop from drag and drop happened
 * @return const char *
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image
 */
#define EFL_UI_IMAGE_EVENT_DROP (&(_EFL_UI_IMAGE_EVENT_DROP))
#endif /* EFL_BETA_API_SUPPORT */

#endif
