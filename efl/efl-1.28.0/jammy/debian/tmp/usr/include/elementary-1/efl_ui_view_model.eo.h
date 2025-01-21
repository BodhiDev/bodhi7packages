#ifndef _EFL_UI_VIEW_MODEL_EO_H_
#define _EFL_UI_VIEW_MODEL_EO_H_

#ifndef _EFL_UI_VIEW_MODEL_EO_CLASS_TYPE
#define _EFL_UI_VIEW_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Ui_View_Model;

#endif

#ifndef _EFL_UI_VIEW_MODEL_EO_TYPES
#define _EFL_UI_VIEW_MODEL_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Function called when a property is get.
 *
 * @ingroup EflUiViewModelPropertyGet
 */
typedef Eina_Value * (*EflUiViewModelPropertyGet)(void *data, const Efl_Ui_View_Model *view_model, Eina_Stringshare *property);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Function called when a property is set.
 *
 * @ingroup EflUiViewModelPropertySet
 */
typedef Eina_Future * (*EflUiViewModelPropertySet)(void *data, Efl_Ui_View_Model *view_model, Eina_Stringshare *property, Eina_Value *value EFL_TRANSFER_OWNERSHIP);
#endif /* EFL_BETA_API_SUPPORT */


#endif
/**
 * @brief Efl model providing helpers for custom properties used when linking a
 * model to a view and you need to generate/adapt values for display.
 *
 * There is two ways to use this class, you can either inherit from it and have
 * a custom constructor for example. Or you can just instantiate it and
 * manually define your property on it via callbacks.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View_Model
 */
#define EFL_UI_VIEW_MODEL_CLASS efl_ui_view_model_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_view_model_class_get(void) EINA_CONST;

/**
 * @brief Adds a synthetic string property, generated from a @c definition
 * string and other properties in the model.
 *
 * The @c definition string, similar to how @c printf works, contains ${}
 * placeholders that are replaced by the actual value of the property inside
 * the placeholder tags when the synthetic property is retrieved. For example,
 * a numeric property @c length might be strange to use as a label, since it
 * will only display a number. However, a synthetic string can be generated
 * with the definition "Length ${length}." which renders more nicely and does
 * not require any more code by the user of the property.
 *
 * @c not_ready and @c on_error strings can be given to be used when the data
 * is not ready or there is some error, respectively. These strings do accept
 * placeholder tags.
 *
 * See @ref efl_ui_view_model_property_string_del
 *
 * @param[in] obj The object.
 * @param[in] name The name for the new synthetic property.
 * @param[in] definition The definition string for the new synthetic property.
 * @param[in] not_ready The text to be used if any of the properties used in
 * @c definition is not ready yet. If set to @c null, no check against EAGAIN
 * will be done.
 * @param[in] on_error The text to be used if any of the properties used in
 * @c definition is in error. It takes precedence over @c not_ready. If set to
 * @c null, no error checks are performed.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View_Model
 */
EAPI EAPI_WEAK Eina_Error efl_ui_view_model_property_string_add(Eo *obj, const char *name, const char *definition, const char *not_ready, const char *on_error);

/**
 * @brief Delete a synthetic property previously defined by
 * @ref efl_ui_view_model_property_string_add.
 *
 * See @ref efl_ui_view_model_property_string_add
 *
 * @param[in] obj The object.
 * @param[in] name The name of the synthetic property to delete.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View_Model
 */
EAPI EAPI_WEAK Eina_Error efl_ui_view_model_property_string_del(Eo *obj, const char *name);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Add callbacks that will be triggered when someone ask for the
 * specified property name when getting or setting a property.
 *
 * A get or set should at least be provided for this call to succeed.
 *
 * See @ref efl_ui_view_model_property_logic_del
 *
 * @param[in] obj The object.
 * @param[in] property The property to bind on to.
 * @param[in] get Define the get callback called when the
 * @ref efl_model_property_get is called with the above property name.
 * @param[in] set Define the set callback called when the
 * @ref efl_model_property_set is called with the above property name.
 * @param[in] bound Iterator of property name to bind with this defined
 * property see @ref efl_ui_view_model_property_bind.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View_Model
 */
EAPI EAPI_WEAK Eina_Error efl_ui_view_model_property_logic_add(Eo *obj, const char *property, void *get_data, EflUiViewModelPropertyGet get, Eina_Free_Cb get_free_cb, void *set_data, EflUiViewModelPropertySet set, Eina_Free_Cb set_free_cb, Eina_Iterator *bound EFL_TRANSFER_OWNERSHIP);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Delete previously added callbacks that were triggered when someone
 * asked for the specified property name when getting or setting a property.
 *
 * A get or set should at least be provided for this call to succeed.
 *
 * See @ref efl_ui_view_model_property_logic_add
 *
 * @param[in] obj The object.
 * @param[in] property The property to bind on to.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View_Model
 */
EAPI EAPI_WEAK Eina_Error efl_ui_view_model_property_logic_del(Eo *obj, const char *property);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Automatically update the field for the event
 * @[Efl.Model.properties,changed] to include property that are impacted with
 * change in a property from the composited model.
 *
 * The source doesn't have to be provided at this point by the composited
 * model.
 *
 * @param[in] obj The object.
 * @param[in] source Property name in the composited model.
 * @param[in] destination Property name in the @ref Efl_Ui_View_Model
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View_Model
 */
EAPI EAPI_WEAK void efl_ui_view_model_property_bind(Eo *obj, const char *source, const char *destination);

/**
 * @brief Stop automatically updating the field for the event
 * @[Efl.Model.properties,changed] to include property that are impacted with
 * change in a property from the composited model.
 *
 * @param[in] obj The object.
 * @param[in] source Property name in the composited model.
 * @param[in] destination Property name in the @ref Efl_Ui_View_Model
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View_Model
 */
EAPI EAPI_WEAK void efl_ui_view_model_property_unbind(Eo *obj, const char *source, const char *destination);

/**
 * @brief Define if we will intercept all children object reference and bind
 * them through the ViewModel with the same property logic as this one. Be
 * careful of recursivity.
 *
 * This can only be applied at construction time.
 *
 * @param[in] obj The object.
 * @param[in] enable Do you automatically bind children. Default to true.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View_Model
 */
EAPI EAPI_WEAK void efl_ui_view_model_children_bind_set(Eo *obj, Eina_Bool enable);

/**
 * @brief Define if we will intercept all children object reference and bind
 * them through the ViewModel with the same property logic as this one. Be
 * careful of recursivity.
 *
 * This can only be applied at construction time.
 *
 * @param[in] obj The object.
 *
 * @return Do you automatically bind children. Default to true.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_View_Model
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_view_model_children_bind_get(const Eo *obj);

#endif
