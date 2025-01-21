#ifndef _EFL_GFX_SIZE_CLASS_EO_H_
#define _EFL_GFX_SIZE_CLASS_EO_H_

#ifndef _EFL_GFX_SIZE_CLASS_EO_CLASS_TYPE
#define _EFL_GFX_SIZE_CLASS_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Size_Class;

#endif

#ifndef _EFL_GFX_SIZE_CLASS_EO_TYPES
#define _EFL_GFX_SIZE_CLASS_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Efl Gfx Size Class interface
 *
 * @ingroup Efl_Gfx_Size_Class
 */
#define EFL_GFX_SIZE_CLASS_INTERFACE efl_gfx_size_class_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_size_class_interface_get(void) EINA_CONST;

/**
 * @brief Width and height of size class.
 *
 * This property sets width and height for a size class. This will make all
 * edje parts in the specified object that have the specified size class update
 * their size with given values. When reading, these values will only be valid
 * until the size class is changed or the edje object is deleted.
 *
 * @param[in] obj The object.
 * @param[in] size_class The name of size class
 * @param[in] minw minimum width
 * @param[in] minh minimum height
 * @param[in] maxw maximum width
 * @param[in] maxh maximum height
 *
 * @return @c true, on success or @c false, on error
 *
 * @ingroup Efl_Gfx_Size_Class
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_size_class_set(Eo *obj, const char *size_class, int minw, int minh, int maxw, int maxh);

/**
 * @brief Width and height of size class.
 *
 * This property sets width and height for a size class. This will make all
 * edje parts in the specified object that have the specified size class update
 * their size with given values. When reading, these values will only be valid
 * until the size class is changed or the edje object is deleted.
 *
 * @param[in] obj The object.
 * @param[in] size_class The name of size class
 * @param[out] minw minimum width
 * @param[out] minh minimum height
 * @param[out] maxw maximum width
 * @param[out] maxh maximum height
 *
 * @return @c true, on success or @c false, on error
 *
 * @ingroup Efl_Gfx_Size_Class
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_size_class_get(const Eo *obj, const char *size_class, int *minw, int *minh, int *maxw, int *maxh);

/**
 * @brief Delete the size class.
 *
 * This function deletes any values for the specified size class.
 *
 * Deleting the size class will revert it to the values defined by
 * @ref efl_gfx_size_class_set() or the size class defined in the theme file.
 *
 * @param[in] obj The object.
 * @param[in] size_class The size class to be deleted.
 *
 * @ingroup Efl_Gfx_Size_Class
 */
EAPI EAPI_WEAK void efl_gfx_size_class_del(Eo *obj, const char *size_class);
#endif /* EFL_BETA_API_SUPPORT */

#endif
