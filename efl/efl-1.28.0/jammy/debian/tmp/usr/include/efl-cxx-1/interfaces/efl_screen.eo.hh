#ifndef EFL_SCREEN_EO_HH
#define EFL_SCREEN_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_screen.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_SCREEN_FWD_GUARD
#define EFL_SCREEN_FWD_GUARD
namespace efl { 
struct Screen;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Screen> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Screen&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Screen const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Screen const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Screen {
    ::efl::eolian::return_traits<Eina_Size2D>::type screen_size_in_pixels_get() const;
    ::efl::eolian::return_traits<float>::type screen_scale_factor_get() const;
    ::efl::eolian::return_traits<int>::type screen_rotation_get() const;
    ::efl::eolian::return_traits<void>::type screen_dpi_get( ::efl::eolian::out_traits<int>::type xdpi,  ::efl::eolian::out_traits<int>::type ydpi) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_SCREEN_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Screen *>(this))); }
    operator ::efl::Screen() const;
    operator ::efl::Screen&();
    operator ::efl::Screen const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Screen> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Screen const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Screen : private ::efl::eo::concrete
{
    explicit Screen( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Screen(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Screen() = default;
    Screen(Screen const&) = default;
    Screen(Screen&&) = default;
    Screen& operator=(Screen const&) = default;
    Screen& operator=(Screen&&) = default;
    template <typename Derived>
    Screen(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Screen, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Eina_Size2D>::type screen_size_in_pixels_get() const;
    ::efl::eolian::return_traits<float>::type screen_scale_factor_get() const;
    ::efl::eolian::return_traits<int>::type screen_rotation_get() const;
    ::efl::eolian::return_traits<void>::type screen_dpi_get( ::efl::eolian::out_traits<int>::type xdpi,  ::efl::eolian::out_traits<int>::type ydpi) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_SCREEN_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Screen *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Screen> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Screen const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Screen> _get_wref() const { return ::efl::eo::wref<Screen>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Screen* operator->() const { return this; }
    Screen* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Screen const& lhs, Screen const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Screen const& lhs, Screen const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Screen) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Screen>::value, "");
} 

#pragma GCC diagnostic pop

#endif
