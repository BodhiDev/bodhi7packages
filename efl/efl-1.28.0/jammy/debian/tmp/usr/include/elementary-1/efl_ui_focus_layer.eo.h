#ifndef _EFL_UI_FOCUS_LAYER_EO_H_
#define _EFL_UI_FOCUS_LAYER_EO_H_

#ifndef _EFL_UI_FOCUS_LAYER_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_LAYER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Layer;

#endif

#ifndef _EFL_UI_FOCUS_LAYER_EO_TYPES
#define _EFL_UI_FOCUS_LAYER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This defines the widget as a focus layer.
 *
 * A focus layer is the uppermost widget which receives input and handles all
 * focus related events for as long as it exists and is visible. It's not
 * possible to escape this layer with focus movements.
 *
 * Once the object is hidden or destroyed the focus will go back to the main
 * window, where it was before.
 *
 * @ingroup Efl_Ui_Focus_Layer
 */
#define EFL_UI_FOCUS_LAYER_MIXIN efl_ui_focus_layer_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_focus_layer_mixin_get(void) EINA_CONST;

#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
/**
 * @brief Whether the focus layer is enabled. This can be handled automatically
 * through @ref efl_gfx_entity_visible_get and
 * @ref efl_ui_focus_layer_behaviour_get.
 *
 * @param[in] obj The object.
 * @param[in] v @c true to set enable.
 *
 * @ingroup Efl_Ui_Focus_Layer
 */
EAPI EAPI_WEAK void efl_ui_focus_layer_enable_set(Eo *obj, Eina_Bool v);
#endif

#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
/**
 * @brief Whether the focus layer is enabled. This can be handled automatically
 * through @ref efl_gfx_entity_visible_get and
 * @ref efl_ui_focus_layer_behaviour_get.
 *
 * @param[in] obj The object.
 *
 * @return @c true to set enable.
 *
 * @ingroup Efl_Ui_Focus_Layer
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_layer_enable_get(const Eo *obj);
#endif

#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
/**
 * @brief Sets the behaviour of the focus layer.
 *
 * @param[in] obj The object.
 * @param[in] enable_on_visible @c true means layer will enable itself once the
 * widget becomes visible
 * @param[in] cycle If @c true the focus will cycle (from last object to first,
 * and vice versa) in the layer.
 *
 * @ingroup Efl_Ui_Focus_Layer
 */
EAPI EAPI_WEAK void efl_ui_focus_layer_behaviour_set(Eo *obj, Eina_Bool enable_on_visible, Eina_Bool cycle);
#endif

#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
/**
 * @brief Sets the behaviour of the focus layer.
 *
 * @param[in] obj The object.
 * @param[out] enable_on_visible @c true means layer will enable itself once
 * the widget becomes visible
 * @param[out] cycle If @c true the focus will cycle (from last object to
 * first, and vice versa) in the layer.
 *
 * @ingroup Efl_Ui_Focus_Layer
 */
EAPI EAPI_WEAK void efl_ui_focus_layer_behaviour_get(const Eo *obj, Eina_Bool *enable_on_visible, Eina_Bool *cycle);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#endif
