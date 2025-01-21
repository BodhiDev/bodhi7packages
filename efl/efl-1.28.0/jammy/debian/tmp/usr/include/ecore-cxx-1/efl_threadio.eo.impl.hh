#ifndef EFL_THREADIO_IMPL_HH
#define EFL_THREADIO_IMPL_HH

#include "efl_threadio.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void*>::type ThreadIO::indata_get() const
{
    void * __return_value =  ::efl_threadio_indata_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type ThreadIO::indata_set( ::efl::eolian::in_traits<void*>::type data) const
{
     ::efl_threadio_indata_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void*>::type ThreadIO::outdata_get() const
{
    void * __return_value =  ::efl_threadio_outdata_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type ThreadIO::outdata_set( ::efl::eolian::in_traits<void*>::type data) const
{
     ::efl_threadio_outdata_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
template <typename F>
inline ::efl::eolian::return_traits<void>::type ThreadIO::call(F func) const
{
    auto fw_func = new ::efl::eolian::function_wrapper<EflThreadIOCall, F, ::efl::eolian::EflThreadIOCall__function_tag>(func);
     ::efl_threadio_call(_eo_ptr(),
        fw_func->data_to_c(), fw_func->func_to_c(), fw_func->free_to_c());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
template <typename F>
inline ::efl::eolian::return_traits<void*>::type ThreadIO::call_sync(F func) const
{
    auto fw_func = new ::efl::eolian::function_wrapper<EflThreadIOCallSync, F, ::efl::eolian::EflThreadIOCallSync__function_tag>(func);
    void * __return_value =  ::efl_threadio_call_sync(_eo_ptr(),
        fw_func->data_to_c(), fw_func->func_to_c(), fw_func->free_to_c());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void*>::type ThreadIO::indata_get() const
{
    void * __return_value =  ::efl_threadio_indata_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type ThreadIO::indata_set( ::efl::eolian::in_traits<void*>::type data) const
{
     ::efl_threadio_indata_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void*>::type ThreadIO::outdata_get() const
{
    void * __return_value =  ::efl_threadio_outdata_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type ThreadIO::outdata_set( ::efl::eolian::in_traits<void*>::type data) const
{
     ::efl_threadio_outdata_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
template <typename F>
inline ::efl::eolian::return_traits<void>::type ThreadIO::call(F func) const
{
    auto fw_func = new ::efl::eolian::function_wrapper<EflThreadIOCall, F, ::efl::eolian::EflThreadIOCall__function_tag>(func);
     ::efl_threadio_call(_eo_ptr(),
        fw_func->data_to_c(), fw_func->func_to_c(), fw_func->free_to_c());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
template <typename F>
inline ::efl::eolian::return_traits<void*>::type ThreadIO::call_sync(F func) const
{
    auto fw_func = new ::efl::eolian::function_wrapper<EflThreadIOCallSync, F, ::efl::eolian::EflThreadIOCallSync__function_tag>(func);
    void * __return_value =  ::efl_threadio_call_sync(_eo_ptr(),
        fw_func->data_to_c(), fw_func->func_to_c(), fw_func->free_to_c());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
inline efl::ThreadIO::operator ::efl::ThreadIO() const { return *static_cast< ::efl::ThreadIO const*>(static_cast<void const*>(this)); }
inline efl::ThreadIO::operator ::efl::ThreadIO&() { return *static_cast< ::efl::ThreadIO*>(static_cast<void*>(this)); }
inline efl::ThreadIO::operator ::efl::ThreadIO const&() const { return *static_cast< ::efl::ThreadIO const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
