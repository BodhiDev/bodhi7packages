#ifndef _EFL_UI_ZOOM_EO_H_
#define _EFL_UI_ZOOM_EO_H_

#ifndef _EFL_UI_ZOOM_EO_CLASS_TYPE
#define _EFL_UI_ZOOM_EO_CLASS_TYPE

typedef Eo Efl_Ui_Zoom;

#endif

#ifndef _EFL_UI_ZOOM_EO_TYPES
#define _EFL_UI_ZOOM_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Types of zoom available.
 *
 * @ingroup Efl_Ui_Zoom_Mode
 */
typedef enum
{
  EFL_UI_ZOOM_MODE_MANUAL = 0, /**< Zoom controlled manually by
                                * @ref efl_ui_zoom_level_get. */
  EFL_UI_ZOOM_MODE_AUTO_FIT, /**< Zoom until whole image fits inside object.
                              * Parts of the object might be left blank. */
  EFL_UI_ZOOM_MODE_AUTO_FILL, /**< Zoom until image fills the object. Parts of
                               * the image might not show. */
  EFL_UI_ZOOM_MODE_AUTO_FIT_IN, /**< Zoom in until image fits inside object. */
  EFL_UI_ZOOM_MODE_LAST /**< Internal. Sentinel value to indicate last enum
                         * field during iteration. */
} Efl_Ui_Zoom_Mode;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl UI zoom interface
 *
 * @ingroup Efl_Ui_Zoom
 */
#define EFL_UI_ZOOM_INTERFACE efl_ui_zoom_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_zoom_interface_get(void) EINA_CONST;

/**
 * @brief This sets the zoom animation state to on or off for zoomable. The
 * default is off. When @c paused is @c true, it will stop zooming using
 * animation on zoom level changes and change instantly, stopping any existing
 * animations that are running.
 *
 * @param[in] obj The object.
 * @param[in] paused The paused state.
 *
 * @ingroup Efl_Ui_Zoom
 */
EAPI EAPI_WEAK void efl_ui_zoom_animation_set(Eo *obj, Eina_Bool paused);

/**
 * @brief This sets the zoom animation state to on or off for zoomable. The
 * default is off. When @c paused is @c true, it will stop zooming using
 * animation on zoom level changes and change instantly, stopping any existing
 * animations that are running.
 *
 * @param[in] obj The object.
 *
 * @return The paused state.
 *
 * @ingroup Efl_Ui_Zoom
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_zoom_animation_get(const Eo *obj);

/**
 * @brief Zoom level of the image.
 *
 * This selects the zoom level. If @c zoom is 1, it means no zoom. If it's
 * smaller than 1, it means zoom in. If it's bigger than 1, it means zoom out.
 * For  example, @c zoom 1 will be 1:1 pixel for pixel. @c zoom 2 will be 2:1
 * (that is 2x2 photo pixels will display as 1 on-screen pixel) which is a zoom
 * out. 4:1 will be 4x4 photo pixels as 1 screen pixel, and so on. The @c zoom
 * parameter must be greater than 0. It is suggested to stick to powers of 2.
 * (1, 2, 4, 8, 16, 32, etc.).
 *
 * Note that if you set @ref efl_ui_zoom_mode_get to anything other than
 * @ref EFL_UI_ZOOM_MODE_MANUAL (which is the default value) the
 * @ref efl_ui_zoom_level_get might be changed at any time by the zoomable
 * object itself to account for image and viewport size changes.
 *
 * @param[in] obj The object.
 * @param[in] zoom The image's current zoom level.
 *
 * @ingroup Efl_Ui_Zoom
 */
EAPI EAPI_WEAK void efl_ui_zoom_level_set(Eo *obj, double zoom);

/**
 * @brief Zoom level of the image.
 *
 * This selects the zoom level. If @c zoom is 1, it means no zoom. If it's
 * smaller than 1, it means zoom in. If it's bigger than 1, it means zoom out.
 * For  example, @c zoom 1 will be 1:1 pixel for pixel. @c zoom 2 will be 2:1
 * (that is 2x2 photo pixels will display as 1 on-screen pixel) which is a zoom
 * out. 4:1 will be 4x4 photo pixels as 1 screen pixel, and so on. The @c zoom
 * parameter must be greater than 0. It is suggested to stick to powers of 2.
 * (1, 2, 4, 8, 16, 32, etc.).
 *
 * Note that if you set @ref efl_ui_zoom_mode_get to anything other than
 * @ref EFL_UI_ZOOM_MODE_MANUAL (which is the default value) the
 * @ref efl_ui_zoom_level_get might be changed at any time by the zoomable
 * object itself to account for image and viewport size changes.
 *
 * @param[in] obj The object.
 *
 * @return The image's current zoom level.
 *
 * @ingroup Efl_Ui_Zoom
 */
EAPI EAPI_WEAK double efl_ui_zoom_level_get(const Eo *obj);

/**
 * @brief Zoom mode.
 *
 * This sets the zoom mode to manual or one of several automatic levels.
 * @ref EFL_UI_ZOOM_MODE_MANUAL means that zoom is controlled manually by
 * @ref efl_ui_zoom_level_get and will stay at that level until changed by code
 * or until @ref efl_ui_zoom_mode_get is changed. This is the default mode. The
 * Automatic modes will allow the zoomable object to automatically adjust zoom
 * mode based on image and viewport size changes.
 *
 * @param[in] obj The object.
 * @param[in] mode The zoom mode.
 *
 * @ingroup Efl_Ui_Zoom
 */
EAPI EAPI_WEAK void efl_ui_zoom_mode_set(Eo *obj, Efl_Ui_Zoom_Mode mode);

/**
 * @brief Zoom mode.
 *
 * This sets the zoom mode to manual or one of several automatic levels.
 * @ref EFL_UI_ZOOM_MODE_MANUAL means that zoom is controlled manually by
 * @ref efl_ui_zoom_level_get and will stay at that level until changed by code
 * or until @ref efl_ui_zoom_mode_get is changed. This is the default mode. The
 * Automatic modes will allow the zoomable object to automatically adjust zoom
 * mode based on image and viewport size changes.
 *
 * @param[in] obj The object.
 *
 * @return The zoom mode.
 *
 * @ingroup Efl_Ui_Zoom
 */
EAPI EAPI_WEAK Efl_Ui_Zoom_Mode efl_ui_zoom_mode_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_ZOOM_START;

/** Called when zooming started
 *
 * @ingroup Efl_Ui_Zoom
 */
#define EFL_UI_EVENT_ZOOM_START (&(_EFL_UI_EVENT_ZOOM_START))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_ZOOM_STOP;

/** Called when zooming stopped
 *
 * @ingroup Efl_Ui_Zoom
 */
#define EFL_UI_EVENT_ZOOM_STOP (&(_EFL_UI_EVENT_ZOOM_STOP))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_ZOOM_CHANGE;

/** Called when zooming changed
 *
 * @ingroup Efl_Ui_Zoom
 */
#define EFL_UI_EVENT_ZOOM_CHANGE (&(_EFL_UI_EVENT_ZOOM_CHANGE))
#endif /* EFL_BETA_API_SUPPORT */

#endif
