#ifndef EFL_LAYOUT_SIGNAL_EO_HH
#define EFL_LAYOUT_SIGNAL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_layout_signal.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_LAYOUT_SIGNAL_FWD_GUARD
#define EFL_LAYOUT_SIGNAL_FWD_GUARD
namespace efl { namespace layout { 
struct Signal;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Signal> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Signal&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Signal const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Signal const&> : ::std::true_type {}; } }
#endif

#ifndef EFLLAYOUTSIGNALCB_DEFINED
#define EFLLAYOUTSIGNALCB_DEFINED
namespace efl { namespace eolian {
template <typename F>
struct function_wrapper<EflLayoutSignalCb, F, struct EflLayoutSignalCb__function_tag> {
    function_wrapper(F cxx_func) : _cxx_func(cxx_func) {}
    void *data_to_c() { return static_cast<void *>(this); }
    EflLayoutSignalCb func_to_c() const { return &caller; }
    Eina_Free_Cb free_to_c() const { return &deleter; }
private:
    F _cxx_func;
    static void deleter(void *data) {
        delete static_cast<function_wrapper<EflLayoutSignalCb, F, ::efl::eolian::EflLayoutSignalCb__function_tag>*>(data);
    }
    static void caller(void *cxx_call_data,  ::Efl_Layout_Signal* object, const char * emission, const char * source) {
        auto fw = static_cast<function_wrapper<EflLayoutSignalCb, F, ::efl::eolian::EflLayoutSignalCb__function_tag>*>(cxx_call_data);
        fw->_cxx_func( ::efl::eolian::out_traits< ::efl::layout::Signal>::type(object),  ::efl::eolian::out_traits< ::efl::eina::string_view>::type(emission),  ::efl::eolian::out_traits< ::efl::eina::string_view>::type(source));
    }
};
} }
#endif


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace layout { 
struct Signal {
    ::efl::eolian::return_traits<void>::type message_send( ::efl::eolian::in_traits<int>::type id,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type msg) const;
template <typename F>     ::efl::eolian::return_traits<bool>::type signal_callback_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source, F func) const;
template <typename F>     ::efl::eolian::return_traits<bool>::type signal_callback_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source, F func) const;
    ::efl::eolian::return_traits<void>::type signal_emit( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source) const;
    ::efl::eolian::return_traits<void>::type signal_process( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type recurse) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_LAYOUT_SIGNAL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Signal *>(this))); }
    operator ::efl::layout::Signal() const;
    operator ::efl::layout::Signal&();
    operator ::efl::layout::Signal const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Signal> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Signal const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace layout { 
struct Signal : private ::efl::eo::concrete
{
    explicit Signal( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Signal(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Signal() = default;
    Signal(Signal const&) = default;
    Signal(Signal&&) = default;
    Signal& operator=(Signal const&) = default;
    Signal& operator=(Signal&&) = default;
    template <typename Derived>
    Signal(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Signal, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<void>::type message_send( ::efl::eolian::in_traits<int>::type id,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type msg) const;
template <typename F>     ::efl::eolian::return_traits<bool>::type signal_callback_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source, F func) const;
template <typename F>     ::efl::eolian::return_traits<bool>::type signal_callback_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source, F func) const;
    ::efl::eolian::return_traits<void>::type signal_emit( ::efl::eolian::in_traits< ::efl::eina::string_view>::type emission,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type source) const;
    ::efl::eolian::return_traits<void>::type signal_process( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type recurse) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_LAYOUT_SIGNAL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Signal *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Signal> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Signal const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Signal> _get_wref() const { return ::efl::eo::wref<Signal>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Signal* operator->() const { return this; }
    Signal* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Signal const& lhs, Signal const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Signal const& lhs, Signal const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Signal) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Signal>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
