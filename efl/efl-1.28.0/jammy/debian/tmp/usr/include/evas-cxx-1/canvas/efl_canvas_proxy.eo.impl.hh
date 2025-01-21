#ifndef EFL_CANVAS_PROXY_IMPL_HH
#define EFL_CANVAS_PROXY_IMPL_HH

#include "efl_canvas_proxy.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Proxy::source_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_canvas_proxy_source_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Proxy::source_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type src) const
{
    Eina_Bool __return_value =  ::efl_canvas_proxy_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(src));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Proxy::source_clip_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_proxy_source_clip_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Proxy::source_clip_set( ::efl::eolian::in_traits<bool>::type source_clip) const
{
     ::efl_canvas_proxy_source_clip_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(source_clip));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Proxy::source_events_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_proxy_source_events_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Proxy::source_events_set( ::efl::eolian::in_traits<bool>::type repeat) const
{
     ::efl_canvas_proxy_source_events_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(repeat));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Proxy::source_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_canvas_proxy_source_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Proxy::source_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type src) const
{
    Eina_Bool __return_value =  ::efl_canvas_proxy_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(src));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Proxy::source_clip_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_proxy_source_clip_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Proxy::source_clip_set( ::efl::eolian::in_traits<bool>::type source_clip) const
{
     ::efl_canvas_proxy_source_clip_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(source_clip));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Proxy::source_events_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_proxy_source_events_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Proxy::source_events_set( ::efl::eolian::in_traits<bool>::type repeat) const
{
     ::efl_canvas_proxy_source_events_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(repeat));
}
#endif
inline efl::canvas::Proxy::operator ::efl::canvas::Proxy() const { return *static_cast< ::efl::canvas::Proxy const*>(static_cast<void const*>(this)); }
inline efl::canvas::Proxy::operator ::efl::canvas::Proxy&() { return *static_cast< ::efl::canvas::Proxy*>(static_cast<void*>(this)); }
inline efl::canvas::Proxy::operator ::efl::canvas::Proxy const&() const { return *static_cast< ::efl::canvas::Proxy const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
