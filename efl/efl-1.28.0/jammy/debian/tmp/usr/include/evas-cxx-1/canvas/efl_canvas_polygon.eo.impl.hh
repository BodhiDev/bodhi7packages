#ifndef EFL_CANVAS_POLYGON_IMPL_HH
#define EFL_CANVAS_POLYGON_IMPL_HH

#include "efl_canvas_polygon.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Polygon::point_add( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
     ::efl_canvas_polygon_point_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Polygon::points_clear() const
{
     ::efl_canvas_polygon_points_clear(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Polygon::point_add( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
     ::efl_canvas_polygon_point_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Polygon::points_clear() const
{
     ::efl_canvas_polygon_points_clear(_eo_ptr());
}
#endif
inline efl::canvas::Polygon::operator ::efl::canvas::Polygon() const { return *static_cast< ::efl::canvas::Polygon const*>(static_cast<void const*>(this)); }
inline efl::canvas::Polygon::operator ::efl::canvas::Polygon&() { return *static_cast< ::efl::canvas::Polygon*>(static_cast<void*>(this)); }
inline efl::canvas::Polygon::operator ::efl::canvas::Polygon const&() const { return *static_cast< ::efl::canvas::Polygon const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
