#ifndef _EFL_ACCESS_COMPONENT_EO_H_
#define _EFL_ACCESS_COMPONENT_EO_H_

#ifndef _EFL_ACCESS_COMPONENT_EO_CLASS_TYPE
#define _EFL_ACCESS_COMPONENT_EO_CLASS_TYPE

typedef Eo Efl_Access_Component;

#endif

#ifndef _EFL_ACCESS_COMPONENT_EO_TYPES
#define _EFL_ACCESS_COMPONENT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** AT-SPI component mixin
 *
 * @ingroup Efl_Access_Component
 */
#define EFL_ACCESS_COMPONENT_MIXIN efl_access_component_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_access_component_mixin_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
/**
 * @brief Gets the depth at which the component is shown in relation to other
 * components in the same container.
 *
 * @param[in] obj The object.
 *
 * @return Z order of component
 *
 * @ingroup Efl_Access_Component
 */
EAPI EAPI_WEAK int efl_access_component_z_order_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
/**
 * @brief Geometry of accessible widget.
 *
 * @param[in] obj The object.
 * @param[in] screen_coords If @c true x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] rect The geometry.
 *
 * @return @c true if geometry was set, @c false otherwise
 *
 * @ingroup Efl_Access_Component
 */
EAPI EAPI_WEAK Eina_Bool efl_access_component_extents_set(Eo *obj, Eina_Bool screen_coords, Eina_Rect rect);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
/**
 * @brief Geometry of accessible widget.
 *
 * @param[in] obj The object.
 * @param[in] screen_coords If @c true x and y values will be relative to
 * screen origin, otherwise relative to canvas
 *
 * @return The geometry.
 *
 * @ingroup Efl_Access_Component
 */
EAPI EAPI_WEAK Eina_Rect efl_access_component_extents_get(const Eo *obj, Eina_Bool screen_coords);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
/**
 * @brief Position of accessible widget.
 *
 * @param[in] obj The object.
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 *
 * @return @c true if position was set, @c false otherwise
 *
 * @ingroup Efl_Access_Component
 */
EAPI EAPI_WEAK Eina_Bool efl_access_component_screen_position_set(Eo *obj, int x, int y);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
/**
 * @brief Position of accessible widget.
 *
 * @param[in] obj The object.
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 *
 * @ingroup Efl_Access_Component
 */
EAPI EAPI_WEAK void efl_access_component_screen_position_get(const Eo *obj, int *x, int *y);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
/**
 * @brief Contains accessible widget
 *
 * @param[in] obj The object.
 * @param[in] screen_coords If @c true x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 *
 * @return @c true if params have been set, @c false otherwise
 *
 * @ingroup Efl_Access_Component
 */
EAPI EAPI_WEAK Eina_Bool efl_access_component_contains(Eo *obj, Eina_Bool screen_coords, int x, int y);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
/**
 * @brief Focuses accessible widget.
 *
 * @param[in] obj The object.
 *
 * @return @c true if focus grab focus succeed, @c false otherwise.
 *
 * @ingroup Efl_Access_Component
 */
EAPI EAPI_WEAK Eina_Bool efl_access_component_focus_grab(Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
/**
 * @brief Gets top component object occupying space at given coordinates.
 *
 * @param[in] obj The object.
 * @param[in] screen_coords If @c true x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 *
 * @return Top component object at given coordinate
 *
 * @ingroup Efl_Access_Component
 */
EAPI EAPI_WEAK Efl_Object *efl_access_component_accessible_at_point_get(Eo *obj, Eina_Bool screen_coords, int x, int y);
#endif
#endif /* EFL_BETA_API_SUPPORT */
#endif /* EFL_BETA_API_SUPPORT */

#endif
