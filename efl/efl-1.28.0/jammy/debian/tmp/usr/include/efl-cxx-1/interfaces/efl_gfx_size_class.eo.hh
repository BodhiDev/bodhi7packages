#ifndef EFL_GFX_SIZE_CLASS_EO_HH
#define EFL_GFX_SIZE_CLASS_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_size_class.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_SIZE_CLASS_FWD_GUARD
#define EFL_GFX_SIZE_CLASS_FWD_GUARD
namespace efl { namespace gfx { 
struct Size_Class;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Size_Class> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Size_Class&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Size_Class const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Size_Class const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Size_Class {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type size_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class,  ::efl::eolian::out_traits<int>::type minw,  ::efl::eolian::out_traits<int>::type minh,  ::efl::eolian::out_traits<int>::type maxw,  ::efl::eolian::out_traits<int>::type maxh) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type size_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class,  ::efl::eolian::in_traits<int>::type minw,  ::efl::eolian::in_traits<int>::type minh,  ::efl::eolian::in_traits<int>::type maxw,  ::efl::eolian::in_traits<int>::type maxh) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type size_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_SIZE_CLASS_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Size_Class *>(this))); }
    operator ::efl::gfx::Size_Class() const;
    operator ::efl::gfx::Size_Class&();
    operator ::efl::gfx::Size_Class const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Size_Class> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Size_Class const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Size_Class : private ::efl::eo::concrete
{
    explicit Size_Class( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Size_Class(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Size_Class() = default;
    Size_Class(Size_Class const&) = default;
    Size_Class(Size_Class&&) = default;
    Size_Class& operator=(Size_Class const&) = default;
    Size_Class& operator=(Size_Class&&) = default;
    template <typename Derived>
    Size_Class(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Size_Class, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type size_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class,  ::efl::eolian::out_traits<int>::type minw,  ::efl::eolian::out_traits<int>::type minh,  ::efl::eolian::out_traits<int>::type maxw,  ::efl::eolian::out_traits<int>::type maxh) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type size_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class,  ::efl::eolian::in_traits<int>::type minw,  ::efl::eolian::in_traits<int>::type minh,  ::efl::eolian::in_traits<int>::type maxw,  ::efl::eolian::in_traits<int>::type maxh) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type size_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_SIZE_CLASS_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Size_Class *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Size_Class> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Size_Class const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Size_Class> _get_wref() const { return ::efl::eo::wref<Size_Class>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Size_Class* operator->() const { return this; }
    Size_Class* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Size_Class const& lhs, Size_Class const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Size_Class const& lhs, Size_Class const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Size_Class) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Size_Class>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
