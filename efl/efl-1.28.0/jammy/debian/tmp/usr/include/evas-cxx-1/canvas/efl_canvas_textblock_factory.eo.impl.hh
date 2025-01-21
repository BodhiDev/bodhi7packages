#ifndef EFL_CANVAS_TEXTBLOCK_FACTORY_IMPL_HH
#define EFL_CANVAS_TEXTBLOCK_FACTORY_IMPL_HH

#include "efl_canvas_textblock_factory.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Textblock_Factory::create( ::efl::eolian::in_traits< ::efl::canvas::Object>::type object,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_canvas_textblock_factory_create(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(object),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Textblock_Factory::create( ::efl::eolian::in_traits< ::efl::canvas::Object>::type object,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_canvas_textblock_factory_create(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(object),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
inline efl::canvas::Textblock_Factory::operator ::efl::canvas::Textblock_Factory() const { return *static_cast< ::efl::canvas::Textblock_Factory const*>(static_cast<void const*>(this)); }
inline efl::canvas::Textblock_Factory::operator ::efl::canvas::Textblock_Factory&() { return *static_cast< ::efl::canvas::Textblock_Factory*>(static_cast<void*>(this)); }
inline efl::canvas::Textblock_Factory::operator ::efl::canvas::Textblock_Factory const&() const { return *static_cast< ::efl::canvas::Textblock_Factory const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
