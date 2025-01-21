#ifndef EFL_CANVAS_VG_CONTAINER_IMPL_HH
#define EFL_CANVAS_VG_CONTAINER_IMPL_HH

#include "efl_canvas_vg_container.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type Container::child_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::Efl_Canvas_Vg_Node* __return_value =  ::efl_canvas_vg_container_child_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::vg::Node>>::type Container::children_get() const
{
    Eina_Iterator * __return_value =  ::efl_canvas_vg_container_children_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::vg::Node>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<  ::efl::eina::range_list< ::efl::canvas::vg::Node>>::type Container::children_direct_get() const
{
    const Eina_List * __return_value =  ::efl_canvas_vg_container_children_direct_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::range_list< ::efl::canvas::vg::Node>>::type>(__return_value);
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace canvas { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type Container::child_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::Efl_Canvas_Vg_Node* __return_value =  ::efl_canvas_vg_container_child_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::vg::Node>>::type Container::children_get() const
{
    Eina_Iterator * __return_value =  ::efl_canvas_vg_container_children_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::vg::Node>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<  ::efl::eina::range_list< ::efl::canvas::vg::Node>>::type Container::children_direct_get() const
{
    const Eina_List * __return_value =  ::efl_canvas_vg_container_children_direct_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::range_list< ::efl::canvas::vg::Node>>::type>(__return_value);
}
#endif
inline efl::canvas::vg::Container::operator ::efl::canvas::vg::Container() const { return *static_cast< ::efl::canvas::vg::Container const*>(static_cast<void const*>(this)); }
inline efl::canvas::vg::Container::operator ::efl::canvas::vg::Container&() { return *static_cast< ::efl::canvas::vg::Container*>(static_cast<void*>(this)); }
inline efl::canvas::vg::Container::operator ::efl::canvas::vg::Container const&() const { return *static_cast< ::efl::canvas::vg::Container const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
