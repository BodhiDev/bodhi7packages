#ifndef EFL_PACK_TABLE_IMPL_HH
#define EFL_PACK_TABLE_IMPL_HH

#include "efl_pack_table.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<bool>::type Pack_Table::table_cell_column_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::out_traits<int>::type col,  ::efl::eolian::out_traits<int>::type colspan) const
{
    int __out_param_col = {};
    int __out_param_colspan = {};
    Eina_Bool __return_value =  ::efl_pack_table_cell_column_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
        & __out_param_col,
        & __out_param_colspan);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(col, __out_param_col);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(colspan, __out_param_colspan);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_cell_column_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type colspan) const
{
     ::efl_pack_table_cell_column_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(col),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(colspan));
}
inline ::efl::eolian::return_traits<bool>::type Pack_Table::table_cell_row_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::out_traits<int>::type row,  ::efl::eolian::out_traits<int>::type rowspan) const
{
    int __out_param_row = {};
    int __out_param_rowspan = {};
    Eina_Bool __return_value =  ::efl_pack_table_cell_row_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
        & __out_param_row,
        & __out_param_rowspan);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(row, __out_param_row);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(rowspan, __out_param_rowspan);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_cell_row_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits<int>::type rowspan) const
{
     ::efl_pack_table_cell_row_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(row),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(rowspan));
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_size_get( ::efl::eolian::out_traits<int>::type cols,  ::efl::eolian::out_traits<int>::type rows) const
{
    int __out_param_cols = {};
    int __out_param_rows = {};
     ::efl_pack_table_size_get(_eo_ptr(),
        & __out_param_cols,
        & __out_param_rows);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(cols, __out_param_cols);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(rows, __out_param_rows);
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_size_set( ::efl::eolian::in_traits<int>::type cols,  ::efl::eolian::in_traits<int>::type rows) const
{
     ::efl_pack_table_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(cols),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(rows));
}
inline ::efl::eolian::return_traits<int>::type Pack_Table::table_columns_get() const
{
    int __return_value =  ::efl_pack_table_columns_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_columns_set( ::efl::eolian::in_traits<int>::type cols) const
{
     ::efl_pack_table_columns_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(cols));
}
inline ::efl::eolian::return_traits<int>::type Pack_Table::table_rows_get() const
{
    int __return_value =  ::efl_pack_table_rows_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_rows_set( ::efl::eolian::in_traits<int>::type rows) const
{
     ::efl_pack_table_rows_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(rows));
}
inline ::efl::eolian::return_traits<bool>::type Pack_Table::pack_table( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type colspan,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type rowspan) const
{
    Eina_Bool __return_value =  ::efl_pack_table(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(col),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(row),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(colspan),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(rowspan));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type Pack_Table::table_contents_get( ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type below) const
{
    Eina_Iterator * __return_value =  ::efl_pack_table_contents_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(col),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(row),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type>(below));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Pack_Table::table_content_get( ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_pack_table_content_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(col),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(row));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<bool>::type Pack_Table::table_cell_column_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::out_traits<int>::type col,  ::efl::eolian::out_traits<int>::type colspan) const
{
    int __out_param_col = {};
    int __out_param_colspan = {};
    Eina_Bool __return_value =  ::efl_pack_table_cell_column_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
        & __out_param_col,
        & __out_param_colspan);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(col, __out_param_col);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(colspan, __out_param_colspan);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_cell_column_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type colspan) const
{
     ::efl_pack_table_cell_column_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(col),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(colspan));
}
inline ::efl::eolian::return_traits<bool>::type Pack_Table::table_cell_row_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::out_traits<int>::type row,  ::efl::eolian::out_traits<int>::type rowspan) const
{
    int __out_param_row = {};
    int __out_param_rowspan = {};
    Eina_Bool __return_value =  ::efl_pack_table_cell_row_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
        & __out_param_row,
        & __out_param_rowspan);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(row, __out_param_row);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(rowspan, __out_param_rowspan);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_cell_row_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits<int>::type rowspan) const
{
     ::efl_pack_table_cell_row_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(row),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(rowspan));
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_size_get( ::efl::eolian::out_traits<int>::type cols,  ::efl::eolian::out_traits<int>::type rows) const
{
    int __out_param_cols = {};
    int __out_param_rows = {};
     ::efl_pack_table_size_get(_eo_ptr(),
        & __out_param_cols,
        & __out_param_rows);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(cols, __out_param_cols);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(rows, __out_param_rows);
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_size_set( ::efl::eolian::in_traits<int>::type cols,  ::efl::eolian::in_traits<int>::type rows) const
{
     ::efl_pack_table_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(cols),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(rows));
}
inline ::efl::eolian::return_traits<int>::type Pack_Table::table_columns_get() const
{
    int __return_value =  ::efl_pack_table_columns_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_columns_set( ::efl::eolian::in_traits<int>::type cols) const
{
     ::efl_pack_table_columns_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(cols));
}
inline ::efl::eolian::return_traits<int>::type Pack_Table::table_rows_get() const
{
    int __return_value =  ::efl_pack_table_rows_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pack_Table::table_rows_set( ::efl::eolian::in_traits<int>::type rows) const
{
     ::efl_pack_table_rows_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(rows));
}
inline ::efl::eolian::return_traits<bool>::type Pack_Table::pack_table( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type colspan,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type rowspan) const
{
    Eina_Bool __return_value =  ::efl_pack_table(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(col),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(row),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(colspan),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(rowspan));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type Pack_Table::table_contents_get( ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type below) const
{
    Eina_Iterator * __return_value =  ::efl_pack_table_contents_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(col),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(row),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type>(below));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Pack_Table::table_content_get( ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_pack_table_content_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(col),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(row));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
inline efl::Pack_Table::operator ::efl::Pack_Table() const { return *static_cast< ::efl::Pack_Table const*>(static_cast<void const*>(this)); }
inline efl::Pack_Table::operator ::efl::Pack_Table&() { return *static_cast< ::efl::Pack_Table*>(static_cast<void*>(this)); }
inline efl::Pack_Table::operator ::efl::Pack_Table const&() const { return *static_cast< ::efl::Pack_Table const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
