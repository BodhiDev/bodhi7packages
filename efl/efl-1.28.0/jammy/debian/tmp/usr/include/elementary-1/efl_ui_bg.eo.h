#ifndef _EFL_UI_BG_EO_H_
#define _EFL_UI_BG_EO_H_

#ifndef _EFL_UI_BG_EO_CLASS_TYPE
#define _EFL_UI_BG_EO_CLASS_TYPE

typedef Eo Efl_Ui_Bg;

#endif

#ifndef _EFL_UI_BG_EO_TYPES
#define _EFL_UI_BG_EO_TYPES


#endif
/** The bg (background) widget is used for setting (solid) background
 * decorations for a window (unless it has transparency enabled) or for any
 * container object. It works just like an image, but has some properties
 * useful for backgrounds, such as setting it to tiled, centered, scaled or
 * stretched.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Bg
 */
#define EFL_UI_BG_CLASS efl_ui_bg_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_bg_class_get(void) EINA_CONST;

#endif
