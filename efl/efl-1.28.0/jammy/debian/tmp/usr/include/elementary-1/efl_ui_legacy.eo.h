#ifndef _EFL_UI_LEGACY_EO_H_
#define _EFL_UI_LEGACY_EO_H_

#ifndef _EFL_UI_LEGACY_EO_CLASS_TYPE
#define _EFL_UI_LEGACY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Legacy;

#endif

#ifndef _EFL_UI_LEGACY_EO_TYPES
#define _EFL_UI_LEGACY_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The bg (background) widget is used for setting (solid) background
 * decorations
 *
 * in a window (unless it has transparency enabled) or on any container object.
 * It works just like an image but has some properties useful for backgrounds,
 * such as setting it to tiled, centered, scaled or stretched.
 *
 * @ingroup Efl_Ui_Legacy
 */
#define EFL_UI_LEGACY_INTERFACE efl_ui_legacy_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_legacy_interface_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
