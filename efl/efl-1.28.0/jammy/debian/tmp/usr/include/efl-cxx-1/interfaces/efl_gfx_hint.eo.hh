#ifndef EFL_GFX_HINT_EO_HH
#define EFL_GFX_HINT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_hint.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_HINT_FWD_GUARD
#define EFL_GFX_HINT_FWD_GUARD
namespace efl { namespace gfx { 
struct Hint;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Hint {
    ::efl::eolian::return_traits<void>::type hint_aspect_get( ::efl::eolian::out_traits<Efl_Gfx_Hint_Aspect>::type mode,  ::efl::eolian::out_traits<Eina_Size2D>::type sz) const;
    ::efl::eolian::return_traits<void>::type hint_aspect_set( ::efl::eolian::in_traits<Efl_Gfx_Hint_Aspect>::type mode,  ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_max_get() const;
    ::efl::eolian::return_traits<void>::type hint_size_max_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_restricted_max_get() const;
#ifdef EFL_GFX_HINT_PROTECTED
    ::efl::eolian::return_traits<void>::type hint_size_restricted_max_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
#endif
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_combined_max_get() const;
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_min_get() const;
    ::efl::eolian::return_traits<void>::type hint_size_min_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_restricted_min_get() const;
#ifdef EFL_GFX_HINT_PROTECTED
    ::efl::eolian::return_traits<void>::type hint_size_restricted_min_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
#endif
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_combined_min_get() const;
    ::efl::eolian::return_traits<void>::type hint_margin_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const;
    ::efl::eolian::return_traits<void>::type hint_margin_set( ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b) const;
    ::efl::eolian::return_traits<void>::type hint_weight_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
    ::efl::eolian::return_traits<void>::type hint_weight_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
    ::efl::eolian::return_traits<void>::type hint_align_get( ::efl::eolian::out_traits<Efl_Gfx_Align>::type x,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type y) const;
    ::efl::eolian::return_traits<void>::type hint_align_set( ::efl::eolian::in_traits<Efl_Gfx_Align>::type x,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type y) const;
    ::efl::eolian::return_traits<void>::type hint_fill_get( ::efl::eolian::out_traits<bool>::type x,  ::efl::eolian::out_traits<bool>::type y) const;
    ::efl::eolian::return_traits<void>::type hint_fill_set( ::efl::eolian::in_traits<bool>::type x,  ::efl::eolian::in_traits<bool>::type y) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_HINT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Hint *>(this))); }
    operator ::efl::gfx::Hint() const;
    operator ::efl::gfx::Hint&();
    operator ::efl::gfx::Hint const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Hint> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Hint const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Hint : private ::efl::eo::concrete
{
    explicit Hint( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Hint(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Hint() = default;
    Hint(Hint const&) = default;
    Hint(Hint&&) = default;
    Hint& operator=(Hint const&) = default;
    Hint& operator=(Hint&&) = default;
    template <typename Derived>
    Hint(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Hint, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<void>::type hint_aspect_get( ::efl::eolian::out_traits<Efl_Gfx_Hint_Aspect>::type mode,  ::efl::eolian::out_traits<Eina_Size2D>::type sz) const;
    ::efl::eolian::return_traits<void>::type hint_aspect_set( ::efl::eolian::in_traits<Efl_Gfx_Hint_Aspect>::type mode,  ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_max_get() const;
    ::efl::eolian::return_traits<void>::type hint_size_max_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_restricted_max_get() const;
#ifdef EFL_GFX_HINT_PROTECTED
    ::efl::eolian::return_traits<void>::type hint_size_restricted_max_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
#endif
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_combined_max_get() const;
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_min_get() const;
    ::efl::eolian::return_traits<void>::type hint_size_min_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_restricted_min_get() const;
#ifdef EFL_GFX_HINT_PROTECTED
    ::efl::eolian::return_traits<void>::type hint_size_restricted_min_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
#endif
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_size_combined_min_get() const;
    ::efl::eolian::return_traits<void>::type hint_margin_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const;
    ::efl::eolian::return_traits<void>::type hint_margin_set( ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b) const;
    ::efl::eolian::return_traits<void>::type hint_weight_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
    ::efl::eolian::return_traits<void>::type hint_weight_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
    ::efl::eolian::return_traits<void>::type hint_align_get( ::efl::eolian::out_traits<Efl_Gfx_Align>::type x,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type y) const;
    ::efl::eolian::return_traits<void>::type hint_align_set( ::efl::eolian::in_traits<Efl_Gfx_Align>::type x,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type y) const;
    ::efl::eolian::return_traits<void>::type hint_fill_get( ::efl::eolian::out_traits<bool>::type x,  ::efl::eolian::out_traits<bool>::type y) const;
    ::efl::eolian::return_traits<void>::type hint_fill_set( ::efl::eolian::in_traits<bool>::type x,  ::efl::eolian::in_traits<bool>::type y) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_HINT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Hint *>(this))); }
    static struct hints_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_GFX_ENTITY_EVENT_HINTS_CHANGED; }
        typedef void parameter_type;
    } const hints_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    hints_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(hints_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    hints_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(hints_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Hint> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Hint const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Hint> _get_wref() const { return ::efl::eo::wref<Hint>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Hint* operator->() const { return this; }
    Hint* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Hint const& lhs, Hint const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Hint const& lhs, Hint const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Hint) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Hint>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
