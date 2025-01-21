#ifndef EFL_CONTENT_IMPL_HH
#define EFL_CONTENT_IMPL_HH

#include "efl_content.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Content::content_get() const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_content_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Content::content_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type content) const
{
    Eina_Bool __return_value =  ::efl_content_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(content));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Content::content_unset() const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_content_unset(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Content::content_get() const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_content_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Content::content_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type content) const
{
    Eina_Bool __return_value =  ::efl_content_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(content));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Content::content_unset() const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_content_unset(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
inline efl::Content::operator ::efl::Content() const { return *static_cast< ::efl::Content const*>(static_cast<void const*>(this)); }
inline efl::Content::operator ::efl::Content&() { return *static_cast< ::efl::Content*>(static_cast<void*>(this)); }
inline efl::Content::operator ::efl::Content const&() const { return *static_cast< ::efl::Content const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
