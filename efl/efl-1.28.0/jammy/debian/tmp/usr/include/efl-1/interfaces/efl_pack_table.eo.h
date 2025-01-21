#ifndef _EFL_PACK_TABLE_EO_H_
#define _EFL_PACK_TABLE_EO_H_

#ifndef _EFL_PACK_TABLE_EO_CLASS_TYPE
#define _EFL_PACK_TABLE_EO_CLASS_TYPE

typedef Eo Efl_Pack_Table;

#endif

#ifndef _EFL_PACK_TABLE_EO_TYPES
#define _EFL_PACK_TABLE_EO_TYPES


#endif
/**
 * @brief Interface for 2D containers which arrange their elements on a table
 * with rows and columns.
 *
 * Elements can be positioned on a specific row and column, or they can be
 * simply added to the table using @ref efl_pack and the container will chose
 * where to put them.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
#define EFL_PACK_TABLE_INTERFACE efl_pack_table_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_pack_table_interface_get(void) EINA_CONST;

/**
 * @brief Pack object at a given location in the table.
 *
 * When this container is deleted, it will request deletion of the given
 * @c subobj. Use @ref efl_pack_unpack to remove @c subobj from this container
 * without deleting it.
 *
 * @param[in] obj The object.
 * @param[in] subobj A child object to pack in this table.
 * @param[in] col Column number
 * @param[in] row Row number
 * @param[in] colspan 0 means 1, -1 means @ref efl_pack_table_columns_get
 * @param[in] rowspan 0 means 1, -1 means @ref efl_pack_table_rows_get
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_table(Eo *obj, Efl_Gfx_Entity *subobj, int col, int row, int colspan, int rowspan);

/**
 * @brief Returns all objects at a given position in this table.
 *
 * @param[in] obj The object.
 * @param[in] col Column number
 * @param[in] row Row number
 * @param[in] below If @c true get objects spanning over this cell.
 *
 * @return Iterator to table contents
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK Eina_Iterator *efl_pack_table_contents_get(Eo *obj, int col, int row, Eina_Bool below) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Returns a child at a given position, see
 * @ref efl_pack_table_contents_get.
 *
 * @param[in] obj The object.
 * @param[in] col Column number
 * @param[in] row Row number
 *
 * @return Child object
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK Efl_Gfx_Entity *efl_pack_table_content_get(Eo *obj, int col, int row);

/**
 * @brief column of the @c subobj in this container.
 *
 * @param[in] obj The object.
 * @param[in] subobj Child object
 * @param[in] col Column number
 * @param[in] colspan Column span
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK void efl_pack_table_cell_column_set(Eo *obj, Efl_Gfx_Entity *subobj, int col, int colspan);

/**
 * @brief column of the @c subobj in this container.
 *
 * @param[in] obj The object.
 * @param[in] subobj Child object
 * @param[out] col Column number
 * @param[out] colspan Column span
 *
 * @return Returns false if item is not a child
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_table_cell_column_get(const Eo *obj, Efl_Gfx_Entity *subobj, int *col, int *colspan);

/**
 * @brief row of the @c subobj in this container.
 *
 * @param[in] obj The object.
 * @param[in] subobj Child object
 * @param[in] row Row number
 * @param[in] rowspan Row span
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK void efl_pack_table_cell_row_set(Eo *obj, Efl_Gfx_Entity *subobj, int row, int rowspan);

/**
 * @brief row of the @c subobj in this container.
 *
 * @param[in] obj The object.
 * @param[in] subobj Child object
 * @param[out] row Row number
 * @param[out] rowspan Row span
 *
 * @return Returns false if item is not a child
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK Eina_Bool efl_pack_table_cell_row_get(const Eo *obj, Efl_Gfx_Entity *subobj, int *row, int *rowspan);

/**
 * @brief Combines @ref efl_pack_table_columns_get and
 * @ref efl_pack_table_rows_get
 *
 * @param[in] obj The object.
 * @param[in] cols Number of columns
 * @param[in] rows Number of rows
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK void efl_pack_table_size_set(Eo *obj, int cols, int rows);

/**
 * @brief Combines @ref efl_pack_table_columns_get and
 * @ref efl_pack_table_rows_get
 *
 * @param[in] obj The object.
 * @param[out] cols Number of columns
 * @param[out] rows Number of rows
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK void efl_pack_table_size_get(const Eo *obj, int *cols, int *rows);

/**
 * @brief Specifies the amount of columns the table will have when the fill
 * direction is horizontal. If it is vertical, the amount of columns depends on
 * the amount of cells added and @ref efl_pack_table_rows_get.
 *
 * @param[in] obj The object.
 * @param[in] cols Amount of columns.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK void efl_pack_table_columns_set(Eo *obj, int cols);

/**
 * @brief Specifies the amount of columns the table will have when the fill
 * direction is horizontal. If it is vertical, the amount of columns depends on
 * the amount of cells added and @ref efl_pack_table_rows_get.
 *
 * @param[in] obj The object.
 *
 * @return Amount of columns.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK int efl_pack_table_columns_get(const Eo *obj);

/**
 * @brief Specifies the amount of rows the table will have when the fill
 * direction is vertical. If it is horizontal, the amount of rows depends on
 * the amount of cells added and @ref efl_pack_table_columns_get.
 *
 * @param[in] obj The object.
 * @param[in] rows Amount of rows.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK void efl_pack_table_rows_set(Eo *obj, int rows);

/**
 * @brief Specifies the amount of rows the table will have when the fill
 * direction is vertical. If it is horizontal, the amount of rows depends on
 * the amount of cells added and @ref efl_pack_table_columns_get.
 *
 * @param[in] obj The object.
 *
 * @return Amount of rows.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Table
 */
EAPI EAPI_WEAK int efl_pack_table_rows_get(const Eo *obj);

#endif
