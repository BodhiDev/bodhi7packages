#ifndef EFL_UI_SPOTLIGHT_UTIL_EO_HH
#define EFL_UI_SPOTLIGHT_UTIL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_spotlight_container.eo.h"
#include "efl_ui_spotlight_util.eo.h"
#include "efl_ui_widget.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_spotlight_container.eo.hh"
#include "efl_ui_widget.eo.hh"
#ifndef EFL_UI_SPOTLIGHT_UTIL_FWD_GUARD
#define EFL_UI_SPOTLIGHT_UTIL_FWD_GUARD
namespace efl { namespace ui { namespace spotlight { 
struct Util;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Util> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Util&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Util const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Util const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_WIDGET_FWD_GUARD
#define EFL_UI_WIDGET_FWD_GUARD
namespace efl { namespace ui { 
struct Widget;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SPOTLIGHT_CONTAINER_FWD_GUARD
#define EFL_UI_SPOTLIGHT_CONTAINER_FWD_GUARD
namespace efl { namespace ui { namespace spotlight { 
struct Container;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace spotlight { 
struct Util {
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::efl::ui::spotlight::Container>::type stack_gen( ::efl::eolian::in_traits< ::efl::ui::Widget>::type parent);
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SPOTLIGHT_UTIL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Util *>(this))); }
    operator ::efl::ui::spotlight::Util() const;
    operator ::efl::ui::spotlight::Util&();
    operator ::efl::ui::spotlight::Util const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Util> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Util const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace spotlight { 
struct Util : private ::efl::eo::concrete
{
    explicit Util( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Util(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Util() = default;
    Util(Util const&) = default;
    Util(Util&&) = default;
    Util& operator=(Util const&) = default;
    Util& operator=(Util&&) = default;
    template <typename Derived>
    Util(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Util, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Util( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Util( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Util( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Util >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Util(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Util >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::efl::ui::spotlight::Container>::type stack_gen( ::efl::eolian::in_traits< ::efl::ui::Widget>::type parent);
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SPOTLIGHT_UTIL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Util *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Util> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Util const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Util> _get_wref() const { return ::efl::eo::wref<Util>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Util* operator->() const { return this; }
    Util* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Util const& lhs, Util const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Util const& lhs, Util const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Util) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Util>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
