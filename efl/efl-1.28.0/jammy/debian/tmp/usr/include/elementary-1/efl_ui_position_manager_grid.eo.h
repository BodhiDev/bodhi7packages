#ifndef _EFL_UI_POSITION_MANAGER_GRID_EO_H_
#define _EFL_UI_POSITION_MANAGER_GRID_EO_H_

#ifndef _EFL_UI_POSITION_MANAGER_GRID_EO_CLASS_TYPE
#define _EFL_UI_POSITION_MANAGER_GRID_EO_CLASS_TYPE

typedef Eo Efl_Ui_Position_Manager_Grid;

#endif

#ifndef _EFL_UI_POSITION_MANAGER_GRID_EO_TYPES
#define _EFL_UI_POSITION_MANAGER_GRID_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Implementation of @ref Efl_Ui_Position_Manager_Entity for
 * two-dimensional grids.
 *
 * Every item in the grid has the same size, which is the biggest minimum size
 * of all items.
 *
 * @ingroup Efl_Ui_Position_Manager_Grid
 */
#define EFL_UI_POSITION_MANAGER_GRID_CLASS efl_ui_position_manager_grid_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_position_manager_grid_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif
