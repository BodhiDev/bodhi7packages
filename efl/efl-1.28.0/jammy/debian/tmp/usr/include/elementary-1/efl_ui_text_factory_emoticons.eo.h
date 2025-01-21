#ifndef _EFL_UI_TEXT_FACTORY_EMOTICONS_EO_H_
#define _EFL_UI_TEXT_FACTORY_EMOTICONS_EO_H_

#ifndef _EFL_UI_TEXT_FACTORY_EMOTICONS_EO_CLASS_TYPE
#define _EFL_UI_TEXT_FACTORY_EMOTICONS_EO_CLASS_TYPE

typedef Eo Efl_Ui_Text_Factory_Emoticons;

#endif

#ifndef _EFL_UI_TEXT_FACTORY_EMOTICONS_EO_TYPES
#define _EFL_UI_TEXT_FACTORY_EMOTICONS_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Factory that creates emoticons from the current theme given a key.
 *
 * @ingroup Efl_Ui_Text_Factory_Emoticons
 */
#define EFL_UI_TEXT_FACTORY_EMOTICONS_CLASS efl_ui_text_factory_emoticons_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_text_factory_emoticons_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
