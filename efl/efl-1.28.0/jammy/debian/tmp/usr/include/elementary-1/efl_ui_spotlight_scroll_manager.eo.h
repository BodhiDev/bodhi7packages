#ifndef _EFL_UI_SPOTLIGHT_SCROLL_MANAGER_EO_H_
#define _EFL_UI_SPOTLIGHT_SCROLL_MANAGER_EO_H_

#ifndef _EFL_UI_SPOTLIGHT_SCROLL_MANAGER_EO_CLASS_TYPE
#define _EFL_UI_SPOTLIGHT_SCROLL_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Spotlight_Scroll_Manager;

#endif

#ifndef _EFL_UI_SPOTLIGHT_SCROLL_MANAGER_EO_TYPES
#define _EFL_UI_SPOTLIGHT_SCROLL_MANAGER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
#define EFL_UI_SPOTLIGHT_SCROLL_MANAGER_CLASS efl_ui_spotlight_scroll_manager_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_spotlight_scroll_manager_class_get(void) EINA_CONST;

/**
 * @brief User scrolling forbidden.
 *
 * This property blocks scrolling movement by user input.
 *
 * @param[in] obj The object.
 * @param[in] scroll_block @c true if user should not be able to scroll.
 *
 * @ingroup Efl_Ui_Spotlight_Scroll_Manager
 */
EAPI EAPI_WEAK void efl_ui_spotlight_manager_scroll_block_set(Eo *obj, Eina_Bool scroll_block);

/**
 * @brief User scrolling forbidden.
 *
 * This property blocks scrolling movement by user input.
 *
 * @param[in] obj The object.
 *
 * @return @c true if user should not be able to scroll.
 *
 * @ingroup Efl_Ui_Spotlight_Scroll_Manager
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_spotlight_manager_scroll_block_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
