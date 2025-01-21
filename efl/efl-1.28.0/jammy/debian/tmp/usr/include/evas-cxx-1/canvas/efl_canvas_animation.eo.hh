#ifndef EFL_CANVAS_ANIMATION_EO_HH
#define EFL_CANVAS_ANIMATION_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_animation.eo.h"
#include "efl_canvas_object.eo.h"
#include "efl_class.eo.h"
#include "efl_interpolator.eo.h"
#include "efl_object.eo.h"
#include "efl_playable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_object.eo.hh"
#include "efl_class.eo.hh"
#include "efl_interpolator.eo.hh"
#include "efl_object.eo.hh"
#include "efl_playable.eo.hh"
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Animation {
    ::efl::eolian::return_traits<bool>::type final_state_keep_get() const;
    ::efl::eolian::return_traits<void>::type final_state_keep_set( ::efl::eolian::in_traits<bool>::type keep) const;
    ::efl::eolian::return_traits<double>::type duration_get() const;
    ::efl::eolian::return_traits<void>::type duration_set( ::efl::eolian::in_traits<double>::type sec) const;
    ::efl::eolian::return_traits<Efl_Canvas_Animation_Repeat_Mode>::type repeat_mode_get() const;
    ::efl::eolian::return_traits<void>::type repeat_mode_set( ::efl::eolian::in_traits<Efl_Canvas_Animation_Repeat_Mode>::type mode) const;
    ::efl::eolian::return_traits<int>::type play_count_get() const;
    ::efl::eolian::return_traits<void>::type play_count_set( ::efl::eolian::in_traits<int>::type count) const;
    ::efl::eolian::return_traits<double>::type start_delay_get() const;
    ::efl::eolian::return_traits<void>::type start_delay_set( ::efl::eolian::in_traits<double>::type sec) const;
    ::efl::eolian::return_traits< ::efl::Interpolator>::type interpolator_get() const;
    ::efl::eolian::return_traits<void>::type interpolator_set( ::efl::eolian::in_traits< ::efl::Interpolator>::type interpolator) const;
    static ::efl::eolian::return_traits<double>::type default_duration_get();
    static ::efl::eolian::return_traits<void>::type default_duration_set( ::efl::eolian::in_traits<double>::type animation_time);
    ::efl::eolian::return_traits<double>::type animation_apply( ::efl::eolian::in_traits<double>::type progress,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type target) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_ANIMATION_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Animation *>(this))); }
    operator ::efl::canvas::Animation() const;
    operator ::efl::canvas::Animation&();
    operator ::efl::canvas::Animation const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Animation,  ::efl::Object,  ::efl::Playable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Animation const ,  ::efl::Object const ,  ::efl::Playable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Animation : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Playable)
{
    explicit Animation( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Animation(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Animation() = default;
    Animation(Animation const&) = default;
    Animation(Animation&&) = default;
    Animation& operator=(Animation const&) = default;
    Animation& operator=(Animation&&) = default;
    template <typename Derived>
    Animation(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Animation, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Animation( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Animation( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Animation( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Animation >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Animation(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Animation >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<bool>::type final_state_keep_get() const;
    ::efl::eolian::return_traits<void>::type final_state_keep_set( ::efl::eolian::in_traits<bool>::type keep) const;
    ::efl::eolian::return_traits<double>::type duration_get() const;
    ::efl::eolian::return_traits<void>::type duration_set( ::efl::eolian::in_traits<double>::type sec) const;
    ::efl::eolian::return_traits<Efl_Canvas_Animation_Repeat_Mode>::type repeat_mode_get() const;
    ::efl::eolian::return_traits<void>::type repeat_mode_set( ::efl::eolian::in_traits<Efl_Canvas_Animation_Repeat_Mode>::type mode) const;
    ::efl::eolian::return_traits<int>::type play_count_get() const;
    ::efl::eolian::return_traits<void>::type play_count_set( ::efl::eolian::in_traits<int>::type count) const;
    ::efl::eolian::return_traits<double>::type start_delay_get() const;
    ::efl::eolian::return_traits<void>::type start_delay_set( ::efl::eolian::in_traits<double>::type sec) const;
    ::efl::eolian::return_traits< ::efl::Interpolator>::type interpolator_get() const;
    ::efl::eolian::return_traits<void>::type interpolator_set( ::efl::eolian::in_traits< ::efl::Interpolator>::type interpolator) const;
    static ::efl::eolian::return_traits<double>::type default_duration_get();
    static ::efl::eolian::return_traits<void>::type default_duration_set( ::efl::eolian::in_traits<double>::type animation_time);
    ::efl::eolian::return_traits<double>::type animation_apply( ::efl::eolian::in_traits<double>::type progress,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type target) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_ANIMATION_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Animation *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Animation,  ::efl::Object,  ::efl::Playable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Animation const ,  ::efl::Object const ,  ::efl::Playable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Animation> _get_wref() const { return ::efl::eo::wref<Animation>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Animation* operator->() const { return this; }
    Animation* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Animation const& lhs, Animation const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Animation const& lhs, Animation const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Animation) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Animation>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
