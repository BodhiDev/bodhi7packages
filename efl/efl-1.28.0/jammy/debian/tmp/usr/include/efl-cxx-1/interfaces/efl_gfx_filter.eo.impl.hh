#ifndef EFL_GFX_FILTER_IMPL_HH
#define EFL_GFX_FILTER_IMPL_HH

#include "efl_gfx_filter.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_program_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type code,  ::efl::eolian::out_traits< ::efl::eina::string_view*>::type name) const
{
    const char * __out_param_code = {};
    const char * __out_param_name = {};
     ::efl_gfx_filter_program_get(_eo_ptr(),
        & __out_param_code,
        & __out_param_name);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(code, __out_param_code);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view*>::type, const char *>(name, __out_param_name);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_program_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type code,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type name) const
{
     ::efl_gfx_filter_program_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(code),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type>(name));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_state_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type cur_state,  ::efl::eolian::out_traits<double>::type cur_val,  ::efl::eolian::out_traits< ::efl::eina::string_view*>::type next_state,  ::efl::eolian::out_traits<double*>::type next_val,  ::efl::eolian::out_traits<double*>::type pos) const
{
    const char * __out_param_cur_state = {};
    double __out_param_cur_val = {};
    const char * __out_param_next_state = {};
    double __out_param_next_val = {};
    double __out_param_pos = {};
     ::efl_gfx_filter_state_get(_eo_ptr(),
        & __out_param_cur_state,
        & __out_param_cur_val,
        & __out_param_next_state,
        & __out_param_next_val,
        & __out_param_pos);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(cur_state, __out_param_cur_state);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(cur_val, __out_param_cur_val);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view*>::type, const char *>(next_state, __out_param_next_state);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double*>::type, double>(next_val, __out_param_next_val);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double*>::type, double>(pos, __out_param_pos);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_state_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type cur_state,  ::efl::eolian::in_traits<double>::type cur_val,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type next_state,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type next_val,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type pos) const
{
     ::efl_gfx_filter_state_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(cur_state),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cur_val),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type>(next_state),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type>(next_val),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type>(pos));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_padding_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const
{
    int __out_param_l = {};
    int __out_param_r = {};
    int __out_param_t = {};
    int __out_param_b = {};
     ::efl_gfx_filter_padding_get(_eo_ptr(),
        & __out_param_l,
        & __out_param_r,
        & __out_param_t,
        & __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(l, __out_param_l);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(t, __out_param_t);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Filter::filter_source_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_gfx_filter_source_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_source_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type source) const
{
     ::efl_gfx_filter_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(source));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_data_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type value,  ::efl::eolian::out_traits<bool>::type execute) const
{
    const char * __out_param_value = {};
    Eina_Bool __out_param_execute = {};
     ::efl_gfx_filter_data_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
        & __out_param_value,
        & __out_param_execute);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(value, __out_param_value);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(execute, __out_param_execute);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_data_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value,  ::efl::eolian::in_traits<bool>::type execute) const
{
     ::efl_gfx_filter_data_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(value),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(execute));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_program_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type code,  ::efl::eolian::out_traits< ::efl::eina::string_view*>::type name) const
{
    const char * __out_param_code = {};
    const char * __out_param_name = {};
     ::efl_gfx_filter_program_get(_eo_ptr(),
        & __out_param_code,
        & __out_param_name);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(code, __out_param_code);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view*>::type, const char *>(name, __out_param_name);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_program_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type code,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type name) const
{
     ::efl_gfx_filter_program_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(code),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type>(name));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_state_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type cur_state,  ::efl::eolian::out_traits<double>::type cur_val,  ::efl::eolian::out_traits< ::efl::eina::string_view*>::type next_state,  ::efl::eolian::out_traits<double*>::type next_val,  ::efl::eolian::out_traits<double*>::type pos) const
{
    const char * __out_param_cur_state = {};
    double __out_param_cur_val = {};
    const char * __out_param_next_state = {};
    double __out_param_next_val = {};
    double __out_param_pos = {};
     ::efl_gfx_filter_state_get(_eo_ptr(),
        & __out_param_cur_state,
        & __out_param_cur_val,
        & __out_param_next_state,
        & __out_param_next_val,
        & __out_param_pos);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(cur_state, __out_param_cur_state);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(cur_val, __out_param_cur_val);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view*>::type, const char *>(next_state, __out_param_next_state);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double*>::type, double>(next_val, __out_param_next_val);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double*>::type, double>(pos, __out_param_pos);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_state_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type cur_state,  ::efl::eolian::in_traits<double>::type cur_val,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type next_state,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type next_val,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type pos) const
{
     ::efl_gfx_filter_state_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(cur_state),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cur_val),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type>(next_state),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type>(next_val),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type>(pos));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_padding_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const
{
    int __out_param_l = {};
    int __out_param_r = {};
    int __out_param_t = {};
    int __out_param_b = {};
     ::efl_gfx_filter_padding_get(_eo_ptr(),
        & __out_param_l,
        & __out_param_r,
        & __out_param_t,
        & __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(l, __out_param_l);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(t, __out_param_t);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Filter::filter_source_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_gfx_filter_source_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_source_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type source) const
{
     ::efl_gfx_filter_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(source));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_data_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type value,  ::efl::eolian::out_traits<bool>::type execute) const
{
    const char * __out_param_value = {};
    Eina_Bool __out_param_execute = {};
     ::efl_gfx_filter_data_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
        & __out_param_value,
        & __out_param_execute);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(value, __out_param_value);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(execute, __out_param_execute);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Filter::filter_data_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value,  ::efl::eolian::in_traits<bool>::type execute) const
{
     ::efl_gfx_filter_data_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(value),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(execute));
}
#endif
inline efl::gfx::Filter::operator ::efl::gfx::Filter() const { return *static_cast< ::efl::gfx::Filter const*>(static_cast<void const*>(this)); }
inline efl::gfx::Filter::operator ::efl::gfx::Filter&() { return *static_cast< ::efl::gfx::Filter*>(static_cast<void*>(this)); }
inline efl::gfx::Filter::operator ::efl::gfx::Filter const&() const { return *static_cast< ::efl::gfx::Filter const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
