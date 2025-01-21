#ifndef _EFL_GFX_HINT_EO_H_
#define _EFL_GFX_HINT_EO_H_

#ifndef _EFL_GFX_HINT_EO_CLASS_TYPE
#define _EFL_GFX_HINT_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Hint;

#endif

#ifndef _EFL_GFX_HINT_EO_TYPES
#define _EFL_GFX_HINT_EO_TYPES

#ifndef EFL_GFX_HINT_EXPAND
/** Use with @ref efl_gfx_hint_weight_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Hint_Expand
 */
#define EFL_GFX_HINT_EXPAND 1.000000
#endif

#ifndef EFL_GFX_HINT_ALIGN_LEFT
/** Use with @ref efl_gfx_hint_align_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Hint_Align_Left
 */
#define EFL_GFX_HINT_ALIGN_LEFT 0.000000
#endif

#ifndef EFL_GFX_HINT_ALIGN_RIGHT
/** Use with @ref efl_gfx_hint_align_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Hint_Align_Right
 */
#define EFL_GFX_HINT_ALIGN_RIGHT 1.000000
#endif

#ifndef EFL_GFX_HINT_ALIGN_TOP
/** Use with @ref efl_gfx_hint_align_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Hint_Align_Top
 */
#define EFL_GFX_HINT_ALIGN_TOP 0.000000
#endif

#ifndef EFL_GFX_HINT_ALIGN_BOTTOM
/** Use with @ref efl_gfx_hint_align_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Hint_Align_Bottom
 */
#define EFL_GFX_HINT_ALIGN_BOTTOM 1.000000
#endif

#ifndef EFL_GFX_HINT_ALIGN_CENTER
/** Use with @ref efl_gfx_hint_align_get.
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Hint_Align_Center
 */
#define EFL_GFX_HINT_ALIGN_CENTER 0.500000
#endif


