#ifndef EFL_UI_PANES_IMPL_HH
#define EFL_UI_PANES_IMPL_HH

#include "efl_ui_panes.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Panes::split_ratio_get() const
{
    double __return_value =  ::efl_ui_panes_split_ratio_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panes::split_ratio_set( ::efl::eolian::in_traits<double>::type ratio) const
{
     ::efl_ui_panes_split_ratio_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ratio));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Panes::fixed_get() const
{
    Eina_Bool __return_value =  ::efl_ui_panes_fixed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panes::fixed_set( ::efl::eolian::in_traits<bool>::type fixed) const
{
     ::efl_ui_panes_fixed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(fixed));
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Panes_Part>::type Panes::second() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "second");
    return ::efl::ui::Panes_Part{__return_value};
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Panes_Part>::type Panes::first() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "first");
    return ::efl::ui::Panes_Part{__return_value};
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Panes::split_ratio_get() const
{
    double __return_value =  ::efl_ui_panes_split_ratio_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panes::split_ratio_set( ::efl::eolian::in_traits<double>::type ratio) const
{
     ::efl_ui_panes_split_ratio_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ratio));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Panes::fixed_get() const
{
    Eina_Bool __return_value =  ::efl_ui_panes_fixed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panes::fixed_set( ::efl::eolian::in_traits<bool>::type fixed) const
{
     ::efl_ui_panes_fixed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(fixed));
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Panes_Part>::type Panes::second() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "second");
    return ::efl::ui::Panes_Part{__return_value};
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Panes_Part>::type Panes::first() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "first");
    return ::efl::ui::Panes_Part{__return_value};
}
#endif
inline efl::ui::Panes::operator ::efl::ui::Panes() const { return *static_cast< ::efl::ui::Panes const*>(static_cast<void const*>(this)); }
inline efl::ui::Panes::operator ::efl::ui::Panes&() { return *static_cast< ::efl::ui::Panes*>(static_cast<void*>(this)); }
inline efl::ui::Panes::operator ::efl::ui::Panes const&() const { return *static_cast< ::efl::ui::Panes const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
