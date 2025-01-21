#ifndef _EFL_IO_POSITIONER_EO_H_
#define _EFL_IO_POSITIONER_EO_H_

#ifndef _EFL_IO_POSITIONER_EO_CLASS_TYPE
#define _EFL_IO_POSITIONER_EO_CLASS_TYPE

typedef Eo Efl_Io_Positioner;

#endif

#ifndef _EFL_IO_POSITIONER_EO_TYPES
#define _EFL_IO_POSITIONER_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Seek position modes
 *
 * @ingroup Efl_Io_Positioner_Whence
 */
typedef enum
{
  EFL_IO_POSITIONER_WHENCE_START = 0, /**< Seek from start of the stream/file */
  EFL_IO_POSITIONER_WHENCE_CURRENT, /**< Seek from current position */
  EFL_IO_POSITIONER_WHENCE_END /**< Seek from the end of stream/file */
} Efl_Io_Positioner_Whence;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Generic interface for objects that can change or report position.
 *
 * @ingroup Efl_Io_Positioner
 */
#define EFL_IO_POSITIONER_MIXIN efl_io_positioner_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_io_positioner_mixin_get(void) EINA_CONST;

/**
 * @brief Seek in data
 *
 * @param[in] obj The object.
 * @param[in] offset Offset in byte relative to whence
 * @param[in] whence Whence
 *
 * @return 0 on succeed, a mapping of errno otherwise
 *
 * @ingroup Efl_Io_Positioner
 */
EAPI EAPI_WEAK Eina_Error efl_io_positioner_seek(Eo *obj, int64_t offset, Efl_Io_Positioner_Whence whence);

/**
 * @brief Position property
 *
 * Try to set position object, relative to start of file. See
 * @ref efl_io_positioner_seek()
 *
 * @param[in] obj The object.
 * @param[in] position Position in file or buffer
 *
 * @return @c true if could reposition, @c false if errors.
 *
 * @ingroup Efl_Io_Positioner
 */
EAPI EAPI_WEAK Eina_Bool efl_io_positioner_position_set(Eo *obj, uint64_t position);

/**
 * @brief Position property
 *
 * @param[in] obj The object.
 *
 * @return Position in file or buffer
 *
 * @ingroup Efl_Io_Positioner
 */
EAPI EAPI_WEAK uint64_t efl_io_positioner_position_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_IO_POSITIONER_EVENT_POSITION_CHANGED;

/** Notifies position changed
 *
 * @ingroup Efl_Io_Positioner
 */
#define EFL_IO_POSITIONER_EVENT_POSITION_CHANGED (&(_EFL_IO_POSITIONER_EVENT_POSITION_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif
