#ifndef _EFL_NET_SERVER_UNIX_EO_H_
#define _EFL_NET_SERVER_UNIX_EO_H_

#ifndef _EFL_NET_SERVER_UNIX_EO_CLASS_TYPE
#define _EFL_NET_SERVER_UNIX_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Unix;

#endif

#ifndef _EFL_NET_SERVER_UNIX_EO_TYPES
#define _EFL_NET_SERVER_UNIX_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief An AF_UNIX server.
 *
 * The @ref efl_net_server_serve method will call bind(2) directly. This means
 * the path will be accessed and created in that method. If the created socket
 * must be subject to some special mode or user, change before executing said
 * method, for example by calling umask(2).
 *
 * @ingroup Efl_Net_Server_Unix
 */
#define EFL_NET_SERVER_UNIX_CLASS efl_net_server_unix_class_get()

ECORE_CON_API ECORE_CON_API_WEAK const Efl_Class *efl_net_server_unix_class_get(void) EINA_CONST;

/**
 * @brief AF_UNIX paths may be stale due to crashes. Remove files and try
 * again.
 *
 * If this property is @c true, then it will unlink() before bind() is done,
 * repeating this process if EADDRINUSE.
 *
 * By default it's false and you will get EADDRINUSE.
 *
 * @param[in] obj The object.
 * @param[in] unlink_before_bind If @c true, server will unlink() the path
 * before bind() is called.
 *
 * @ingroup Efl_Net_Server_Unix
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_unix_unlink_before_bind_set(Eo *obj, Eina_Bool unlink_before_bind);

/**
 * @brief AF_UNIX paths may be stale due to crashes. Remove files and try
 * again.
 *
 * If this property is @c true, then it will unlink() before bind() is done,
 * repeating this process if EADDRINUSE.
 *
 * By default it's false and you will get EADDRINUSE.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, server will unlink() the path before bind() is called.
 *
 * @ingroup Efl_Net_Server_Unix
 */
ECORE_CON_API ECORE_CON_API_WEAK Eina_Bool efl_net_server_unix_unlink_before_bind_get(const Eo *obj);

/**
 * @brief If @c true, all parent directories will be created with the given
 * mode.
 *
 * This is only effective before @ref efl_net_server_serve is called as it is
 * used from inside that method.
 *
 * @param[in] obj The object.
 * @param[in] leading_directories_create If @c true, create missing parent
 * directories. Do nothing if @c false
 * @param[in] mode The file system permissions to use (file mode)
 *
 * @ingroup Efl_Net_Server_Unix
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_unix_leading_directories_create_set(Eo *obj, Eina_Bool leading_directories_create, unsigned int mode);

/**
 * @brief If @c true, all parent directories will be created with the given
 * mode.
 *
 * This is only effective before @ref efl_net_server_serve is called as it is
 * used from inside that method.
 *
 * @param[in] obj The object.
 * @param[out] leading_directories_create If @c true, create missing parent
 * directories. Do nothing if @c false
 * @param[out] mode The file system permissions to use (file mode)
 *
 * @ingroup Efl_Net_Server_Unix
 */
ECORE_CON_API ECORE_CON_API_WEAK void efl_net_server_unix_leading_directories_create_get(const Eo *obj, Eina_Bool *leading_directories_create, unsigned int *mode);
#endif /* EFL_BETA_API_SUPPORT */

#endif
