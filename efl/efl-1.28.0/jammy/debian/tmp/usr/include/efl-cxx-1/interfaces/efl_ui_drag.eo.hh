#ifndef EFL_UI_DRAG_EO_HH
#define EFL_UI_DRAG_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_drag.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_DRAG_FWD_GUARD
#define EFL_UI_DRAG_FWD_GUARD
namespace efl { namespace ui { 
struct Drag;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Drag> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Drag&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Drag const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Drag const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Drag {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_value_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_value_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_size_get( ::efl::eolian::out_traits<double>::type dw,  ::efl::eolian::out_traits<double>::type dh) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_size_set( ::efl::eolian::in_traits<double>::type dw,  ::efl::eolian::in_traits<double>::type dh) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Drag_Dir>::type drag_dir_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_step_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_step_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_page_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_page_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_step_move( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_page_move( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_DRAG_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Drag *>(this))); }
    operator ::efl::ui::Drag() const;
    operator ::efl::ui::Drag&();
    operator ::efl::ui::Drag const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Drag> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Drag const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Drag : private ::efl::eo::concrete
{
    explicit Drag( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Drag(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Drag() = default;
    Drag(Drag const&) = default;
    Drag(Drag&&) = default;
    Drag& operator=(Drag const&) = default;
    Drag& operator=(Drag&&) = default;
    template <typename Derived>
    Drag(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Drag, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_value_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_value_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_size_get( ::efl::eolian::out_traits<double>::type dw,  ::efl::eolian::out_traits<double>::type dh) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_size_set( ::efl::eolian::in_traits<double>::type dw,  ::efl::eolian::in_traits<double>::type dh) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Drag_Dir>::type drag_dir_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_step_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_step_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_page_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_page_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_step_move( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type drag_page_move( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_DRAG_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Drag *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Drag> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Drag const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Drag> _get_wref() const { return ::efl::eo::wref<Drag>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Drag* operator->() const { return this; }
    Drag* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Drag const& lhs, Drag const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Drag const& lhs, Drag const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Drag) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Drag>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
