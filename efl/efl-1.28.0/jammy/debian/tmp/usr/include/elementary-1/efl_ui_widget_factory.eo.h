#ifndef _EFL_UI_WIDGET_FACTORY_EO_H_
#define _EFL_UI_WIDGET_FACTORY_EO_H_

#ifndef _EFL_UI_WIDGET_FACTORY_EO_CLASS_TYPE
#define _EFL_UI_WIDGET_FACTORY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Widget_Factory;

#endif

#ifndef _EFL_UI_WIDGET_FACTORY_EO_TYPES
#define _EFL_UI_WIDGET_FACTORY_EO_TYPES


#endif
/**
 * @brief Efl Ui Factory that provides @ref Efl_Ui_Widget.
 *
 * This factory is designed to build @ref Efl_Ui_Widget and optionally set
 * their @ref efl_ui_widget_style_get if it was connected with
 * @ref efl_ui_property_bind "$style".
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Widget_Factory
 */
#define EFL_UI_WIDGET_FACTORY_CLASS efl_ui_widget_factory_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_widget_factory_class_get(void) EINA_CONST;

/**
 * @brief Define the class of the item returned by this factory.
 *
 * @param[in] obj The object.
 * @param[in] klass The class identifier to create item from.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Widget_Factory
 */
EAPI EAPI_WEAK void efl_ui_widget_factory_item_class_set(Eo *obj, const Efl_Class *klass);

/**
 * @brief Define the class of the item returned by this factory.
 *
 * @param[in] obj The object.
 *
 * @return The class identifier to create item from.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Widget_Factory
 */
EAPI EAPI_WEAK const Efl_Class *efl_ui_widget_factory_item_class_get(const Eo *obj);

#endif
