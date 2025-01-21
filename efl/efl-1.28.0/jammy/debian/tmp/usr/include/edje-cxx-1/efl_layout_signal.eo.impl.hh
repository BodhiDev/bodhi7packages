#ifndef EFL_LAYOUT_SIGNAL_IMPL_HH
#define EFL_LAYOUT_SIGNAL_IMPL_HH

#include "efl_layout_signal.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace layout { 
inline ::efl::eolian::return_traits<void>::type Signal::message_send( ::efl::eolian::in_traits<int>::type id,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type msg) const
{
     ::efl_layout_signal_message_send(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id),
         ::efl::eolian::convert_to_c<const Eina_Value,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type>(msg));
}
template <typename F>
inline ::efl::eolian::return_traits<bool>::type Signal::signal_callback_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source, F func) const
{
    auto fw_func = new ::efl::eolian::function_wrapper<EflLayoutSignalCb, F, ::efl::eolian::EflLayoutSignalCb__function_tag>(func);
    Eina_Bool __return_value =  ::efl_layout_signal_callback_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(emission),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(source),
        fw_func->data_to_c(), fw_func->func_to_c(), fw_func->free_to_c());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
template <typename F>
inline ::efl::eolian::return_traits<bool>::type Signal::signal_callback_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source, F func) const
{
    auto fw_func = new ::efl::eolian::function_wrapper<EflLayoutSignalCb, F, ::efl::eolian::EflLayoutSignalCb__function_tag>(func);
    Eina_Bool __return_value =  ::efl_layout_signal_callback_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(emission),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(source),
        fw_func->data_to_c(), fw_func->func_to_c(), fw_func->free_to_c());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Signal::signal_emit( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source) const
{
     ::efl_layout_signal_emit(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(emission),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(source));
}
inline ::efl::eolian::return_traits<void>::type Signal::signal_process( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type recurse) const
{
     ::efl_layout_signal_process(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type>(recurse));
}
} } 
namespace eo_cxx {
namespace efl { namespace layout { 
inline ::efl::eolian::return_traits<void>::type Signal::message_send( ::efl::eolian::in_traits<int>::type id,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type msg) const
{
     ::efl_layout_signal_message_send(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id),
         ::efl::eolian::convert_to_c<const Eina_Value,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type>(msg));
}
template <typename F>
inline ::efl::eolian::return_traits<bool>::type Signal::signal_callback_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source, F func) const
{
    auto fw_func = new ::efl::eolian::function_wrapper<EflLayoutSignalCb, F, ::efl::eolian::EflLayoutSignalCb__function_tag>(func);
    Eina_Bool __return_value =  ::efl_layout_signal_callback_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(emission),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(source),
        fw_func->data_to_c(), fw_func->func_to_c(), fw_func->free_to_c());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
template <typename F>
inline ::efl::eolian::return_traits<bool>::type Signal::signal_callback_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source, F func) const
{
    auto fw_func = new ::efl::eolian::function_wrapper<EflLayoutSignalCb, F, ::efl::eolian::EflLayoutSignalCb__function_tag>(func);
    Eina_Bool __return_value =  ::efl_layout_signal_callback_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(emission),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(source),
        fw_func->data_to_c(), fw_func->func_to_c(), fw_func->free_to_c());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Signal::signal_emit( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source) const
{
     ::efl_layout_signal_emit(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(emission),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(source));
}
inline ::efl::eolian::return_traits<void>::type Signal::signal_process( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type recurse) const
{
     ::efl_layout_signal_process(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type>(recurse));
}
inline efl::layout::Signal::operator ::efl::layout::Signal() const { return *static_cast< ::efl::layout::Signal const*>(static_cast<void const*>(this)); }
inline efl::layout::Signal::operator ::efl::layout::Signal&() { return *static_cast< ::efl::layout::Signal*>(static_cast<void*>(this)); }
inline efl::layout::Signal::operator ::efl::layout::Signal const&() const { return *static_cast< ::efl::layout::Signal const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
