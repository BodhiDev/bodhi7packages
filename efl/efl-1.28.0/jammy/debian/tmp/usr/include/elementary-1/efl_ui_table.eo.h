#ifndef _EFL_UI_TABLE_EO_H_
#define _EFL_UI_TABLE_EO_H_

#ifndef _EFL_UI_TABLE_EO_CLASS_TYPE
#define _EFL_UI_TABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Table;

#endif

#ifndef _EFL_UI_TABLE_EO_TYPES
#define _EFL_UI_TABLE_EO_TYPES


#endif
/**
 * @brief Widget container that arranges its elements in a grid.
 *
 * The amount of rows and columns can be controlled with
 * @ref efl_pack_table_rows_get and @ref efl_pack_table_columns_get, and
 * elements can be manually positioned with @ref efl_pack_table. Additionally,
 * a fill direction can be defined with @ref efl_ui_layout_orientation_get and
 * elements added with @ref efl_pack. Elements are then added following this
 * direction (horizontal or vertical) and when the amount of columns or rows
 * has been reached, a step is taken in the orthogonal direction. In this
 * second case there is no need to define both the amount of columns and rows,
 * as the table will expand as needed. The default fill direction is
 * @ref EFL_UI_LAYOUT_ORIENTATION_HORIZONTAL.
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Table
 */
#define EFL_UI_TABLE_CLASS efl_ui_table_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_table_class_get(void) EINA_CONST;

/**
 * @brief Control homogeneous mode.
 *
 * This will enable the homogeneous mode where cells are of the same weight and
 * of the same min size which is determined by maximum min size of cells.
 *
 * @param[in] obj The object.
 * @param[in] homogeneoush @c true if the box is homogeneous horizontally,
 * @c false otherwise
 * @param[in] homogeneousv @c true if the box is homogeneous vertically,
 * @c false otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Table
 */
EAPI EAPI_WEAK void efl_ui_table_homogeneous_set(Eo *obj, Eina_Bool homogeneoush, Eina_Bool homogeneousv);

/**
 * @brief Control homogeneous mode.
 *
 * This will enable the homogeneous mode where cells are of the same weight and
 * of the same min size which is determined by maximum min size of cells.
 *
 * @param[in] obj The object.
 * @param[out] homogeneoush @c true if the box is homogeneous horizontally,
 * @c false otherwise
 * @param[out] homogeneousv @c true if the box is homogeneous vertically,
 * @c false otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Ui_Table
 */
EAPI EAPI_WEAK void efl_ui_table_homogeneous_get(const Eo *obj, Eina_Bool *homogeneoush, Eina_Bool *homogeneousv);

#endif
