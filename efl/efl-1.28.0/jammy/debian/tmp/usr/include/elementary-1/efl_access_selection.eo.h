#ifndef _EFL_ACCESS_SELECTION_EO_H_
#define _EFL_ACCESS_SELECTION_EO_H_

#ifndef _EFL_ACCESS_SELECTION_EO_CLASS_TYPE
#define _EFL_ACCESS_SELECTION_EO_CLASS_TYPE

typedef Eo Efl_Access_Selection;

#endif

#ifndef _EFL_ACCESS_SELECTION_EO_TYPES
#define _EFL_ACCESS_SELECTION_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary access selection interface
 *
 * @ingroup Efl_Access_Selection
 */
#define EFL_ACCESS_SELECTION_INTERFACE efl_access_selection_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_access_selection_interface_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
/**
 * @brief Gets the number of currently selected children
 *
 * @param[in] obj The object.
 *
 * @return Number of currently selected children
 *
 * @ingroup Efl_Access_Selection
 */
EAPI EAPI_WEAK int efl_access_selection_selected_children_count_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
/**
 * @brief Gets child for given child index
 *
 * @param[in] obj The object.
 * @param[in] selected_child_index Index of child
 *
 * @return Child object
 *
 * @ingroup Efl_Access_Selection
 */
EAPI EAPI_WEAK Efl_Object *efl_access_selection_selected_child_get(const Eo *obj, int selected_child_index);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
/**
 * @brief Adds selection for given child index
 *
 * @param[in] obj The object.
 * @param[in] child_index Index of child
 *
 * @return @c true if selection was added, @c false otherwise
 *
 * @ingroup Efl_Access_Selection
 */
EAPI EAPI_WEAK Eina_Bool efl_access_selection_child_select(Eo *obj, int child_index);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
/**
 * @brief Removes selection for given child index
 *
 * @param[in] obj The object.
 * @param[in] child_index Index of child
 *
 * @return @c true if selection was removed, @c false otherwise
 *
 * @ingroup Efl_Access_Selection
 */
EAPI EAPI_WEAK Eina_Bool efl_access_selection_selected_child_deselect(Eo *obj, int child_index);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
/**
 * @brief Determines if child specified by index is selected
 *
 * @param[in] obj The object.
 * @param[in] child_index Index of child
 *
 * @return @c true if child is selected, @c false otherwise
 *
 * @ingroup Efl_Access_Selection
 */
EAPI EAPI_WEAK Eina_Bool efl_access_selection_is_child_selected(Eo *obj, int child_index);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
/**
 * @brief Adds selection for all children
 *
 * @param[in] obj The object.
 *
 * @return @c true if selection was added to all children, @c false otherwise
 *
 * @ingroup Efl_Access_Selection
 */
EAPI EAPI_WEAK Eina_Bool efl_access_selection_all_children_select(Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
/**
 * @brief Clears the current selection
 *
 * @param[in] obj The object.
 *
 * @return @c true if selection was cleared, @c false otherwise
 *
 * @ingroup Efl_Access_Selection
 */
EAPI EAPI_WEAK Eina_Bool efl_access_selection_clear(Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
/**
 * @brief Removes selection for given child index
 *
 * @param[in] obj The object.
 * @param[in] child_index Index of child
 *
 * @return @c true if selection was removed, @c false otherwise
 *
 * @ingroup Efl_Access_Selection
 */
EAPI EAPI_WEAK Eina_Bool efl_access_selection_child_deselect(Eo *obj, int child_index);
#endif
#endif /* EFL_BETA_API_SUPPORT */

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_SELECTION_EVENT_ACCESS_SELECTION_CHANGED;

/** Called when selection has been changed.
 *
 * @ingroup Efl_Access_Selection
 */
#define EFL_ACCESS_SELECTION_EVENT_ACCESS_SELECTION_CHANGED (&(_EFL_ACCESS_SELECTION_EVENT_ACCESS_SELECTION_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
