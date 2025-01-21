#ifndef EFL_PACK_LINEAR_IMPL_HH
#define EFL_PACK_LINEAR_IMPL_HH

#include "efl_pack_linear.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<bool>::type Pack_Linear::pack_begin( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
    Eina_Bool __return_value =  ::efl_pack_begin(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack_Linear::pack_end( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
    Eina_Bool __return_value =  ::efl_pack_end(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack_Linear::pack_before( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type existing) const
{
    Eina_Bool __return_value =  ::efl_pack_before(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(existing));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack_Linear::pack_after( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type existing) const
{
    Eina_Bool __return_value =  ::efl_pack_after(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(existing));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack_Linear::pack_at( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const
{
    Eina_Bool __return_value =  ::efl_pack_at(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Pack_Linear::pack_content_get( ::efl::eolian::in_traits<int>::type index) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_pack_content_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Pack_Linear::pack_index_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
    int __return_value =  ::efl_pack_index_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Pack_Linear::pack_unpack_at( ::efl::eolian::in_traits<int>::type index) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_pack_unpack_at(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<bool>::type Pack_Linear::pack_begin( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
    Eina_Bool __return_value =  ::efl_pack_begin(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack_Linear::pack_end( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
    Eina_Bool __return_value =  ::efl_pack_end(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack_Linear::pack_before( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type existing) const
{
    Eina_Bool __return_value =  ::efl_pack_before(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(existing));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack_Linear::pack_after( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type existing) const
{
    Eina_Bool __return_value =  ::efl_pack_after(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(existing));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Pack_Linear::pack_at( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const
{
    Eina_Bool __return_value =  ::efl_pack_at(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Pack_Linear::pack_content_get( ::efl::eolian::in_traits<int>::type index) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_pack_content_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Pack_Linear::pack_index_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
    int __return_value =  ::efl_pack_index_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Pack_Linear::pack_unpack_at( ::efl::eolian::in_traits<int>::type index) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_pack_unpack_at(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
inline efl::Pack_Linear::operator ::efl::Pack_Linear() const { return *static_cast< ::efl::Pack_Linear const*>(static_cast<void const*>(this)); }
inline efl::Pack_Linear::operator ::efl::Pack_Linear&() { return *static_cast< ::efl::Pack_Linear*>(static_cast<void*>(this)); }
inline efl::Pack_Linear::operator ::efl::Pack_Linear const&() const { return *static_cast< ::efl::Pack_Linear const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
