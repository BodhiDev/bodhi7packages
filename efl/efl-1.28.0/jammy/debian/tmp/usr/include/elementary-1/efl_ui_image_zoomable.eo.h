#ifndef _EFL_UI_IMAGE_ZOOMABLE_EO_H_
#define _EFL_UI_IMAGE_ZOOMABLE_EO_H_

#ifndef _EFL_UI_IMAGE_ZOOMABLE_EO_CLASS_TYPE
#define _EFL_UI_IMAGE_ZOOMABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Image_Zoomable;

#endif

#ifndef _EFL_UI_IMAGE_ZOOMABLE_EO_TYPES
#define _EFL_UI_IMAGE_ZOOMABLE_EO_TYPES


#endif
/** Elementary Image Zoomable class
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_CLASS efl_ui_image_zoomable_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_image_zoomable_class_get(void) EINA_CONST;

/**
 * @brief The gesture state for photocam.
 *
 * This sets the gesture state to on or off for photocam. The default is off.
 * This will start multi touch zooming.
 *
 * @param[in] obj The object.
 * @param[in] gesture The gesture state.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
EAPI EAPI_WEAK void efl_ui_image_zoomable_gesture_enabled_set(Eo *obj, Eina_Bool gesture);

/**
 * @brief The gesture state for photocam.
 *
 * This sets the gesture state to on or off for photocam. The default is off.
 * This will start multi touch zooming.
 *
 * @param[in] obj The object.
 *
 * @return The gesture state.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_image_zoomable_gesture_enabled_get(const Eo *obj);

/**
 * @brief The region of the image that is currently shown
 *
 * Setting it shows the region of the image without using animation.
 *
 * @param[in] obj The object.
 * @param[in] region The region in the original image pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
EAPI EAPI_WEAK void efl_ui_image_zoomable_image_region_set(Eo *obj, Eina_Rect region);

/**
 * @brief The region of the image that is currently shown
 *
 * Setting it shows the region of the image without using animation.
 *
 * @param[in] obj The object.
 *
 * @return The region in the original image pixels.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
EAPI EAPI_WEAK Eina_Rect efl_ui_image_zoomable_image_region_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_PRESS;

/** Called when photocam got pressed
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_PRESS (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_PRESS))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD;

/** Called when photocam loading started
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED;

/** Called when photocam loading finished
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD_DETAIL;

/** Called when photocal detail loading started
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD_DETAIL (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD_DETAIL))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED_DETAIL;

/** Called when photocam detail loading finished
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED_DETAIL (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED_DETAIL))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_START;

/** Called when photocam download started
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_START (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_START))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_PROGRESS;

/** Called when photocam download progress updated
 * @return Elm_Photocam_Progress
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_PROGRESS (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_PROGRESS))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_DONE;

/** Called when photocam download finished
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_DONE (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_DONE))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_ERROR;

/** Called when photocam download failed
 * @return Elm_Photocam_Error
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_ERROR (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_ERROR))

#endif
