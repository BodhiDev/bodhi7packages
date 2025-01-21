#ifndef EFL_CANVAS_GROUP_IMPL_HH
#define EFL_CANVAS_GROUP_IMPL_HH

#include "efl_canvas_group.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<bool>::type Group::group_need_recalculate_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_group_need_recalculate_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Group::group_need_recalculate_set( ::efl::eolian::in_traits<bool>::type value) const
{
     ::efl_canvas_group_need_recalculate_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(value));
}
#ifdef EFL_CANVAS_GROUP_PROTECTED
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Group::group_clipper_get() const
{
     ::Efl_Canvas_Object const* __return_value =  ::efl_canvas_group_clipper_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<void>::type Group::group_change() const
{
     ::efl_canvas_group_change(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Group::group_calculate() const
{
     ::efl_canvas_group_calculate(_eo_ptr());
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Object>>::type Group::group_members_iterate() const
{
    Eina_Iterator * __return_value =  ::efl_canvas_group_members_iterate(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Object>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Group::group_member_add( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sub_obj) const
{
     ::efl_canvas_group_member_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sub_obj));
}
inline ::efl::eolian::return_traits<void>::type Group::group_member_remove( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sub_obj) const
{
     ::efl_canvas_group_member_remove(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sub_obj));
}
inline ::efl::eolian::return_traits<bool>::type Group::group_member_is( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sub_obj) const
{
    Eina_Bool __return_value =  ::efl_canvas_group_member_is(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object const*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sub_obj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<bool>::type Group::group_need_recalculate_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_group_need_recalculate_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Group::group_need_recalculate_set( ::efl::eolian::in_traits<bool>::type value) const
{
     ::efl_canvas_group_need_recalculate_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(value));
}
#ifdef EFL_CANVAS_GROUP_PROTECTED
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Group::group_clipper_get() const
{
     ::Efl_Canvas_Object const* __return_value =  ::efl_canvas_group_clipper_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<void>::type Group::group_change() const
{
     ::efl_canvas_group_change(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Group::group_calculate() const
{
     ::efl_canvas_group_calculate(_eo_ptr());
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Object>>::type Group::group_members_iterate() const
{
    Eina_Iterator * __return_value =  ::efl_canvas_group_members_iterate(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Object>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Group::group_member_add( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sub_obj) const
{
     ::efl_canvas_group_member_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sub_obj));
}
inline ::efl::eolian::return_traits<void>::type Group::group_member_remove( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sub_obj) const
{
     ::efl_canvas_group_member_remove(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sub_obj));
}
inline ::efl::eolian::return_traits<bool>::type Group::group_member_is( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sub_obj) const
{
    Eina_Bool __return_value =  ::efl_canvas_group_member_is(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object const*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sub_obj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline efl::canvas::Group::operator ::efl::canvas::Group() const { return *static_cast< ::efl::canvas::Group const*>(static_cast<void const*>(this)); }
inline efl::canvas::Group::operator ::efl::canvas::Group&() { return *static_cast< ::efl::canvas::Group*>(static_cast<void*>(this)); }
inline efl::canvas::Group::operator ::efl::canvas::Group const&() const { return *static_cast< ::efl::canvas::Group const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
