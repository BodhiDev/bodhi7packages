#ifndef EFL_UI_TABLE_IMPL_HH
#define EFL_UI_TABLE_IMPL_HH

#include "efl_ui_table.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Table::homogeneous_get( ::efl::eolian::out_traits<bool>::type homogeneoush,  ::efl::eolian::out_traits<bool>::type homogeneousv) const
{
    Eina_Bool __out_param_homogeneoush = {};
    Eina_Bool __out_param_homogeneousv = {};
     ::efl_ui_table_homogeneous_get(_eo_ptr(),
        & __out_param_homogeneoush,
        & __out_param_homogeneousv);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(homogeneoush, __out_param_homogeneoush);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(homogeneousv, __out_param_homogeneousv);
}
inline ::efl::eolian::return_traits<void>::type Table::homogeneous_set( ::efl::eolian::in_traits<bool>::type homogeneoush,  ::efl::eolian::in_traits<bool>::type homogeneousv) const
{
     ::efl_ui_table_homogeneous_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(homogeneoush),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(homogeneousv));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Table::homogeneous_get( ::efl::eolian::out_traits<bool>::type homogeneoush,  ::efl::eolian::out_traits<bool>::type homogeneousv) const
{
    Eina_Bool __out_param_homogeneoush = {};
    Eina_Bool __out_param_homogeneousv = {};
     ::efl_ui_table_homogeneous_get(_eo_ptr(),
        & __out_param_homogeneoush,
        & __out_param_homogeneousv);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(homogeneoush, __out_param_homogeneoush);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(homogeneousv, __out_param_homogeneousv);
}
inline ::efl::eolian::return_traits<void>::type Table::homogeneous_set( ::efl::eolian::in_traits<bool>::type homogeneoush,  ::efl::eolian::in_traits<bool>::type homogeneousv) const
{
     ::efl_ui_table_homogeneous_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(homogeneoush),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(homogeneousv));
}
inline efl::ui::Table::operator ::efl::ui::Table() const { return *static_cast< ::efl::ui::Table const*>(static_cast<void const*>(this)); }
inline efl::ui::Table::operator ::efl::ui::Table&() { return *static_cast< ::efl::ui::Table*>(static_cast<void*>(this)); }
inline efl::ui::Table::operator ::efl::ui::Table const&() const { return *static_cast< ::efl::ui::Table const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
