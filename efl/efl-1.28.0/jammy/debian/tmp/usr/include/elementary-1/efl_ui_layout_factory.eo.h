#ifndef _EFL_UI_LAYOUT_FACTORY_EO_H_
#define _EFL_UI_LAYOUT_FACTORY_EO_H_

#ifndef _EFL_UI_LAYOUT_FACTORY_EO_CLASS_TYPE
#define _EFL_UI_LAYOUT_FACTORY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Layout_Factory;

#endif

#ifndef _EFL_UI_LAYOUT_FACTORY_EO_TYPES
#define _EFL_UI_LAYOUT_FACTORY_EO_TYPES


#endif
/**
 * @brief @ref Efl_Ui_Factory that creates @ref Efl_Ui_Layout objects with
 * caching.
 *
 * This factory is meant to be used by @ref Efl_Ui_View objects that use items
 * with Layout and need the items to be created, updated, their model set and
 * connected automatically before the @ref Efl_Ui_View receives the item
 * instance.
 *
 * This class inherits from @ref Efl_Ui_Caching_Factory and inherits all its
 * properties.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Layout_Factory
 */
#define EFL_UI_LAYOUT_FACTORY_CLASS efl_ui_layout_factory_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_layout_factory_class_get(void) EINA_CONST;

/**
 * @brief Set the theme that will be applied to the created @ref Efl_Ui_Layout
 * objects. See @ref efl_ui_layout_theme_get for more details.
 *
 * @param[in] obj The object.
 * @param[in] klass The class of the group.
 * @param[in] group The group.
 * @param[in] style The style to use.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Layout_Factory
 */
EAPI EAPI_WEAK void efl_ui_layout_factory_theme_config(Eo *obj, const char *klass, const char *group, const char *style);

#endif
