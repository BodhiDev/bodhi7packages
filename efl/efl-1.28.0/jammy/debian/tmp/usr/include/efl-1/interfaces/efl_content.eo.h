#ifndef _EFL_CONTENT_EO_H_
#define _EFL_CONTENT_EO_H_

#ifndef _EFL_CONTENT_EO_CLASS_TYPE
#define _EFL_CONTENT_EO_CLASS_TYPE

typedef Eo Efl_Content;

#endif

#ifndef _EFL_CONTENT_EO_TYPES
#define _EFL_CONTENT_EO_TYPES


#endif
/**
 * @brief Common interface for objects that have a single sub-object as
 * content.
 *
 * This is used for the default content part of widgets, as well as for
 * individual parts through @ref Efl_Part.
 *
 * @since 1.22
 *
 * @ingroup Efl_Content
 */
#define EFL_CONTENT_INTERFACE efl_content_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_content_interface_get(void) EINA_CONST;

/**
 * @brief Sub-object currently set as this object's single content.
 *
 * If it is set multiple times, previous sub-objects are removed first.
 * Therefore, if an invalid @c content is set the object will become empty (it
 * will have no sub-object).
 *
 * @param[in] obj The object.
 * @param[in] content The sub-object.
 *
 * @return @c true if @c content was successfully swallowed.
 *
 * @since 1.22
 *
 * @ingroup Efl_Content
 */
EAPI EAPI_WEAK Eina_Bool efl_content_set(Eo *obj, Efl_Gfx_Entity *content);

/**
 * @brief Sub-object currently set as this object's single content.
 *
 * If it is set multiple times, previous sub-objects are removed first.
 * Therefore, if an invalid @c content is set the object will become empty (it
 * will have no sub-object).
 *
 * @param[in] obj The object.
 *
 * @return The sub-object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Content
 */
EAPI EAPI_WEAK Efl_Gfx_Entity *efl_content_get(const Eo *obj);

/**
 * @brief Remove the sub-object currently set as content of this object and
 * return it. This object becomes empty.
 *
 * @param[in] obj The object.
 *
 * @return Unswallowed object
 *
 * @since 1.22
 *
 * @ingroup Efl_Content
 */
EAPI EAPI_WEAK Efl_Gfx_Entity *efl_content_unset(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_CONTENT_EVENT_CONTENT_CHANGED;

/** Sent after the content is set or unset using the current content object.
 * @return Efl_Gfx_Entity *
 *
 * @since 1.22
 *
 * @ingroup Efl_Content
 */
#define EFL_CONTENT_EVENT_CONTENT_CHANGED (&(_EFL_CONTENT_EVENT_CONTENT_CHANGED))

#endif
