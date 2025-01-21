#ifndef _EFL_CANVAS_IMAGE_EO_H_
#define _EFL_CANVAS_IMAGE_EO_H_

#ifndef _EFL_CANVAS_IMAGE_EO_CLASS_TYPE
#define _EFL_CANVAS_IMAGE_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Image;

#endif

#ifndef _EFL_CANVAS_IMAGE_EO_TYPES
#define _EFL_CANVAS_IMAGE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Low-level Image object.
 *
 * This replaces the legacy Evas Object Image, with only image-related
 * interfaces: file and data images only. This object does not implement any
 * special features such as proxy, snapshot or GL.
 *
 * @ingroup Efl_Canvas_Image
 */
#define EFL_CANVAS_IMAGE_CLASS efl_canvas_image_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_image_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
