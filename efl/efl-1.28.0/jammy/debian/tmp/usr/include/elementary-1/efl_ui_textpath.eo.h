#ifndef _EFL_UI_TEXTPATH_EO_H_
#define _EFL_UI_TEXTPATH_EO_H_

#ifndef _EFL_UI_TEXTPATH_EO_CLASS_TYPE
#define _EFL_UI_TEXTPATH_EO_CLASS_TYPE

typedef Eo Efl_Ui_Textpath;

#endif

#ifndef _EFL_UI_TEXTPATH_EO_TYPES
#define _EFL_UI_TEXTPATH_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Textpath direction
 *
 * @ingroup Efl_Ui_Textpath_Direction
 */
typedef enum
{
  EFL_UI_TEXTPATH_DIRECTION_CW = 0, /**< Clockwise */
  EFL_UI_TEXTPATH_DIRECTION_CCW, /**< Counter-clockwise */
  EFL_UI_TEXTPATH_DIRECTION_CW_CENTER, /**< Clockwise, middle of text will be at
                                        * start angle
                                        *
                                        * @since 1.23 */
  EFL_UI_TEXTPATH_DIRECTION_CCW_CENTER /**< Counter-clockwise, middle of text
                                        * will be at start angle
                                        *
                                        * @since 1.23 */
} Efl_Ui_Textpath_Direction;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl Ui Textpath class
 *
 * @ingroup Efl_Ui_Textpath
 */
#define EFL_UI_TEXTPATH_CLASS efl_ui_textpath_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_textpath_class_get(void) EINA_CONST;

/**
 * @brief Set a circle with given radius and start angle. The center of the
 * circle will be decided by the object center position.
 *
 * @param[in] obj The object.
 * @param[in] radius Radius of the circle
 * @param[in] start_angle Start angle of the circle
 * @param[in] direction Textpath direction
 *
 * @ingroup Efl_Ui_Textpath
 */
EAPI EAPI_WEAK void efl_ui_textpath_circular_set(Eo *obj, double radius, double start_angle, Efl_Ui_Textpath_Direction direction);

/**
 * @brief The number of slices. The larger the number of slice_num is, The
 * better the text follows the path.
 *
 * @param[in] obj The object.
 * @param[in] slice_no Number of slices
 *
 * @ingroup Efl_Ui_Textpath
 */
EAPI EAPI_WEAK void efl_ui_textpath_slice_number_set(Eo *obj, int slice_no);

/**
 * @brief The number of slices. The larger the number of slice_num is, The
 * better the text follows the path.
 *
 * @param[in] obj The object.
 *
 * @return Number of slices
 *
 * @ingroup Efl_Ui_Textpath
 */
EAPI EAPI_WEAK int efl_ui_textpath_slice_number_get(const Eo *obj);

/**
 * @brief Control the ellipsis behavior of the textpath.
 *
 * @param[in] obj The object.
 * @param[in] ellipsis To ellipsis text or not
 *
 * @ingroup Efl_Ui_Textpath
 */
EAPI EAPI_WEAK void efl_ui_textpath_ellipsis_set(Eo *obj, Eina_Bool ellipsis);

/**
 * @brief Control the ellipsis behavior of the textpath.
 *
 * @param[in] obj The object.
 *
 * @return To ellipsis text or not
 *
 * @ingroup Efl_Ui_Textpath
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_textpath_ellipsis_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
