#ifndef _EFL_CANVAS_IMAGE_INTERNAL_EO_H_
#define _EFL_CANVAS_IMAGE_INTERNAL_EO_H_

#ifndef _EFL_CANVAS_IMAGE_INTERNAL_EO_CLASS_TYPE
#define _EFL_CANVAS_IMAGE_INTERNAL_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Image_Internal;

#endif

#ifndef _EFL_CANVAS_IMAGE_INTERNAL_EO_TYPES
#define _EFL_CANVAS_IMAGE_INTERNAL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl canvas internal image class
 *
 * @ingroup Efl_Canvas_Image_Internal
 */
#define EFL_CANVAS_IMAGE_INTERNAL_CLASS efl_canvas_image_internal_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_image_internal_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
