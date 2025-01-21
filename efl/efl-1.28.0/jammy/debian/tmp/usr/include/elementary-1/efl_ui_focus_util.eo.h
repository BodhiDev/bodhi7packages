#ifndef _EFL_UI_FOCUS_UTIL_EO_H_
#define _EFL_UI_FOCUS_UTIL_EO_H_

#ifndef _EFL_UI_FOCUS_UTIL_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_UTIL_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Util;

#endif

#ifndef _EFL_UI_FOCUS_UTIL_EO_TYPES
#define _EFL_UI_FOCUS_UTIL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief EFL UI Focus Utility class.
 *
 * This class contains a series of static methods that simplify common focus
 * management operations. There's no need to instantiate this class.
 *
 * @ingroup Efl_Ui_Focus_Util
 */
#define EFL_UI_FOCUS_UTIL_CLASS efl_ui_focus_util_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_focus_util_class_get(void) EINA_CONST;

/**
 * @brief Sets the focus to the given object.
 *
 * @param[in] focus_elem Object to receive focus.
 *
 * @ingroup Efl_Ui_Focus_Util
 */
EAPI EAPI_WEAK void efl_ui_focus_util_focus(Efl_Ui_Focus_Object *focus_elem);

/**
 * @brief Gets the highest manager in the redirect chain.
 *
 * @param[in] manager Manager to start looking from.
 *
 * @ingroup Efl_Ui_Focus_Util
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Manager *efl_ui_focus_util_active_manager(Efl_Ui_Focus_Manager *manager);

/**
 * @brief Returns the complementary (opposite) focus direction.
 *
 * The defined opposites are Left-Right, Up-Down and Next-Previous.
 *
 * @param[in] dir Direction to complement.
 *
 * @return The opposite direction.
 *
 * @ingroup Efl_Ui_Focus_Util
 */
EAPI EAPI_WEAK Efl_Ui_Focus_Direction efl_ui_focus_util_direction_complement(Efl_Ui_Focus_Direction dir);
#endif /* EFL_BETA_API_SUPPORT */

#endif
