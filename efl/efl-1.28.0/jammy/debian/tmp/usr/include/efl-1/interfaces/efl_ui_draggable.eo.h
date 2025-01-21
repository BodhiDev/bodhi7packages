#ifndef _EFL_UI_DRAGGABLE_EO_H_
#define _EFL_UI_DRAGGABLE_EO_H_

#ifndef _EFL_UI_DRAGGABLE_EO_CLASS_TYPE
#define _EFL_UI_DRAGGABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Draggable;

#endif

#ifndef _EFL_UI_DRAGGABLE_EO_TYPES
#define _EFL_UI_DRAGGABLE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl UI draggable interface
 *
 * @ingroup Efl_Ui_Draggable
 */
#define EFL_UI_DRAGGABLE_INTERFACE efl_ui_draggable_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_draggable_interface_get(void) EINA_CONST;

/**
 * @brief Control whether the object's content is changed by drag and drop.
 *
 * If @c drag_target is true the object can be the target of a dragging object.
 * The content of this object can then be changed into dragging content. For
 * example, if an object deals with image and @c drag_target is true, the user
 * can drag the new image and drop it into said object. This object's image can
 * then be changed into a new image.
 *
 * @param[in] obj The object.
 * @param[in] set Turn on or off drop_target. Default is @c false.
 *
 * @ingroup Efl_Ui_Draggable
 */
EAPI EAPI_WEAK void efl_ui_draggable_drag_target_set(Eo *obj, Eina_Bool set);

/**
 * @brief Control whether the object's content is changed by drag and drop.
 *
 * If @c drag_target is true the object can be the target of a dragging object.
 * The content of this object can then be changed into dragging content. For
 * example, if an object deals with image and @c drag_target is true, the user
 * can drag the new image and drop it into said object. This object's image can
 * then be changed into a new image.
 *
 * @param[in] obj The object.
 *
 * @return Turn on or off drop_target. Default is @c false.
 *
 * @ingroup Efl_Ui_Draggable
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_draggable_drag_target_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
