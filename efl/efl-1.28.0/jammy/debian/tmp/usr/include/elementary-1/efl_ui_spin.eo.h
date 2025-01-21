#ifndef _EFL_UI_SPIN_EO_H_
#define _EFL_UI_SPIN_EO_H_

#ifndef _EFL_UI_SPIN_EO_CLASS_TYPE
#define _EFL_UI_SPIN_EO_CLASS_TYPE

typedef Eo Efl_Ui_Spin;

#endif

#ifndef _EFL_UI_SPIN_EO_TYPES
#define _EFL_UI_SPIN_EO_TYPES


#endif
/**
 * @brief A Spin.
 *
 * This is a widget which allows the user to increase or decrease a numeric
 * value using arrow buttons. It's a basic type of widget for choosing and
 * displaying values.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Spin
 */
#define EFL_UI_SPIN_CLASS efl_ui_spin_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_spin_class_get(void) EINA_CONST;

#endif
