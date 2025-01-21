#ifndef _EFL_LOOP_HANDLER_EO_H_
#define _EFL_LOOP_HANDLER_EO_H_

#ifndef _EFL_LOOP_HANDLER_EO_CLASS_TYPE
#define _EFL_LOOP_HANDLER_EO_CLASS_TYPE

typedef Eo Efl_Loop_Handler;

#endif

#ifndef _EFL_LOOP_HANDLER_EO_TYPES
#define _EFL_LOOP_HANDLER_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** A set of flags that can be OR'd together to indicate which are desired
 *
 * @ingroup Efl_Loop_Handler_Flags
 */
typedef enum
{
  EFL_LOOP_HANDLER_FLAGS_NONE = 0, /**< No I/O is desired (generally useless) */
  EFL_LOOP_HANDLER_FLAGS_READ = 1, /**< Reading is desired */
  EFL_LOOP_HANDLER_FLAGS_WRITE = 2, /**< Writing is desired */
  EFL_LOOP_HANDLER_FLAGS_ERROR = 4 /**< Error channel input is desired */
} Efl_Loop_Handler_Flags;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** An object that describes an low-level source of I/O to listen to for
 * available data to be read or written, depending on the OS and data source
 * type. When I/O becomes available various events are produced and the
 * callbacks attached to them will be called.
 *
 * @ingroup Efl_Loop_Handler
 */
#define EFL_LOOP_HANDLER_CLASS efl_loop_handler_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_loop_handler_class_get(void) EINA_CONST;

/**
 * @brief This sets what kind of I/O should be listened to only when using a fd
 * or fd_file for the handler
 *
 * @param[in] obj The object.
 * @param[in] flags The flags that indicate what kind of I/O should be listened
 * for like read, write or error channels.
 *
 * @ingroup Efl_Loop_Handler
 */
EAPI EAPI_WEAK void efl_loop_handler_active_set(Eo *obj, Efl_Loop_Handler_Flags flags);

/**
 * @brief This sets what kind of I/O should be listened to only when using a fd
 * or fd_file for the handler
 *
 * @param[in] obj The object.
 *
 * @return The flags that indicate what kind of I/O should be listened for like
 * read, write or error channels.
 *
 * @ingroup Efl_Loop_Handler
 */
EAPI EAPI_WEAK Efl_Loop_Handler_Flags efl_loop_handler_active_get(const Eo *obj);

/**
 * @brief Controls a file descriptor to listen to for I/O, which points to a
 * data pipe such as a device, socket or pipe etc.
 *
 * @param[in] obj The object.
 * @param[in] fd The file descriptor
 *
 * @ingroup Efl_Loop_Handler
 */
EAPI EAPI_WEAK void efl_loop_handler_fd_set(Eo *obj, int fd);

/**
 * @brief Controls a file descriptor to listen to for I/O, which points to a
 * data pipe such as a device, socket or pipe etc.
 *
 * @param[in] obj The object.
 *
 * @return The file descriptor
 *
 * @ingroup Efl_Loop_Handler
 */
EAPI EAPI_WEAK int efl_loop_handler_fd_get(const Eo *obj);

/**
 * @brief Controls a file descriptor to listen to for I/O that specifically
 * points to a file in storage and not a device, socket or pipe etc.
 *
 * @param[in] obj The object.
 * @param[in] fd The file descriptor
 *
 * @ingroup Efl_Loop_Handler
 */
EAPI EAPI_WEAK void efl_loop_handler_fd_file_set(Eo *obj, int fd);

/**
 * @brief Controls a file descriptor to listen to for I/O that specifically
 * points to a file in storage and not a device, socket or pipe etc.
 *
 * @param[in] obj The object.
 *
 * @return The file descriptor
 *
 * @ingroup Efl_Loop_Handler
 */
EAPI EAPI_WEAK int efl_loop_handler_fd_file_get(const Eo *obj);

/**
 * @brief Controls a windows win32 object handle to listen to for I/O. When it
 * becomes available for any data the read event will be produced.
 *
 * @param[in] obj The object.
 * @param[in] handle A win32 object handle
 *
 * @ingroup Efl_Loop_Handler
 */
EAPI EAPI_WEAK void efl_loop_handler_win32_set(Eo *obj, void *handle);

/**
 * @brief Controls a windows win32 object handle to listen to for I/O. When it
 * becomes available for any data the read event will be produced.
 *
 * @param[in] obj The object.
 *
 * @return A win32 object handle
 *
 * @ingroup Efl_Loop_Handler
 */
EAPI EAPI_WEAK void *efl_loop_handler_win32_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_HANDLER_EVENT_READ;

/** Called when a read occurs on the descriptor.
 *
 * @ingroup Efl_Loop_Handler
 */
#define EFL_LOOP_HANDLER_EVENT_READ (&(_EFL_LOOP_HANDLER_EVENT_READ))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_HANDLER_EVENT_WRITE;

/** Called when a write occurs on the descriptor.
 *
 * @ingroup Efl_Loop_Handler
 */
#define EFL_LOOP_HANDLER_EVENT_WRITE (&(_EFL_LOOP_HANDLER_EVENT_WRITE))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_HANDLER_EVENT_ERROR;

/** Called when a error occurrs on the descriptor.
 *
 * @ingroup Efl_Loop_Handler
 */
#define EFL_LOOP_HANDLER_EVENT_ERROR (&(_EFL_LOOP_HANDLER_EVENT_ERROR))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_HANDLER_EVENT_BUFFER;

/** Called when buffered data already read from the descriptor should be
 * processed.
 *
 * @ingroup Efl_Loop_Handler
 */
#define EFL_LOOP_HANDLER_EVENT_BUFFER (&(_EFL_LOOP_HANDLER_EVENT_BUFFER))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_LOOP_HANDLER_EVENT_PREPARE;

/** Called when preparing a descriptor for listening.
 *
 * @ingroup Efl_Loop_Handler
 */
#define EFL_LOOP_HANDLER_EVENT_PREPARE (&(_EFL_LOOP_HANDLER_EVENT_PREPARE))
#endif /* EFL_BETA_API_SUPPORT */

#endif
