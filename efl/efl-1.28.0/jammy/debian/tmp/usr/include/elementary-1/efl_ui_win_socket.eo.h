#ifndef _EFL_UI_WIN_SOCKET_EO_H_
#define _EFL_UI_WIN_SOCKET_EO_H_

#ifndef _EFL_UI_WIN_SOCKET_EO_CLASS_TYPE
#define _EFL_UI_WIN_SOCKET_EO_CLASS_TYPE

typedef Eo Efl_Ui_Win_Socket;

#endif

#ifndef _EFL_UI_WIN_SOCKET_EO_TYPES
#define _EFL_UI_WIN_SOCKET_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief An off-screen window to be displayed in a remote process.
 *
 * The window is rendered onto an image buffer to be displayed in another
 * process' plug image object. No actual window is created for this type. The
 * window contents can then be sent over a socket so that another process
 * displays it inside a plug image.
 *
 * @ingroup Efl_Ui_Win_Socket
 */
#define EFL_UI_WIN_SOCKET_CLASS efl_ui_win_socket_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_win_socket_class_get(void) EINA_CONST;

/**
 * @brief Create a socket to provide the service for Plug widget.
 *
 * @param[in] obj The object.
 * @param[in] svcname The name of the service to be advertised. Ensure that it
 * is unique (when combined with @c svcnum) otherwise creation may fail.
 * @param[in] svcnum A number (any value, 0 being the common default) to
 * differentiate multiple instances of services with the same name.
 * @param[in] svcsys A boolean which when true specifies the creation of a
 * system-wide service to which all users can connect, otherwise the service is
 * private to the user id that created it.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Win_Socket
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_win_socket_listen(Eo *obj, const char *svcname, int svcnum, Eina_Bool svcsys);
#endif /* EFL_BETA_API_SUPPORT */

#endif
