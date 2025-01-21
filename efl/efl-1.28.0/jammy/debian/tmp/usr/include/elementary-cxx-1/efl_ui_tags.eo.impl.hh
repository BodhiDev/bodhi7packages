#ifndef EFL_UI_TAGS_IMPL_HH
#define EFL_UI_TAGS_IMPL_HH

#include "efl_ui_tags.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Tags::editable_get() const
{
    Eina_Bool __return_value =  ::efl_ui_tags_editable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Tags::editable_set( ::efl::eolian::in_traits<bool>::type editable) const
{
     ::efl_ui_tags_editable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(editable));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Tags::expanded_get() const
{
    Eina_Bool __return_value =  ::efl_ui_tags_expanded_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Tags::expanded_set( ::efl::eolian::in_traits<bool>::type expanded) const
{
     ::efl_ui_tags_expanded_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(expanded));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type Tags::items_get() const
{
    const Eina_Array * __return_value =  ::efl_ui_tags_items_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Tags::items_set( ::efl::eolian::in_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type items) const
{
     ::efl_ui_tags_items_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Array *,  ::efl::eolian::in_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type>(items));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Tags::editable_get() const
{
    Eina_Bool __return_value =  ::efl_ui_tags_editable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Tags::editable_set( ::efl::eolian::in_traits<bool>::type editable) const
{
     ::efl_ui_tags_editable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(editable));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Tags::expanded_get() const
{
    Eina_Bool __return_value =  ::efl_ui_tags_expanded_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Tags::expanded_set( ::efl::eolian::in_traits<bool>::type expanded) const
{
     ::efl_ui_tags_expanded_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(expanded));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type Tags::items_get() const
{
    const Eina_Array * __return_value =  ::efl_ui_tags_items_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Tags::items_set( ::efl::eolian::in_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type items) const
{
     ::efl_ui_tags_items_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Array *,  ::efl::eolian::in_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type>(items));
}
#endif
inline efl::ui::Tags::operator ::efl::ui::Tags() const { return *static_cast< ::efl::ui::Tags const*>(static_cast<void const*>(this)); }
inline efl::ui::Tags::operator ::efl::ui::Tags&() { return *static_cast< ::efl::ui::Tags*>(static_cast<void*>(this)); }
inline efl::ui::Tags::operator ::efl::ui::Tags const&() const { return *static_cast< ::efl::ui::Tags const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
