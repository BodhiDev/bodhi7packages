#ifndef _EFL_UI_RADIO_BOX_EO_H_
#define _EFL_UI_RADIO_BOX_EO_H_

#ifndef _EFL_UI_RADIO_BOX_EO_CLASS_TYPE
#define _EFL_UI_RADIO_BOX_EO_CLASS_TYPE

typedef Eo Efl_Ui_Radio_Box;

#endif

#ifndef _EFL_UI_RADIO_BOX_EO_TYPES
#define _EFL_UI_RADIO_BOX_EO_TYPES


#endif
/**
 * @brief A standard @ref Efl_Ui_Box container which automatically handles
 * grouping of any @ref Efl_Ui_Radio widget added to it in addition to regular
 * widgets.
 *
 * All @ref Efl_Ui_Radio widgets are added to the same internal group which you
 * only indirectly access through this object.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Radio_Box
 */
#define EFL_UI_RADIO_BOX_CLASS efl_ui_radio_box_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_radio_box_class_get(void) EINA_CONST;

#endif
