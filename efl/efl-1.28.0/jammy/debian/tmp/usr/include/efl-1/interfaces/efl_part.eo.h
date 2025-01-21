#ifndef _EFL_PART_EO_H_
#define _EFL_PART_EO_H_

#ifndef _EFL_PART_EO_CLASS_TYPE
#define _EFL_PART_EO_CLASS_TYPE

typedef Eo Efl_Part;

#endif

#ifndef _EFL_PART_EO_TYPES
#define _EFL_PART_EO_TYPES


#endif
/**
 * @brief Interface for objects supporting named parts.
 *
 * An object implementing this interface will be able to provide access to some
 * of its sub-objects by name. This gives access to parts as defined in a
 * widget's theme.
 *
 * Part proxy objects have a special lifetime that is limited to one and only
 * one function call. This behavior is implemented in efl_part() which call
 * @ref efl_part_get(). Calling @ref efl_part_get() directly should be avoided.
 *
 * In other words, the caller does not hold a reference to this proxy object.
 * It may be possible, in languages that allow it, to get an extra reference to
 * this part object and extend its lifetime to more than a single function
 * call.
 *
 * In pseudo-code, this means only the following two use cases are supported:
 *
 * obj.func(part(obj, "part"), args)
 *
 * And:
 *
 * part = ref(part(obj, "part")) func1(part, args) func2(part, args)
 * func3(part, args) unref(part)
 *
 * @since 1.22
 *
 * @ingroup Efl_Part
 */
#define EFL_PART_INTERFACE efl_part_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_part_interface_get(void) EINA_CONST;

#ifdef EFL_PART_PROTECTED
/**
 * @brief Get a proxy object referring to a part of an object.
 *
 * @param[in] obj The object.
 * @param[in] name The part name.
 *
 * @return A (proxy) object, valid for a single call.
 *
 * @since 1.22
 *
 * @ingroup Efl_Part
 */
EAPI EAPI_WEAK Efl_Object *efl_part_get(const Eo *obj, const char *name);
#endif

#endif
