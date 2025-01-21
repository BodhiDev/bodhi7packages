#ifndef EFL_CANVAS_FILTER_INTERNAL_IMPL_HH
#define EFL_CANVAS_FILTER_INTERNAL_IMPL_HH

#include "efl_canvas_filter_internal.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { namespace filter { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Internal::filter_changed_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::evas_filter_changed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Internal::filter_invalid_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::evas_filter_invalid_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<void*>::type Internal::filter_output_buffer_get() const
{
    void * __return_value =  ::evas_filter_output_buffer_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Internal::filter_input_alpha() const
{
    Eina_Bool __return_value =  ::evas_filter_input_alpha(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Internal::filter_state_prepare( ::efl::eolian::out_traits<Efl_Canvas_Filter_State>::type state,  ::efl::eolian::in_traits<void*>::type data) const
{
    Efl_Canvas_Filter_State __out_param_state = {};
     ::evas_filter_state_prepare(_eo_ptr(),
        & __out_param_state,
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Canvas_Filter_State>::type, Efl_Canvas_Filter_State>(state, __out_param_state);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Internal::filter_input_render( ::efl::eolian::in_traits<void*>::type filter,  ::efl::eolian::in_traits<void*>::type engine,  ::efl::eolian::in_traits<void*>::type output,  ::efl::eolian::in_traits<void*>::type drawctx,  ::efl::eolian::in_traits<void*>::type data,  ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y,  ::efl::eolian::in_traits<bool>::type do_async) const
{
    Eina_Bool __return_value =  ::evas_filter_input_render(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(filter),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(engine),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(output),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(drawctx),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(l),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(t),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(x),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(y),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(do_async));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Internal::filter_dirty() const
{
     ::evas_filter_dirty(_eo_ptr());
}
#endif
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace canvas { namespace filter { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Internal::filter_changed_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::evas_filter_changed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Internal::filter_invalid_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::evas_filter_invalid_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<void*>::type Internal::filter_output_buffer_get() const
{
    void * __return_value =  ::evas_filter_output_buffer_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Internal::filter_input_alpha() const
{
    Eina_Bool __return_value =  ::evas_filter_input_alpha(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Internal::filter_state_prepare( ::efl::eolian::out_traits<Efl_Canvas_Filter_State>::type state,  ::efl::eolian::in_traits<void*>::type data) const
{
    Efl_Canvas_Filter_State __out_param_state = {};
     ::evas_filter_state_prepare(_eo_ptr(),
        & __out_param_state,
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Canvas_Filter_State>::type, Efl_Canvas_Filter_State>(state, __out_param_state);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Internal::filter_input_render( ::efl::eolian::in_traits<void*>::type filter,  ::efl::eolian::in_traits<void*>::type engine,  ::efl::eolian::in_traits<void*>::type output,  ::efl::eolian::in_traits<void*>::type drawctx,  ::efl::eolian::in_traits<void*>::type data,  ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y,  ::efl::eolian::in_traits<bool>::type do_async) const
{
    Eina_Bool __return_value =  ::evas_filter_input_render(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(filter),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(engine),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(output),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(drawctx),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(l),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(t),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(x),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(y),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(do_async));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Internal::filter_dirty() const
{
     ::evas_filter_dirty(_eo_ptr());
}
#endif
#endif
inline efl::canvas::filter::Internal::operator ::efl::canvas::filter::Internal() const { return *static_cast< ::efl::canvas::filter::Internal const*>(static_cast<void const*>(this)); }
inline efl::canvas::filter::Internal::operator ::efl::canvas::filter::Internal&() { return *static_cast< ::efl::canvas::filter::Internal*>(static_cast<void*>(this)); }
inline efl::canvas::filter::Internal::operator ::efl::canvas::filter::Internal const&() const { return *static_cast< ::efl::canvas::filter::Internal const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
