#ifndef EFL_UI_DRAGGABLE_EO_HH
#define EFL_UI_DRAGGABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_draggable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_DRAGGABLE_FWD_GUARD
#define EFL_UI_DRAGGABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Draggable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Draggable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Draggable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Draggable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Draggable const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Draggable {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_target_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type drag_target_set( ::efl::eolian::in_traits<bool>::type set) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_DRAGGABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Draggable *>(this))); }
    operator ::efl::ui::Draggable() const;
    operator ::efl::ui::Draggable&();
    operator ::efl::ui::Draggable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Draggable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Draggable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Draggable : private ::efl::eo::concrete
{
    explicit Draggable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Draggable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Draggable() = default;
    Draggable(Draggable const&) = default;
    Draggable(Draggable&&) = default;
    Draggable& operator=(Draggable const&) = default;
    Draggable& operator=(Draggable&&) = default;
    template <typename Derived>
    Draggable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Draggable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_target_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type drag_target_set( ::efl::eolian::in_traits<bool>::type set) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_DRAGGABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Draggable *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Draggable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Draggable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Draggable> _get_wref() const { return ::efl::eo::wref<Draggable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Draggable* operator->() const { return this; }
    Draggable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Draggable const& lhs, Draggable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Draggable const& lhs, Draggable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Draggable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Draggable>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
