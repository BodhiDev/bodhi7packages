#ifndef _EFL_PLAYABLE_EO_H_
#define _EFL_PLAYABLE_EO_H_

#ifndef _EFL_PLAYABLE_EO_CLASS_TYPE
#define _EFL_PLAYABLE_EO_CLASS_TYPE

typedef Eo Efl_Playable;

#endif

#ifndef _EFL_PLAYABLE_EO_TYPES
#define _EFL_PLAYABLE_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl media playable interface
 *
 * @ingroup Efl_Playable
 */
#define EFL_PLAYABLE_INTERFACE efl_playable_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_playable_interface_get(void) EINA_CONST;

/**
 * @brief Get the length of play for the media file.
 *
 * @param[in] obj The object.
 *
 * @return The length of the stream in seconds.
 *
 * @ingroup Efl_Playable
 */
EAPI EAPI_WEAK double efl_playable_length_get(const Eo *obj);

EAPI EAPI_WEAK Eina_Bool efl_playable_get(const Eo *obj);

/**
 * @brief Get whether the media file is seekable.
 *
 * @param[in] obj The object.
 *
 * @return @c true if seekable.
 *
 * @ingroup Efl_Playable
 */
EAPI EAPI_WEAK Eina_Bool efl_playable_seekable_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
