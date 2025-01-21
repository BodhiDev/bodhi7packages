#ifndef _EFL_UI_FOCUS_COMPOSITION_EO_H_
#define _EFL_UI_FOCUS_COMPOSITION_EO_H_

#ifndef _EFL_UI_FOCUS_COMPOSITION_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_COMPOSITION_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Composition;

#endif

#ifndef _EFL_UI_FOCUS_COMPOSITION_EO_TYPES
#define _EFL_UI_FOCUS_COMPOSITION_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This defines the inheriting widget as Composition widget.
 *
 * A composition widget is a widget that's the logical parent of another set of
 * widgets which can be used for interaction.
 *
 * @ingroup Efl_Ui_Focus_Composition
 */
#define EFL_UI_FOCUS_COMPOSITION_MIXIN efl_ui_focus_composition_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_focus_composition_mixin_get(void) EINA_CONST;

#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
/**
 * @brief Set the order of elements that will be used for composition
 *
 * Elements of the list can be either an @ref Efl_Ui_Widget, an
 * @ref Efl_Ui_Focus_Object or an @ref Efl_Gfx_Entity.
 *
 * If the element is an @ref Efl_Ui_Widget nothing is done and the widget is
 * simply part of the order.
 *
 * If the element is an @ref Efl_Ui_Focus_Object, then the mixin will take care
 * of registering the element.
 *
 * If the element is an @ref Efl_Gfx_Entity, then the geometry is used as focus
 * geometry, the focus property is redirected to the evas focus property. The
 * mixin will take care of registration.
 *
 * @param[in] obj The object.
 * @param[in] logical_order The order to use
 *
 * @ingroup Efl_Ui_Focus_Composition
 */
EAPI EAPI_WEAK void efl_ui_focus_composition_elements_set(Eo *obj, Eina_List *logical_order EFL_TRANSFER_OWNERSHIP);
#endif

#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
/**
 * @brief Set the order of elements that will be used for composition
 *
 * Elements of the list can be either an @ref Efl_Ui_Widget, an
 * @ref Efl_Ui_Focus_Object or an @ref Efl_Gfx_Entity.
 *
 * If the element is an @ref Efl_Ui_Widget nothing is done and the widget is
 * simply part of the order.
 *
 * If the element is an @ref Efl_Ui_Focus_Object, then the mixin will take care
 * of registering the element.
 *
 * If the element is an @ref Efl_Gfx_Entity, then the geometry is used as focus
 * geometry, the focus property is redirected to the evas focus property. The
 * mixin will take care of registration.
 *
 * @param[in] obj The object.
 *
 * @return The order to use
 *
 * @ingroup Efl_Ui_Focus_Composition
 */
EAPI EAPI_WEAK Eina_List *efl_ui_focus_composition_elements_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif

#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
/** Mark this widget as dirty, the children can be considered to be changed
 * after that call
 *
 * @ingroup Efl_Ui_Focus_Composition
 */
EAPI EAPI_WEAK void efl_ui_focus_composition_dirty(Eo *obj);
#endif

#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
/**
 * @brief A call to prepare the children of this element, called if marked as
 * dirty
 *
 * You can use this function to call composition_elements.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Ui_Focus_Composition
 */
EAPI EAPI_WEAK void efl_ui_focus_composition_prepare(Eo *obj);
#endif

#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
/**
 * @brief Set to true if all children should be registered as logicals
 *
 * @param[in] obj The object.
 * @param[in] logical_mode @c true or @c false
 *
 * @ingroup Efl_Ui_Focus_Composition
 */
EAPI EAPI_WEAK void efl_ui_focus_composition_logical_mode_set(Eo *obj, Eina_Bool logical_mode);
#endif

#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
/**
 * @brief Set to true if all children should be registered as logicals
 *
 * @param[in] obj The object.
 *
 * @return @c true or @c false
 *
 * @ingroup Efl_Ui_Focus_Composition
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_composition_logical_mode_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#endif
