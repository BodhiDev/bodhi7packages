#ifndef EFL_IO_MODEL_IMPL_HH
#define EFL_IO_MODEL_IMPL_HH

#include "efl_io_model.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Model::path_get() const
{
    const char * __return_value =  ::efl_io_model_path_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Model::path_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const
{
     ::efl_io_model_path_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
template <typename F>
inline ::efl::eolian::return_traits<void>::type Model::children_filter_set(F filter) const
{
    auto fw_filter = new ::efl::eolian::function_wrapper<EflIoFilter, F, ::efl::eolian::EflIoFilter__function_tag>(filter);
     ::efl_io_model_children_filter_set(_eo_ptr(),
        fw_filter->data_to_c(), fw_filter->func_to_c(), fw_filter->free_to_c());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Model::path_get() const
{
    const char * __return_value =  ::efl_io_model_path_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Model::path_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const
{
     ::efl_io_model_path_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
template <typename F>
inline ::efl::eolian::return_traits<void>::type Model::children_filter_set(F filter) const
{
    auto fw_filter = new ::efl::eolian::function_wrapper<EflIoFilter, F, ::efl::eolian::EflIoFilter__function_tag>(filter);
     ::efl_io_model_children_filter_set(_eo_ptr(),
        fw_filter->data_to_c(), fw_filter->func_to_c(), fw_filter->free_to_c());
}
#endif
inline efl::io::Model::operator ::efl::io::Model() const { return *static_cast< ::efl::io::Model const*>(static_cast<void const*>(this)); }
inline efl::io::Model::operator ::efl::io::Model&() { return *static_cast< ::efl::io::Model*>(static_cast<void*>(this)); }
inline efl::io::Model::operator ::efl::io::Model const&() const { return *static_cast< ::efl::io::Model const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
