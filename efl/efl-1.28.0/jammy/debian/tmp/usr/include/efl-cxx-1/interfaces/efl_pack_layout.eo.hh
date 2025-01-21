#ifndef EFL_PACK_LAYOUT_EO_HH
#define EFL_PACK_LAYOUT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_pack_layout.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_PACK_LAYOUT_FWD_GUARD
#define EFL_PACK_LAYOUT_FWD_GUARD
namespace efl { 
struct Pack_Layout;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Layout> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Layout&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Layout const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Layout const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Pack_Layout {
    ::efl::eolian::return_traits<void>::type layout_request() const;
#ifdef EFL_PACK_LAYOUT_PROTECTED
    ::efl::eolian::return_traits<void>::type layout_update() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_PACK_LAYOUT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pack_Layout *>(this))); }
    operator ::efl::Pack_Layout() const;
    operator ::efl::Pack_Layout&();
    operator ::efl::Pack_Layout const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pack_Layout> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pack_Layout const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Pack_Layout : private ::efl::eo::concrete
{
    explicit Pack_Layout( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Pack_Layout(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Pack_Layout() = default;
    Pack_Layout(Pack_Layout const&) = default;
    Pack_Layout(Pack_Layout&&) = default;
    Pack_Layout& operator=(Pack_Layout const&) = default;
    Pack_Layout& operator=(Pack_Layout&&) = default;
    template <typename Derived>
    Pack_Layout(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Pack_Layout, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<void>::type layout_request() const;
#ifdef EFL_PACK_LAYOUT_PROTECTED
    ::efl::eolian::return_traits<void>::type layout_update() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_PACK_LAYOUT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pack_Layout *>(this))); }
    static struct layout_updated_event
    {
        static Efl_Event_Description const* description()
        { return EFL_PACK_EVENT_LAYOUT_UPDATED; }
        typedef void parameter_type;
    } const layout_updated_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    layout_updated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(layout_updated_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    layout_updated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(layout_updated_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pack_Layout> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pack_Layout const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Pack_Layout> _get_wref() const { return ::efl::eo::wref<Pack_Layout>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Pack_Layout* operator->() const { return this; }
    Pack_Layout* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Pack_Layout const& lhs, Pack_Layout const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Pack_Layout const& lhs, Pack_Layout const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Pack_Layout) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Pack_Layout>::value, "");
} 

#pragma GCC diagnostic pop

#endif
