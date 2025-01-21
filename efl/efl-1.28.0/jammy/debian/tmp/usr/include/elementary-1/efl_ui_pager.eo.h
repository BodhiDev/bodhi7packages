#ifndef _EFL_UI_PAGER_EO_H_
#define _EFL_UI_PAGER_EO_H_

#ifndef _EFL_UI_PAGER_EO_CLASS_TYPE
#define _EFL_UI_PAGER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Pager;

#endif

#ifndef _EFL_UI_PAGER_EO_TYPES
#define _EFL_UI_PAGER_EO_TYPES


#endif
/**
 * @brief A spotlight with predefined @ref efl_ui_spotlight_manager_get
 *
 * The container will slide in the content sideways, the old content will slide
 * out.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Pager
 */
#define EFL_UI_PAGER_CLASS efl_ui_pager_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_pager_class_get(void) EINA_CONST;

#endif
