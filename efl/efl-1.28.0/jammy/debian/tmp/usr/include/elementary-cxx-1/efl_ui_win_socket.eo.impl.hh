#ifndef EFL_UI_WIN_SOCKET_IMPL_HH
#define EFL_UI_WIN_SOCKET_IMPL_HH

#include "efl_ui_win_socket.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win_Socket::socket_listen( ::efl::eolian::in_traits< ::efl::eina::string_view>::type svcname,  ::efl::eolian::in_traits<int>::type svcnum,  ::efl::eolian::in_traits<bool>::type svcsys) const
{
    Eina_Bool __return_value =  ::efl_ui_win_socket_listen(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(svcname),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(svcnum),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(svcsys));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win_Socket::socket_listen( ::efl::eolian::in_traits< ::efl::eina::string_view>::type svcname,  ::efl::eolian::in_traits<int>::type svcnum,  ::efl::eolian::in_traits<bool>::type svcsys) const
{
    Eina_Bool __return_value =  ::efl_ui_win_socket_listen(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(svcname),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(svcnum),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(svcsys));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::ui::Win_Socket::operator ::efl::ui::Win_Socket() const { return *static_cast< ::efl::ui::Win_Socket const*>(static_cast<void const*>(this)); }
inline efl::ui::Win_Socket::operator ::efl::ui::Win_Socket&() { return *static_cast< ::efl::ui::Win_Socket*>(static_cast<void*>(this)); }
inline efl::ui::Win_Socket::operator ::efl::ui::Win_Socket const&() const { return *static_cast< ::efl::ui::Win_Socket const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
