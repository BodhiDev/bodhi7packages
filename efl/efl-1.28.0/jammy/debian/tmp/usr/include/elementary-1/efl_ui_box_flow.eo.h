#ifndef _EFL_UI_BOX_FLOW_EO_H_
#define _EFL_UI_BOX_FLOW_EO_H_

#ifndef _EFL_UI_BOX_FLOW_EO_CLASS_TYPE
#define _EFL_UI_BOX_FLOW_EO_CLASS_TYPE

typedef Eo Efl_Ui_Box_Flow;

#endif

#ifndef _EFL_UI_BOX_FLOW_EO_TYPES
#define _EFL_UI_BOX_FLOW_EO_TYPES


#endif
/** A Flow Box is a customized type of @ref Efl_Ui_Box. It will fill along the
 * axis selected with @ref efl_ui_layout_orientation_get (which defaults to
 * Horizontal), until items will no longer fit in the available space, at which
 * point it will begin filling items in a new row/column after the current one.
 * This is useful if an application wants to e.g., present a group of items and
 * wrap them onto subsequent lines when the number of items grows too large to
 * fit on the screen. Adding or removing items in the middle re-arrange the
 * rest of the items as expected.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Box_Flow
 */
#define EFL_UI_BOX_FLOW_CLASS efl_ui_box_flow_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_box_flow_class_get(void) EINA_CONST;

#endif
