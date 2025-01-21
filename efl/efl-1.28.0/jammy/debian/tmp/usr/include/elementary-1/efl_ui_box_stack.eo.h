#ifndef _EFL_UI_BOX_STACK_EO_H_
#define _EFL_UI_BOX_STACK_EO_H_

#ifndef _EFL_UI_BOX_STACK_EO_CLASS_TYPE
#define _EFL_UI_BOX_STACK_EO_CLASS_TYPE

typedef Eo Efl_Ui_Box_Stack;

#endif

#ifndef _EFL_UI_BOX_STACK_EO_TYPES
#define _EFL_UI_BOX_STACK_EO_TYPES


#endif
/**
 * @brief A custom layout engine for @ref Efl_Ui_Box that stacks items.
 *
 * Items will be stacked on top of each other (in the Z direction) meaning
 * that, in the absence of transparency, only the last item added through the
 * @ref Efl_Pack interface will actually be visible.
 *
 * This can be useful to display transparent objects on top of each other, for
 * example.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Box_Stack
 */
#define EFL_UI_BOX_STACK_CLASS efl_ui_box_stack_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_box_stack_class_get(void) EINA_CONST;

#endif
