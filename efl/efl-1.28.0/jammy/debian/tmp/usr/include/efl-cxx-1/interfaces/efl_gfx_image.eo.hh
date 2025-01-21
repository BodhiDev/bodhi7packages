#ifndef EFL_GFX_IMAGE_EO_HH
#define EFL_GFX_IMAGE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_image.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_IMAGE_FWD_GUARD
#define EFL_GFX_IMAGE_FWD_GUARD
namespace efl { namespace gfx { 
struct Image;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Image {
    ::efl::eolian::return_traits<bool>::type smooth_scale_get() const;
    ::efl::eolian::return_traits<void>::type smooth_scale_set( ::efl::eolian::in_traits<bool>::type smooth_scale) const;
    ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Method>::type scale_method_get() const;
    ::efl::eolian::return_traits<void>::type scale_method_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Method>::type scale_method) const;
    ::efl::eolian::return_traits<bool>::type can_upscale_get() const;
    ::efl::eolian::return_traits<void>::type can_upscale_set( ::efl::eolian::in_traits<bool>::type upscale) const;
    ::efl::eolian::return_traits<bool>::type can_downscale_get() const;
    ::efl::eolian::return_traits<void>::type can_downscale_set( ::efl::eolian::in_traits<bool>::type downscale) const;
    ::efl::eolian::return_traits<double>::type ratio_get() const;
    ::efl::eolian::return_traits<Eina_Rect>::type content_region_get() const;
    ::efl::eolian::return_traits<void>::type border_insets_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const;
    ::efl::eolian::return_traits<void>::type border_insets_set( ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b) const;
    ::efl::eolian::return_traits<double>::type border_insets_scale_get() const;
    ::efl::eolian::return_traits<void>::type border_insets_scale_set( ::efl::eolian::in_traits<double>::type scale) const;
    ::efl::eolian::return_traits<Efl_Gfx_Center_Fill_Mode>::type center_fill_mode_get() const;
    ::efl::eolian::return_traits<void>::type center_fill_mode_set( ::efl::eolian::in_traits<Efl_Gfx_Center_Fill_Mode>::type fill) const;
    ::efl::eolian::return_traits<void>::type stretch_region_get( ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type horizontal,  ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type vertical) const;
    ::efl::eolian::return_traits<Eina_Error>::type stretch_region_set( ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type horizontal,  ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type vertical) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type image_size_get() const;
    ::efl::eolian::return_traits<Efl_Gfx_Image_Content_Hint>::type content_hint_get() const;
    ::efl::eolian::return_traits<void>::type content_hint_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Content_Hint>::type hint) const;
    ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Hint>::type scale_hint_get() const;
    ::efl::eolian::return_traits<void>::type scale_hint_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Hint>::type hint) const;
    ::efl::eolian::return_traits<Eina_Error>::type image_load_error_get() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_IMAGE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Image *>(this))); }
    operator ::efl::gfx::Image() const;
    operator ::efl::gfx::Image&();
    operator ::efl::gfx::Image const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Image> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Image const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Image : private ::efl::eo::concrete
{
    explicit Image( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Image(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Image() = default;
    Image(Image const&) = default;
    Image(Image&&) = default;
    Image& operator=(Image const&) = default;
    Image& operator=(Image&&) = default;
    template <typename Derived>
    Image(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Image, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type smooth_scale_get() const;
    ::efl::eolian::return_traits<void>::type smooth_scale_set( ::efl::eolian::in_traits<bool>::type smooth_scale) const;
    ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Method>::type scale_method_get() const;
    ::efl::eolian::return_traits<void>::type scale_method_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Method>::type scale_method) const;
    ::efl::eolian::return_traits<bool>::type can_upscale_get() const;
    ::efl::eolian::return_traits<void>::type can_upscale_set( ::efl::eolian::in_traits<bool>::type upscale) const;
    ::efl::eolian::return_traits<bool>::type can_downscale_get() const;
    ::efl::eolian::return_traits<void>::type can_downscale_set( ::efl::eolian::in_traits<bool>::type downscale) const;
    ::efl::eolian::return_traits<double>::type ratio_get() const;
    ::efl::eolian::return_traits<Eina_Rect>::type content_region_get() const;
    ::efl::eolian::return_traits<void>::type border_insets_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const;
    ::efl::eolian::return_traits<void>::type border_insets_set( ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b) const;
    ::efl::eolian::return_traits<double>::type border_insets_scale_get() const;
    ::efl::eolian::return_traits<void>::type border_insets_scale_set( ::efl::eolian::in_traits<double>::type scale) const;
    ::efl::eolian::return_traits<Efl_Gfx_Center_Fill_Mode>::type center_fill_mode_get() const;
    ::efl::eolian::return_traits<void>::type center_fill_mode_set( ::efl::eolian::in_traits<Efl_Gfx_Center_Fill_Mode>::type fill) const;
    ::efl::eolian::return_traits<void>::type stretch_region_get( ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type horizontal,  ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type vertical) const;
    ::efl::eolian::return_traits<Eina_Error>::type stretch_region_set( ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type horizontal,  ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type vertical) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type image_size_get() const;
    ::efl::eolian::return_traits<Efl_Gfx_Image_Content_Hint>::type content_hint_get() const;
    ::efl::eolian::return_traits<void>::type content_hint_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Content_Hint>::type hint) const;
    ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Hint>::type scale_hint_get() const;
    ::efl::eolian::return_traits<void>::type scale_hint_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Hint>::type hint) const;
    ::efl::eolian::return_traits<Eina_Error>::type image_load_error_get() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_IMAGE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Image *>(this))); }
    static struct image_preload_state_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_GFX_IMAGE_EVENT_IMAGE_PRELOAD_STATE_CHANGED; }
        typedef bool parameter_type;
    } const image_preload_state_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    image_preload_state_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(image_preload_state_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    image_preload_state_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(image_preload_state_changed_event, *this, std::bind(function));
    }
#endif
    static struct image_resized_event
    {
        static Efl_Event_Description const* description()
        { return EFL_GFX_IMAGE_EVENT_IMAGE_RESIZED; }
        typedef Eina_Size2D parameter_type;
    } const image_resized_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    image_resized_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(image_resized_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    image_resized_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(image_resized_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Image> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Image const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Image> _get_wref() const { return ::efl::eo::wref<Image>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Image* operator->() const { return this; }
    Image* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Image const& lhs, Image const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Image const& lhs, Image const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Image) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Image>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
