#ifndef EFL_UI_TEXT_FACTORY_IMAGES_EO_HH
#define EFL_UI_TEXT_FACTORY_IMAGES_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_object.eo.h"
#include "efl_canvas_textblock_factory.eo.h"
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_text_factory_images.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_object.eo.hh"
#include "efl_canvas_textblock_factory.eo.hh"
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_UI_TEXT_FACTORY_IMAGES_FWD_GUARD
#define EFL_UI_TEXT_FACTORY_IMAGES_FWD_GUARD
namespace efl { namespace ui { namespace text_factory { 
struct Images;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::text_factory::Images> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::text_factory::Images&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::text_factory::Images const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::text_factory::Images const&> : ::std::true_type {}; } }
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
struct Images {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type matches_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type path,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type matches_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type matches_mmap_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<const Eina_File*>::type file,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type matches_mmap_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_TEXT_FACTORY_IMAGES_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Images *>(this))); }
    operator ::efl::ui::text_factory::Images() const;
    operator ::efl::ui::text_factory::Images&();
    operator ::efl::ui::text_factory::Images const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Images,  ::efl::Object,  ::efl::canvas::Textblock_Factory> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Images const ,  ::efl::Object const ,  ::efl::canvas::Textblock_Factory const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace text_factory { 
struct Images : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::Textblock_Factory)
{
    explicit Images( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Images(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Images() = default;
    Images(Images const&) = default;
    Images(Images&&) = default;
    Images& operator=(Images const&) = default;
    Images& operator=(Images&&) = default;
    template <typename Derived>
    Images(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Images, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Images( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Images( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Images( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Images >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Images(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Images >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type matches_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type path,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type matches_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type matches_mmap_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<const Eina_File*>::type file,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type matches_mmap_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_TEXT_FACTORY_IMAGES_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Images *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Images,  ::efl::Object,  ::efl::canvas::Textblock_Factory> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Images const ,  ::efl::Object const ,  ::efl::canvas::Textblock_Factory const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Images> _get_wref() const { return ::efl::eo::wref<Images>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Images* operator->() const { return this; }
    Images* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Images const& lhs, Images const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Images const& lhs, Images const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Images) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Images>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
