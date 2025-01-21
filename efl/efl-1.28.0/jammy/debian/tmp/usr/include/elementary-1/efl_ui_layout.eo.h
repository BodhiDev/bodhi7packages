#ifndef _EFL_UI_LAYOUT_EO_H_
#define _EFL_UI_LAYOUT_EO_H_

#ifndef _EFL_UI_LAYOUT_EO_CLASS_TYPE
#define _EFL_UI_LAYOUT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Layout;

#endif

#ifndef _EFL_UI_LAYOUT_EO_TYPES
#define _EFL_UI_LAYOUT_EO_TYPES


#endif
/**
 * @brief EFL layout widget class.
 *
 * When loading layouts from a file, use the @ref efl_file_key_get property to
 * specify the group that the data belongs to, in case it's an EET file
 * (including Edje files).
 *
 * By default, layouts do not apply the finger_size global configuration value
 * when calculating their geometries.
 *
 * @since 1.22
 *
 * @ingroup Efl_Ui_Layout
 */
#define EFL_UI_LAYOUT_CLASS efl_ui_layout_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_layout_class_get(void) EINA_CONST;

#endif
