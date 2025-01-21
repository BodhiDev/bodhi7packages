#ifndef EFL_UI_THEME_EO_HH
#define EFL_UI_THEME_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_theme.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_UI_THEME_FWD_GUARD
#define EFL_UI_THEME_FWD_GUARD
namespace efl { namespace ui { 
struct Theme;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Theme> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Theme&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Theme const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Theme const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CLASS_FWD_GUARD
#define EFL_CLASS_FWD_GUARD
namespace efl { 
struct Class;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_OBJECT_FWD_GUARD
#define EFL_OBJECT_FWD_GUARD
namespace efl { 
struct Object;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_THEME_FWD_GUARD
#define EFL_UI_THEME_FWD_GUARD
namespace efl { namespace ui { 
struct Theme;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Theme> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Theme&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Theme const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Theme const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Theme {
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::efl::ui::Theme>::type default_get();
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type extension_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type extension_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type overlay_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type overlay_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_THEME_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Theme *>(this))); }
    operator ::efl::ui::Theme() const;
    operator ::efl::ui::Theme&();
    operator ::efl::ui::Theme const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Theme,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Theme const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Theme : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Theme( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Theme(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Theme() = default;
    Theme(Theme const&) = default;
    Theme(Theme&&) = default;
    Theme& operator=(Theme const&) = default;
    Theme& operator=(Theme&&) = default;
    template <typename Derived>
    Theme(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Theme, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Theme( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Theme( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Theme( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Theme >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Theme(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Theme >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::efl::ui::Theme>::type default_get();
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type extension_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type extension_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type overlay_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type overlay_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_THEME_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Theme *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Theme,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Theme const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Theme> _get_wref() const { return ::efl::eo::wref<Theme>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Theme* operator->() const { return this; }
    Theme* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Theme const& lhs, Theme const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Theme const& lhs, Theme const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Theme) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Theme>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
