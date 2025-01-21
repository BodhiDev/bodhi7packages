#ifndef _EFL_ACCESS_VALUE_EO_H_
#define _EFL_ACCESS_VALUE_EO_H_

#ifndef _EFL_ACCESS_VALUE_EO_CLASS_TYPE
#define _EFL_ACCESS_VALUE_EO_CLASS_TYPE

typedef Eo Efl_Access_Value;

#endif

#ifndef _EFL_ACCESS_VALUE_EO_TYPES
#define _EFL_ACCESS_VALUE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary Access value interface
 *
 * @ingroup Efl_Access_Value
 */
#define EFL_ACCESS_VALUE_INTERFACE efl_access_value_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_access_value_interface_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
/**
 * @brief Value and text displayed bye accessible widget.
 *
 * @param[in] obj The object.
 * @param[in] value Value of widget casted to floating point number.
 * @param[in] text string describing value in given context eg. small, enough
 *
 * @return @c true if setting widgets value has succeeded, otherwise @c false .
 *
 * @ingroup Efl_Access_Value
 */
EAPI EAPI_WEAK Eina_Bool efl_access_value_and_text_set(Eo *obj, double value, const char *text);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
/**
 * @brief Value and text displayed bye accessible widget.
 *
 * @param[in] obj The object.
 * @param[out] value Value of widget casted to floating point number.
 * @param[out] text string describing value in given context eg. small, enough
 *
 * @ingroup Efl_Access_Value
 */
EAPI EAPI_WEAK void efl_access_value_and_text_get(const Eo *obj, double *value, const char **text);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
/**
 * @brief The range of all possible values and its description
 *
 * @param[in] obj The object.
 * @param[out] lower_limit Lower limit of the range
 * @param[out] upper_limit Upper limit of the range
 * @param[out] description Description of the range
 *
 * @ingroup Efl_Access_Value
 */
EAPI EAPI_WEAK void efl_access_value_range_get(const Eo *obj, double *lower_limit, double *upper_limit, const char **description);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
/**
 * @brief Gets an minimal incrementation value
 *
 * @param[in] obj The object.
 *
 * @return Minimal incrementation value
 *
 * @ingroup Efl_Access_Value
 */
EAPI EAPI_WEAK double efl_access_value_increment_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */
#endif /* EFL_BETA_API_SUPPORT */

#endif
