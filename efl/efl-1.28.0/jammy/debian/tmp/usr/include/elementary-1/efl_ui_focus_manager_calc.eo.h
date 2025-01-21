#ifndef _EFL_UI_FOCUS_MANAGER_CALC_EO_H_
#define _EFL_UI_FOCUS_MANAGER_CALC_EO_H_

#ifndef _EFL_UI_FOCUS_MANAGER_CALC_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_MANAGER_CALC_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Manager_Calc;

#endif

#ifndef _EFL_UI_FOCUS_MANAGER_CALC_EO_TYPES
#define _EFL_UI_FOCUS_MANAGER_CALC_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Calculates the elements present in each @ref Efl_Ui_Focus_Direction.
 *
 * Each registered item will get a target item in each direction. You can get
 * the target items for the currently focused item by calling
 * @ref efl_ui_focus_manager_request_move.
 *
 * @ingroup Efl_Ui_Focus_Manager_Calc
 */
#define EFL_UI_FOCUS_MANAGER_CALC_CLASS efl_ui_focus_manager_calc_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_focus_manager_calc_class_get(void) EINA_CONST;

/**
 * @brief Registers a new item in the graph.
 *
 * @c parent can not be @c null, it will be used as the parent in the logical
 * tree. @c redirect will be set as redirect property on that manager, once
 * @c child gets focused.
 *
 * @param[in] obj The object.
 * @param[in] child The object to register.
 * @param[in] parent The parent to use in the logical tree.
 * @param[in] redirect The redirect manager to set once this child is focused.
 * Can be @c NULL for no redirect.
 *
 * @return @c true if successful, @c false otherwise.
 *
 * @ingroup Efl_Ui_Focus_Manager_Calc
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_manager_calc_register(Eo *obj, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent, Efl_Ui_Focus_Manager *redirect);

/**
 * @brief Registers a new logical item in the graph.
 *
 * The item can never get focus, it just helps to build the tree. Compare to
 * @ref efl_ui_focus_manager_calc_register.
 *
 * @param[in] obj The object.
 * @param[in] child The object to register.
 * @param[in] parent The parent to use in the logical tree.
 * @param[in] redirect The redirect manager to set once this child is focused.
 * Can be @c NULL for no redirect.
 *
 * @return @c true if successful, @c false otherwise.
 *
 * @ingroup Efl_Ui_Focus_Manager_Calc
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_manager_calc_register_logical(Eo *obj, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent, Efl_Ui_Focus_Manager *redirect);

/**
 * @brief Sets a new redirect object for the given child.
 *
 * Once @c child is focused the redirect manager will be set in the redirect
 * property. Set redirect to @c NULL if nothing should happen.
 *
 * @param[in] obj The object.
 * @param[in] child The child to update.
 * @param[in] redirect Once @c child is focused this element will be set as
 * redirect.
 *
 * @return @c true if successful, @c false otherwise.
 *
 * @ingroup Efl_Ui_Focus_Manager_Calc
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_manager_calc_update_redirect(Eo *obj, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Manager *redirect);

/**
 * @brief Sets a new logical parent for the given child.
 *
 * @param[in] obj The object.
 * @param[in] child The child to update.
 * @param[in] parent The parent which now will be the logical parent of child.
 *
 * @return @c true if successful, @c false otherwise.
 *
 * @ingroup Efl_Ui_Focus_Manager_Calc
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_focus_manager_calc_update_parent(Eo *obj, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent);

/**
 * @brief Unregister the given item from the focus graph.
 *
 * @param[in] obj The object.
 * @param[in] child The child to unregister.
 *
 * @ingroup Efl_Ui_Focus_Manager_Calc
 */
EAPI EAPI_WEAK void efl_ui_focus_manager_calc_unregister(Eo *obj, Efl_Ui_Focus_Object *child);
#endif /* EFL_BETA_API_SUPPORT */

#endif