#endif
/** Efl graphics hint interface
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
#define EFL_GFX_HINT_INTERFACE efl_gfx_hint_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_hint_interface_get(void) EINA_CONST;

/**
 * @brief Defines the aspect ratio to respect when scaling this object.
 *
 * The aspect ratio is defined as the width / height ratio of the object.
 * Depending on the object and its container, this hint may or may not be fully
 * respected.
 *
 * If any of the given aspect ratio terms are 0, the object's container will
 * ignore the aspect and scale this object to occupy the whole available area,
 * for any given policy.
 *
 * @param[in] obj The object.
 * @param[in] mode Mode of interpretation.
 * @param[in] sz Base size to use for aspecting.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_aspect_set(Eo *obj, Efl_Gfx_Hint_Aspect mode, Eina_Size2D sz);

/**
 * @brief Defines the aspect ratio to respect when scaling this object.
 *
 * The aspect ratio is defined as the width / height ratio of the object.
 * Depending on the object and its container, this hint may or may not be fully
 * respected.
 *
 * If any of the given aspect ratio terms are 0, the object's container will
 * ignore the aspect and scale this object to occupy the whole available area,
 * for any given policy.
 *
 * @param[in] obj The object.
 * @param[out] mode Mode of interpretation.
 * @param[out] sz Base size to use for aspecting.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_aspect_get(const Eo *obj, Efl_Gfx_Hint_Aspect *mode, Eina_Size2D *sz);

/**
 * @brief Hints on the object's maximum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * The object container is in charge of fetching this property and placing the
 * object accordingly.
 *
 * Values -1 will be treated as unset hint components, when queried by
 * managers.
 *
 * @note Smart objects (such as elementary) can have their own hint policy. So
 * calling this API may or may not affect the size of smart objects.
 *
 * @note It is an error for the @ref efl_gfx_hint_size_max_get to be smaller in
 * either axis than @ref efl_gfx_hint_size_min_get. In this scenario, the max
 * size hint will be prioritized over the user min size hint.
 *
 * @param[in] obj The object.
 * @param[in] sz Maximum size (hint) in pixels, (-1, -1) by default for canvas
 * objects).
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_size_max_set(Eo *obj, Eina_Size2D sz);

/**
 * @brief Hints on the object's maximum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * The object container is in charge of fetching this property and placing the
 * object accordingly.
 *
 * Values -1 will be treated as unset hint components, when queried by
 * managers.
 *
 * @note Smart objects (such as elementary) can have their own hint policy. So
 * calling this API may or may not affect the size of smart objects.
 *
 * @note It is an error for the @ref efl_gfx_hint_size_max_get to be smaller in
 * either axis than @ref efl_gfx_hint_size_min_get. In this scenario, the max
 * size hint will be prioritized over the user min size hint.
 *
 * @param[in] obj The object.
 *
 * @return Maximum size (hint) in pixels, (-1, -1) by default for canvas
 * objects).
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_hint_size_max_get(const Eo *obj);

#ifdef EFL_GFX_HINT_PROTECTED
/**
 * @brief Internal hints for an object's maximum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Values -1 will be treated as unset hint components, when queried by
 * managers.
 *
 * @note This property is internal and meant for widget developers to define
 * the absolute maximum size of the object. EFL itself sets this size
 * internally, so any change to it from an application might be ignored.
 * Applications should use @ref efl_gfx_hint_size_max_get instead.
 *
 * @note It is an error for the @ref efl_gfx_hint_size_restricted_max_get to be
 * smaller in either axis than @ref efl_gfx_hint_size_restricted_min_get. In
 * this scenario, the max size hint will be prioritized over the user min size
 * hint.
 *
 * This function is protected as it is meant for widgets to indicate their
 * "intrinsic" maximum size.
 *
 * @param[in] obj The object.
 * @param[in] sz Maximum size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_size_restricted_max_set(Eo *obj, Eina_Size2D sz);
#endif

/**
 * @brief Internal hints for an object's maximum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Values -1 will be treated as unset hint components, when queried by
 * managers.
 *
 * @note This property is internal and meant for widget developers to define
 * the absolute maximum size of the object. EFL itself sets this size
 * internally, so any change to it from an application might be ignored.
 * Applications should use @ref efl_gfx_hint_size_max_get instead.
 *
 * @note It is an error for the @ref efl_gfx_hint_size_restricted_max_get to be
 * smaller in either axis than @ref efl_gfx_hint_size_restricted_min_get. In
 * this scenario, the max size hint will be prioritized over the user min size
 * hint.
 *
 * @param[in] obj The object.
 *
 * @return Maximum size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_hint_size_restricted_max_get(const Eo *obj);

/**
 * @brief Read-only maximum size combining both
 * @ref efl_gfx_hint_size_restricted_max_get and @ref efl_gfx_hint_size_max_get
 * hints.
 *
 * @ref efl_gfx_hint_size_restricted_max_get is intended for mostly internal
 * usage and widget developers, and @ref efl_gfx_hint_size_max_get is intended
 * to be set from application side. @ref efl_gfx_hint_size_combined_max_get
 * combines both values by taking their repective maximum (in both width and
 * height), and is used internally to get an object's maximum size.
 *
 * @param[in] obj The object.
 *
 * @return Maximum size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_hint_size_combined_max_get(const Eo *obj);

/**
 * @brief Hints on the object's minimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate. The object container is in charge of fetching
 * this property and placing the object accordingly.
 *
 * Value 0 will be treated as unset hint components, when queried by managers.
 *
 * @note This property is meant to be set by applications and not by EFL
 * itself. Use this to request a specific size (treated as minimum size).
 *
 * @note It is an error for the @ref efl_gfx_hint_size_max_get to be smaller in
 * either axis than @ref efl_gfx_hint_size_min_get. In this scenario, the max
 * size hint will be prioritized over the user min size hint.
 *
 * @param[in] obj The object.
 * @param[in] sz Minimum size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_size_min_set(Eo *obj, Eina_Size2D sz);

/**
 * @brief Hints on the object's minimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate. The object container is in charge of fetching
 * this property and placing the object accordingly.
 *
 * Value 0 will be treated as unset hint components, when queried by managers.
 *
 * @note This property is meant to be set by applications and not by EFL
 * itself. Use this to request a specific size (treated as minimum size).
 *
 * @note It is an error for the @ref efl_gfx_hint_size_max_get to be smaller in
 * either axis than @ref efl_gfx_hint_size_min_get. In this scenario, the max
 * size hint will be prioritized over the user min size hint.
 *
 * @param[in] obj The object.
 *
 * @return Minimum size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_hint_size_min_get(const Eo *obj);

#ifdef EFL_GFX_HINT_PROTECTED
/**
 * @brief Internal hints for an object's minimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Values 0 will be treated as unset hint components, when queried by managers.
 *
 * @note This property is internal and meant for widget developers to define
 * the absolute minimum size of the object. EFL itself sets this size
 * internally, so any change to it from an application might be ignored. Use
 * @ref efl_gfx_hint_size_min_get instead.
 *
 * @note It is an error for the @ref efl_gfx_hint_size_restricted_max_get to be
 * smaller in either axis than @ref efl_gfx_hint_size_restricted_min_get. In
 * this scenario, the max size hint will be prioritized over the user min size
 * hint.
 *
 * This function is protected as it is meant for widgets to indicate their
 * "intrinsic" minimum size.
 *
 * @param[in] obj The object.
 * @param[in] sz Minimum size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_size_restricted_min_set(Eo *obj, Eina_Size2D sz);
#endif

/**
 * @brief Internal hints for an object's minimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Values 0 will be treated as unset hint components, when queried by managers.
 *
 * @note This property is internal and meant for widget developers to define
 * the absolute minimum size of the object. EFL itself sets this size
 * internally, so any change to it from an application might be ignored. Use
 * @ref efl_gfx_hint_size_min_get instead.
 *
 * @note It is an error for the @ref efl_gfx_hint_size_restricted_max_get to be
 * smaller in either axis than @ref efl_gfx_hint_size_restricted_min_get. In
 * this scenario, the max size hint will be prioritized over the user min size
 * hint.
 *
 * Get the "intrinsic" minimum size of this object.
 *
 * @param[in] obj The object.
 *
 * @return Minimum size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_hint_size_restricted_min_get(const Eo *obj);

/**
 * @brief Read-only minimum size combining both
 * @ref efl_gfx_hint_size_restricted_min_get and @ref efl_gfx_hint_size_min_get
 * hints.
 *
 * @ref efl_gfx_hint_size_restricted_min_get is intended for mostly internal
 * usage and widget developers, and @ref efl_gfx_hint_size_min_get is intended
 * to be set from application side. @ref efl_gfx_hint_size_combined_min_get
 * combines both values by taking their repective maximum (in both width and
 * height), and is used internally to get an object's minimum size.
 *
 * @param[in] obj The object.
 *
 * @return Minimum size (hint) in pixels.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK Eina_Size2D efl_gfx_hint_size_combined_min_get(const Eo *obj);

/**
 * @brief Hints for an object's margin or padding space.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * The object container is in charge of fetching this property and placing the
 * object accordingly.
 *
 * @note Smart objects (such as elementary) can have their own hint policy. So
 * calling this API may or may not affect the size of smart objects.
 *
 * @param[in] obj The object.
 * @param[in] l Integer to specify left padding.
 * @param[in] r Integer to specify right padding.
 * @param[in] t Integer to specify top padding.
 * @param[in] b Integer to specify bottom padding.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_margin_set(Eo *obj, int l, int r, int t, int b);

/**
 * @brief Hints for an object's margin or padding space.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * The object container is in charge of fetching this property and placing the
 * object accordingly.
 *
 * @note Smart objects (such as elementary) can have their own hint policy. So
 * calling this API may or may not affect the size of smart objects.
 *
 * @param[in] obj The object.
 * @param[out] l Integer to specify left padding.
 * @param[out] r Integer to specify right padding.
 * @param[out] t Integer to specify top padding.
 * @param[out] b Integer to specify bottom padding.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_margin_get(const Eo *obj, int *l, int *r, int *t, int *b);

/**
 * @brief Hints for an object's weight.
 *
 * This is a hint on how a container object should resize a given child within
 * its area. Containers may adhere to the simpler logic of just expanding the
 * child object's dimensions to fit its own (see the @ref EFL_GFX_HINT_EXPAND
 * helper weight macro) or the complete one of taking each child's weight hint
 * as real weights to how much of its size to allocate for them in each axis. A
 * container is supposed to, after normalizing the weights of its children
 * (with weight  hints), distribut the space it has to layout them by those
 * factors -- most weighted children get larger in this process than the least
 * ones.
 *
 * Accepted values are zero or positive values. Some containers might use this
 * hint as a boolean, but some others might consider it as a proportion, see
 * documentation of each container.
 *
 * @note Default weight hint values are 1.0, for both axis.
 *
 * @param[in] obj The object.
 * @param[in] x Non-negative double value to use as horizontal weight hint.
 * @param[in] y Non-negative double value to use as vertical weight hint.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_weight_set(Eo *obj, double x, double y);

/**
 * @brief Hints for an object's weight.
 *
 * This is a hint on how a container object should resize a given child within
 * its area. Containers may adhere to the simpler logic of just expanding the
 * child object's dimensions to fit its own (see the @ref EFL_GFX_HINT_EXPAND
 * helper weight macro) or the complete one of taking each child's weight hint
 * as real weights to how much of its size to allocate for them in each axis. A
 * container is supposed to, after normalizing the weights of its children
 * (with weight  hints), distribut the space it has to layout them by those
 * factors -- most weighted children get larger in this process than the least
 * ones.
 *
 * Accepted values are zero or positive values. Some containers might use this
 * hint as a boolean, but some others might consider it as a proportion, see
 * documentation of each container.
 *
 * @note Default weight hint values are 1.0, for both axis.
 *
 * @param[in] obj The object.
 * @param[out] x Non-negative double value to use as horizontal weight hint.
 * @param[out] y Non-negative double value to use as vertical weight hint.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_weight_get(const Eo *obj, double *x, double *y);

/**
 * @brief Hints for an object's alignment.
 *
 * These are hints on how to align this object inside the boundaries of its
 * container/manager.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @param[in] obj The object.
 * @param[in] x Controls the horizontal alignment.
 * @param[in] y Controls the vertical alignment.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_align_set(Eo *obj, Efl_Gfx_Align x, Efl_Gfx_Align y);

/**
 * @brief Hints for an object's alignment.
 *
 * These are hints on how to align this object inside the boundaries of its
 * container/manager.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @param[in] obj The object.
 * @param[out] x Controls the horizontal alignment.
 * @param[out] y Controls the vertical alignment.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_align_get(const Eo *obj, Efl_Gfx_Align *x, Efl_Gfx_Align *y);

/**
 * @brief Hints for an object's fill property that used to specify "justify" or
 * "fill" by some users. @ref efl_gfx_hint_fill_get specify whether to fill the
 * space inside the boundaries of a container/manager.
 *
 * Maximum hints should be enforced with higher priority, if they are set.
 * Also, any @ref efl_gfx_hint_margin_get set on objects should add up to the
 * object space on the final scene composition.
 *
 * See documentation of possible users: in Evas, they are the @ref Efl_Ui_Box
 * "box" and @ref Efl_Ui_Table "table" smart objects.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Default fill hint values are true, for both axes.
 *
 * @param[in] obj The object.
 * @param[in] x @c true if to fill the object space, @c false otherwise, to use
 * as horizontal fill hint.
 * @param[in] y @c true if to fill the object space, @c false otherwise, to use
 * as vertical fill hint.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_fill_set(Eo *obj, Eina_Bool x, Eina_Bool y);

/**
 * @brief Hints for an object's fill property that used to specify "justify" or
 * "fill" by some users. @ref efl_gfx_hint_fill_get specify whether to fill the
 * space inside the boundaries of a container/manager.
 *
 * Maximum hints should be enforced with higher priority, if they are set.
 * Also, any @ref efl_gfx_hint_margin_get set on objects should add up to the
 * object space on the final scene composition.
 *
 * See documentation of possible users: in Evas, they are the @ref Efl_Ui_Box
 * "box" and @ref Efl_Ui_Table "table" smart objects.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Default fill hint values are true, for both axes.
 *
 * @param[in] obj The object.
 * @param[out] x @c true if to fill the object space, @c false otherwise, to
 * use as horizontal fill hint.
 * @param[out] y @c true if to fill the object space, @c false otherwise, to
 * use as vertical fill hint.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
EAPI EAPI_WEAK void efl_gfx_hint_fill_get(const Eo *obj, Eina_Bool *x, Eina_Bool *y);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_GFX_ENTITY_EVENT_HINTS_CHANGED;

/** Object hints changed.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Hint
 */
#define EFL_GFX_ENTITY_EVENT_HINTS_CHANGED (&(_EFL_GFX_ENTITY_EVENT_HINTS_CHANGED))

#endif
