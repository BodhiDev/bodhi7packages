#ifndef EFL_ACCESS_ACTION_IMPL_HH
#define EFL_ACCESS_ACTION_IMPL_HH

#include "efl_access_action.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Action::action_name_get( ::efl::eolian::in_traits<int>::type id) const
{
    const char * __return_value =  ::efl_access_action_name_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Action::action_localized_name_get( ::efl::eolian::in_traits<int>::type id) const
{
    const char * __return_value =  ::efl_access_action_localized_name_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Action::action_description_get( ::efl::eolian::in_traits<int>::type id) const
{
    const char * __return_value =  ::efl_access_action_description_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Action::action_description_set( ::efl::eolian::in_traits<int>::type id,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type description) const
{
    Eina_Bool __return_value =  ::efl_access_action_description_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(description));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Action_Data>>::type Action::actions_get() const
{
    Eina_List * __return_value =  ::efl_access_action_actions_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Action_Data>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Action::action_do( ::efl::eolian::in_traits<int>::type id) const
{
    Eina_Bool __return_value =  ::efl_access_action_do(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits< ::std::string>::type Action::action_keybinding_get( ::efl::eolian::in_traits<int>::type id) const
{
    char * __return_value =  ::efl_access_action_keybinding_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
#endif
#endif
} } 
namespace eo_cxx {
namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Action::action_name_get( ::efl::eolian::in_traits<int>::type id) const
{
    const char * __return_value =  ::efl_access_action_name_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Action::action_localized_name_get( ::efl::eolian::in_traits<int>::type id) const
{
    const char * __return_value =  ::efl_access_action_localized_name_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Action::action_description_get( ::efl::eolian::in_traits<int>::type id) const
{
    const char * __return_value =  ::efl_access_action_description_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Action::action_description_set( ::efl::eolian::in_traits<int>::type id,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type description) const
{
    Eina_Bool __return_value =  ::efl_access_action_description_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(description));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Action_Data>>::type Action::actions_get() const
{
    Eina_List * __return_value =  ::efl_access_action_actions_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Action_Data>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Action::action_do( ::efl::eolian::in_traits<int>::type id) const
{
    Eina_Bool __return_value =  ::efl_access_action_do(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_ACTION_PROTECTED
inline ::efl::eolian::return_traits< ::std::string>::type Action::action_keybinding_get( ::efl::eolian::in_traits<int>::type id) const
{
    char * __return_value =  ::efl_access_action_keybinding_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
#endif
#endif
inline efl::access::Action::operator ::efl::access::Action() const { return *static_cast< ::efl::access::Action const*>(static_cast<void const*>(this)); }
inline efl::access::Action::operator ::efl::access::Action&() { return *static_cast< ::efl::access::Action*>(static_cast<void*>(this)); }
inline efl::access::Action::operator ::efl::access::Action const&() const { return *static_cast< ::efl::access::Action const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
