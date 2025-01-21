#ifndef EFL_GFX_FRAME_CONTROLLER_IMPL_HH
#define EFL_GFX_FRAME_CONTROLLER_IMPL_HH

#include "efl_gfx_frame_controller.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame_Controller::animated_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_frame_controller_animated_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Frame_Controller::frame_get() const
{
    int __return_value =  ::efl_gfx_frame_controller_frame_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame_Controller::frame_set( ::efl::eolian::in_traits<int>::type frame_index) const
{
    Eina_Bool __return_value =  ::efl_gfx_frame_controller_frame_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(frame_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Frame_Controller::frame_count_get() const
{
    int __return_value =  ::efl_gfx_frame_controller_frame_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Frame_Controller_Loop_Hint>::type Frame_Controller::loop_type_get() const
{
    Efl_Gfx_Frame_Controller_Loop_Hint __return_value =  ::efl_gfx_frame_controller_loop_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Frame_Controller_Loop_Hint>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Frame_Controller::loop_count_get() const
{
    int __return_value =  ::efl_gfx_frame_controller_loop_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Frame_Controller::frame_duration_get( ::efl::eolian::in_traits<int>::type start_frame,  ::efl::eolian::in_traits<int>::type frame_num) const
{
    double __return_value =  ::efl_gfx_frame_controller_frame_duration_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_frame),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(frame_num));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame_Controller::sector_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits<int>::type startframe,  ::efl::eolian::out_traits<int>::type endframe) const
{
    int __out_param_startframe = {};
    int __out_param_endframe = {};
    Eina_Bool __return_value =  ::efl_gfx_frame_controller_sector_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
        & __out_param_startframe,
        & __out_param_endframe);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(startframe, __out_param_startframe);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(endframe, __out_param_endframe);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame_Controller::sector_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<int>::type startframe,  ::efl::eolian::in_traits<int>::type endframe) const
{
    Eina_Bool __return_value =  ::efl_gfx_frame_controller_sector_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(startframe),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(endframe));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame_Controller::animated_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_frame_controller_animated_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Frame_Controller::frame_get() const
{
    int __return_value =  ::efl_gfx_frame_controller_frame_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame_Controller::frame_set( ::efl::eolian::in_traits<int>::type frame_index) const
{
    Eina_Bool __return_value =  ::efl_gfx_frame_controller_frame_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(frame_index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Frame_Controller::frame_count_get() const
{
    int __return_value =  ::efl_gfx_frame_controller_frame_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Frame_Controller_Loop_Hint>::type Frame_Controller::loop_type_get() const
{
    Efl_Gfx_Frame_Controller_Loop_Hint __return_value =  ::efl_gfx_frame_controller_loop_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Frame_Controller_Loop_Hint>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Frame_Controller::loop_count_get() const
{
    int __return_value =  ::efl_gfx_frame_controller_loop_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Frame_Controller::frame_duration_get( ::efl::eolian::in_traits<int>::type start_frame,  ::efl::eolian::in_traits<int>::type frame_num) const
{
    double __return_value =  ::efl_gfx_frame_controller_frame_duration_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_frame),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(frame_num));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame_Controller::sector_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits<int>::type startframe,  ::efl::eolian::out_traits<int>::type endframe) const
{
    int __out_param_startframe = {};
    int __out_param_endframe = {};
    Eina_Bool __return_value =  ::efl_gfx_frame_controller_sector_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
        & __out_param_startframe,
        & __out_param_endframe);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(startframe, __out_param_startframe);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(endframe, __out_param_endframe);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame_Controller::sector_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<int>::type startframe,  ::efl::eolian::in_traits<int>::type endframe) const
{
    Eina_Bool __return_value =  ::efl_gfx_frame_controller_sector_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(startframe),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(endframe));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::gfx::Frame_Controller::operator ::efl::gfx::Frame_Controller() const { return *static_cast< ::efl::gfx::Frame_Controller const*>(static_cast<void const*>(this)); }
inline efl::gfx::Frame_Controller::operator ::efl::gfx::Frame_Controller&() { return *static_cast< ::efl::gfx::Frame_Controller*>(static_cast<void*>(this)); }
inline efl::gfx::Frame_Controller::operator ::efl::gfx::Frame_Controller const&() const { return *static_cast< ::efl::gfx::Frame_Controller const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
