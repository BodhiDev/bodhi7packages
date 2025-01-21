#ifndef EFL_FILE_IMPL_HH
#define EFL_FILE_IMPL_HH

#include "efl_file.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<const Eina_File*>::type File::mmap_get() const
{
    const Eina_File * __return_value =  ::efl_file_mmap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Eina_File*>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Error>::type File::mmap_set( ::efl::eolian::in_traits<const Eina_File*>::type f) const
{
    Eina_Error __return_value =  ::efl_file_mmap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_File *,  ::efl::eolian::in_traits<const Eina_File*>::type>(f));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type File::file_get() const
{
    const char * __return_value =  ::efl_file_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Error>::type File::file_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type file) const
{
    Eina_Error __return_value =  ::efl_file_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(file));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type File::key_get() const
{
    const char * __return_value =  ::efl_file_key_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type File::key_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
     ::efl_file_key_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
}
inline ::efl::eolian::return_traits<bool>::type File::loaded_get() const
{
    Eina_Bool __return_value =  ::efl_file_loaded_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Error>::type File::load() const
{
    Eina_Error __return_value =  ::efl_file_load(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type File::unload() const
{
     ::efl_file_unload(_eo_ptr());
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<const Eina_File*>::type File::mmap_get() const
{
    const Eina_File * __return_value =  ::efl_file_mmap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Eina_File*>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Error>::type File::mmap_set( ::efl::eolian::in_traits<const Eina_File*>::type f) const
{
    Eina_Error __return_value =  ::efl_file_mmap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_File *,  ::efl::eolian::in_traits<const Eina_File*>::type>(f));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type File::file_get() const
{
    const char * __return_value =  ::efl_file_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Error>::type File::file_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type file) const
{
    Eina_Error __return_value =  ::efl_file_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(file));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type File::key_get() const
{
    const char * __return_value =  ::efl_file_key_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type File::key_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
     ::efl_file_key_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
}
inline ::efl::eolian::return_traits<bool>::type File::loaded_get() const
{
    Eina_Bool __return_value =  ::efl_file_loaded_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Error>::type File::load() const
{
    Eina_Error __return_value =  ::efl_file_load(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type File::unload() const
{
     ::efl_file_unload(_eo_ptr());
}
inline efl::File::operator ::efl::File() const { return *static_cast< ::efl::File const*>(static_cast<void const*>(this)); }
inline efl::File::operator ::efl::File&() { return *static_cast< ::efl::File*>(static_cast<void*>(this)); }
inline efl::File::operator ::efl::File const&() const { return *static_cast< ::efl::File const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
