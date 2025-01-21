#ifndef EFL_CANVAS_OBJECT_ANIMATION_EO_HH
#define EFL_CANVAS_OBJECT_ANIMATION_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_animation.eo.h"
#include "efl_canvas_object_animation.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_animation.eo.hh"
#ifndef EFL_CANVAS_OBJECT_ANIMATION_FWD_GUARD
#define EFL_CANVAS_OBJECT_ANIMATION_FWD_GUARD
namespace efl { namespace canvas { 
struct Object_Animation;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Object_Animation {
    ::efl::eolian::return_traits< ::efl::canvas::Animation>::type animation_get() const;
    ::efl::eolian::return_traits<double>::type animation_progress_get() const;
    ::efl::eolian::return_traits<bool>::type animation_pause_get() const;
    ::efl::eolian::return_traits<void>::type animation_pause_set( ::efl::eolian::in_traits<bool>::type pause) const;
    ::efl::eolian::return_traits<void>::type animation_start( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type animation,  ::efl::eolian::in_traits<double>::type speed,  ::efl::eolian::in_traits<double>::type starting_progress) const;
    ::efl::eolian::return_traits<void>::type animation_stop() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_OBJECT_ANIMATION_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object_Animation *>(this))); }
    operator ::efl::canvas::Object_Animation() const;
    operator ::efl::canvas::Object_Animation&();
    operator ::efl::canvas::Object_Animation const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object_Animation> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object_Animation const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Object_Animation : private ::efl::eo::concrete
{
    explicit Object_Animation( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Object_Animation(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Object_Animation() = default;
    Object_Animation(Object_Animation const&) = default;
    Object_Animation(Object_Animation&&) = default;
    Object_Animation& operator=(Object_Animation const&) = default;
    Object_Animation& operator=(Object_Animation&&) = default;
    template <typename Derived>
    Object_Animation(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Object_Animation, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::canvas::Animation>::type animation_get() const;
    ::efl::eolian::return_traits<double>::type animation_progress_get() const;
    ::efl::eolian::return_traits<bool>::type animation_pause_get() const;
    ::efl::eolian::return_traits<void>::type animation_pause_set( ::efl::eolian::in_traits<bool>::type pause) const;
    ::efl::eolian::return_traits<void>::type animation_start( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type animation,  ::efl::eolian::in_traits<double>::type speed,  ::efl::eolian::in_traits<double>::type starting_progress) const;
    ::efl::eolian::return_traits<void>::type animation_stop() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_OBJECT_ANIMATION_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object_Animation *>(this))); }
    static struct animation_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_OBJECT_ANIMATION_EVENT_ANIMATION_CHANGED; }
        typedef  ::efl::canvas::Animation parameter_type;
    } const animation_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    animation_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(animation_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    animation_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(animation_changed_event, *this, std::bind(function));
    }
#endif
    static struct animation_progress_updated_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_OBJECT_ANIMATION_EVENT_ANIMATION_PROGRESS_UPDATED; }
        typedef double parameter_type;
    } const animation_progress_updated_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    animation_progress_updated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(animation_progress_updated_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    animation_progress_updated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(animation_progress_updated_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object_Animation> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object_Animation const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Object_Animation> _get_wref() const { return ::efl::eo::wref<Object_Animation>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Object_Animation* operator->() const { return this; }
    Object_Animation* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Object_Animation const& lhs, Object_Animation const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Object_Animation const& lhs, Object_Animation const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Object_Animation) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Object_Animation>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
