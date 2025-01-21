#ifndef _EFL_UI_PAN_EO_H_
#define _EFL_UI_PAN_EO_H_

#ifndef _EFL_UI_PAN_EO_CLASS_TYPE
#define _EFL_UI_PAN_EO_CLASS_TYPE

typedef Eo Efl_Ui_Pan;

#endif

#ifndef _EFL_UI_PAN_EO_TYPES
#define _EFL_UI_PAN_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Pan widget class.
 *
 * This widget positions its contents (set using @ref efl_content_get) relative
 * to the widget itself. This is particularly useful for large content which
 * does not fit inside its container. In this case only a portion is shown.
 *
 * The position of this "window" into the content can be changed using
 * @ref efl_ui_pan_position_get. This widget does not provide means for a user
 * to change the content's position (like scroll bars). This widget is meant to
 * be used internally by other classes like @ref Efl_Ui_Scroll_Manager.
 *
 * @ingroup Efl_Ui_Pan
 */
#define EFL_UI_PAN_CLASS efl_ui_pan_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_pan_class_get(void) EINA_CONST;

/**
 * @brief Position of the content inside the Pan widget.
 *
 * Setting the position to @ref efl_ui_pan_position_min_get makes the upper
 * left corner of the content visible. Setting the position to
 * @ref efl_ui_pan_position_max_get makes the lower right corner of the content
 * visible. Values outside this range are valid and make the background show.
 *
 * @param[in] obj The object.
 * @param[in] position Content position.
 *
 * @ingroup Efl_Ui_Pan
 */
EAPI EAPI_WEAK void efl_ui_pan_position_set(Eo *obj, Eina_Position2D position);

/**
 * @brief Position of the content inside the Pan widget.
 *
 * Setting the position to @ref efl_ui_pan_position_min_get makes the upper
 * left corner of the content visible. Setting the position to
 * @ref efl_ui_pan_position_max_get makes the lower right corner of the content
 * visible. Values outside this range are valid and make the background show.
 *
 * @param[in] obj The object.
 *
 * @return Content position.
 *
 * @ingroup Efl_Ui_Pan
 */
EAPI EAPI_WEAK Eina_Position2D efl_ui_pan_position_get(const Eo *obj);

/**
 * @brief Size of the content currently set through @ref efl_content_get. This
 * is a convenience proxy.
 *
 * @param[in] obj The object.
 *
 * @return The size of the content.
 *
 * @ingroup Efl_Ui_Pan
 */
EAPI EAPI_WEAK Eina_Size2D efl_ui_pan_content_size_get(const Eo *obj);

/**
 * @brief Position you can set to @ref efl_ui_pan_position_get so that the
 * content's upper left corner is visible. Always (0, 0).
 *
 * @param[in] obj The object.
 *
 * @return Content's upper left corner position.
 *
 * @ingroup Efl_Ui_Pan
 */
EAPI EAPI_WEAK Eina_Position2D efl_ui_pan_position_min_get(const Eo *obj);

/**
 * @brief Position you can set to @ref efl_ui_pan_position_get so that the
 * content's lower right corner is visible. It depends both on the content's
 * size and this widget's size.
 *
 * @param[in] obj The object.
 *
 * @return Content's lower right corner position.
 *
 * @ingroup Efl_Ui_Pan
 */
EAPI EAPI_WEAK Eina_Position2D efl_ui_pan_position_max_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_PAN_EVENT_PAN_CONTENT_POSITION_CHANGED;

/** The content's position has changed, its position in the event is the new
 * position.
 * @return Eina_Position2D
 *
 * @ingroup Efl_Ui_Pan
 */
#define EFL_UI_PAN_EVENT_PAN_CONTENT_POSITION_CHANGED (&(_EFL_UI_PAN_EVENT_PAN_CONTENT_POSITION_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_PAN_EVENT_PAN_CONTENT_SIZE_CHANGED;

/** The content's size has changed, its size in the event is the new size.
 * @return Eina_Size2D
 *
 * @ingroup Efl_Ui_Pan
 */
#define EFL_UI_PAN_EVENT_PAN_CONTENT_SIZE_CHANGED (&(_EFL_UI_PAN_EVENT_PAN_CONTENT_SIZE_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
