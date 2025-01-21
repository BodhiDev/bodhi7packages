#ifndef _EFL_UI_IMAGE_FACTORY_EO_H_
#define _EFL_UI_IMAGE_FACTORY_EO_H_

#ifndef _EFL_UI_IMAGE_FACTORY_EO_CLASS_TYPE
#define _EFL_UI_IMAGE_FACTORY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Image_Factory;

#endif

#ifndef _EFL_UI_IMAGE_FACTORY_EO_TYPES
#define _EFL_UI_IMAGE_FACTORY_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl UI image factory class
 *
 * @ingroup Efl_Ui_Image_Factory
 */
#define EFL_UI_IMAGE_FACTORY_CLASS efl_ui_image_factory_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_image_factory_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
