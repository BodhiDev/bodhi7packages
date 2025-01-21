#ifndef EFL_GFX_IMAGE_LOAD_CONTROLLER_EO_HH
#define EFL_GFX_IMAGE_LOAD_CONTROLLER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_image_load_controller.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_IMAGE_LOAD_CONTROLLER_FWD_GUARD
#define EFL_GFX_IMAGE_LOAD_CONTROLLER_FWD_GUARD
namespace efl { namespace gfx { 
struct Image_Load_Controller;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image_Load_Controller> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image_Load_Controller&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image_Load_Controller const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image_Load_Controller const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Image_Load_Controller {
    ::efl::eolian::return_traits<Eina_Size2D>::type load_size_get() const;
    ::efl::eolian::return_traits<void>::type load_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const;
    ::efl::eolian::return_traits<double>::type load_dpi_get() const;
    ::efl::eolian::return_traits<void>::type load_dpi_set( ::efl::eolian::in_traits<double>::type dpi) const;
    ::efl::eolian::return_traits<bool>::type load_region_support_get() const;
    ::efl::eolian::return_traits<Eina_Rect>::type load_region_get() const;
    ::efl::eolian::return_traits<void>::type load_region_set( ::efl::eolian::in_traits<Eina_Rect>::type region) const;
    ::efl::eolian::return_traits<bool>::type load_orientation_get() const;
    ::efl::eolian::return_traits<void>::type load_orientation_set( ::efl::eolian::in_traits<bool>::type enable) const;
    ::efl::eolian::return_traits<int>::type load_scale_down_get() const;
    ::efl::eolian::return_traits<void>::type load_scale_down_set( ::efl::eolian::in_traits<int>::type div) const;
    ::efl::eolian::return_traits<bool>::type load_skip_header_get() const;
    ::efl::eolian::return_traits<void>::type load_skip_header_set( ::efl::eolian::in_traits<bool>::type skip) const;
    ::efl::eolian::return_traits<void>::type load_async_start() const;
    ::efl::eolian::return_traits<void>::type load_async_cancel() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_IMAGE_LOAD_CONTROLLER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Image_Load_Controller *>(this))); }
    operator ::efl::gfx::Image_Load_Controller() const;
    operator ::efl::gfx::Image_Load_Controller&();
    operator ::efl::gfx::Image_Load_Controller const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Image_Load_Controller> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Image_Load_Controller const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Image_Load_Controller : private ::efl::eo::concrete
{
    explicit Image_Load_Controller( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Image_Load_Controller(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Image_Load_Controller() = default;
    Image_Load_Controller(Image_Load_Controller const&) = default;
    Image_Load_Controller(Image_Load_Controller&&) = default;
    Image_Load_Controller& operator=(Image_Load_Controller const&) = default;
    Image_Load_Controller& operator=(Image_Load_Controller&&) = default;
    template <typename Derived>
    Image_Load_Controller(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Image_Load_Controller, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Eina_Size2D>::type load_size_get() const;
    ::efl::eolian::return_traits<void>::type load_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const;
    ::efl::eolian::return_traits<double>::type load_dpi_get() const;
    ::efl::eolian::return_traits<void>::type load_dpi_set( ::efl::eolian::in_traits<double>::type dpi) const;
    ::efl::eolian::return_traits<bool>::type load_region_support_get() const;
    ::efl::eolian::return_traits<Eina_Rect>::type load_region_get() const;
    ::efl::eolian::return_traits<void>::type load_region_set( ::efl::eolian::in_traits<Eina_Rect>::type region) const;
    ::efl::eolian::return_traits<bool>::type load_orientation_get() const;
    ::efl::eolian::return_traits<void>::type load_orientation_set( ::efl::eolian::in_traits<bool>::type enable) const;
    ::efl::eolian::return_traits<int>::type load_scale_down_get() const;
    ::efl::eolian::return_traits<void>::type load_scale_down_set( ::efl::eolian::in_traits<int>::type div) const;
    ::efl::eolian::return_traits<bool>::type load_skip_header_get() const;
    ::efl::eolian::return_traits<void>::type load_skip_header_set( ::efl::eolian::in_traits<bool>::type skip) const;
    ::efl::eolian::return_traits<void>::type load_async_start() const;
    ::efl::eolian::return_traits<void>::type load_async_cancel() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_IMAGE_LOAD_CONTROLLER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Image_Load_Controller *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Image_Load_Controller> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Image_Load_Controller const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Image_Load_Controller> _get_wref() const { return ::efl::eo::wref<Image_Load_Controller>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Image_Load_Controller* operator->() const { return this; }
    Image_Load_Controller* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Image_Load_Controller const& lhs, Image_Load_Controller const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Image_Load_Controller const& lhs, Image_Load_Controller const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Image_Load_Controller) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Image_Load_Controller>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
