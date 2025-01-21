#ifndef _EFL_UI_FRAME_EO_H_
#define _EFL_UI_FRAME_EO_H_

#ifndef _EFL_UI_FRAME_EO_CLASS_TYPE
#define _EFL_UI_FRAME_EO_CLASS_TYPE

typedef Eo Efl_Ui_Frame;

#endif

#ifndef _EFL_UI_FRAME_EO_TYPES
#define _EFL_UI_FRAME_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Frame widget
 *
 * The Frame widget allows for collapsing and expanding the content widget by
 * clicking on the frame label. the label and content can be set using text_set
 * and content_set api.
 *
 * @ingroup Efl_Ui_Frame
 */
#define EFL_UI_FRAME_CLASS efl_ui_frame_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_frame_class_get(void) EINA_CONST;

/**
 * @brief Manually collapse a frame without animations. Use this to toggle the
 * collapsed state of a frame, bypassing animations.
 *
 * @param[in] obj The object.
 * @param[in] collapse @c true to collapse, @c false to expand.
 *
 * @ingroup Efl_Ui_Frame
 */
EAPI EAPI_WEAK void efl_ui_frame_collapse_set(Eo *obj, Eina_Bool collapse);

/**
 * @brief Manually collapse a frame without animations. Use this to toggle the
 * collapsed state of a frame, bypassing animations.
 *
 * @param[in] obj The object.
 *
 * @return @c true to collapse, @c false to expand.
 *
 * @ingroup Efl_Ui_Frame
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_frame_collapse_get(const Eo *obj);

/**
 * @brief Toggle autocollapsing of a frame. When @c enable is @c true, clicking
 * a frame's label will collapse the frame vertically, shrinking it to the
 * height of the label. By default, this is DISABLED.
 *
 * @param[in] obj The object.
 * @param[in] autocollapse Whether to enable autocollapse.
 *
 * @ingroup Efl_Ui_Frame
 */
EAPI EAPI_WEAK void efl_ui_frame_autocollapse_set(Eo *obj, Eina_Bool autocollapse);

/**
 * @brief Toggle autocollapsing of a frame. When @c enable is @c true, clicking
 * a frame's label will collapse the frame vertically, shrinking it to the
 * height of the label. By default, this is DISABLED.
 *
 * @param[in] obj The object.
 *
 * @return Whether to enable autocollapse.
 *
 * @ingroup Efl_Ui_Frame
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_frame_autocollapse_get(const Eo *obj);

/**
 * @brief Manually collapse a frame with animations Use this to toggle the
 * collapsed state of a frame, triggering animations.
 *
 * @param[in] obj The object.
 * @param[in] collapse @c true to collapse, @c false to expand.
 *
 * @ingroup Efl_Ui_Frame
 */
EAPI EAPI_WEAK void efl_ui_frame_collapse_go(Eo *obj, Eina_Bool collapse);
#endif /* EFL_BETA_API_SUPPORT */

#endif
