#ifndef EFL_INPUT_FOCUS_EO_HH
#define EFL_INPUT_FOCUS_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_duplicate.eo.h"
#include "efl_input_device.eo.h"
#include "efl_input_event.eo.h"
#include "efl_input_focus.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_duplicate.eo.hh"
#include "efl_input_device.eo.hh"
#include "efl_input_event.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_INPUT_FOCUS_FWD_GUARD
#define EFL_INPUT_FOCUS_FWD_GUARD
namespace efl { namespace input { 
struct Focus;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus const&> : ::std::true_type {}; } }
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
#ifndef EFL_DUPLICATE_FWD_GUARD
#define EFL_DUPLICATE_FWD_GUARD
namespace efl { 
struct Duplicate;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_EVENT_FWD_GUARD
#define EFL_INPUT_EVENT_FWD_GUARD
namespace efl { namespace input { 
struct Event;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace input { 
struct Focus {
    ::efl::eolian::return_traits< ::efl::Object>::type object_get() const;
    ::efl::eolian::return_traits<void>::type object_set( ::efl::eolian::in_traits< ::efl::Object>::type object) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_FOCUS_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Focus *>(this))); }
    operator ::efl::input::Focus() const;
    operator ::efl::input::Focus&();
    operator ::efl::input::Focus const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Focus,  ::efl::Duplicate,  ::efl::Object,  ::efl::input::Event> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Focus const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::input::Event const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace input { 
struct Focus : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Duplicate)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::input::Event)
{
    explicit Focus( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Focus(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Focus() = default;
    Focus(Focus const&) = default;
    Focus(Focus&&) = default;
    Focus& operator=(Focus const&) = default;
    Focus& operator=(Focus&&) = default;
    template <typename Derived>
    Focus(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Focus, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Focus( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Focus( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Focus( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Focus >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Focus(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Focus >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits< ::efl::Object>::type object_get() const;
    ::efl::eolian::return_traits<void>::type object_set( ::efl::eolian::in_traits< ::efl::Object>::type object) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_FOCUS_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Focus *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Focus,  ::efl::Duplicate,  ::efl::Object,  ::efl::input::Event> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Focus const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::input::Event const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Focus> _get_wref() const { return ::efl::eo::wref<Focus>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Focus* operator->() const { return this; }
    Focus* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Focus const& lhs, Focus const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Focus const& lhs, Focus const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Focus) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Focus>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
