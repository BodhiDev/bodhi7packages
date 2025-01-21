#ifndef EFL_CANVAS_SCALE_ANIMATION_EO_HH
#define EFL_CANVAS_SCALE_ANIMATION_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_animation.eo.h"
#include "efl_canvas_object.eo.h"
#include "efl_canvas_scale_animation.eo.h"
#include "efl_class.eo.h"
#include "efl_interpolator.eo.h"
#include "efl_object.eo.h"
#include "efl_playable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_animation.eo.hh"
#include "efl_canvas_object.eo.hh"
#include "efl_class.eo.hh"
#include "efl_interpolator.eo.hh"
#include "efl_object.eo.hh"
#include "efl_playable.eo.hh"
#ifndef EFL_CANVAS_SCALE_ANIMATION_FWD_GUARD
#define EFL_CANVAS_SCALE_ANIMATION_FWD_GUARD
namespace efl { namespace canvas { 
struct Scale_Animation;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scale_Animation> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scale_Animation&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scale_Animation const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scale_Animation const&> : ::std::true_type {}; } }
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
#ifndef EFL_INTERPOLATOR_FWD_GUARD
#define EFL_INTERPOLATOR_FWD_GUARD
namespace efl { 
struct Interpolator;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator const&> : ::std::true_type {}; } }
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
#ifndef EFL_PLAYABLE_FWD_GUARD
#define EFL_PLAYABLE_FWD_GUARD
namespace efl { 
struct Playable;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Playable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Playable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Playable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Playable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_ANIMATION_FWD_GUARD
#define EFL_CANVAS_ANIMATION_FWD_GUARD
namespace efl { namespace canvas { 
struct Animation;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Scale_Animation {
    ::efl::eolian::return_traits<void>::type scale_get( ::efl::eolian::out_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::out_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::out_traits< ::efl::canvas::Object>::type pivot,  ::efl::eolian::out_traits<Eina_Vector2>::type center_point) const;
    ::efl::eolian::return_traits<void>::type scale_set( ::efl::eolian::in_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::in_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type pivot,  ::efl::eolian::in_traits<Eina_Vector2>::type center_point) const;
    ::efl::eolian::return_traits<void>::type scale_absolute_get( ::efl::eolian::out_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::out_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::out_traits<Eina_Position2D>::type pivot_point) const;
    ::efl::eolian::return_traits<void>::type scale_absolute_set( ::efl::eolian::in_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::in_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::in_traits<Eina_Position2D>::type pivot_point) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_SCALE_ANIMATION_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Scale_Animation *>(this))); }
    operator ::efl::canvas::Scale_Animation() const;
    operator ::efl::canvas::Scale_Animation&();
    operator ::efl::canvas::Scale_Animation const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Scale_Animation,  ::efl::Object,  ::efl::Playable,  ::efl::canvas::Animation> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Scale_Animation const ,  ::efl::Object const ,  ::efl::Playable const ,  ::efl::canvas::Animation const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Scale_Animation : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Playable)
    , EO_CXX_INHERIT(::efl::canvas::Animation)
{
    explicit Scale_Animation( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Scale_Animation(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Scale_Animation() = default;
    Scale_Animation(Scale_Animation const&) = default;
    Scale_Animation(Scale_Animation&&) = default;
    Scale_Animation& operator=(Scale_Animation const&) = default;
    Scale_Animation& operator=(Scale_Animation&&) = default;
    template <typename Derived>
    Scale_Animation(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Scale_Animation, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Scale_Animation( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Scale_Animation( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Scale_Animation( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Scale_Animation >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Scale_Animation(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Scale_Animation >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<void>::type scale_get( ::efl::eolian::out_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::out_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::out_traits< ::efl::canvas::Object>::type pivot,  ::efl::eolian::out_traits<Eina_Vector2>::type center_point) const;
    ::efl::eolian::return_traits<void>::type scale_set( ::efl::eolian::in_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::in_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type pivot,  ::efl::eolian::in_traits<Eina_Vector2>::type center_point) const;
    ::efl::eolian::return_traits<void>::type scale_absolute_get( ::efl::eolian::out_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::out_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::out_traits<Eina_Position2D>::type pivot_point) const;
    ::efl::eolian::return_traits<void>::type scale_absolute_set( ::efl::eolian::in_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::in_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::in_traits<Eina_Position2D>::type pivot_point) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_SCALE_ANIMATION_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Scale_Animation *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Scale_Animation,  ::efl::Object,  ::efl::Playable,  ::efl::canvas::Animation> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Scale_Animation const ,  ::efl::Object const ,  ::efl::Playable const ,  ::efl::canvas::Animation const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Scale_Animation> _get_wref() const { return ::efl::eo::wref<Scale_Animation>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Scale_Animation* operator->() const { return this; }
    Scale_Animation* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Scale_Animation const& lhs, Scale_Animation const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Scale_Animation const& lhs, Scale_Animation const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Scale_Animation) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Scale_Animation>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
