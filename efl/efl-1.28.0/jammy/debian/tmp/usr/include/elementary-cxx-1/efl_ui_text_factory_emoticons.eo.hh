#ifndef EFL_UI_TEXT_FACTORY_EMOTICONS_EO_HH
#define EFL_UI_TEXT_FACTORY_EMOTICONS_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_object.eo.h"
#include "efl_canvas_textblock_factory.eo.h"
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_text_factory_emoticons.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_object.eo.hh"
#include "efl_canvas_textblock_factory.eo.hh"
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_UI_TEXT_FACTORY_EMOTICONS_FWD_GUARD
#define EFL_UI_TEXT_FACTORY_EMOTICONS_FWD_GUARD
namespace efl { namespace ui { namespace text_factory { 
struct Emoticons;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::text_factory::Emoticons> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::text_factory::Emoticons&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::text_factory::Emoticons const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::text_factory::Emoticons const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_OBJECT_FWD_GUARD
#define EFL_CANVAS_OBJECT_FWD_GUARD
namespace efl { namespace canvas { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_TEXTBLOCK_FACTORY_FWD_GUARD
#define EFL_CANVAS_TEXTBLOCK_FACTORY_FWD_GUARD
namespace efl { namespace canvas { 
struct Textblock_Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock_Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock_Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock_Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock_Factory const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace text_factory { 
struct Emoticons {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_TEXT_FACTORY_EMOTICONS_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Emoticons *>(this))); }
    operator ::efl::ui::text_factory::Emoticons() const;
    operator ::efl::ui::text_factory::Emoticons&();
    operator ::efl::ui::text_factory::Emoticons const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Emoticons,  ::efl::Object,  ::efl::canvas::Textblock_Factory> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Emoticons const ,  ::efl::Object const ,  ::efl::canvas::Textblock_Factory const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace text_factory { 
struct Emoticons : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::Textblock_Factory)
{
    explicit Emoticons( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Emoticons(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Emoticons() = default;
    Emoticons(Emoticons const&) = default;
    Emoticons(Emoticons&&) = default;
    Emoticons& operator=(Emoticons const&) = default;
    Emoticons& operator=(Emoticons&&) = default;
    template <typename Derived>
    Emoticons(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Emoticons, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Emoticons( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Emoticons( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Emoticons( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Emoticons >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Emoticons(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Emoticons >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_TEXT_FACTORY_EMOTICONS_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Emoticons *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Emoticons,  ::efl::Object,  ::efl::canvas::Textblock_Factory> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Emoticons const ,  ::efl::Object const ,  ::efl::canvas::Textblock_Factory const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Emoticons> _get_wref() const { return ::efl::eo::wref<Emoticons>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Emoticons* operator->() const { return this; }
    Emoticons* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Emoticons const& lhs, Emoticons const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Emoticons const& lhs, Emoticons const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Emoticons) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Emoticons>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
