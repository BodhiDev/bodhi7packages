#ifndef _EFL_GFX_STACK_EO_H_
#define _EFL_GFX_STACK_EO_H_

#ifndef _EFL_GFX_STACK_EO_CLASS_TYPE
#define _EFL_GFX_STACK_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Stack;

#endif

#ifndef _EFL_GFX_STACK_EO_TYPES
#define _EFL_GFX_STACK_EO_TYPES

#ifndef EFL_GFX_STACK_LAYER_MIN
/** bottom-most layer number
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Stack_Layer_Min
 */
#define EFL_GFX_STACK_LAYER_MIN -32768 /* +32768 */
#endif

#ifndef EFL_GFX_STACK_LAYER_MAX
/** top-most layer number
 *
 * @since 1.23
 *
 * @ingroup Efl_Gfx_Stack_Layer_Max
 */
#define EFL_GFX_STACK_LAYER_MAX 32767
#endif


#endif
/** Efl graphics stack interface
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Stack
 */
#define EFL_GFX_STACK_INTERFACE efl_gfx_stack_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_stack_interface_get(void) EINA_CONST;

/**
 * @brief The layer of its canvas that the given object will be part of.
 *
 * If you don't use this property, you'll be dealing with a unique layer of
 * objects (the default one). Additional layers are handy when you don't want a
 * set of objects to interfere with another set with regard to stacking. Two
 * layers are completely disjoint in that matter.
 *
 * This is a low-level function, which you'd be using when something should be
 * always on top, for example.
 *
 * @warning Don't change the layer of smart objects' children. Smart objects
 * have a layer of their own, which should contain all their child objects.
 *
 * @param[in] obj The object.
 * @param[in] l The number of the layer to place the object on. Must be between
 * @ref EFL_GFX_STACK_LAYER_MIN and @ref EFL_GFX_STACK_LAYER_MAX.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Stack
 */
EAPI EAPI_WEAK void efl_gfx_stack_layer_set(Eo *obj, short l);

/**
 * @brief The layer of its canvas that the given object will be part of.
 *
 * If you don't use this property, you'll be dealing with a unique layer of
 * objects (the default one). Additional layers are handy when you don't want a
 * set of objects to interfere with another set with regard to stacking. Two
 * layers are completely disjoint in that matter.
 *
 * This is a low-level function, which you'd be using when something should be
 * always on top, for example.
 *
 * @warning Don't change the layer of smart objects' children. Smart objects
 * have a layer of their own, which should contain all their child objects.
 *
 * @param[in] obj The object.
 *
 * @return The number of the layer to place the object on. Must be between
 * @ref EFL_GFX_STACK_LAYER_MIN and @ref EFL_GFX_STACK_LAYER_MAX.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Stack
 */
EAPI EAPI_WEAK short efl_gfx_stack_layer_get(const Eo *obj);

/**
 * @brief The Evas object stacked right below this object.
 *
 * This function will traverse layers in its search, if there are objects on
 * layers below the one @c obj is placed at.
 *
 * See also @ref efl_gfx_stack_layer_get.
 *
 * @param[in] obj The object.
 *
 * @return The @ref Efl_Gfx_Stack object directly below @c obj, if any, or
 * @c null, if none.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Stack
 */
EAPI EAPI_WEAK Efl_Gfx_Stack *efl_gfx_stack_below_get(const Eo *obj);

/**
 * @brief Get the Evas object stacked right above this object.
 *
 * This function will traverse layers in its search, if there are objects on
 * layers above the one @c obj is placed at.
 *
 * See also @ref efl_gfx_stack_layer_get and @ref efl_gfx_stack_below_get
 *
 * @param[in] obj The object.
 *
 * @return The @ref Efl_Gfx_Stack object directly below @c obj, if any, or
 * @c null, if none.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Stack
 */
EAPI EAPI_WEAK Efl_Gfx_Stack *efl_gfx_stack_above_get(const Eo *obj);

/**
 * @brief Stack @c obj immediately @c below
 *
 * Objects, in a given canvas, are stacked in the order they're added. This
 * means that, if they overlap, the highest ones will cover the lowest ones, in
 * that order. This function is a way to change the stacking order for the
 * objects.
 *
 * Its intended to be used with objects belonging to the same layer in a given
 * canvas, otherwise it will fail (and accomplish nothing).
 *
 * If you have smart objects on your canvas and @c obj is a member of one of
 * them, then @c below must also be a member of the same smart object.
 *
 * Similarly, if @c obj is not a member of a smart object, @c below must not be
 * either.
 *
 * See also @ref efl_gfx_stack_layer_get(), @ref efl_gfx_stack_layer_set() and
 * @ref efl_gfx_stack_below()
 *
 * @param[in] obj The object.
 * @param[in] below The object below which to stack
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Stack
 */
EAPI EAPI_WEAK void efl_gfx_stack_below(Eo *obj, Efl_Gfx_Stack *below);

/**
 * @brief Raise @c obj to the top of its layer.
 *
 * @c obj will, then, be the highest one in the layer it belongs to. Object on
 * other layers won't get touched.
 *
 * See also @ref efl_gfx_stack_above(), @ref efl_gfx_stack_below() and
 * @ref efl_gfx_stack_lower_to_bottom()
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Stack
 */
EAPI EAPI_WEAK void efl_gfx_stack_raise_to_top(Eo *obj);

/**
 * @brief Stack @c obj immediately @c above
 *
 * Objects, in a given canvas, are stacked in the order they're added. This
 * means that, if they overlap, the highest ones will cover the lowest ones, in
 * that order. This function is a way to change the stacking order for the
 * objects.
 *
 * Its intended to be used with objects belonging to the same layer in a given
 * canvas, otherwise it will fail (and accomplish nothing).
 *
 * If you have smart objects on your canvas and @c obj is a member of one of
 * them, then @c above must also be a member of the same smart object.
 *
 * Similarly, if @c obj is not a member of a smart object, @c above must not be
 * either.
 *
 * See also @ref efl_gfx_stack_layer_get(), @ref efl_gfx_stack_layer_set() and
 * @ref efl_gfx_stack_below()
 *
 * @param[in] obj The object.
 * @param[in] above The object above which to stack
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Stack
 */
EAPI EAPI_WEAK void efl_gfx_stack_above(Eo *obj, Efl_Gfx_Stack *above);

/**
 * @brief Lower @c obj to the bottom of its layer.
 *
 * @c obj will, then, be the lowest one in the layer it belongs to. Objects on
 * other layers won't get touched.
 *
 * See also @ref efl_gfx_stack_above(), @ref efl_gfx_stack_below() and
 * @ref efl_gfx_stack_raise_to_top()
 *
 * @param[in] obj The object.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Stack
 */
EAPI EAPI_WEAK void efl_gfx_stack_lower_to_bottom(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_GFX_ENTITY_EVENT_STACKING_CHANGED;

/** Object stacking was changed.
 *
 * @since 1.22
 *
 * @ingroup Efl_Gfx_Stack
 */
#define EFL_GFX_ENTITY_EVENT_STACKING_CHANGED (&(_EFL_GFX_ENTITY_EVENT_STACKING_CHANGED))

#endif
