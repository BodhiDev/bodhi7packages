#ifndef EFL_PACK_IMPL_HH
#define EFL_PACK_IMPL_HH

#include "efl_pack.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<bool>::type Pack::pack_clear() const
{
    Eina_Bool __return_value =  ::efl_pack_clear(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack::unpack_all() const
{
    Eina_Bool __return_value =  ::efl_pack_unpack_all(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack::unpack( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
    Eina_Bool __return_value =  ::efl_pack_unpack(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack::pack( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
    Eina_Bool __return_value =  ::efl_pack(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<bool>::type Pack::pack_clear() const
{
    Eina_Bool __return_value =  ::efl_pack_clear(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack::unpack_all() const
{
    Eina_Bool __return_value =  ::efl_pack_unpack_all(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack::unpack( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
    Eina_Bool __return_value =  ::efl_pack_unpack(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack::pack( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
    Eina_Bool __return_value =  ::efl_pack(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline efl::Pack::operator ::efl::Pack() const { return *static_cast< ::efl::Pack const*>(static_cast<void const*>(this)); }
inline efl::Pack::operator ::efl::Pack&() { return *static_cast< ::efl::Pack*>(static_cast<void*>(this)); }
inline efl::Pack::operator ::efl::Pack const&() const { return *static_cast< ::efl::Pack const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
