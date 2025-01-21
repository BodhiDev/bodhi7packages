#ifndef _EFL_CANVAS_PROXY_EO_H_
#define _EFL_CANVAS_PROXY_EO_H_

#ifndef _EFL_CANVAS_PROXY_EO_CLASS_TYPE
#define _EFL_CANVAS_PROXY_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Proxy;

#endif

#ifndef _EFL_CANVAS_PROXY_EO_TYPES
#define _EFL_CANVAS_PROXY_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Low-level proxy image object.
 *
 * A proxy is a special kind of image containing the pixels from a source
 * object attached to it. It can be used to apply some sort of image
 * transformation to any object (eg. filters, map or zoom).
 *
 * @ingroup Efl_Canvas_Proxy
 */
#define EFL_CANVAS_PROXY_CLASS efl_canvas_proxy_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_proxy_class_get(void) EINA_CONST;

/**
 * @brief The source object for this proxy.
 *
 * The proxy object will mirror the rendering contents of a given source object
 * in its drawing region, without affecting that source in any way. The source
 * must be another valid @ref Efl_Canvas_Object. Other effects may be applied
 * to the proxy, such as a map (see @ref Efl_Gfx_Mapping) to create a
 * reflection of the original object (for example).
 *
 * Any existing source object will be removed after this call.
 *
 * @note This property should be set as soon as creating a proxy object,
 * otherwise the proxy will do nothing.
 *
 * @warning You cannot set a proxy as another proxy's source.
 *
 * @param[in] obj The object.
 * @param[in] src Source object to use for the proxy.
 *
 * @return Returns @c true in case of success.
 *
 * @ingroup Efl_Canvas_Proxy
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_proxy_source_set(Eo *obj, Efl_Canvas_Object *src);

/**
 * @brief The source object for this proxy.
 *
 * The proxy object will mirror the rendering contents of a given source object
 * in its drawing region, without affecting that source in any way. The source
 * must be another valid @ref Efl_Canvas_Object. Other effects may be applied
 * to the proxy, such as a map (see @ref Efl_Gfx_Mapping) to create a
 * reflection of the original object (for example).
 *
 * Any existing source object will be removed after this call.
 *
 * @note This property should be set as soon as creating a proxy object,
 * otherwise the proxy will do nothing.
 *
 * @warning You cannot set a proxy as another proxy's source.
 *
 * @param[in] obj The object.
 *
 * @return Source object to use for the proxy.
 *
 * @ingroup Efl_Canvas_Proxy
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Object *efl_canvas_proxy_source_get(const Eo *obj);

/**
 * @brief Clip this proxy object with the source object's clipper.
 *
 * Use this if you want to overlay an existing object with its proxy, and apply
 * some sort of transformation on it.
 *
 * @c true means both objects will share the same clip.
 *
 * @param[in] obj The object.
 * @param[in] source_clip Whether @c obj is clipped by the source clipper
 * ($true) or not ($false).
 *
 * @ingroup Efl_Canvas_Proxy
 */
EVAS_API EVAS_API_WEAK void efl_canvas_proxy_source_clip_set(Eo *obj, Eina_Bool source_clip);

/**
 * @brief Clip this proxy object with the source object's clipper.
 *
 * Use this if you want to overlay an existing object with its proxy, and apply
 * some sort of transformation on it.
 *
 * @c true means both objects will share the same clip.
 *
 * @param[in] obj The object.
 *
 * @return Whether @c obj is clipped by the source clipper ($true) or not
 * ($false).
 *
 * @ingroup Efl_Canvas_Proxy
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_proxy_source_clip_get(const Eo *obj);

/**
 * @brief Defines whether the events on this object are repeated to the source.
 *
 * If @c source is @c true, it will make events on @c obj to also be repeated
 * for the source object (see @ref efl_canvas_proxy_source_set). Even the
 * @c obj and source geometries are different, the event position will be
 * transformed to the source object's space.
 *
 * If @c source is @c false, events occurring on @c obj will be processed only
 * on it.
 *
 * @param[in] obj The object.
 * @param[in] repeat Whether this object should pass events ($true) or not
 * ($false) to its source.
 *
 * @ingroup Efl_Canvas_Proxy
 */
EVAS_API EVAS_API_WEAK void efl_canvas_proxy_source_events_set(Eo *obj, Eina_Bool repeat);

/**
 * @brief Defines whether the events on this object are repeated to the source.
 *
 * If @c source is @c true, it will make events on @c obj to also be repeated
 * for the source object (see @ref efl_canvas_proxy_source_set). Even the
 * @c obj and source geometries are different, the event position will be
 * transformed to the source object's space.
 *
 * If @c source is @c false, events occurring on @c obj will be processed only
 * on it.
 *
 * @param[in] obj The object.
 *
 * @return Whether this object should pass events ($true) or not ($false) to
 * its source.
 *
 * @ingroup Efl_Canvas_Proxy
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_proxy_source_events_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
