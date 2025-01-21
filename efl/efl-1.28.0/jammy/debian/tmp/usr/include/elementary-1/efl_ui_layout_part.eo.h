#ifndef _EFL_UI_LAYOUT_PART_EO_H_
#define _EFL_UI_LAYOUT_PART_EO_H_

#ifndef _EFL_UI_LAYOUT_PART_EO_CLASS_TYPE
#define _EFL_UI_LAYOUT_PART_EO_CLASS_TYPE

typedef Eo Efl_Ui_Layout_Part;

#endif

#ifndef _EFL_UI_LAYOUT_PART_EO_TYPES
#define _EFL_UI_LAYOUT_PART_EO_TYPES


#endif
/** Elementary layout internal part class
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Layout_Part
 */
#define EFL_UI_LAYOUT_PART_CLASS efl_ui_layout_part_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_layout_part_class_get(void) EINA_CONST;

#endif
