#ifndef EFL_FILE_SAVE_IMPL_HH
#define EFL_FILE_SAVE_IMPL_HH

#include "efl_file_save.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<bool>::type File_Save::save( ::efl::eolian::in_traits< ::efl::eina::string_view>::type file,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<const Efl_File_Save_Info *>::type info) const
{
    Eina_Bool __return_value =  ::efl_file_save(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(file),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c<const Efl_File_Save_Info *,  ::efl::eolian::in_traits<const Efl_File_Save_Info *>::type>(info));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<bool>::type File_Save::save( ::efl::eolian::in_traits< ::efl::eina::string_view>::type file,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<const Efl_File_Save_Info *>::type info) const
{
    Eina_Bool __return_value =  ::efl_file_save(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(file),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c<const Efl_File_Save_Info *,  ::efl::eolian::in_traits<const Efl_File_Save_Info *>::type>(info));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline efl::File_Save::operator ::efl::File_Save() const { return *static_cast< ::efl::File_Save const*>(static_cast<void const*>(this)); }
inline efl::File_Save::operator ::efl::File_Save&() { return *static_cast< ::efl::File_Save*>(static_cast<void*>(this)); }
inline efl::File_Save::operator ::efl::File_Save const&() const { return *static_cast< ::efl::File_Save const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
