#ifndef _EFL_UI_LAYOUT_PART_BOX_EO_H_
#define _EFL_UI_LAYOUT_PART_BOX_EO_H_

#ifndef _EFL_UI_LAYOUT_PART_BOX_EO_CLASS_TYPE
#define _EFL_UI_LAYOUT_PART_BOX_EO_CLASS_TYPE

typedef Eo Efl_Ui_Layout_Part_Box;

#endif

#ifndef _EFL_UI_LAYOUT_PART_BOX_EO_TYPES
#define _EFL_UI_LAYOUT_PART_BOX_EO_TYPES


#endif
/**
 * @brief Represents a Box created as part of a layout.
 *
 * Cannot be deleted. This is only a representation of an internal object of an
 * EFL layout.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Layout_Part_Box
 */
#define EFL_UI_LAYOUT_PART_BOX_CLASS efl_ui_layout_part_box_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_layout_part_box_class_get(void) EINA_CONST;

#endif
