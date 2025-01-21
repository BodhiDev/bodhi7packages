#ifndef _EFL_UI_STACK_EO_H_
#define _EFL_UI_STACK_EO_H_

#ifndef _EFL_UI_STACK_EO_CLASS_TYPE
#define _EFL_UI_STACK_EO_CLASS_TYPE

typedef Eo Efl_Ui_Stack;

#endif

#ifndef _EFL_UI_STACK_EO_TYPES
#define _EFL_UI_STACK_EO_TYPES


#endif
/**
 * @brief A spotlight with predefined @ref efl_ui_spotlight_manager_get
 *
 * The container will alpha-blend the new content over the old content.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Stack
 */
#define EFL_UI_STACK_CLASS efl_ui_stack_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_stack_class_get(void) EINA_CONST;

#endif
