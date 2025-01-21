#ifndef EFL_ACCESS_SELECTION_IMPL_HH
#define EFL_ACCESS_SELECTION_IMPL_HH

#include "efl_access_selection.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<int>::type Selection::selected_children_count_get() const
{
    int __return_value =  ::efl_access_selection_selected_children_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits< ::efl::Object>::type Selection::selected_child_get( ::efl::eolian::in_traits<int>::type selected_child_index) const
{
     ::Efl_Object* __return_value =  ::efl_access_selection_selected_child_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(selected_child_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::child_select( ::efl::eolian::in_traits<int>::type child_index) const
{
    Eina_Bool __return_value =  ::efl_access_selection_child_select(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(child_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::selected_child_deselect( ::efl::eolian::in_traits<int>::type child_index) const
{
    Eina_Bool __return_value =  ::efl_access_selection_selected_child_deselect(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(child_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::is_child_selected( ::efl::eolian::in_traits<int>::type child_index) const
{
    Eina_Bool __return_value =  ::efl_access_selection_is_child_selected(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(child_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::all_children_select() const
{
    Eina_Bool __return_value =  ::efl_access_selection_all_children_select(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::access_selection_clear() const
{
    Eina_Bool __return_value =  ::efl_access_selection_clear(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::child_deselect( ::efl::eolian::in_traits<int>::type child_index) const
{
    Eina_Bool __return_value =  ::efl_access_selection_child_deselect(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(child_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
} } 
namespace eo_cxx {
namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<int>::type Selection::selected_children_count_get() const
{
    int __return_value =  ::efl_access_selection_selected_children_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits< ::efl::Object>::type Selection::selected_child_get( ::efl::eolian::in_traits<int>::type selected_child_index) const
{
     ::Efl_Object* __return_value =  ::efl_access_selection_selected_child_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(selected_child_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::child_select( ::efl::eolian::in_traits<int>::type child_index) const
{
    Eina_Bool __return_value =  ::efl_access_selection_child_select(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(child_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::selected_child_deselect( ::efl::eolian::in_traits<int>::type child_index) const
{
    Eina_Bool __return_value =  ::efl_access_selection_selected_child_deselect(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(child_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::is_child_selected( ::efl::eolian::in_traits<int>::type child_index) const
{
    Eina_Bool __return_value =  ::efl_access_selection_is_child_selected(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(child_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::all_children_select() const
{
    Eina_Bool __return_value =  ::efl_access_selection_all_children_select(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::access_selection_clear() const
{
    Eina_Bool __return_value =  ::efl_access_selection_clear(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Selection::child_deselect( ::efl::eolian::in_traits<int>::type child_index) const
{
    Eina_Bool __return_value =  ::efl_access_selection_child_deselect(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(child_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
inline efl::access::Selection::operator ::efl::access::Selection() const { return *static_cast< ::efl::access::Selection const*>(static_cast<void const*>(this)); }
inline efl::access::Selection::operator ::efl::access::Selection&() { return *static_cast< ::efl::access::Selection*>(static_cast<void*>(this)); }
inline efl::access::Selection::operator ::efl::access::Selection const&() const { return *static_cast< ::efl::access::Selection const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
