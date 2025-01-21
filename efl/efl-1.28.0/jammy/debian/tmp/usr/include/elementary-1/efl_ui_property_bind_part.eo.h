#ifndef _EFL_UI_PROPERTY_BIND_PART_EO_H_
#define _EFL_UI_PROPERTY_BIND_PART_EO_H_

#ifndef _EFL_UI_PROPERTY_BIND_PART_EO_CLASS_TYPE
#define _EFL_UI_PROPERTY_BIND_PART_EO_CLASS_TYPE

typedef Eo Efl_Ui_Property_Bind_Part;

#endif

#ifndef _EFL_UI_PROPERTY_BIND_PART_EO_TYPES
#define _EFL_UI_PROPERTY_BIND_PART_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Every part returned by an @ref Efl_Ui_Widget_Factory will enable the
 * @ref Efl_Ui_Factory to remember what part to call @ref efl_ui_property_bind
 * on when an item is created enabling to propagate binding model property to
 * item object property.
 *
 * @ingroup Efl_Ui_Property_Bind_Part
 */
#define EFL_UI_PROPERTY_BIND_PART_CLASS efl_ui_property_bind_part_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_property_bind_part_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
