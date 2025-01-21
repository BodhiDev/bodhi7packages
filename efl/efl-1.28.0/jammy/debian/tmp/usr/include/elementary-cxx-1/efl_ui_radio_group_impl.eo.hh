#ifndef EFL_UI_RADIO_GROUP_IMPL_EO_HH
#define EFL_UI_RADIO_GROUP_IMPL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_radio.eo.h"
#include "efl_ui_radio_group.eo.h"
#include "efl_ui_radio_group_impl.eo.h"
#include "efl_ui_selectable.eo.h"
#include "efl_ui_single_selectable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_radio.eo.hh"
#include "efl_ui_radio_group.eo.hh"
#include "efl_ui_selectable.eo.hh"
#include "efl_ui_single_selectable.eo.hh"
#ifndef EFL_UI_RADIO_GROUP_IMPL_FWD_GUARD
#define EFL_UI_RADIO_GROUP_IMPL_FWD_GUARD
namespace efl { namespace ui { 
struct Radio_Group_Impl;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group_Impl> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group_Impl&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group_Impl const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group_Impl const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_RADIO_FWD_GUARD
#define EFL_UI_RADIO_FWD_GUARD
namespace efl { namespace ui { 
struct Radio;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_RADIO_GROUP_FWD_GUARD
#define EFL_UI_RADIO_GROUP_FWD_GUARD
namespace efl { namespace ui { 
struct Radio_Group;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SELECTABLE_FWD_GUARD
#define EFL_UI_SELECTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Selectable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SINGLE_SELECTABLE_FWD_GUARD
#define EFL_UI_SINGLE_SELECTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Single_Selectable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Radio_Group_Impl {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_RADIO_GROUP_IMPL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Radio_Group_Impl *>(this))); }
    operator ::efl::ui::Radio_Group_Impl() const;
    operator ::efl::ui::Radio_Group_Impl&();
    operator ::efl::ui::Radio_Group_Impl const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Radio_Group_Impl,  ::efl::Object,  ::efl::ui::Radio_Group,  ::efl::ui::Single_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Radio_Group_Impl const ,  ::efl::Object const ,  ::efl::ui::Radio_Group const ,  ::efl::ui::Single_Selectable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Radio_Group_Impl : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::Radio_Group)
    , EO_CXX_INHERIT(::efl::ui::Single_Selectable)
{
    explicit Radio_Group_Impl( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Radio_Group_Impl(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Radio_Group_Impl() = default;
    Radio_Group_Impl(Radio_Group_Impl const&) = default;
    Radio_Group_Impl(Radio_Group_Impl&&) = default;
    Radio_Group_Impl& operator=(Radio_Group_Impl const&) = default;
    Radio_Group_Impl& operator=(Radio_Group_Impl&&) = default;
    template <typename Derived>
    Radio_Group_Impl(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Radio_Group_Impl, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Radio_Group_Impl( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Radio_Group_Impl( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Radio_Group_Impl( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Radio_Group_Impl >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Radio_Group_Impl(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Radio_Group_Impl >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_RADIO_GROUP_IMPL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Radio_Group_Impl *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Radio_Group_Impl,  ::efl::Object,  ::efl::ui::Radio_Group,  ::efl::ui::Single_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Radio_Group_Impl const ,  ::efl::Object const ,  ::efl::ui::Radio_Group const ,  ::efl::ui::Single_Selectable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Radio_Group_Impl> _get_wref() const { return ::efl::eo::wref<Radio_Group_Impl>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Radio_Group_Impl* operator->() const { return this; }
    Radio_Group_Impl* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Radio_Group_Impl const& lhs, Radio_Group_Impl const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Radio_Group_Impl const& lhs, Radio_Group_Impl const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Radio_Group_Impl) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Radio_Group_Impl>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
