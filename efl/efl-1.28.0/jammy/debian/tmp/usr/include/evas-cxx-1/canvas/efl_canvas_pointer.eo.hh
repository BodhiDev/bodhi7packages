#ifndef EFL_CANVAS_POINTER_EO_HH
#define EFL_CANVAS_POINTER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_pointer.eo.h"
#include "efl_input_device.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_input_device.eo.hh"
#ifndef EFL_CANVAS_POINTER_FWD_GUARD
#define EFL_CANVAS_POINTER_FWD_GUARD
namespace efl { namespace canvas { 
struct Pointer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_DEVICE_FWD_GUARD
#define EFL_INPUT_DEVICE_FWD_GUARD
namespace efl { namespace input { 
struct Device;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Pointer {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type pointer_inside_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_POINTER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pointer *>(this))); }
    operator ::efl::canvas::Pointer() const;
    operator ::efl::canvas::Pointer&();
    operator ::efl::canvas::Pointer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pointer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pointer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Pointer : private ::efl::eo::concrete
{
    explicit Pointer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Pointer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Pointer() = default;
    Pointer(Pointer const&) = default;
    Pointer(Pointer&&) = default;
    Pointer& operator=(Pointer const&) = default;
    Pointer& operator=(Pointer&&) = default;
    template <typename Derived>
    Pointer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Pointer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type pointer_inside_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_POINTER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pointer *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pointer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pointer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Pointer> _get_wref() const { return ::efl::eo::wref<Pointer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Pointer* operator->() const { return this; }
    Pointer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Pointer const& lhs, Pointer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Pointer const& lhs, Pointer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Pointer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Pointer>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
