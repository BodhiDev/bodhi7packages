#ifndef EFL_THREADIO_EO_HH
#define EFL_THREADIO_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_threadio.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_THREADIO_FWD_GUARD
#define EFL_THREADIO_FWD_GUARD
namespace efl { 
struct ThreadIO;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ThreadIO> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ThreadIO&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ThreadIO const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ThreadIO const&> : ::std::true_type {}; } }
#endif

#ifndef EFLTHREADIOCALL_DEFINED
#define EFLTHREADIOCALL_DEFINED
namespace efl { namespace eolian {
template <typename F>
struct function_wrapper<EflThreadIOCall, F, struct EflThreadIOCall__function_tag> {
    function_wrapper(F cxx_func) : _cxx_func(cxx_func) {}
    void *data_to_c() { return static_cast<void *>(this); }
    EflThreadIOCall func_to_c() const { return &caller; }
    Eina_Free_Cb free_to_c() const { return &deleter; }
private:
    F _cxx_func;
    static void deleter(void *data) {
        delete static_cast<function_wrapper<EflThreadIOCall, F, ::efl::eolian::EflThreadIOCall__function_tag>*>(data);
    }
    static void caller(void *cxx_call_data, const Efl_Event * event) {
        auto fw = static_cast<function_wrapper<EflThreadIOCall, F, ::efl::eolian::EflThreadIOCall__function_tag>*>(cxx_call_data);
        fw->_cxx_func( ::efl::eolian::out_traits< Efl_Event*>::type(event));
    }
};
} }
#endif

#ifndef EFLTHREADIOCALLSYNC_DEFINED
#define EFLTHREADIOCALLSYNC_DEFINED
namespace efl { namespace eolian {
template <typename F>
struct function_wrapper<EflThreadIOCallSync, F, struct EflThreadIOCallSync__function_tag> {
    function_wrapper(F cxx_func) : _cxx_func(cxx_func) {}
    void *data_to_c() { return static_cast<void *>(this); }
    EflThreadIOCallSync func_to_c() const { return &caller; }
    Eina_Free_Cb free_to_c() const { return &deleter; }
private:
    F _cxx_func;
    static void deleter(void *data) {
        delete static_cast<function_wrapper<EflThreadIOCallSync, F, ::efl::eolian::EflThreadIOCallSync__function_tag>*>(data);
    }
    static void * caller(void *cxx_call_data, const Efl_Event * event) {
        auto fw = static_cast<function_wrapper<EflThreadIOCallSync, F, ::efl::eolian::EflThreadIOCallSync__function_tag>*>(cxx_call_data);
        auto __return_value =
        fw->_cxx_func( ::efl::eolian::out_traits< Efl_Event*>::type(event));
        return ::efl::eolian::convert_to_c<void*>(__return_value);
    }
};
} }
#endif


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct ThreadIO {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void*>::type indata_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type indata_set( ::efl::eolian::in_traits<void*>::type data) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void*>::type outdata_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type outdata_set( ::efl::eolian::in_traits<void*>::type data) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
template <typename F>     ::efl::eolian::return_traits<void>::type call(F func) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
template <typename F>     ::efl::eolian::return_traits<void*>::type call_sync(F func) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_THREADIO_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<ThreadIO *>(this))); }
    operator ::efl::ThreadIO() const;
    operator ::efl::ThreadIO&();
    operator ::efl::ThreadIO const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<ThreadIO> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<ThreadIO const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct ThreadIO : private ::efl::eo::concrete
{
    explicit ThreadIO( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    ThreadIO(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit ThreadIO() = default;
    ThreadIO(ThreadIO const&) = default;
    ThreadIO(ThreadIO&&) = default;
    ThreadIO& operator=(ThreadIO const&) = default;
    ThreadIO& operator=(ThreadIO&&) = default;
    template <typename Derived>
    ThreadIO(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< ThreadIO, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void*>::type indata_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type indata_set( ::efl::eolian::in_traits<void*>::type data) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void*>::type outdata_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type outdata_set( ::efl::eolian::in_traits<void*>::type data) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
template <typename F>     ::efl::eolian::return_traits<void>::type call(F func) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
template <typename F>     ::efl::eolian::return_traits<void*>::type call_sync(F func) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_THREADIO_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<ThreadIO *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<ThreadIO> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<ThreadIO const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<ThreadIO> _get_wref() const { return ::efl::eo::wref<ThreadIO>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const ThreadIO* operator->() const { return this; }
    ThreadIO* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(ThreadIO const& lhs, ThreadIO const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(ThreadIO const& lhs, ThreadIO const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(ThreadIO) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<ThreadIO>::value, "");
} 

#pragma GCC diagnostic pop

#endif
