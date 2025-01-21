#ifndef EFL_APP_IMPL_HH
#define EFL_APP_IMPL_HH

#include "efl_app.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< ::efl::App>::type App::app_main_get()
{
     ::Efl_App* __return_value =  ::efl_app_main_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::App>::type>(__return_value);
}
inline ::efl::eolian::return_traits<const Efl_Version *>::type App::build_efl_version_get() const
{
    const Efl_Version * __return_value =  ::efl_app_build_efl_version_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Efl_Version *>::type>(__return_value);
}
inline ::efl::eolian::return_traits<const Efl_Version *>::type App::efl_version_get() const
{
    const Efl_Version * __return_value =  ::efl_app_efl_version_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Efl_Version *>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< ::efl::App>::type App::app_main_get()
{
     ::Efl_App* __return_value =  ::efl_app_main_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::App>::type>(__return_value);
}
inline ::efl::eolian::return_traits<const Efl_Version *>::type App::build_efl_version_get() const
{
    const Efl_Version * __return_value =  ::efl_app_build_efl_version_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Efl_Version *>::type>(__return_value);
}
inline ::efl::eolian::return_traits<const Efl_Version *>::type App::efl_version_get() const
{
    const Efl_Version * __return_value =  ::efl_app_efl_version_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Efl_Version *>::type>(__return_value);
}
inline efl::App::operator ::efl::App() const { return *static_cast< ::efl::App const*>(static_cast<void const*>(this)); }
inline efl::App::operator ::efl::App&() { return *static_cast< ::efl::App*>(static_cast<void*>(this)); }
inline efl::App::operator ::efl::App const&() const { return *static_cast< ::efl::App const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
