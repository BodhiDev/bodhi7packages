#ifndef _EFL_UI_TEXT_FACTORY_FALLBACK_EO_H_
#define _EFL_UI_TEXT_FACTORY_FALLBACK_EO_H_

#ifndef _EFL_UI_TEXT_FACTORY_FALLBACK_EO_CLASS_TYPE
#define _EFL_UI_TEXT_FACTORY_FALLBACK_EO_CLASS_TYPE

typedef Eo Efl_Ui_Text_Factory_Fallback;

#endif

#ifndef _EFL_UI_TEXT_FACTORY_FALLBACK_EO_TYPES
#define _EFL_UI_TEXT_FACTORY_FALLBACK_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Internal factory for fallback cases.
 *
 * This wraps some internal functionality: - Contains 2 factories: image and
 * emoticon - Strips off "file://" prefix for image items, to be used with the
 * image factory.
 *
 * @ingroup Efl_Ui_Text_Factory_Fallback
 */
#define EFL_UI_TEXT_FACTORY_FALLBACK_CLASS efl_ui_text_factory_fallback_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_text_factory_fallback_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
