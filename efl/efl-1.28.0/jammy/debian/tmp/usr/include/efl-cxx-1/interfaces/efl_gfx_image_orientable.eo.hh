#ifndef EFL_GFX_IMAGE_ORIENTABLE_EO_HH
#define EFL_GFX_IMAGE_ORIENTABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_image_orientable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_IMAGE_ORIENTABLE_FWD_GUARD
#define EFL_GFX_IMAGE_ORIENTABLE_FWD_GUARD
namespace efl { namespace gfx { 
struct Image_Orientable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image_Orientable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image_Orientable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image_Orientable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image_Orientable const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Image_Orientable {
    ::efl::eolian::return_traits<Efl_Gfx_Image_Orientation>::type image_orientation_get() const;
    ::efl::eolian::return_traits<void>::type image_orientation_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Orientation>::type dir) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_IMAGE_ORIENTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Image_Orientable *>(this))); }
    operator ::efl::gfx::Image_Orientable() const;
    operator ::efl::gfx::Image_Orientable&();
    operator ::efl::gfx::Image_Orientable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Image_Orientable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Image_Orientable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Image_Orientable : private ::efl::eo::concrete
{
    explicit Image_Orientable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Image_Orientable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Image_Orientable() = default;
    Image_Orientable(Image_Orientable const&) = default;
    Image_Orientable(Image_Orientable&&) = default;
    Image_Orientable& operator=(Image_Orientable const&) = default;
    Image_Orientable& operator=(Image_Orientable&&) = default;
    template <typename Derived>
    Image_Orientable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Image_Orientable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Efl_Gfx_Image_Orientation>::type image_orientation_get() const;
    ::efl::eolian::return_traits<void>::type image_orientation_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Orientation>::type dir) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_IMAGE_ORIENTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Image_Orientable *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Image_Orientable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Image_Orientable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Image_Orientable> _get_wref() const { return ::efl::eo::wref<Image_Orientable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Image_Orientable* operator->() const { return this; }
    Image_Orientable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Image_Orientable const& lhs, Image_Orientable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Image_Orientable const& lhs, Image_Orientable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Image_Orientable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Image_Orientable>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
