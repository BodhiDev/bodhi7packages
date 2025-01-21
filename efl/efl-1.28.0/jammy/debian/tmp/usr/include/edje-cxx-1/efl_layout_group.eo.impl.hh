#ifndef EFL_LAYOUT_GROUP_IMPL_HH
#define EFL_LAYOUT_GROUP_IMPL_HH

#include "efl_layout_group.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace layout { 
inline ::efl::eolian::return_traits<Eina_Size2D>::type Group::group_size_min_get() const
{
    Eina_Size2D __return_value =  ::efl_layout_group_size_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Group::group_size_max_get() const
{
    Eina_Size2D __return_value =  ::efl_layout_group_size_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Group::group_data_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    const char * __return_value =  ::efl_layout_group_data_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Group::part_exist_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type part) const
{
    Eina_Bool __return_value =  ::efl_layout_group_part_exist_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(part));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace layout { 
inline ::efl::eolian::return_traits<Eina_Size2D>::type Group::group_size_min_get() const
{
    Eina_Size2D __return_value =  ::efl_layout_group_size_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Group::group_size_max_get() const
{
    Eina_Size2D __return_value =  ::efl_layout_group_size_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Group::group_data_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    const char * __return_value =  ::efl_layout_group_data_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Group::part_exist_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type part) const
{
    Eina_Bool __return_value =  ::efl_layout_group_part_exist_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(part));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline efl::layout::Group::operator ::efl::layout::Group() const { return *static_cast< ::efl::layout::Group const*>(static_cast<void const*>(this)); }
inline efl::layout::Group::operator ::efl::layout::Group&() { return *static_cast< ::efl::layout::Group*>(static_cast<void*>(this)); }
inline efl::layout::Group::operator ::efl::layout::Group const&() const { return *static_cast< ::efl::layout::Group const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
