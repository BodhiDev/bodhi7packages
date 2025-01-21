#ifndef EFL_UI_VG_ANIMATION_IMPL_HH
#define EFL_UI_VG_ANIMATION_IMPL_HH

#include "efl_ui_vg_animation.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<int>::type Vg_Animation::frame_get() const
{
    int __return_value =  ::efl_ui_vg_animation_frame_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Vg_Animation::frame_set( ::efl::eolian::in_traits<int>::type frame_num) const
{
     ::efl_ui_vg_animation_frame_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(frame_num));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Vg_Animation::default_view_size_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_vg_animation_default_view_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Efl_Ui_Vg_Animation_State>::type Vg_Animation::state_get() const
{
    Efl_Ui_Vg_Animation_State __return_value =  ::efl_ui_vg_animation_state_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Vg_Animation_State>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Vg_Animation::frame_count_get() const
{
    int __return_value =  ::efl_ui_vg_animation_frame_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<double>::type Vg_Animation::min_progress_get() const
{
    double __return_value =  ::efl_ui_vg_animation_min_progress_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Vg_Animation::min_progress_set( ::efl::eolian::in_traits<double>::type min_progress) const
{
     ::efl_ui_vg_animation_min_progress_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(min_progress));
}
inline ::efl::eolian::return_traits<double>::type Vg_Animation::max_progress_get() const
{
    double __return_value =  ::efl_ui_vg_animation_max_progress_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Vg_Animation::max_progress_set( ::efl::eolian::in_traits<double>::type max_progress) const
{
     ::efl_ui_vg_animation_max_progress_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(max_progress));
}
inline ::efl::eolian::return_traits<int>::type Vg_Animation::min_frame_get() const
{
    int __return_value =  ::efl_ui_vg_animation_min_frame_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Vg_Animation::min_frame_set( ::efl::eolian::in_traits<int>::type min_frame) const
{
     ::efl_ui_vg_animation_min_frame_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(min_frame));
}
inline ::efl::eolian::return_traits<int>::type Vg_Animation::max_frame_get() const
{
    int __return_value =  ::efl_ui_vg_animation_max_frame_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Vg_Animation::max_frame_set( ::efl::eolian::in_traits<int>::type max_frame) const
{
     ::efl_ui_vg_animation_max_frame_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(max_frame));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Vg_Animation::playing_sector( ::efl::eolian::in_traits< ::efl::eina::string_view>::type start,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type end) const
{
    Eina_Bool __return_value =  ::efl_ui_vg_animation_playing_sector(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(start),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Vg_Animation::value_provider_override( ::efl::eolian::in_traits< ::efl::gfx::vg::Value_Provider>::type value_provider) const
{
     ::efl_ui_vg_animation_value_provider_override(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Vg_Value_Provider*,  ::efl::eolian::in_traits< ::efl::gfx::vg::Value_Provider>::type>(value_provider));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<int>::type Vg_Animation::frame_get() const
{
    int __return_value =  ::efl_ui_vg_animation_frame_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Vg_Animation::frame_set( ::efl::eolian::in_traits<int>::type frame_num) const
{
     ::efl_ui_vg_animation_frame_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(frame_num));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Vg_Animation::default_view_size_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_vg_animation_default_view_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Efl_Ui_Vg_Animation_State>::type Vg_Animation::state_get() const
{
    Efl_Ui_Vg_Animation_State __return_value =  ::efl_ui_vg_animation_state_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Vg_Animation_State>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Vg_Animation::frame_count_get() const
{
    int __return_value =  ::efl_ui_vg_animation_frame_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<double>::type Vg_Animation::min_progress_get() const
{
    double __return_value =  ::efl_ui_vg_animation_min_progress_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Vg_Animation::min_progress_set( ::efl::eolian::in_traits<double>::type min_progress) const
{
     ::efl_ui_vg_animation_min_progress_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(min_progress));
}
inline ::efl::eolian::return_traits<double>::type Vg_Animation::max_progress_get() const
{
    double __return_value =  ::efl_ui_vg_animation_max_progress_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Vg_Animation::max_progress_set( ::efl::eolian::in_traits<double>::type max_progress) const
{
     ::efl_ui_vg_animation_max_progress_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(max_progress));
}
inline ::efl::eolian::return_traits<int>::type Vg_Animation::min_frame_get() const
{
    int __return_value =  ::efl_ui_vg_animation_min_frame_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Vg_Animation::min_frame_set( ::efl::eolian::in_traits<int>::type min_frame) const
{
     ::efl_ui_vg_animation_min_frame_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(min_frame));
}
inline ::efl::eolian::return_traits<int>::type Vg_Animation::max_frame_get() const
{
    int __return_value =  ::efl_ui_vg_animation_max_frame_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Vg_Animation::max_frame_set( ::efl::eolian::in_traits<int>::type max_frame) const
{
     ::efl_ui_vg_animation_max_frame_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(max_frame));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Vg_Animation::playing_sector( ::efl::eolian::in_traits< ::efl::eina::string_view>::type start,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type end) const
{
    Eina_Bool __return_value =  ::efl_ui_vg_animation_playing_sector(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(start),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Vg_Animation::value_provider_override( ::efl::eolian::in_traits< ::efl::gfx::vg::Value_Provider>::type value_provider) const
{
     ::efl_ui_vg_animation_value_provider_override(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Vg_Value_Provider*,  ::efl::eolian::in_traits< ::efl::gfx::vg::Value_Provider>::type>(value_provider));
}
#endif
inline efl::ui::Vg_Animation::operator ::efl::ui::Vg_Animation() const { return *static_cast< ::efl::ui::Vg_Animation const*>(static_cast<void const*>(this)); }
inline efl::ui::Vg_Animation::operator ::efl::ui::Vg_Animation&() { return *static_cast< ::efl::ui::Vg_Animation*>(static_cast<void*>(this)); }
inline efl::ui::Vg_Animation::operator ::efl::ui::Vg_Animation const&() const { return *static_cast< ::efl::ui::Vg_Animation const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
