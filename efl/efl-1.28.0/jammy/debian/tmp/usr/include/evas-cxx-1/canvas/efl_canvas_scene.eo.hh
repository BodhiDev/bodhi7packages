#ifndef EFL_CANVAS_SCENE_EO_HH
#define EFL_CANVAS_SCENE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_scene.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_input_device.eo.h"
#include "efl_input_focus.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
#include "efl_input_device.eo.hh"
#include "efl_input_focus.eo.hh"
#ifndef EFL_CANVAS_SCENE_FWD_GUARD
#define EFL_CANVAS_SCENE_FWD_GUARD
namespace efl { namespace canvas { 
struct Scene;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scene> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scene&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scene const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scene const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_ENTITY_FWD_GUARD
#define EFL_GFX_ENTITY_FWD_GUARD
namespace efl { namespace gfx { 
struct Entity;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Scene {
    ::efl::eolian::return_traits<bool>::type image_max_size_get( ::efl::eolian::out_traits<Eina_Size2D>::type max) const;
    ::efl::eolian::return_traits<bool>::type group_objects_calculating_get() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::input::Device>::type device_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::input::Device>::type seat_get( ::efl::eolian::in_traits<int>::type id) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::input::Device>::type seat_default_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type pointer_position_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat,  ::efl::eolian::out_traits<Eina_Position2D>::type pos) const;
#endif
    ::efl::eolian::return_traits<void>::type group_objects_calculate() const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type objects_at_xy_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type object_top_at_xy_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type objects_in_rectangle_get( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type object_top_in_rectangle_get( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type seats() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_SCENE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Scene *>(this))); }
    operator ::efl::canvas::Scene() const;
    operator ::efl::canvas::Scene&();
    operator ::efl::canvas::Scene const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Scene> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Scene const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Scene : private ::efl::eo::concrete
{
    explicit Scene( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Scene(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Scene() = default;
    Scene(Scene const&) = default;
    Scene(Scene&&) = default;
    Scene& operator=(Scene const&) = default;
    Scene& operator=(Scene&&) = default;
    template <typename Derived>
    Scene(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Scene, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type image_max_size_get( ::efl::eolian::out_traits<Eina_Size2D>::type max) const;
    ::efl::eolian::return_traits<bool>::type group_objects_calculating_get() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::input::Device>::type device_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::input::Device>::type seat_get( ::efl::eolian::in_traits<int>::type id) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::input::Device>::type seat_default_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type pointer_position_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat,  ::efl::eolian::out_traits<Eina_Position2D>::type pos) const;
#endif
    ::efl::eolian::return_traits<void>::type group_objects_calculate() const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type objects_at_xy_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type object_top_at_xy_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type objects_in_rectangle_get( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type object_top_in_rectangle_get( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type seats() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_SCENE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Scene *>(this))); }
    static struct scene_focus_in_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_SCENE_EVENT_SCENE_FOCUS_IN; }
        typedef void parameter_type;
    } const scene_focus_in_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scene_focus_in_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scene_focus_in_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scene_focus_in_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scene_focus_in_event, *this, std::bind(function));
    }
#endif
    static struct scene_focus_out_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_SCENE_EVENT_SCENE_FOCUS_OUT; }
        typedef void parameter_type;
    } const scene_focus_out_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scene_focus_out_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scene_focus_out_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scene_focus_out_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scene_focus_out_event, *this, std::bind(function));
    }
#endif
    static struct object_focus_in_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_SCENE_EVENT_OBJECT_FOCUS_IN; }
        typedef  ::efl::input::Focus parameter_type;
    } const object_focus_in_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    object_focus_in_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(object_focus_in_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    object_focus_in_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(object_focus_in_event, *this, std::bind(function));
    }
#endif
    static struct object_focus_out_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_SCENE_EVENT_OBJECT_FOCUS_OUT; }
        typedef  ::efl::input::Focus parameter_type;
    } const object_focus_out_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    object_focus_out_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(object_focus_out_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    object_focus_out_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(object_focus_out_event, *this, std::bind(function));
    }
#endif
    static struct render_pre_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_SCENE_EVENT_RENDER_PRE; }
        typedef void parameter_type;
    } const render_pre_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    render_pre_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(render_pre_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    render_pre_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(render_pre_event, *this, std::bind(function));
    }
#endif
#ifdef EFL_CANVAS_SCENE_BETA
    static struct render_post_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_SCENE_EVENT_RENDER_POST; }
        typedef Efl_Gfx_Event_Render_Post parameter_type;
    } const render_post_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    render_post_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(render_post_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    render_post_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(render_post_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_SCENE_BETA
    static struct device_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_SCENE_EVENT_DEVICE_CHANGED; }
        typedef  ::efl::input::Device parameter_type;
    } const device_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    device_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(device_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    device_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(device_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_SCENE_BETA
    static struct device_added_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_SCENE_EVENT_DEVICE_ADDED; }
        typedef  ::efl::input::Device parameter_type;
    } const device_added_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    device_added_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(device_added_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    device_added_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(device_added_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_SCENE_BETA
    static struct device_removed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_SCENE_EVENT_DEVICE_REMOVED; }
        typedef  ::efl::input::Device parameter_type;
    } const device_removed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    device_removed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(device_removed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    device_removed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(device_removed_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Scene> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Scene const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Scene> _get_wref() const { return ::efl::eo::wref<Scene>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Scene* operator->() const { return this; }
    Scene* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Scene const& lhs, Scene const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Scene const& lhs, Scene const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Scene) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Scene>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
