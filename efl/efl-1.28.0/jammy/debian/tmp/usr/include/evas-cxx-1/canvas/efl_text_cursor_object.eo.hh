#ifndef EFL_TEXT_CURSOR_OBJECT_EO_HH
#define EFL_TEXT_CURSOR_OBJECT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_object.eo.h"
#include "efl_class.eo.h"
#include "efl_duplicate.eo.h"
#include "efl_object.eo.h"
#include "efl_text_cursor_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_object.eo.hh"
#include "efl_class.eo.hh"
#include "efl_duplicate.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_TEXT_CURSOR_OBJECT_FWD_GUARD
#define EFL_TEXT_CURSOR_OBJECT_FWD_GUARD
namespace efl { namespace text_cursor { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object const&> : ::std::true_type {}; } }
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
#ifndef EFL_TEXT_CURSOR_OBJECT_FWD_GUARD
#define EFL_TEXT_CURSOR_OBJECT_FWD_GUARD
namespace efl { namespace text_cursor { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace text_cursor { 
struct Object {
    ::efl::eolian::return_traits<int>::type position_get() const;
    ::efl::eolian::return_traits<void>::type position_set( ::efl::eolian::in_traits<int>::type position) const;
    ::efl::eolian::return_traits<Eina_Unicode>::type content_get() const;
    ::efl::eolian::return_traits<Eina_Rect>::type content_geometry_get() const;
    ::efl::eolian::return_traits<int>::type line_number_get() const;
    ::efl::eolian::return_traits<void>::type line_number_set( ::efl::eolian::in_traits<int>::type line_number) const;
    ::efl::eolian::return_traits<Eina_Rect>::type cursor_geometry_get( ::efl::eolian::in_traits<Efl_Text_Cursor_Type>::type ctype) const;
    ::efl::eolian::return_traits<bool>::type lower_cursor_geometry_get( ::efl::eolian::out_traits<Eina_Rect>::type geometry) const;
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type text_object_get() const;
    ::efl::eolian::return_traits<bool>::type equal( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type dst) const;
    ::efl::eolian::return_traits<int>::type compare( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type dst) const;
    ::efl::eolian::return_traits<bool>::type move( ::efl::eolian::in_traits<Efl_Text_Cursor_Move_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type char_delete() const;
    ::efl::eolian::return_traits<bool>::type line_jump_by( ::efl::eolian::in_traits<int>::type by) const;
    ::efl::eolian::return_traits<void>::type char_coord_set( ::efl::eolian::in_traits<Eina_Position2D>::type coord) const;
    ::efl::eolian::return_traits<void>::type cluster_coord_set( ::efl::eolian::in_traits<Eina_Position2D>::type coord) const;
    ::efl::eolian::return_traits<void>::type text_insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const;
    ::efl::eolian::return_traits<void>::type markup_insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type markup) const;
    ::efl::eolian::return_traits< ::std::string>::type range_markup_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const;
    ::efl::eolian::return_traits< ::std::string>::type range_text_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type range_geometry_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type range_precise_geometry_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const;
    ::efl::eolian::return_traits<void>::type range_delete( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_CURSOR_OBJECT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    operator ::efl::text_cursor::Object() const;
    operator ::efl::text_cursor::Object&();
    operator ::efl::text_cursor::Object const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object,  ::efl::Duplicate,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object const ,  ::efl::Duplicate const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace text_cursor { 
struct Object : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Duplicate)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Object( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Object(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Object() = default;
    Object(Object const&) = default;
    Object(Object&&) = default;
    Object& operator=(Object const&) = default;
    Object& operator=(Object&&) = default;
    template <typename Derived>
    Object(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Object, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<int>::type position_get() const;
    ::efl::eolian::return_traits<void>::type position_set( ::efl::eolian::in_traits<int>::type position) const;
    ::efl::eolian::return_traits<Eina_Unicode>::type content_get() const;
    ::efl::eolian::return_traits<Eina_Rect>::type content_geometry_get() const;
    ::efl::eolian::return_traits<int>::type line_number_get() const;
    ::efl::eolian::return_traits<void>::type line_number_set( ::efl::eolian::in_traits<int>::type line_number) const;
    ::efl::eolian::return_traits<Eina_Rect>::type cursor_geometry_get( ::efl::eolian::in_traits<Efl_Text_Cursor_Type>::type ctype) const;
    ::efl::eolian::return_traits<bool>::type lower_cursor_geometry_get( ::efl::eolian::out_traits<Eina_Rect>::type geometry) const;
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type text_object_get() const;
    ::efl::eolian::return_traits<bool>::type equal( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type dst) const;
    ::efl::eolian::return_traits<int>::type compare( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type dst) const;
    ::efl::eolian::return_traits<bool>::type move( ::efl::eolian::in_traits<Efl_Text_Cursor_Move_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type char_delete() const;
    ::efl::eolian::return_traits<bool>::type line_jump_by( ::efl::eolian::in_traits<int>::type by) const;
    ::efl::eolian::return_traits<void>::type char_coord_set( ::efl::eolian::in_traits<Eina_Position2D>::type coord) const;
    ::efl::eolian::return_traits<void>::type cluster_coord_set( ::efl::eolian::in_traits<Eina_Position2D>::type coord) const;
    ::efl::eolian::return_traits<void>::type text_insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const;
    ::efl::eolian::return_traits<void>::type markup_insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type markup) const;
    ::efl::eolian::return_traits< ::std::string>::type range_markup_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const;
    ::efl::eolian::return_traits< ::std::string>::type range_text_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type range_geometry_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type range_precise_geometry_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const;
    ::efl::eolian::return_traits<void>::type range_delete( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_CURSOR_OBJECT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    static struct changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_TEXT_CURSOR_OBJECT_EVENT_CHANGED; }
        typedef void parameter_type;
    } const changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object,  ::efl::Duplicate,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object const ,  ::efl::Duplicate const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Object> _get_wref() const { return ::efl::eo::wref<Object>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Object* operator->() const { return this; }
    Object* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Object const& lhs, Object const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Object const& lhs, Object const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Object) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Object>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
